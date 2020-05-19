
// Dlg0420.23View.h : CDlg042023View 类的接口
//

#pragma once


class CDlg042023View : public CView
{
protected: // 仅从序列化创建
	CDlg042023View();
	DECLARE_DYNCREATE(CDlg042023View)

// 特性
public:
	CDlg042023Doc* GetDocument() const;

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
	virtual ~CDlg042023View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Dlg0420.23View.cpp 中的调试版本
inline CDlg042023Doc* CDlg042023View::GetDocument() const
   { return reinterpret_cast<CDlg042023Doc*>(m_pDocument); }
#endif

