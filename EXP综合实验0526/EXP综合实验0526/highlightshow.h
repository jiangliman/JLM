#pragma once


// highlightshow 对话框

class highlightshow : public CDialogEx
{
	DECLARE_DYNAMIC(highlightshow)

public:
	CString FileName;
	highlightshow(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~highlightshow();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual void draw_pic(CString file);
};
