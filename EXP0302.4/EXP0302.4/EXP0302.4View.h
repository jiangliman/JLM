
// EXP0302.4View.h : CEXP03024View 类的接口
//

#pragma once


class CEXP03024View : public CView
{
protected: // 仅从序列化创建
	CEXP03024View();
	DECLARE_DYNCREATE(CEXP03024View)

// 特性
public:
	CEXP03024Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP03024View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EXP0302.4View.cpp 中的调试版本
inline CEXP03024Doc* CEXP03024View::GetDocument() const
   { return reinterpret_cast<CEXP03024Doc*>(m_pDocument); }
#endif

