
// EXP0505.3View.cpp : CEXP05053View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP0505.3.h"
#endif

#include "EXP0505.3Set.h"
#include "EXP0505.3Doc.h"
#include "EXP0505.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP05053View

IMPLEMENT_DYNCREATE(CEXP05053View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP05053View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CEXP05053View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CEXP05053View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CEXP05053View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CEXP05053View::OnRecordLast)
END_MESSAGE_MAP()

// CEXP05053View ����/����

CEXP05053View::CEXP05053View()
	: CRecordView(IDD_EXP05053_FORM)
	, Name(_T(""))
	, Sex(_T(""))
	, StuNum(_T(""))
	, Old(_T(""))
	, Phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CEXP05053View::~CEXP05053View()
{
}

void CEXP05053View::DoDataExchange(CDataExchange* pDX)
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

BOOL CEXP05053View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CEXP05053View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP05053Set;
	CRecordView::OnInitialUpdate();

}


// CEXP05053View ���

#ifdef _DEBUG
void CEXP05053View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP05053View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP05053Doc* CEXP05053View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP05053Doc)));
	return (CEXP05053Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP05053View ���ݿ�֧��
CRecordset* CEXP05053View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP05053View ��Ϣ�������


void CEXP05053View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	CString filename;
	filename = m_pSet->column6;
	draw_pic(filename);
}


void CEXP05053View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	CString filename;
	filename = m_pSet->column6;
	draw_pic(filename);
}


void CEXP05053View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
	CString filename;
	filename = m_pSet->column6;
	draw_pic(filename);
	
}


void CEXP05053View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	CString filename;
	filename = m_pSet->column6;
	draw_pic(filename);
}

void CEXP05053View::draw_pic(CString file)
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


void CEXP05053View::OnDraw(CDC* /*pDC*/)
{
	// TODO: �ڴ����ר�ô����/����û���
	CString filename;
	filename = m_pSet->column6;
	draw_pic(filename);
}
