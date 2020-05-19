
// Dlg4.7.0View.cpp : CDlg470View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg4.7.0.h"
#endif

#include "Dlg4.7.0Doc.h"
#include "Dlg4.7.0View.h"
#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg470View

IMPLEMENT_DYNCREATE(CDlg470View, CView)

BEGIN_MESSAGE_MAP(CDlg470View, CView)
	ON_COMMAND(ID_Popout, &CDlg470View::OnPopout)
END_MESSAGE_MAP()

// CDlg470View 构造/析构

CDlg470View::CDlg470View()
{
	// TODO: 在此处添加构造代码

}

CDlg470View::~CDlg470View()
{
}

BOOL CDlg470View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg470View 绘制

void CDlg470View::OnDraw(CDC* /*pDC*/)
{
	CDlg470Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg470View 诊断

#ifdef _DEBUG
void CDlg470View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg470View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg470Doc* CDlg470View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg470Doc)));
	return (CDlg470Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg470View 消息处理程序


void CDlg470View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CClientDC dc(this);
		CString s;
		s.Format(_T( "“你已退出对话框”"));
		dc.TextOutW(200, 200, s);


	}

}
