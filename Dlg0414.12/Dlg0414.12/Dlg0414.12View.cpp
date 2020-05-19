
// Dlg0414.12View.cpp : CDlg041412View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg0414.12.h"
#endif

#include "Dlg0414.12Doc.h"
#include "Dlg0414.12View.h"
#include"MyDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg041412View

IMPLEMENT_DYNCREATE(CDlg041412View, CView)

BEGIN_MESSAGE_MAP(CDlg041412View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_PopDialog, &CDlg041412View::OnPopdialog)
END_MESSAGE_MAP()

// CDlg041412View 构造/析构

CDlg041412View::CDlg041412View()
{
	// TODO: 在此处添加构造代码

}

CDlg041412View::~CDlg041412View()
{
}

BOOL CDlg041412View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg041412View 绘制

void CDlg041412View::OnDraw(CDC* /*pDC*/)
{
	CDlg041412Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg041412View 诊断

#ifdef _DEBUG
void CDlg041412View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg041412View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg041412Doc* CDlg041412View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg041412Doc)));
	return (CDlg041412Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg041412View 消息处理程序


void CDlg041412View::OnLButtonDblClk(UINT nFlags, CPoint point)
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


void CDlg041412View::OnPopdialog()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg2 dlg2;
	dlg2.s1 = filename;
	int r = dlg2.DoModal();
	if (r == IDOK)
	{
	}
	
}
