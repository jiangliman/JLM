
// EXP4.3View.h : CEXP43View 类的接口
//

#pragma once


class CEXP43View : public CView
{
protected: // 仅从序列化创建
	CEXP43View();
	DECLARE_DYNCREATE(CEXP43View)

// 特性
public:
	CEXP43Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP43View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EXP4.3View.cpp 中的调试版本
inline CEXP43Doc* CEXP43View::GetDocument() const
   { return reinterpret_cast<CEXP43Doc*>(m_pDocument); }
#endif

