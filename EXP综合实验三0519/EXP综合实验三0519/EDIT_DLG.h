#pragma once


// EDIT_DLG 对话框

class EDIT_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(EDIT_DLG)

public:
	EDIT_DLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~EDIT_DLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EDIT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long iii;
};
