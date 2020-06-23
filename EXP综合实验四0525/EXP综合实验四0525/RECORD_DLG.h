#pragma once


// RECORD_DLG 对话框

class RECORD_DLG : public CDialogEx
{
	DECLARE_DYNAMIC(RECORD_DLG)

public:
	RECORD_DLG(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~RECORD_DLG();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_RECORD };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString record;
};
