
// Dlg4.7.24View.h : CDlg4724View 类的接口
//

#pragma once


class CDlg4724View : public CView
{
protected: // 仅从序列化创建
	CDlg4724View();
	DECLARE_DYNCREATE(CDlg4724View)

// 特性
public:
	CDlg4724Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CDlg4724View();
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

#ifndef _DEBUG  // Dlg4.7.24View.cpp 中的调试版本
inline CDlg4724Doc* CDlg4724View::GetDocument() const
   { return reinterpret_cast<CDlg4724Doc*>(m_pDocument); }
#endif

