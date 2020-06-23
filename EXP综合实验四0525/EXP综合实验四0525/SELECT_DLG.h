#pragma once


// SELECT_DLG 对话框

class SELECT_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(SELECT_DLG)

public:
	SELECT_DLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SELECT_DLG();

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
