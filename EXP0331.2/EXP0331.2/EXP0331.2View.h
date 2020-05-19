
// EXP0331.2View.h : CEXP03312View 类的接口
//

#pragma once


class CEXP03312View : public CView
{
protected: // 仅从序列化创建
	CEXP03312View();
	DECLARE_DYNCREATE(CEXP03312View)

// 特性
public:
	CEXP03312Doc* GetDocument() const;

// 操作
public:
	CString s, str;
	int pos, flag, x, y;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP03312View();
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
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	
};

#ifndef _DEBUG  // EXP0331.2View.cpp 中的调试版本
inline CEXP03312Doc* CEXP03312View::GetDocument() const
   { return reinterpret_cast<CEXP03312Doc*>(m_pDocument); }
#endif

