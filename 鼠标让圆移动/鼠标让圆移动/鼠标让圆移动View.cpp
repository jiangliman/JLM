
// 鼠标让圆移动View.cpp : C鼠标让圆移动View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "鼠标让圆移动.h"
#endif

#include "鼠标让圆移动Doc.h"
#include "鼠标让圆移动View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C鼠标让圆移动View

IMPLEMENT_DYNCREATE(C鼠标让圆移动View, CView)

BEGIN_MESSAGE_MAP(C鼠标让圆移动View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
ON_COMMAND(ID_CIRCLE, &C鼠标让圆移动View::OnCircle)
END_MESSAGE_MAP()

// C鼠标让圆移动View 构造/析构

C鼠标让圆移动View::C鼠标让圆移动View()
{
	// TODO: 在此处添加构造代码
	set = true;
	flag = 0;
}

C鼠标让圆移动View::~C鼠标让圆移动View()
{
}

BOOL C鼠标让圆移动View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C鼠标让圆移动View 绘制

void C鼠标让圆移动View::OnDraw(CDC* pDC)
{
	C鼠标让圆移动Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (set)
	{
		SetTimer(1, rand() % 400 + 100, NULL);
		set = false;
	}
	pDC->Ellipse(m_rect);
}


// C鼠标让圆移动View 诊断

#ifdef _DEBUG
void C鼠标让圆移动View::AssertValid() const
{
	CView::AssertValid();
}

void C鼠标让圆移动View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C鼠标让圆移动Doc* C鼠标让圆移动View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C鼠标让圆移动Doc)));
	return (C鼠标让圆移动Doc*)m_pDocument;
}
#endif //_DEBUG


// C鼠标让圆移动View 消息处理程序





void C鼠标让圆移动View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	if (n == 1)
	{
		if (m_rect.right > rect.right)
		{
			flag = 1;
		}
		if (m_rect.left < rect.left)
		{
			flag = 0;
		}
		if (flag == 1)
		{
			m_rect.right -= 10;
			m_rect.left -= 10;
		}
		if (flag == 0)
		{
			m_rect.left += 10;
			m_rect.right += 10;
		}
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void C鼠标让圆移动View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CView::OnLButtonDblClk(nFlags, point);
	n = 0;
}


void C鼠标让圆移动View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	n = 1;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}





void C鼠标让圆移动View::OnCircle()
{
	// TODO: 在此添加命令处理程序代码
	this->GetClientRect(&rect);
	m_rect.top = (rect.bottom + rect.top) / 2 - 50;
	m_rect.bottom = (rect.bottom + rect.top) / 2 + 50;
	m_rect.left = (rect.left + rect.right) / 4 - 50;
	m_rect.right = (rect.left + rect.right) / 4 + 50;
	Invalidate();
}
