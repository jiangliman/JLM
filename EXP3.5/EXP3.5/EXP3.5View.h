
// EXP3.5View.h : CEXP35View 类的接口
//

#pragma once


class CEXP35View : public CView
{
protected: // 仅从序列化创建
	CEXP35View();
	DECLARE_DYNCREATE(CEXP35View)

// 特性
public:
	CEXP35Doc* GetDocument() const;

// 操作
public:
	int count;
	int i,j;
	CRect ca;
	CString s, s1;
	
	

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP35View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP3.5View.cpp 中的调试版本
inline CEXP35Doc* CEXP35View::GetDocument() const
   { return reinterpret_cast<CEXP35Doc*>(m_pDocument); }
#endif

