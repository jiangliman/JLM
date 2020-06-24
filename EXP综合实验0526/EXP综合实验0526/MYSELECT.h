#pragma once


// MYSELECT 对话框

class MYSELECT : public CDialogEx
{
	DECLARE_DYNAMIC(MYSELECT)

public:
	MYSELECT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MYSELECT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SELECT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString select;
};
