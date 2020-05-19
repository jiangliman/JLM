
// Dlg0420.24填充颜色View.h : CDlg042024填充颜色View 类的接口
//

#pragma once


class CDlg042024填充颜色View : public CView
{
protected: // 仅从序列化创建
	CDlg042024填充颜色View();
	DECLARE_DYNCREATE(CDlg042024填充颜色View)

// 特性
public:
	CDlg042024填充颜色Doc* GetDocument() const;

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
	virtual ~CDlg042024填充颜色View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Dlg0420.24填充颜色View.cpp 中的调试版本
inline CDlg042024填充颜色Doc* CDlg042024填充颜色View::GetDocument() const
   { return reinterpret_cast<CDlg042024填充颜色Doc*>(m_pDocument); }
#endif

