﻿
#ifdef __EFFEKSEER_RENDERER_INTERNAL_LOADER__

#ifndef	__EFFEKSEERRENDERER_DX9_TEXTURELOADER_H__
#define	__EFFEKSEERRENDERER_DX9_TEXTURELOADER_H__

//----------------------------------------------------------------------------------
// Include
//----------------------------------------------------------------------------------
#include "EffekseerRendererDX9.RendererImplemented.h"
#include "EffekseerRendererDX9.DeviceObject.h"

#ifdef __EFFEKSEER_RENDERER_INTERNAL_LOADER__
#include "../../EffekseerRendererCommon/EffekseerRenderer.PngTextureLoader.h"
#include "../../EffekseerRendererCommon/EffekseerRenderer.DDSTextureLoader.h"
#endif

//-----------------------------------------------------------------------------------
//
//-----------------------------------------------------------------------------------
namespace EffekseerRendererDX9
{
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
class TextureLoader
	: public ::Effekseer::TextureLoader
{
private:
	LPDIRECT3DDEVICE9		device;
	::Effekseer::FileInterface* m_fileInterface;
	::Effekseer::DefaultFileInterface m_defaultFileInterface;

#ifdef __EFFEKSEER_RENDERER_INTERNAL_LOADER__
	::EffekseerRenderer::PngTextureLoader pngTextureLoader;
	::EffekseerRenderer::DDSTextureLoader ddsTextureLoader;
#endif

public:
	TextureLoader(LPDIRECT3DDEVICE9 device, ::Effekseer::FileInterface* fileInterface = NULL);
	virtual ~TextureLoader();

public:
	Effekseer::TextureData* Load(const EFK_CHAR* path, ::Effekseer::TextureType textureType) override;

	void Unload(Effekseer::TextureData* data) override;
};

//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
}
//----------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------
#endif	// __EFFEKSEERRENDERER_DX9_TEXTURELOADER_H__

#endif // __EFFEKSEER_RENDERER_INTERNAL_LOADER__