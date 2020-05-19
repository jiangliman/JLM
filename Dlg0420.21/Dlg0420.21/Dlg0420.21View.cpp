
// Dlg0420.21View.cpp : CDlg042021View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg0420.21.h"
#endif

#include "Dlg0420.21Doc.h"
#include "Dlg0420.21View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg042021View

IMPLEMENT_DYNCREATE(CDlg042021View, CView)

BEGIN_MESSAGE_MAP(CDlg042021View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CDlg042021View 构造/析构

CDlg042021View::CDlg042021View()
{
	// TODO: 在此处添加构造代码
	

}

CDlg042021View::~CDlg042021View()
{
}

BOOL CDlg042021View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg042021View 绘制

void CDlg042021View::OnDraw(CDC* /*pDC*/)
{
	CDlg042021Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetDC()->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg042021View 诊断

#ifdef _DEBUG
void CDlg042021View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg042021View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg042021Doc* CDlg042021View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg042021Doc)));
	return (CDlg042021Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg042021View 消息处理程序





void CDlg042021View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (nFlags)
	{
		cr.left = point.x-150;
		cr.top = point.y-50;
		cr.right = point.x + 100;
		cr.bottom = point.y + 100;      
	}
	
	Invalidate();
	

	CView::OnMouseMove(nFlags, point);
}
