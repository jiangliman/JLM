
// EXP0302.3View.h : CEXP03023View 类的接口
//

#pragma once


class CEXP03023View : public CView
{
protected: // 仅从序列化创建
	CEXP03023View();
	DECLARE_DYNCREATE(CEXP03023View)

// 特性
public:
	CEXP03023Doc* GetDocument() const;

// 操作
public:
	

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CEXP03023View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EXP0302.3View.cpp 中的调试版本
inline CEXP03023Doc* CEXP03023View::GetDocument() const
   { return reinterpret_cast<CEXP03023Doc*>(m_pDocument); }
#endif

