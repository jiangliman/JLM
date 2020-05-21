
// EXP0504View.cpp : CEXP0504View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0504.h"
#endif

#include "EXP0504Set.h"
#include "EXP0504Doc.h"
#include "EXP0504View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP0504View

IMPLEMENT_DYNCREATE(CEXP0504View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP0504View, CRecordView)
END_MESSAGE_MAP()

// CEXP0504View ����/����

CEXP0504View::CEXP0504View()
	: CRecordView(IDD_EXP0504_FORM)
	, ID(0)
	, name(_T(""))
	, stunumber(_T(""))
	, old(0)
	, phone(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CEXP0504View::~CEXP0504View()
{
}

void CEXP0504View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column4);
}

BOOL CEXP0504View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CEXP0504View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP0504Set;
	CRecordView::OnInitialUpdate();

}


// CEXP0504View ���

#ifdef _DEBUG
void CEXP0504View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP0504View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP0504Doc* CEXP0504View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP0504Doc)));
	return (CEXP0504Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP0504View ���ݿ�֧��
CRecordset* CEXP0504View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP0504View ��Ϣ�������
