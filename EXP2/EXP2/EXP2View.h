
// EXP2View.h : CEXP2View 类的接口
//

#pragma once


class CEXP2View : public CView
{
protected: // 仅从序列化创建
	CEXP2View();
	DECLARE_DYNCREATE(CEXP2View)

// 特性
public:
	CEXP2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EXP2View.cpp 中的调试版本
inline CEXP2Doc* CEXP2View::GetDocument() const
   { return reinterpret_cast<CEXP2Doc*>(m_pDocument); }
#endif

