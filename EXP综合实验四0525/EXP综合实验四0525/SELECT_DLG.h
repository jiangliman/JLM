#pragma once


// SELECT_DLG �Ի���

class SELECT_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(SELECT_DLG)

public:
	SELECT_DLG(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SELECT_DLG();

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
