
// Dlg0420.22View.cpp : CDlg042022View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg0420.22.h"
#endif

#include "Dlg0420.22Doc.h"
#include "Dlg0420.22View.h"
#include "MyDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg042022View

IMPLEMENT_DYNCREATE(CDlg042022View, CView)

BEGIN_MESSAGE_MAP(CDlg042022View, CView)
	ON_COMMAND(Popout, &CDlg042022View::OnPopout)
END_MESSAGE_MAP()

// CDlg042022View 构造/析构

CDlg042022View::CDlg042022View()
{
	// TODO: 在此处添加构造代码

}

CDlg042022View::~CDlg042022View()
{
}

BOOL CDlg042022View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg042022View 绘制

void CDlg042022View::OnDraw(CDC* /*pDC*/)
{
	CDlg042022Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg042022View 诊断

#ifdef _DEBUG
void CDlg042022View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg042022View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg042022Doc* CDlg042022View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg042022Doc)));
	return (CDlg042022Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg042022View 消息处理程序


void CDlg042022View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg2 dlg2;
	int r = dlg2.DoModal();
	if (r == IDOK) {
		cr.top = dlg2.top;
		cr.left = dlg2.left;
		cr.bottom = dlg2.bottom;
		cr.right = dlg2.right;
		GetDC()->Ellipse(cr);
	}
}
