
// UsingWin32.2DllView.h : CUsingWin322DllView 类的接口
//

#pragma once


class CUsingWin322DllView : public CView
{
protected: // 仅从序列化创建
	CUsingWin322DllView();
	DECLARE_DYNCREATE(CUsingWin322DllView)

// 特性
public:
	CUsingWin322DllDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CUsingWin322DllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingWin32.2DllView.cpp 中的调试版本
inline CUsingWin322DllDoc* CUsingWin322DllView::GetDocument() const
   { return reinterpret_cast<CUsingWin322DllDoc*>(m_pDocument); }
#endif

