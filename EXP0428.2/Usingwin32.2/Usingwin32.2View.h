
// Usingwin32.2View.h : CUsingwin322View 类的接口
//

#pragma once


class CUsingwin322View : public CView
{
protected: // 仅从序列化创建
	CUsingwin322View();
	DECLARE_DYNCREATE(CUsingwin322View)

// 特性
public:
	CUsingwin322Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CUsingwin322View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Usingwin32.2View.cpp 中的调试版本
inline CUsingwin322Doc* CUsingwin322View::GetDocument() const
   { return reinterpret_cast<CUsingwin322Doc*>(m_pDocument); }
#endif

