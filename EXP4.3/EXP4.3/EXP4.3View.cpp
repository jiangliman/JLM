
// EXP4.3View.cpp : CEXP43View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP4.3.h"
#endif

#include "EXP4.3Doc.h"
#include "EXP4.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP43View

IMPLEMENT_DYNCREATE(CEXP43View, CView)

BEGIN_MESSAGE_MAP(CEXP43View, CView)
END_MESSAGE_MAP()

// CEXP43View 构造/析构

CEXP43View::CEXP43View()
{
	// TODO: 在此处添加构造代码
	BITMAP BM;
	m_Bitmap.LoadBitmapW(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

}

CEXP43View::~CEXP43View()
{
}

BOOL CEXP43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP43View 绘制

void CEXP43View::OnDraw(CDC* pDC)
{
	CEXP43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
}


// CEXP43View 诊断

#ifdef _DEBUG
void CEXP43View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP43Doc* CEXP43View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP43Doc)));
	return (CEXP43Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP43View 消息处理程序
