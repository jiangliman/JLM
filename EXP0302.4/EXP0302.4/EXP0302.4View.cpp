
// EXP0302.4View.cpp : CEXP03024View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0302.4.h"
#endif

#include "EXP0302.4Doc.h"
#include "EXP0302.4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP03024View

IMPLEMENT_DYNCREATE(CEXP03024View, CView)

BEGIN_MESSAGE_MAP(CEXP03024View, CView)
END_MESSAGE_MAP()

// CEXP03024View 构造/析构

CEXP03024View::CEXP03024View()
{
	// TODO: 在此处添加构造代码

}

CEXP03024View::~CEXP03024View()
{
}

BOOL CEXP03024View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP03024View 绘制

void CEXP03024View::OnDraw(CDC* /*pDC*/)
{
	CEXP03024Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
// TODO: 在此处为本机数据添加绘制代码
    CRect cr;
	GetClientRect(&cr);	
	CDC*pDC = GetDC();
	CBrush brush(RGB(230, 159, 219));
	CBrush*oldbrush;
	oldbrush = pDC->SelectObject(&brush);
	pDC->Ellipse(cr);
	pDC->SelectObject(oldbrush);
	ReleaseDC(pDC);
	
	
}


// CEXP03024View 诊断

#ifdef _DEBUG
void CEXP03024View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP03024View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP03024Doc* CEXP03024View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP03024Doc)));
	return (CEXP03024Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP03024View 消息处理程序
