
// EXP0427View.cpp : CEXP0427View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0427.h"
#endif

#include "EXP0427Doc.h"
#include "EXP0427View.h"
#include <string>
#include<iostream>;
#include<fstream>
using namespace std;
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP0427View

IMPLEMENT_DYNCREATE(CEXP0427View, CView)



// CEXP0427View 构造/析构

CEXP0427View::CEXP0427View()
{
	// TODO: 在此处添加构造代码

}

CEXP0427View::~CEXP0427View()
{
}

BOOL CEXP0427View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP0427View 绘制

void CEXP0427View::OnDraw(CDC* /*pDC*/)
{
	CEXP0427Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CEXP0427View 诊断

#ifdef _DEBUG
void CEXP0427View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP0427View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP0427Doc* CEXP0427View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP0427Doc)));
	return (CEXP0427Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP0427View 消息处理程序





BEGIN_MESSAGE_MAP(CEXP0427View, CView)
	ON_COMMAND(ID_Popout, &CEXP0427View::OnPopout)
END_MESSAGE_MAP()


void CEXP0427View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {

	}
}
