#pragma once


// EDIT_DLG �Ի���

class EDIT_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(EDIT_DLG)

public:
	EDIT_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~EDIT_DLG();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EDIT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long iii;
};
