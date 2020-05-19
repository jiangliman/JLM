
// EXP0225.1View.h : CEXP02251View 类的接口
//

#pragma once


class CEXP02251View : public CView
{
protected: // 仅从序列化创建
	CEXP02251View();
	DECLARE_DYNCREATE(CEXP02251View)

// 特性
public:
	CEXP02251Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP02251View();
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

#ifndef _DEBUG  // EXP0225.1View.cpp 中的调试版本
inline CEXP02251Doc* CEXP02251View::GetDocument() const
   { return reinterpret_cast<CEXP02251Doc*>(m_pDocument); }
#endif

