
// EXP3.4View.h : CEXP34View 类的接口
//

#pragma once


class CEXP34View : public CView
{
protected: // 仅从序列化创建
	CEXP34View();
	DECLARE_DYNCREATE(CEXP34View)

// 特性
public:
	CEXP34Doc* GetDocument() const;
	
// 操作
public:


// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP34View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // EXP3.4View.cpp 中的调试版本
inline CEXP34Doc* CEXP34View::GetDocument() const
   { return reinterpret_cast<CEXP34Doc*>(m_pDocument); }
#endif

