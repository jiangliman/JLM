#pragma once


// MYSELECT �Ի���

class MYSELECT : public CDialogEx
{
	DECLARE_DYNAMIC(MYSELECT)

public:
	MYSELECT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MYSELECT();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SELECT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString select;
};
