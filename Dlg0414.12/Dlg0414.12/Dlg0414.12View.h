
// Dlg0414.12View.h : CDlg041412View 类的接口
//

#pragma once


class CDlg041412View : public CView
{
protected: // 仅从序列化创建
	CDlg041412View();
	DECLARE_DYNCREATE(CDlg041412View)

// 特性
public:
	CDlg041412Doc* GetDocument() const;

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
	virtual ~CDlg041412View();
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

#ifndef _DEBUG  // Dlg0414.12View.cpp 中的调试版本
inline CDlg041412Doc* CDlg041412View::GetDocument() const
   { return reinterpret_cast<CDlg041412Doc*>(m_pDocument); }
#endif

