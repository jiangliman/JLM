
// Dlg0420.11Dlg.h : 头文件
//

#pragma once


// CDlg042011Dlg 对话框
class CDlg042011Dlg : public CDialogEx
{
// 构造
public:
	CDlg042011Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG042011_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	float x1;
	float x2;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnEnChangeEdit8();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit9();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnEnChangeEdit10();
	float z1;
	float z2;
	float z3;
	float z4;
	float z5;
	float z6;
	float z7;
	float z9;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton6();
};
