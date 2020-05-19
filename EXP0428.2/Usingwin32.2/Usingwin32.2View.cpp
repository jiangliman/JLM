
// Usingwin32.2View.cpp : CUsingwin322View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Usingwin32.2.h"
#endif

#include "Usingwin32.2Doc.h"
#include "Usingwin32.2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"Win32.2.h"


// CUsingwin322View

IMPLEMENT_DYNCREATE(CUsingwin322View, CView)

BEGIN_MESSAGE_MAP(CUsingwin322View, CView)
END_MESSAGE_MAP()

// CUsingwin322View 构造/析构

CUsingwin322View::CUsingwin322View()
{
	// TODO: 在此处添加构造代码

}

CUsingwin322View::~CUsingwin322View()
{
}

BOOL CUsingwin322View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsingwin322View 绘制

void CUsingwin322View::OnDraw(CDC* pDC)
{
	CUsingwin322Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	FAC fac;
	s.Format(_T("角度值30.0转化为弧度值为%f"), fac.convert(30.0));
	pDC->TextOutW(10, 10, s);
}


// CUsingwin322View 诊断

#ifdef _DEBUG
void CUsingwin322View::AssertValid() const
{
	CView::AssertValid();
}

void CUsingwin322View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingwin322Doc* CUsingwin322View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingwin322Doc)));
	return (CUsingwin322Doc*)m_pDocument;
}
#endif //_DEBUG


// CUsingwin322View 消息处理程序
