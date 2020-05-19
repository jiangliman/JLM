
// EXP5.11View.h : CEXP511View 类的接口
//

#pragma once


class CEXP511View : public CView
{
protected: // 仅从序列化创建
	CEXP511View();
	DECLARE_DYNCREATE(CEXP511View)

// 特性
public:
	CEXP511Doc* GetDocument() const;

// 操作
public:
	int r, sx, sy;
	CString filename;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP511View();
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
};

#ifndef _DEBUG  // EXP5.11View.cpp 中的调试版本
inline CEXP511Doc* CEXP511View::GetDocument() const
   { return reinterpret_cast<CEXP511Doc*>(m_pDocument); }
#endif

