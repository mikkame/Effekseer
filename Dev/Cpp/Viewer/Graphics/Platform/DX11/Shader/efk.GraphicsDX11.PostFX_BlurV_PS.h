#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//
//   fxc /Zpc /Tps_4_1 /EPS /Fh Shader/efk.GraphicsDX11.PostFX_BlurV_PS.h
//    Shader/postfx_blur_v_PS.fx
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim Slot Elements
// ------------------------------ ---------- ------- ----------- ---- --------
// g_sampler                         sampler      NA          NA    0        1
// g_texture                         texture  float4          2d    0        1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_POSITION              0   xyzw        0      POS  float       
// TEXCOORD                 0   xy          1     NONE  float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue Format   Used
// -------------------- ----- ------ -------- -------- ------ ------
// SV_Target                0   xyzw        0   TARGET  float   xyzw
//
ps_4_1
dcl_globalFlags refactoringAllowed
dcl_sampler s0, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_temps 2
sample(0,-3,0) r0.xyz, v1.xyxx, t0.xyzw, s0
mul r0.xyz, r0.xyzx, l(0.015625, 0.015625, 0.015625, 0.000000)
sample r1.xyz, v1.xyxx, t0.xyzw, s0
mad r0.xyz, r1.xyzx, l(0.312500, 0.312500, 0.312500, 0.000000), r0.xyzx
sample(0,-2,0) r1.xyz, v1.xyxx, t0.xyzw, s0
mad r0.xyz, r1.xyzx, l(0.093750, 0.093750, 0.093750, 0.000000), r0.xyzx
sample(0,-1,0) r1.xyz, v1.xyxx, t0.xyzw, s0
mad r0.xyz, r1.xyzx, l(0.234375, 0.234375, 0.234375, 0.000000), r0.xyzx
sample(0,1,0) r1.xyz, v1.xyxx, t0.xyzw, s0
mad r0.xyz, r1.xyzx, l(0.234375, 0.234375, 0.234375, 0.000000), r0.xyzx
sample(0,2,0) r1.xyz, v1.xyxx, t0.xyzw, s0
mad r0.xyz, r1.xyzx, l(0.093750, 0.093750, 0.093750, 0.000000), r0.xyzx
sample(0,3,0) r1.xyz, v1.xyxx, t0.xyzw, s0
mad o0.xyz, r1.xyzx, l(0.015625, 0.015625, 0.015625, 0.000000), r0.xyzx
mov o0.w, l(1.000000)
ret 
// Approximately 16 instruction slots used
#endif

const BYTE g_PS[] =
{
     68,  88,  66,  67, 193, 189, 
     56,   1,  61, 142,  76, 211, 
    238, 196,  63, 222, 110, 240, 
    208, 184,   1,   0,   0,   0, 
    172,   4,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    224,   0,   0,   0,  56,   1, 
      0,   0, 108,   1,   0,   0, 
     48,   4,   0,   0,  82,  68, 
     69,  70, 164,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
     28,   0,   0,   0,   1,   4, 
    255, 255,  16,   1,   0,   0, 
    112,   0,   0,   0,  92,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   1,   0,   0,   0, 
    102,   0,   0,   0,   2,   0, 
      0,   0,   5,   0,   0,   0, 
      4,   0,   0,   0, 255, 255, 
    255, 255,   0,   0,   0,   0, 
      1,   0,   0,   0,  13,   0, 
      0,   0, 103,  95, 115,  97, 
    109, 112, 108, 101, 114,   0, 
    103,  95, 116, 101, 120, 116, 
    117, 114, 101,   0,  77, 105, 
     99, 114, 111, 115, 111, 102, 
    116,  32,  40,  82,  41,  32, 
     72,  76,  83,  76,  32,  83, 
    104,  97, 100, 101, 114,  32, 
     67, 111, 109, 112, 105, 108, 
    101, 114,  32,  57,  46,  50, 
     57,  46,  57,  53,  50,  46, 
     51,  49,  49,  49,   0, 171, 
    171, 171,  73,  83,  71,  78, 
     80,   0,   0,   0,   2,   0, 
      0,   0,   8,   0,   0,   0, 
     56,   0,   0,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      3,   0,   0,   0,   0,   0, 
      0,   0,  15,   0,   0,   0, 
     68,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   1,   0, 
      0,   0,   3,   3,   0,   0, 
     83,  86,  95,  80,  79,  83, 
     73,  84,  73,  79,  78,   0, 
     84,  69,  88,  67,  79,  79, 
     82,  68,   0, 171, 171, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     68,  82, 188,   2,   0,   0, 
     65,   0,   0,   0, 175,   0, 
      0,   0, 106,   8,   0,   1, 
     90,   0,   0,   3,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     88,  24,   0,   4,   0, 112, 
     16,   0,   0,   0,   0,   0, 
     85,  85,   0,   0,  98,  16, 
      0,   3,  50,  16,  16,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 242,  32,  16,   0, 
      0,   0,   0,   0, 104,   0, 
      0,   2,   2,   0,   0,   0, 
     69,   0,   0, 138,   1, 160, 
      1,   0, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  56,   0, 
      0,  10, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    128,  60,   0,   0, 128,  60, 
      0,   0, 128,  60,   0,   0, 
      0,   0,  69,   0,   0,   9, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,  16,  16,   0, 
      1,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  50,   0,   0,  12, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0, 160,  62, 
      0,   0, 160,  62,   0,   0, 
    160,  62,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  69,   0,   0, 138, 
      1, 192,   1,   0, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  16,  16,   0,   1,   0, 
      0,   0,  70, 126,  16,   0, 
      0,   0,   0,   0,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  12, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 192,  61,   0,   0, 
    192,  61,   0,   0, 192,  61, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     69,   0,   0, 138,   1, 224, 
      1,   0, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  12, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    112,  62,   0,   0, 112,  62, 
      0,   0, 112,  62,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  69,   0, 
      0, 138,   1,  32,   0,   0, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,  16,  16,   0, 
      1,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  50,   0,   0,  12, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   0,   0, 112,  62, 
      0,   0, 112,  62,   0,   0, 
    112,  62,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  69,   0,   0, 138, 
      1,  64,   0,   0, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  16,  16,   0,   1,   0, 
      0,   0,  70, 126,  16,   0, 
      0,   0,   0,   0,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  12, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 192,  61,   0,   0, 
    192,  61,   0,   0, 192,  61, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     69,   0,   0, 138,   1,  96, 
      0,   0, 114,   0,  16,   0, 
      1,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     70, 126,  16,   0,   0,   0, 
      0,   0,   0,  96,  16,   0, 
      0,   0,   0,   0,  50,   0, 
      0,  12, 114,  32,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,   0,   0, 
    128,  60,   0,   0, 128,  60, 
      0,   0, 128,  60,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,  32,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     62,   0,   0,   1,  83,  84, 
     65,  84, 116,   0,   0,   0, 
     16,   0,   0,   0,   2,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   7,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0
};
