
// EXP3View.h : CEXP3View 类的接口
//

#pragma once


class CEXP3View : public CView
{
protected: // 仅从序列化创建
	CEXP3View();
	DECLARE_DYNCREATE(CEXP3View)

// 特性
public:
	CEXP3Doc* GetDocument() const;

// 操作
public:
	CString s;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP3View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP3View.cpp 中的调试版本
inline CEXP3Doc* CEXP3View::GetDocument() const
   { return reinterpret_cast<CEXP3Doc*>(m_pDocument); }
#endif

