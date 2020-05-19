
// 鼠标移动矩形View.h : C鼠标移动矩形View 类的接口
//

#pragma once


class C鼠标移动矩形View : public CView
{
protected: // 仅从序列化创建
	C鼠标移动矩形View();
	DECLARE_DYNCREATE(C鼠标移动矩形View)

// 特性
public:
	C鼠标移动矩形Doc* GetDocument() const;

// 操作
public:
	CRect rect;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C鼠标移动矩形View();
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

#ifndef _DEBUG  // 鼠标移动矩形View.cpp 中的调试版本
inline C鼠标移动矩形Doc* C鼠标移动矩形View::GetDocument() const
   { return reinterpret_cast<C鼠标移动矩形Doc*>(m_pDocument); }
#endif

