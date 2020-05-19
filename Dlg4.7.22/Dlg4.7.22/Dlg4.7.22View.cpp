
// Dlg4.7.22View.cpp : CDlg4722View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg4.7.22.h"
#endif

#include "Dlg4.7.22Doc.h"
#include "Dlg4.7.22View.h"
#include "MyDlg2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg4722View

IMPLEMENT_DYNCREATE(CDlg4722View, CView)

BEGIN_MESSAGE_MAP(CDlg4722View, CView)
	ON_COMMAND(ID_Popout, &CDlg4722View::OnPopout)
END_MESSAGE_MAP()

// CDlg4722View 构造/析构

CDlg4722View::CDlg4722View()
{
	// TODO: 在此处添加构造代码

}

CDlg4722View::~CDlg4722View()
{
}

BOOL CDlg4722View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg4722View 绘制

void CDlg4722View::OnDraw(CDC* /*pDC*/)
{
	CDlg4722Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg4722View 诊断

#ifdef _DEBUG
void CDlg4722View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg4722View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg4722Doc* CDlg4722View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg4722Doc)));
	return (CDlg4722Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg4722View 消息处理程序


void CDlg4722View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg2 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}

}
