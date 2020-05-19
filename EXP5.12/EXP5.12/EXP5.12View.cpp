
// EXP5.12View.cpp : CEXP512View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP5.12.h"
#endif

#include "EXP5.12Doc.h"
#include "EXP5.12View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP512View

IMPLEMENT_DYNCREATE(CEXP512View, CView)

BEGIN_MESSAGE_MAP(CEXP512View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CEXP512View::OnFileOpen)
END_MESSAGE_MAP()

// CEXP512View 构造/析构

CEXP512View::CEXP512View()
{
	// TODO: 在此处添加构造代码

}

CEXP512View::~CEXP512View()
{
}

BOOL CEXP512View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP512View 绘制

void CEXP512View::OnDraw(CDC* pDC)
{
	CEXP512Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	CRect rect;
	GetClientRect(&rect);
	if (r == IDOK)
	{

		CImage img;
		img.Load(filename);
		{CRect rect;
		GetClientRect(&rect);
		float rect_ratio = 1.0*rect.Width() / rect.Height();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

		if (rect_ratio > img_ratio)
		{
			h = rect.Height();
			w = img_ratio*h;
			sx = (rect.Width() - w) / 2;
			sy = 0;
		}
		else
		{
			w = rect.Width();
			h = w / img_ratio;
			sx = 0;
			sy = (rect.Height() - h) / 2;

		}
		}
		img.Draw(dc.m_hDC, sx, sy, w, h);
		dc.TextOutW(0, 100, filename);
	}
}


// CEXP512View 诊断

#ifdef _DEBUG
void CEXP512View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP512View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP512Doc* CEXP512View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP512Doc)));
	return (CEXP512Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP512View 消息处理程序


void CEXP512View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	r = cfd.DoModal();
	CClientDC dc(this);
	filename = cfd.GetPathName();
	dc.TextOutW(0, 100, filename);
	Invalidate();
}
