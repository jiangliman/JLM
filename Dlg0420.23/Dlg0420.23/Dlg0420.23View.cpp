
// Dlg0420.23View.cpp : CDlg042023View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg0420.23.h"
#endif

#include "Dlg0420.23Doc.h"
#include "Dlg0420.23View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg042023View

IMPLEMENT_DYNCREATE(CDlg042023View, CView)

BEGIN_MESSAGE_MAP(CDlg042023View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CDlg042023View 构造/析构

CDlg042023View::CDlg042023View()
{
	// TODO: 在此处添加构造代码
	cr.left = 100;
	cr.top = 100;
	cr.bottom = 300;
	cr.right = 250;

}

CDlg042023View::~CDlg042023View()
{
}

BOOL CDlg042023View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg042023View 绘制

void CDlg042023View::OnDraw(CDC* /*pDC*/)
{
	CDlg042023Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetDC()->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg042023View 诊断

#ifdef _DEBUG
void CDlg042023View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg042023View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg042023Doc* CDlg042023View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg042023Doc)));
	return (CDlg042023Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg042023View 消息处理程序


void CDlg042023View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if ((point.x < cr.right) && (point.x > cr.left) && (point.y > cr.top) && (point.y < cr.bottom)) {
		CRect ca;
		ca.left = cr.left;
		ca.top = cr.top;
		ca.right = cr.right;
		ca.bottom = cr.bottom;
		CDC * dc = GetDC();
		CPen * pOldPen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
		pOldPen = dc->SelectObject(&pen);
		CBrush * pOldBrush = NULL;
		CBrush * pBrush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//背景透明效果
		pOldBrush = dc->SelectObject(pBrush);
		dc->Rectangle(ca);
		
	}
	
	CView::OnLButtonDown(nFlags, point);
}
