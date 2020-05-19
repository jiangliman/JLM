
// Dlg0414.11View.cpp : CDlg041411View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg0414.11.h"
#endif

#include "Dlg0414.11Doc.h"
#include "Dlg0414.11View.h"
#include "MyDlg1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg041411View

IMPLEMENT_DYNCREATE(CDlg041411View, CView)

BEGIN_MESSAGE_MAP(CDlg041411View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_PopDialog, &CDlg041411View::OnPopdialog)
END_MESSAGE_MAP()

// CDlg041411View 构造/析构

CDlg041411View::CDlg041411View()
{
	// TODO: 在此处添加构造代码

}

CDlg041411View::~CDlg041411View()
{
}

BOOL CDlg041411View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg041411View 绘制

void CDlg041411View::OnDraw(CDC* pDC)
{
	CDlg041411Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	

	

}


// CDlg041411View 诊断

#ifdef _DEBUG
void CDlg041411View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg041411View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg041411Doc* CDlg041411View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg041411Doc)));
	return (CDlg041411Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg041411View 消息处理程序



void CDlg041411View::OnLButtonDblClk(UINT nFlags, CPoint point)
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


void CDlg041411View::OnPopdialog()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg1 dlg1;
	dlg1.s1 = filename;
	int r = dlg1.DoModal();
	if (r == IDOK)
	{	
	}
}
