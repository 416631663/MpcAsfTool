#ifndef JXQYPICTURE_H_INCLUDED
#define JXQYPICTURE_H_INCLUDED

#ifdef BUILDING_DLL
#define JXQYPICTURE_DLL __declspec(dllexport)
#else
#define JXQYPICTURE_DLL __declspec(dllimport)
#endif
#define DLL_CALLCONV __stdcall

typedef unsigned char BYTE,*PBYTE;

#ifdef __cplusplus
extern "C" {
#endif

//��ȡ�ļ�����ȡ�ɹ�����true
JXQYPICTURE_DLL bool DLL_CALLCONV JX_ReadFile(const char* filePath);
//��ȡ�ļ��󣬻��֡����
JXQYPICTURE_DLL int DLL_CALLCONV JX_GetFrameCount();
//����ļ��Ļ�����С
JXQYPICTURE_DLL int DLL_CALLCONV JX_GetCanvasWidth();
JXQYPICTURE_DLL int DLL_CALLCONV JX_GetCanvasHeight();
//����͸����
//����͸����С��mask��Ϊ͸��
JXQYPICTURE_DLL void DLL_CALLCONV JX_SetAlphaMask(BYTE mask);
//���֡ͼ�����ݣ�ÿ֡ͼƬ�ó����ǻ�����С��ʧ�ܷ���NULL
//RGBA,BGRA,RGB,BGRΪ��ɫѭ��
//���ݵ�ѭ���Ǵ����ң����ϵ��¡�
//����0 1 2 3
//    4 5 6 7
//    . . .
//���ص�data����ҪʱҪʹ��JX_FreeData�ͷ�
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetFrameDataRGBA(int index);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetFrameDataBGRA(int index);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetFrameDataRGB(int index);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetFrameDataBGR(int index);
//���֡ͼ�����ݣ�ÿ֡ͼƬ�ó����ǻ�����С��ʧ�ܷ���NULL
//RGBA,BGRA,RGB,BGRΪ��ɫѭ��
//���ݵ�ѭ���Ǵ����ң����µ��ϡ�
//����8 9 . .
//    4 5 6 7
//    0 1 2 3
//���ص�data����ҪʱҪʹ��JX_FreeData�ͷ�
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetFrameDataRGBA_R(int index);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetFrameDataBGRA_R(int index);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetFrameDataRGB_R(int index);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetFrameDataBGR_R(int index);
//��ȡMPC�ļ�
JXQYPICTURE_DLL bool DLL_CALLCONV JX_ReadMpcFile(const char* path, int *frameCount);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetMpcFrameDataRGBA_R(int index, int *width, int *height);
//��ȡASF�ļ�
JXQYPICTURE_DLL bool DLL_CALLCONV JX_ReadAsfFile(const char* path, int *frameCount);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetAsfFrameDataRGBA_R(int index, int *width, int *height);
//��ȡRPC�ļ�
JXQYPICTURE_DLL bool DLL_CALLCONV JX_ReadRpcFile(const char* path, int *frameCount);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetRpcFrameDataRGBA_R(int index, int *width, int *height);
//��ȡSPR�ļ�
JXQYPICTURE_DLL bool DLL_CALLCONV JX_ReadSprFile(const char* path, int *frameCount);
JXQYPICTURE_DLL PBYTE DLL_CALLCONV JX_GetSprFrameDataRGBA_R(int index, int *width, int *height);

//�ͷ���Դ
JXQYPICTURE_DLL void DLL_CALLCONV JX_FreeData(PBYTE data);

#ifdef __cplusplus
}
#endif

#endif // JXQYPICTURE_H_INCLUDED
