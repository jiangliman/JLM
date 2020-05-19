
// EXP2.1View.h : CEXP21View 类的接口
//

#pragma once


class CEXP21View : public CView
{
protected: // 仅从序列化创建
	CEXP21View();
	DECLARE_DYNCREATE(CEXP21View)

// 特性
public:
	CEXP21Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP21View();
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
};

#ifndef _DEBUG  // EXP2.1View.cpp 中的调试版本
inline CEXP21Doc* CEXP21View::GetDocument() const
   { return reinterpret_cast<CEXP21Doc*>(m_pDocument); }
#endif

