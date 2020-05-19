
// EXP1View.cpp : CEXP1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP1.h"
#endif

#include "EXP1Doc.h"
#include "EXP1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP1View

IMPLEMENT_DYNCREATE(CEXP1View, CView)

BEGIN_MESSAGE_MAP(CEXP1View, CView)
END_MESSAGE_MAP()

// CEXP1View 构造/析构

CEXP1View::CEXP1View()
{
	// TODO: 在此处添加构造代码

}

CEXP1View::~CEXP1View()
{
}

BOOL CEXP1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP1View 绘制

void CEXP1View::OnDraw(CDC* pDC)
{
	CEXP1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int a = 123;
	CString s,s1;
	s.Format(_T("我是***"));
	s1.Format(_T("%d"), a);
	pDC->TextOutW(100, 200, s1);
	pDC->TextOutW(100, 100, s);


}


// CEXP1View 诊断

#ifdef _DEBUG
void CEXP1View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP1Doc* CEXP1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP1Doc)));
	return (CEXP1Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP1View 消息处理程序
