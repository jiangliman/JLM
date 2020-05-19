
// Dlg4.7.24View.cpp : CDlg4724View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg4.7.24.h"
#endif

#include "Dlg4.7.24Doc.h"
#include "Dlg4.7.24View.h"
#include"MyDlg4.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg4724View

IMPLEMENT_DYNCREATE(CDlg4724View, CView)

BEGIN_MESSAGE_MAP(CDlg4724View, CView)
	ON_COMMAND(ID_Popout, &CDlg4724View::OnPopout)
END_MESSAGE_MAP()

// CDlg4724View 构造/析构

CDlg4724View::CDlg4724View()
{
	// TODO: 在此处添加构造代码

}

CDlg4724View::~CDlg4724View()
{
}

BOOL CDlg4724View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg4724View 绘制

void CDlg4724View::OnDraw(CDC* /*pDC*/)
{
	CDlg4724Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg4724View 诊断

#ifdef _DEBUG
void CDlg4724View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg4724View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg4724Doc* CDlg4724View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg4724Doc)));
	return (CDlg4724Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg4724View 消息处理程序


void CDlg4724View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg4 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
}
