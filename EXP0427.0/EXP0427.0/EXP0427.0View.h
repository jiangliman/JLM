
// EXP0427.0View.h : CEXP04270View 类的接口
//

#pragma once


class CEXP04270View : public CView
{
protected: // 仅从序列化创建
	CEXP04270View();
	DECLARE_DYNCREATE(CEXP04270View)

// 特性
public:
	CEXP04270Doc* GetDocument() const;

// 操作
public:
	CString filename;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP04270View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSave();
	
};

#ifndef _DEBUG  // EXP0427.0View.cpp 中的调试版本
inline CEXP04270Doc* CEXP04270View::GetDocument() const
   { return reinterpret_cast<CEXP04270Doc*>(m_pDocument); }
#endif

