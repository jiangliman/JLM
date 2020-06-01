
// EXP�ۺ�ʵ����0519View.cpp : CEXP�ۺ�ʵ����0519View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP�ۺ�ʵ����0519.h"
#endif

#include "EXP�ۺ�ʵ����0519Set.h"
#include "EXP�ۺ�ʵ����0519Doc.h"
#include "EXP�ۺ�ʵ����0519View.h"
#include"ADD_DLG.h"
#include"EDIT_DLG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP�ۺ�ʵ����0519View

IMPLEMENT_DYNCREATE(CEXP�ۺ�ʵ����0519View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP�ۺ�ʵ����0519View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CEXP�ۺ�ʵ����0519View::OnBnClickedButton3)
	ON_BN_CLICKED(IDABORT, &CEXP�ۺ�ʵ����0519View::OnBnClickedAbort)
	ON_BN_CLICKED(IDC_BUTTON2, &CEXP�ۺ�ʵ����0519View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CEXP�ۺ�ʵ����0519View ����/����

CEXP�ۺ�ʵ����0519View::CEXP�ۺ�ʵ����0519View()
	: CRecordView(IDD_EXP0519_FORM)
	, i(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CEXP�ۺ�ʵ����0519View::~CEXP�ۺ�ʵ����0519View()
{
}

void CEXP�ۺ�ʵ����0519View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CEXP�ۺ�ʵ����0519View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CEXP�ۺ�ʵ����0519View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP�ۺ�ʵ����0519Set;
	CRecordView::OnInitialUpdate();

}


// CEXP�ۺ�ʵ����0519View ���

#ifdef _DEBUG
void CEXP�ۺ�ʵ����0519View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP�ۺ�ʵ����0519View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP�ۺ�ʵ����0519Doc* CEXP�ۺ�ʵ����0519View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP�ۺ�ʵ����0519Doc)));
	return (CEXP�ۺ�ʵ����0519Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP�ۺ�ʵ����0519View ���ݿ�֧��
CRecordset* CEXP�ۺ�ʵ����0519View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP�ۺ�ʵ����0519View ��Ϣ�������


void CEXP�ۺ�ʵ����0519View::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CEXP�ۺ�ʵ����0519View::OnBnClickedAbort()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK) {
		long i = adddlg.ii;
		m_pSet->AddNew();
		m_pSet->m_1 = i;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CEXP�ۺ�ʵ����0519View::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	EDIT_DLG editdlg;
	int r = editdlg.DoModal();
	if (r == IDOK) {
		long i = editdlg.iii;
		m_pSet->Edit();
		m_pSet->m_1 = i;
		m_pSet->Update();
		UpdateData(false);
	}
}
