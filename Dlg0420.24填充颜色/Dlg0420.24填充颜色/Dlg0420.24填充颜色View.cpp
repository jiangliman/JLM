
// Dlg0420.24填充颜色View.cpp : CDlg042024填充颜色View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg0420.24填充颜色.h"
#endif

#include "Dlg0420.24填充颜色Doc.h"
#include "Dlg0420.24填充颜色View.h"
#include "MyDlg4.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg042024填充颜色View

IMPLEMENT_DYNCREATE(CDlg042024填充颜色View, CView)

BEGIN_MESSAGE_MAP(CDlg042024填充颜色View, CView)
	ON_COMMAND(ID_Popout, &CDlg042024填充颜色View::OnPopout)
ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CDlg042024填充颜色View 构造/析构

CDlg042024填充颜色View::CDlg042024填充颜色View()
{
	// TODO: 在此处添加构造代码
	cr.top = 100;
	cr.left = 100;
	cr.bottom = 300;
	cr.right = 400;

}

CDlg042024填充颜色View::~CDlg042024填充颜色View()
{
}

BOOL CDlg042024填充颜色View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg042024填充颜色View 绘制

void CDlg042024填充颜色View::OnDraw(CDC* /*pDC*/)
{
	CDlg042024填充颜色Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	GetDC()->Ellipse(cr);
	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg042024填充颜色View 诊断

#ifdef _DEBUG
void CDlg042024填充颜色View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg042024填充颜色View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg042024填充颜色Doc* CDlg042024填充颜色View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg042024填充颜色Doc)));
	return (CDlg042024填充颜色Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg042024填充颜色View 消息处理程序


void CDlg042024填充颜色View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg4 dlg4;
	int r = dlg4.DoModal();
	if (r == IDOK) {
		CDC* pDC = GetDC(); // 得到DC
		CBrush brush(RGB(dlg4.x, dlg4.y, dlg4.z));//根据自己需要填充颜色
		CBrush *oldbrush;
		oldbrush = pDC->SelectObject(&brush);//选新的画刷
		pDC->Ellipse(cr.left, cr.top, cr.right, cr.bottom);
		pDC->SelectObject(oldbrush);//将原来的画刷选回去
	}

}





void CDlg042024填充颜色View::OnLButtonDown(UINT nFlags, CPoint point)
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
