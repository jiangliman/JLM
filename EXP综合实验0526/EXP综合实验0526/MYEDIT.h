#pragma once


// MYEDIT 对话框

class MYEDIT : public CDialogEx
{
	DECLARE_DYNAMIC(MYEDIT)

public:
	MYEDIT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MYEDIT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EDIT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

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
