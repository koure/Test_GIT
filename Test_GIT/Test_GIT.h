
// Test_GIT.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTest_GITApp:
// �йش����ʵ�֣������ Test_GIT.cpp
//

class CTest_GITApp : public CWinApp
{
public:
	CTest_GITApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CTest_GITApp theApp;