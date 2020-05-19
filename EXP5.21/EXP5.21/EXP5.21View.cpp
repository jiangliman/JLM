
// EXP5.21View.cpp : CEXP521View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP5.21.h"
#endif

#include "EXP5.21Doc.h"
#include "EXP5.21View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP521View

IMPLEMENT_DYNCREATE(CEXP521View, CView)

BEGIN_MESSAGE_MAP(CEXP521View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CEXP521View 构造/析构

CEXP521View::CEXP521View()
{
	// TODO: 在此处添加构造代码
	

}

CEXP521View::~CEXP521View()
{
}

BOOL CEXP521View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP521View 绘制

void CEXP521View::OnDraw(CDC* pDC)
{
	CEXP521Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	{
		pDC->TextOutW(0, 200, pDoc->str);
	}
}


// CEXP521View 诊断

#ifdef _DEBUG
void CEXP521View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP521View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP521Doc* CEXP521View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP521Doc)));
	return (CEXP521Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP521View 消息处理程序


void CEXP521View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP521Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CString s;
	s.Format(_T("%c"), nChar);
	pDoc->str += s;
	Invalidate();
	CView::OnChar(nChar, nRepCnt, nFlags);


}
