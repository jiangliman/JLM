
// EXP0427.0View.cpp : CEXP04270View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CEXP04270View ����/����

CEXP04270View::CEXP04270View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP04270View::~CEXP04270View()
{
}

BOOL CEXP04270View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP04270View ����

void CEXP04270View::OnDraw(CDC* pDC)
{
	CEXP04270Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	
}


// CEXP04270View ���

#ifdef _DEBUG
void CEXP04270View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP04270View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP04270Doc* CEXP04270View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP04270Doc)));
	return (CEXP04270Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP04270View ��Ϣ�������


void CEXP04270View::OnFileOpen()
{
	// TODO: �ڴ���������������
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
	// TODO: �ڴ���������������
	
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


