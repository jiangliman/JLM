#pragma once


// RECORD_DLG �Ի���

class RECORD_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(RECORD_DLG)

public:
	RECORD_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~RECORD_DLG();

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
