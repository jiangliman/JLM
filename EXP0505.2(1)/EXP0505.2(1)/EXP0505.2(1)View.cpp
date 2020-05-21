
// EXP0505.2(1)View.cpp : CEXP050521View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0505.2(1).h"
#endif

#include "EXP0505.2(1)Set.h"
#include "EXP0505.2(1)Doc.h"
#include "EXP0505.2(1)View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP050521View

IMPLEMENT_DYNCREATE(CEXP050521View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP050521View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CEXP050521View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CEXP050521View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CEXP050521View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CEXP050521View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &CEXP050521View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CEXP050521View ����/����

CEXP050521View::CEXP050521View()
	: CRecordView(IDD_EXP050521_FORM)
	, Name(_T(""))
	, Sex(_T(""))
	, StuNum(_T(""))
	, Old(_T(""))
	, Phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CEXP050521View::~CEXP050521View()
{
}

void CEXP050521View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column5);
	Invalidate();
}

BOOL CEXP050521View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CEXP050521View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP050521Set;
	CRecordView::OnInitialUpdate();

}


// CEXP050521View ���

#ifdef _DEBUG
void CEXP050521View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP050521View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP050521Doc* CEXP050521View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP050521Doc)));
	return (CEXP050521Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP050521View ���ݿ�֧��
CRecordset* CEXP050521View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP050521View ��Ϣ�������


void CEXP050521View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
}


void CEXP050521View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
}


void CEXP050521View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
}


void CEXP050521View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
}

void CEXP050521View::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);
	float rect_radio = 1.0 * rect.Width() / rect.Height();
	float image_radio = 1.0 * img.GetWidth() / img.GetHeight();
	if (rect_radio > image_radio)
	{
		h = rect.Height();
		w = image_radio * h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / image_radio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	ReleaseDC(pDC);
}

void CEXP050521View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString filename;
	filename = m_pSet->column6;
	draw_pic(filename);

}
