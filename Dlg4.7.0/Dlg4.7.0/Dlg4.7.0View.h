
// Dlg4.7.0View.h : CDlg470View 类的接口
//

#pragma once


class CDlg470View : public CView
{
protected: // 仅从序列化创建
	CDlg470View();
	DECLARE_DYNCREATE(CDlg470View)

// 特性
public:
	CDlg470Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CDlg470View();
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

#ifndef _DEBUG  // Dlg4.7.0View.cpp 中的调试版本
inline CDlg470Doc* CDlg470View::GetDocument() const
   { return reinterpret_cast<CDlg470Doc*>(m_pDocument); }
#endif

