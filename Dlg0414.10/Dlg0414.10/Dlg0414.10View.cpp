
// Dlg0414.10View.cpp : CDlg041410View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg0414.10.h"
#endif

#include "Dlg0414.10Doc.h"
#include "Dlg0414.10View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg041410View

IMPLEMENT_DYNCREATE(CDlg041410View, CView)

BEGIN_MESSAGE_MAP(CDlg041410View, CView)

	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CDlg041410View 构造/析构

CDlg041410View::CDlg041410View()
{
	// TODO: 在此处添加构造代码

}

CDlg041410View::~CDlg041410View()
{
}

BOOL CDlg041410View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg041410View 绘制

void CDlg041410View::OnDraw(CDC* pDC)
{
	CDlg041410Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg041410View 诊断

#ifdef _DEBUG
void CDlg041410View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg041410View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg041410Doc* CDlg041410View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg041410Doc)));
	return (CDlg041410Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg041410View 消息处理程序




void CDlg041410View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	r = cfd.DoModal();
	if (r == IDOK)
	{
		filename = cfd.GetFileName();
		GetDC()->TextOutW(100, 100, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}
