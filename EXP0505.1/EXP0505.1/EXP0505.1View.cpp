
// EXP0505.1View.cpp : CEXP05051View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0505.1.h"
#endif

#include "EXP0505.1Set.h"
#include "EXP0505.1Doc.h"
#include "EXP0505.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP05051View

IMPLEMENT_DYNCREATE(CEXP05051View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP05051View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT2, &CEXP05051View::OnEnChangeEdit2)
END_MESSAGE_MAP()

// CEXP05051View ����/����

CEXP05051View::CEXP05051View()
	: CRecordView(IDD_EXP05051_FORM)
	, Name(_T(""))
	, Sex(_T(""))
	, StuNum(_T(""))
	, Old(_T(""))
	, Phone(_T(""))
	, PicWay(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CEXP05051View::~CEXP05051View()
{
}

void CEXP05051View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column6);
}

BOOL CEXP05051View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CEXP05051View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP05051Set;
	CRecordView::OnInitialUpdate();

}


// CEXP05051View ���

#ifdef _DEBUG
void CEXP05051View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP05051View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP05051Doc* CEXP05051View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP05051Doc)));
	return (CEXP05051Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP05051View ���ݿ�֧��
CRecordset* CEXP05051View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP05051View ��Ϣ�������


void CEXP05051View::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
