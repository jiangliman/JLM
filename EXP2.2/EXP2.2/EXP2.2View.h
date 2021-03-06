
// EXP2.2View.h : CEXP22View 类的接口
//

#pragma once


class CEXP22View : public CView
{
protected: // 仅从序列化创建
	CEXP22View();
	DECLARE_DYNCREATE(CEXP22View)

// 特性
public:
	CEXP22Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP22View();
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

#ifndef _DEBUG  // EXP2.2View.cpp 中的调试版本
inline CEXP22Doc* CEXP22View::GetDocument() const
   { return reinterpret_cast<CEXP22Doc*>(m_pDocument); }
#endif

