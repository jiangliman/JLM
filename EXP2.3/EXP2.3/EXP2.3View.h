
// EXP2.3View.h : CEXP23View 类的接口
//

#pragma once


class CEXP23View : public CView
{
protected: // 仅从序列化创建
	CEXP23View();
	DECLARE_DYNCREATE(CEXP23View)

// 特性
public:
	CEXP23Doc* GetDocument() const;

// 操作
public:
	CArray<CRect, CRect&> A;
	CArray<CRect, CRect&> B;
	CArray<CRect, CRect&> C;


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP23View();
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

#ifndef _DEBUG  // EXP2.3View.cpp 中的调试版本
inline CEXP23Doc* CEXP23View::GetDocument() const
   { return reinterpret_cast<CEXP23Doc*>(m_pDocument); }
#endif

