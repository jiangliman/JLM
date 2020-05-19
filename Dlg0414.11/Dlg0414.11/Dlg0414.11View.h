
// Dlg0414.11View.h : CDlg041411View 类的接口
//

#pragma once


class CDlg041411View : public CView
{
protected: // 仅从序列化创建
	CDlg041411View();
	DECLARE_DYNCREATE(CDlg041411View)

// 特性
public:
	CDlg041411Doc* GetDocument() const;

// 操作
public:
	CString filename;
	int r;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CDlg041411View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopdialog();
};

#ifndef _DEBUG  // Dlg0414.11View.cpp 中的调试版本
inline CDlg041411Doc* CDlg041411View::GetDocument() const
   { return reinterpret_cast<CDlg041411Doc*>(m_pDocument); }
#endif

