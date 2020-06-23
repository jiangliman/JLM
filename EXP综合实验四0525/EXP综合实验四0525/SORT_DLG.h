#pragma once


// SORT_DLG 对话框

class SORT_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(SORT_DLG)

public:
	SORT_DLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SORT_DLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SORT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString sort;
};
