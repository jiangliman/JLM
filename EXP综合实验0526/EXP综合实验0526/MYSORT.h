#pragma once


// MYSORT �Ի���

class MYSORT : public CDialogEx
{
	DECLARE_DYNAMIC(MYSORT)

public:
	MYSORT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MYSORT();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SORT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString sort;
};
