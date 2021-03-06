
#pragma once

#include "../efkMat.Editor.h"
#include <efkMat.StringContainer.h>
#include <functional>

namespace EffekseerMaterial
{

class Dialog
{
private:
public:
	Dialog() = default;
	virtual ~Dialog() = default;

	virtual const char* GetID() const { return ""; }

	virtual bool Update() { return true; }

	bool IsClosing = false;
};

class NewOrOpenDialog : public Dialog
{
private:
	std::shared_ptr<EffekseerMaterial::Editor> content_;
	std::string id_ = "###NewOrOpenDialog";

public:
	NewOrOpenDialog(std::shared_ptr<EffekseerMaterial::Editor> content) : content_(content) {}

	virtual ~NewOrOpenDialog() {}

	const char* GetID() const { return id_.c_str(); }

	bool Update() override
	{
		bool open = true;
		if (ImGui::BeginPopupModal(GetID(), &open))
		{
			ImGui::Text(StringContainer::GetValue("Starting", "Starting").c_str());
			ImGui::Separator();

			if (ImGui::Button(StringContainer::GetValue("Starting_New", "Starting_New").c_str()))
			{
				content_->New();
				open = false;
			}

			if (ImGui::Button(StringContainer::GetValue("Starting_Open", "Starting_Open").c_str()))
			{
				if (content_->Load())
				{
					open = false;
				}
			}

			ImGui::EndPopup();
		}

		return open;
	}
};

class SaveOrCloseDialog : public Dialog
{
private:
	std::shared_ptr<EffekseerMaterial::EditorContent> content_;
	std::function<void()> onClosed_;
	std::string id_ = "###SaveOrCloseDialog";

public:
	SaveOrCloseDialog(std::shared_ptr<EffekseerMaterial::EditorContent> content, std::function<void()> onClosed)
		: content_(content), onClosed_(onClosed)
	{
	}

	virtual ~SaveOrCloseDialog() {}

	const char* GetID() const { return id_.c_str(); }

	bool Update() override
	{
		bool open = true;
		if (ImGui::BeginPopupModal(GetID(), &open, ImGuiWindowFlags_AlwaysAutoResize))
		{
			auto message = StringContainer::GetValue("ConfirmSaveChanged", "[{0}] has been changed. Do you want to save?");
			message = Replace(message, "{0}", content_->GetPath());

			ImGui::Text(message.c_str());
			ImGui::Separator();

			if (ImGui::Button("Yes"))
			{
				if (content_->Save())
				{
					content_->IsClosing = true;

					if (onClosed_ != nullptr)
					{
						onClosed_();
					}
				}
			}

			ImGui::SameLine();

			if (ImGui::Button("No"))
			{
				content_->IsClosing = true;
				open = false;
				content_->ClearIsChanged();

				if (onClosed_ != nullptr)
				{
					onClosed_();
				}
			}

			ImGui::SameLine();
			if (ImGui::Button("Cancel"))
			{
				content_->IsClosing = false;
				open = false;
			}

			ImGui::EndPopup();
		}

		return open;
	}
};

} // namespace EffekseerMaterial