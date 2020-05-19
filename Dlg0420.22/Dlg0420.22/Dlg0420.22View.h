
// Dlg0420.22View.h : CDlg042022View 类的接口
//

#pragma once


class CDlg042022View : public CView
{
protected: // 仅从序列化创建
	CDlg042022View();
	DECLARE_DYNCREATE(CDlg042022View)

// 特性
public:
	CDlg042022Doc* GetDocument() const;

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
	virtual ~CDlg042022View();
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
};

#ifndef _DEBUG  // Dlg0420.22View.cpp 中的调试版本
inline CDlg042022Doc* CDlg042022View::GetDocument() const
   { return reinterpret_cast<CDlg042022Doc*>(m_pDocument); }
#endif

