
// EXP3.3View.h : CEXP33View 类的接口
//

#pragma once


class CEXP33View : public CView
{
protected: // 仅从序列化创建
	CEXP33View();
	DECLARE_DYNCREATE(CEXP33View)

// 特性
public:
	CEXP33Doc* GetDocument() const;

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
	virtual ~CEXP33View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP3.3View.cpp 中的调试版本
inline CEXP33Doc* CEXP33View::GetDocument() const
   { return reinterpret_cast<CEXP33Doc*>(m_pDocument); }
#endif

