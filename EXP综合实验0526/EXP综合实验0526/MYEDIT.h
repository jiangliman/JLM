#pragma once


// MYEDIT �Ի���

class MYEDIT : public CDialogEx
{
	DECLARE_DYNAMIC(MYEDIT)

public:
	MYEDIT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MYEDIT();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EDIT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString Name2;
	double StuNum2;
	CString Major2;
	CString Sex2;
	double Birth2;
	double Phone2;
	CString Home2;
	CString Picture2;
};
