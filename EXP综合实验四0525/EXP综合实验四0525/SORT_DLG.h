#pragma once


// SORT_DLG �Ի���

class SORT_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(SORT_DLG)

public:
	SORT_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SORT_DLG();

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
