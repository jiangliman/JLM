
// EXP0427.2View.h : CEXP04272View 类的接口
//

#pragma once


class CEXP04272View : public CView
{
protected: // 仅从序列化创建
	CEXP04272View();
	DECLARE_DYNCREATE(CEXP04272View)

// 特性
public:
	CEXP04272Doc* GetDocument() const;

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
	virtual ~CEXP04272View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP0427.2View.cpp 中的调试版本
inline CEXP04272Doc* CEXP04272View::GetDocument() const
   { return reinterpret_cast<CEXP04272Doc*>(m_pDocument); }
#endif

