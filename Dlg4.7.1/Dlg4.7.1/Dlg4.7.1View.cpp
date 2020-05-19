
// Dlg4.7.1View.cpp : CDlg471View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg4.7.1.h"
#endif

#include "Dlg4.7.1Doc.h"
#include "Dlg4.7.1View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg471View

IMPLEMENT_DYNCREATE(CDlg471View, CView)

BEGIN_MESSAGE_MAP(CDlg471View, CView)
	ON_COMMAND(ID_Popout, &CDlg471View::OnPopout)
END_MESSAGE_MAP()

// CDlg471View 构造/析构

CDlg471View::CDlg471View()
{
	// TODO: 在此处添加构造代码

}

CDlg471View::~CDlg471View()
{
}

BOOL CDlg471View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg471View 绘制

void CDlg471View::OnDraw(CDC* /*pDC*/)
{
	CDlg471Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg471View 诊断

#ifdef _DEBUG
void CDlg471View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg471View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg471Doc* CDlg471View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg471Doc)));
	return (CDlg471Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg471View 消息处理程序


void CDlg471View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		CString s;
		s.Format(_T("“你已退出对话框”"));
		CClientDC dc(this);
		dc.TextOutW(200, 200, s);

	}
}
