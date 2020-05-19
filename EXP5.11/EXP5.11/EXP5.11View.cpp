
// EXP5.11View.cpp : CEXP511View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP5.11.h"
#endif

#include "EXP5.11Doc.h"
#include "EXP5.11View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP511View

IMPLEMENT_DYNCREATE(CEXP511View, CView)

BEGIN_MESSAGE_MAP(CEXP511View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CEXP511View::OnFileOpen)
END_MESSAGE_MAP()

// CEXP511View 构造/析构

CEXP511View::CEXP511View()
{
	// TODO: 在此处添加构造代码

}

CEXP511View::~CEXP511View()
{
}

BOOL CEXP511View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP511View 绘制

void CEXP511View::OnDraw(CDC* pDC)
{
	CEXP511Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	CRect rect;
	GetClientRect(&rect);
	if (r == IDOK)
	{
		CImage mge;
		mge.Load(filename);
		sx = (rect.Width() - mge.GetWidth()) / 2;
		sy = (rect.Height() - mge.GetHeight()) / 2;
		mge.Draw(pDC->m_hDC, sx, sy, mge.GetWidth(), mge.GetHeight());
		dc.TextOutW(0, 100, filename);
	}

}


// CEXP511View 诊断

#ifdef _DEBUG
void CEXP511View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP511View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP511Doc* CEXP511View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP511Doc)));
	return (CEXP511Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP511View 消息处理程序


void CEXP511View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
    CClientDC dc(this);
	CFileDialog cfd(true);
	r = cfd.DoModal();
	filename = cfd.GetPathName();
	dc.TextOutW(0, 100, filename);
	Invalidate();
}
