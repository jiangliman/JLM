
// EXP0302.3View.cpp : CEXP03023View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0302.3.h"
#endif

#include "EXP0302.3Doc.h"
#include "EXP0302.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP03023View

IMPLEMENT_DYNCREATE(CEXP03023View, CView)

BEGIN_MESSAGE_MAP(CEXP03023View, CView)
END_MESSAGE_MAP()

// CEXP03023View 构造/析构

CEXP03023View::CEXP03023View()
{
	// TODO: 在此处添加构造代码

}

CEXP03023View::~CEXP03023View()
{
}

BOOL CEXP03023View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP03023View 绘制

void CEXP03023View::OnDraw(CDC* /*pDC*/)
{
	CEXP03023Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect cr;
	GetClientRect(&cr);
	CClientDC dc(this);
	dc.Ellipse(cr);


}


// CEXP03023View 诊断

#ifdef _DEBUG
void CEXP03023View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP03023View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP03023Doc* CEXP03023View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP03023Doc)));
	return (CEXP03023Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP03023View 消息处理程序
