
// 鼠标让圆移动View.h : C鼠标让圆移动View 类的接口
//

#pragma once


class C鼠标让圆移动View : public CView
{
protected: // 仅从序列化创建
	C鼠标让圆移动View();
	DECLARE_DYNCREATE(C鼠标让圆移动View)

// 特性
public:
	C鼠标让圆移动Doc* GetDocument() const;

// 操作
public:
	CRect rect;
	CRect m_rect;
	bool set;
	int n, flag;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C鼠标让圆移动View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnMove(int x, int y);
	afx_msg void OnCircle();
};

#ifndef _DEBUG  // 鼠标让圆移动View.cpp 中的调试版本
inline C鼠标让圆移动Doc* C鼠标让圆移动View::GetDocument() const
   { return reinterpret_cast<C鼠标让圆移动Doc*>(m_pDocument); }
#endif

