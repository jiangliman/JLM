
// EXP3.6View.h : CEXP36View 类的接口
//

#pragma once


class CEXP36View : public CView
{
protected: // 仅从序列化创建
	CEXP36View();
	DECLARE_DYNCREATE(CEXP36View)

// 特性
public:
	CEXP36Doc* GetDocument() const;

// 操作
public:
	int N;
	CArray<CRect,CRect> cr;
	bool set;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP36View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // EXP3.6View.cpp 中的调试版本
inline CEXP36Doc* CEXP36View::GetDocument() const
   { return reinterpret_cast<CEXP36Doc*>(m_pDocument); }
#endif

