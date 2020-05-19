
// Dlg0420.21View.h : CDlg042021View 类的接口
//

#pragma once


class CDlg042021View : public CView
{
protected: // 仅从序列化创建
	CDlg042021View();
	DECLARE_DYNCREATE(CDlg042021View)

// 特性
public:
	CDlg042021Doc* GetDocument() const;

// 操作
public:
	CRect cr;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CDlg042021View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Dlg0420.21View.cpp 中的调试版本
inline CDlg042021Doc* CDlg042021View::GetDocument() const
   { return reinterpret_cast<CDlg042021Doc*>(m_pDocument); }
#endif

