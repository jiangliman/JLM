
// Dlg4.7.22View.h : CDlg4722View 类的接口
//

#pragma once


class CDlg4722View : public CView
{
protected: // 仅从序列化创建
	CDlg4722View();
	DECLARE_DYNCREATE(CDlg4722View)

// 特性
public:
	CDlg4722Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CDlg4722View();
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

#ifndef _DEBUG  // Dlg4.7.22View.cpp 中的调试版本
inline CDlg4722Doc* CDlg4722View::GetDocument() const
   { return reinterpret_cast<CDlg4722Doc*>(m_pDocument); }
#endif

