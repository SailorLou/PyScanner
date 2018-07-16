// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�:
#include <windows.h>

// C ����ʱͷ�ļ�
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
#include "xcgui.h"
#pragma comment(lib, "XCGUI.lib")

typedef struct _tag_PYTHON_MODULES_DATA
{
	TCHAR szModuleName[MAX_PATH];
	TCHAR szVulName[MAX_PATH];
	long nVulLevel;
	struct _tag_PYTHON_MODULES_DATA * NextModule;

	_tag_PYTHON_MODULES_DATA()
	{
		ZeroMemory(szModuleName, MAX_PATH * sizeof(TCHAR));
		ZeroMemory(szVulName, MAX_PATH * sizeof(TCHAR));
		nVulLevel = 0;
		NextModule = NULL;
	}
}PYTHON_MODULES_DATA, *LPPYTHON_MODULES_DATA;

typedef struct _tag_POLICY_INFO
{
	TCHAR szVulName[MAX_PATH];
	BOOL bChecked;
	_tag_POLICY_INFO *next;
}POLICY_INFO, *LPPOLICY_INFO;