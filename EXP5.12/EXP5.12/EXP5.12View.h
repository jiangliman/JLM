
// EXP5.12View.h : CEXP512View 类的接口
//

#pragma once


class CEXP512View : public CView
{
protected: // 仅从序列化创建
	CEXP512View();
	DECLARE_DYNCREATE(CEXP512View)

// 特性
public:
	CEXP512Doc* GetDocument() const;

// 操作
public:
	int r, sx, sy, w, h;
	CString filename;
	float rect_ratio, img_ratio;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP512View();
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

#ifndef _DEBUG  // EXP5.12View.cpp 中的调试版本
inline CEXP512Doc* CEXP512View::GetDocument() const
   { return reinterpret_cast<CEXP512Doc*>(m_pDocument); }
#endif

