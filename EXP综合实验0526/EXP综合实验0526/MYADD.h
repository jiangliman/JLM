#pragma once


// MYADD �Ի���

class MYADD : public CDialogEx
{
	DECLARE_DYNAMIC(MYADD)

public:
	MYADD(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MYADD();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString Name1;
	double StuNum1;
	CString Major1;
	CString Sex1;
	double Birth1;
	double Phone1;
	CString Home1;
	CString Picture1;
};
