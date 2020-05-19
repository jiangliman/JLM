
// EXP4.2View.h : CEXP42View 类的接口
//

#pragma once


class CEXP42View : public CView
{
protected: // 仅从序列化创建
	CEXP42View();
	DECLARE_DYNCREATE(CEXP42View)

// 特性
public:
	CEXP42Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP42View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // EXP4.2View.cpp 中的调试版本
inline CEXP42Doc* CEXP42View::GetDocument() const
   { return reinterpret_cast<CEXP42Doc*>(m_pDocument); }
#endif

