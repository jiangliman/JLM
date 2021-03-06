
// EXP0427View.h : CEXP0427View 类的接口
//

#pragma once


class CEXP0427View : public CView
{
protected: // 仅从序列化创建
	CEXP0427View();
	DECLARE_DYNCREATE(CEXP0427View)

	// 特性
public:
	CEXP0427Doc* GetDocument() const;

	// 操作
public:

	// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

	// 实现
public:
	virtual ~CEXP0427View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	
	
	afx_msg void OnPopout();
};


#ifndef _DEBUG  // EXP0427View.cpp 中的调试版本
inline CEXP0427Doc* CEXP0427View::GetDocument() const
   { return reinterpret_cast<CEXP0427Doc*>(m_pDocument); }
#endif

