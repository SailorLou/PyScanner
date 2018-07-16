#pragma once
#include "stdafx.h"
#include "PyManager.h"



#define LOAD_MODULE 101
#define SAVE_MODULE 102
#define MODIFY_MODULE 103
#define EXIT_PROCESS 104

#define IDR_TITLE 105
#define IDC_MIN_BTN 106
#define IDC_MAX_BTN 107
#define IDC_CLOSE_BTN 108
#define IDC_MENU_BAR 109
#define IDC_OUTPUT_EDIT 110
#define IDC_MAIN_FRAME 111
#define IDC_COMBO_BOX 112
#define IDC_COMBO_ADAPTER 113 //����������
#define IDC_START_BTN 114 //��ʼɨ��İ�ť
#define IDE_URL_EDIT 116
class CMainFrame
{
public:
	CMainFrame(void);
	~CMainFrame(void);

	void Init();
//���ֺ���
protected:
	void InitLayout();
	void CreateMenu();
	void CreateTitle();
	void CreateSysButton();
	void CreateOutputWindow();
	void CreateOutputView();

	//���ܺ���
protected:
	void LoadPolicy(); //���ز���

//��Ϣ����
protected:
	int OnMenuSelect(int nItem,BOOL *pbHandled);
	int OnBtnClick(BOOL *pbHandled); 
private:
	HWINDOW m_hMainWnd;
	CPyManager m_PyManager;
};