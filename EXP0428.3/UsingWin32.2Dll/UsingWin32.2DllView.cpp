
// UsingWin32.2DllView.cpp : CUsingWin322DllView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "UsingWin32.2Dll.h"
#endif

#include "UsingWin32.2DllDoc.h"
#include "UsingWin32.2DllView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#include"Win32.3.h"


// CUsingWin322DllView

IMPLEMENT_DYNCREATE(CUsingWin322DllView, CView)

BEGIN_MESSAGE_MAP(CUsingWin322DllView, CView)
END_MESSAGE_MAP()

// CUsingWin322DllView 构造/析构

CUsingWin322DllView::CUsingWin322DllView()
{
	// TODO: 在此处添加构造代码

}

CUsingWin322DllView::~CUsingWin322DllView()
{
}

BOOL CUsingWin322DllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CUsingWin322DllView 绘制

void CUsingWin322DllView::OnDraw(CDC* pDC)
{
	CUsingWin322DllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	s.Format(_T("非负整数5的阶乘结果为%d"), factorial(5));
	pDC->TextOutW(10, 10, s);
	CString ss;
	FAC fac;
	ss.Format(_T("角度值30.0转化为弧度值为%f"), fac.convert(30.0));
	pDC->TextOutW(10, 50, ss);

}


// CUsingWin322DllView 诊断

#ifdef _DEBUG
void CUsingWin322DllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingWin322DllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingWin322DllDoc* CUsingWin322DllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingWin322DllDoc)));
	return (CUsingWin322DllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingWin322DllView 消息处理程序
