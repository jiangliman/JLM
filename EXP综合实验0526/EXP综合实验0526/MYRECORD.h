#pragma once


// MYRECORD �Ի���

class MYRECORD : public CDialogEx
{
	DECLARE_DYNAMIC(MYRECORD)

public:
	MYRECORD(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MYRECORD();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RECORD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString record;
};
