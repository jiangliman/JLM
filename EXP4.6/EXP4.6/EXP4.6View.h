
// EXP4.6View.h : CEXP46View 类的接口
//

#pragma once


class CEXP46View : public CView
{
protected: // 仅从序列化创建
	CEXP46View();
	DECLARE_DYNCREATE(CEXP46View)

// 特性
public:
	CEXP46Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	int a;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP46View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLinedrawing();
	afx_msg void OnRectdrawing();
	afx_msg void OnEllipsedrawing();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP4.6View.cpp 中的调试版本
inline CEXP46Doc* CEXP46View::GetDocument() const
   { return reinterpret_cast<CEXP46Doc*>(m_pDocument); }
#endif

