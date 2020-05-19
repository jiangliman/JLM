
// UsingWin32View.cpp : CUsingWin32View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "UsingWin32.h"
#endif

#include "UsingWin32Doc.h"
#include "UsingWin32View.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"Win32.1.h"
// CUsingWin32View

IMPLEMENT_DYNCREATE(CUsingWin32View, CView)

BEGIN_MESSAGE_MAP(CUsingWin32View, CView)
END_MESSAGE_MAP()

// CUsingWin32View 构造/析构

CUsingWin32View::CUsingWin32View()
{
	// TODO: 在此处添加构造代码

}

CUsingWin32View::~CUsingWin32View()
{
}

BOOL CUsingWin32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsingWin32View 绘制

void CUsingWin32View::OnDraw(CDC* pDC)
{
	CUsingWin32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	s.Format(_T("非负整数5的阶乘结果为%d"),factorial(5));
	pDC->TextOutW(10, 10, s);
}


// CUsingWin32View 诊断

#ifdef _DEBUG
void CUsingWin32View::AssertValid() const
{
	CView::AssertValid();
}

void CUsingWin32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingWin32Doc* CUsingWin32View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingWin32Doc)));
	return (CUsingWin32Doc*)m_pDocument;
}
#endif //_DEBUG


// CUsingWin32View 消息处理程序
