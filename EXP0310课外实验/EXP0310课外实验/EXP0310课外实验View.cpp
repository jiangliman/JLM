
// EXP0310课外实验View.cpp : CEXP0310课外实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0310课外实验.h"
#endif

#include "EXP0310课外实验Doc.h"
#include "EXP0310课外实验View.h"
#include"math.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP0310课外实验View

IMPLEMENT_DYNCREATE(CEXP0310课外实验View, CView)

BEGIN_MESSAGE_MAP(CEXP0310课外实验View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CEXP0310课外实验View 构造/析构

CEXP0310课外实验View::CEXP0310课外实验View()
{
	// TODO: 在此处添加构造代码
	count = 0;
	a = rand() % 99 + 5;
	b= rand() % 60 + 4;
}

CEXP0310课外实验View::~CEXP0310课外实验View()
{
}

BOOL CEXP0310课外实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP0310课外实验View 绘制

void CEXP0310课外实验View::OnDraw(CDC* pDC)
{
	CEXP0310课外实验Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	CRect A(10, 30, 180, 160);
	CRect B(210, 30, 380, 160);
	CRect C(410, 30, 580, 160);
	CRect D(610, 30, 780, 160);
	dc.Rectangle(A);
	dc.Rectangle(B);
	dc.Rectangle(C);
	dc.Rectangle(D);
}


// CEXP0310课外实验View 诊断

#ifdef _DEBUG
void CEXP0310课外实验View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP0310课外实验View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP0310课外实验Doc* CEXP0310课外实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP0310课外实验Doc)));
	return (CEXP0310课外实验Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP0310课外实验View 消息处理程序


void CEXP0310课外实验View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP0310课外实验Doc* pDoc = GetDocument();
	CClientDC dc(this);
	
	CString s1, s2;
	s1.Format(_T("%d"), a);
	s2.Format(_T("%d"), b);
	if (point.x > 10 && point.x < 180 && point.y>30 && point.y < 160)
		dc.TextOutW(point.x, point.y, s1);
	else if (point.x > 210 && point.x < 380 && point.y>30 && point.y < 160)
		dc.TextOutW(point.x, point.y, s2);
	
	else if (point.x > 610 && point.x < 780 && point.y>30 && point.y < 160) {
		count++;
		switch (count % 4) {
		case 0:
			x = "÷";
			break;
		case 1:
			x = "+";
			break;
		case 2:
			x = "-";
			break;
		case 3:
			x = "×";
			break;
		default:
			x.Format(_T("点击次数无效！"));
		}
		dc.TextOutW(point.x, point.y, x);
	}

	else {
		s = "点击无效";
		dc.TextOutW(point.x, point.y, s);
	}

	CView::OnLButtonDown(nFlags, point);
}



void CEXP0310课外实验View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CEXP0310课外实验Doc* pDoc = GetDocument();
	CClientDC dc(this);
	if (point.x > 410 && point.x < 580 && point.y>30 && point.y < 160)
	{
		switch (count % 4) {
		case 0:
			s.Format(_T("%d"), a / b);
			break;
		case 1:
			s.Format(_T("%d"), a + b);
			break;
		case 2:
			s.Format(_T("%d"), a - b);
			break;
		case 3:
			s.Format(_T("%d"), a * b);
			break;
		default:
			s.Format(_T("点击次数无效！"));
		}
		dc.TextOutW(point.x, point.y, s);
	}
	CView::OnRButtonDown(nFlags, point);
}
