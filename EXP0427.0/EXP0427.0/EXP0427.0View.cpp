
// EXP0427.0View.cpp : CEXP04270View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0427.0.h"
#endif

#include "EXP0427.0Doc.h"
#include "EXP0427.0View.h"

#include<fstream>
#include<string>
#include<iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP04270View

IMPLEMENT_DYNCREATE(CEXP04270View, CView)

BEGIN_MESSAGE_MAP(CEXP04270View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CEXP04270View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE, &CEXP04270View::OnFileSave)
END_MESSAGE_MAP()

// CEXP04270View 构造/析构

CEXP04270View::CEXP04270View()
{
	// TODO: 在此处添加构造代码

}

CEXP04270View::~CEXP04270View()
{
}

BOOL CEXP04270View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CEXP04270View 绘制

void CEXP04270View::OnDraw(CDC* pDC)
{
	CEXP04270Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	
}


// CEXP04270View 诊断

#ifdef _DEBUG
void CEXP04270View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP04270View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP04270Doc* CEXP04270View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP04270Doc)));
	return (CEXP04270Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP04270View 消息处理程序


void CEXP04270View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
   CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		filename = cfd.GetPathName();
		ifstream ifs(filename);

	}
}


void CEXP04270View::OnFileSave()
{
	// TODO: 在此添加命令处理程序代码
	
	CFileDialog cfd(false);
	CClientDC dc(this);
	int r = cfd.DoModal();
	if (r == IDOK)
	{	
		ofstream ofs(cfd.GetPathName());
		CString s = filename;
		ofs << CT2A(s.GetString()) << endl;
	}
}


