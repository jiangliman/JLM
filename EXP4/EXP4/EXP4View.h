
// EXP4View.h : CEXP4View 类的接口
//

#pragma once


class CEXP4View : public CView
{
protected: // 仅从序列化创建
	CEXP4View();
	DECLARE_DYNCREATE(CEXP4View)

// 特性
public:
	CEXP4Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&> ca;


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP4View();
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

#ifndef _DEBUG  // EXP4View.cpp 中的调试版本
inline CEXP4Doc* CEXP4View::GetDocument() const
   { return reinterpret_cast<CEXP4Doc*>(m_pDocument); }
#endif

