
// EXP5.21View.h : CEXP521View 类的接口
//

#pragma once


class CEXP521View : public CView
{
protected: // 仅从序列化创建
	CEXP521View();
	DECLARE_DYNCREATE(CEXP521View)

// 特性
public:
	CEXP521Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	

// 实现
public:
	virtual ~CEXP521View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // EXP5.21View.cpp 中的调试版本
inline CEXP521Doc* CEXP521View::GetDocument() const
   { return reinterpret_cast<CEXP521Doc*>(m_pDocument); }
#endif

