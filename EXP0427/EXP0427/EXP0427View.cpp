
// EXP0427View.cpp : CEXP0427View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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



// CEXP0427View ����/����

CEXP0427View::CEXP0427View()
{
	// TODO: �ڴ˴���ӹ������

}

CEXP0427View::~CEXP0427View()
{
}

BOOL CEXP0427View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CEXP0427View ����

void CEXP0427View::OnDraw(CDC* /*pDC*/)
{
	CEXP0427Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEXP0427View ���

#ifdef _DEBUG
void CEXP0427View::AssertValid() const
{
	CView::AssertValid();
}

void CEXP0427View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEXP0427Doc* CEXP0427View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP0427Doc)));
	return (CEXP0427Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP0427View ��Ϣ�������





BEGIN_MESSAGE_MAP(CEXP0427View, CView)
	ON_COMMAND(ID_Popout, &CEXP0427View::OnPopout)
END_MESSAGE_MAP()


void CEXP0427View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {

	}
}
