#include "stdafx.h"
#include "CBaseReadIDCard.h"
#include "CentermIFImp.h"

#pragma once

/************************************************************************/
/* 升腾一体机 - 高拍仪摄像头                                            */
/************************************************************************/
class CCentOneCamera : public CBaseSaveDeskPic
{
public:
	CCentOneCamera();
	virtual ~CCentOneCamera();
public:
	// 重写，文拍摄像头获取身份证照片
	virtual int MySaveDeskIDPic(const char *pSaveDesktopIDPicFilenm);
	// 重写，环境摄像头获取身份证照片
	virtual int MySaveEnvPic(const char *pSaveEnvPicFilenm);

private:
	CStatic *pVideoWnd;
	CCentermIFImp *mHighCamera;
};