
// PrincClientDlg.h : ͷ�ļ�
//

#pragma once
#include "ClientSocket.h"
#include "LogIn.h"
#include "KernelManager.h"
// CPrincClientDlg �Ի���
class CPrincClientDlg : public CDialogEx
{
// ����
public:
	CPrincClientDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_PRINCCLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	CClientSocket m_clientSocket;
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
