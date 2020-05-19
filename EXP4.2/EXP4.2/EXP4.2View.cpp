
// EXP4.2View.cpp : CEXP42View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP4.2.h"
#endif

#include "EXP4.2Doc.h"
#include "EXP4.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP42View

IMPLEMENT_DYNCREATE(CEXP42View, CView)

BEGIN_MESSAGE_MAP(CEXP42View, CView)
	ON_COMMAND(SHOWNAME, &CEXP42View::OnShowname)
END_MESSAGE_MAP()

// CEXP42View 构造/析构

CEXP42View::CEXP42View()
{
	// TODO: 在此处添加构造代码

}

CEXP42View::~CEXP42View()
{
}

BOOL CEXP42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP42View 绘制

void CEXP42View::OnDraw(CDC* /*pDC*/)
{
	CEXP42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEXP42View 诊断

#ifdef _DEBUG
void CEXP42View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP42Doc* CEXP42View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP42Doc)));
	return (CEXP42Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP42View 消息处理程序


void CEXP42View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s=_T("蒋鲤蔓");
	CClientDC dc(this);
	dc.TextOutW(100, 100, s);


}
