
// EXP2.1View.cpp : CEXP21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP2.1.h"
#endif

#include "EXP2.1Doc.h"
#include "EXP2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP21View

IMPLEMENT_DYNCREATE(CEXP21View, CView)

BEGIN_MESSAGE_MAP(CEXP21View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CEXP21View 构造/析构

CEXP21View::CEXP21View()
{
	// TODO: 在此处添加构造代码

}

CEXP21View::~CEXP21View()
{
}

BOOL CEXP21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP21View 绘制

void CEXP21View::OnDraw(CDC* /*pDC*/)
{
	CEXP21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEXP21View 诊断

#ifdef _DEBUG
void CEXP21View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP21Doc* CEXP21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP21Doc)));
	return (CEXP21Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP21View 消息处理程序


void CEXP21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CClientDC s1(this);
	CString s;
	s.Format(_T("左键正被按下"));
	s1.TextOutW(0, 10, s);



	CView::OnLButtonDown(nFlags, point);
}


void CEXP21View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值	
	CClientDC s1(this);
	CString s;
	s.Format(_T("左键正在抬起"));
	s1.TextOutW(0, 10, s);

	CView::OnLButtonUp(nFlags, point);
}
