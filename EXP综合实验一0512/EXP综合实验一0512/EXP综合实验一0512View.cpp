
// EXP�ۺ�ʵ��һ0512View.cpp : CEXP�ۺ�ʵ��һ0512View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP�ۺ�ʵ��һ0512.h"
#endif

#include "EXP�ۺ�ʵ��һ0512Set.h"
#include "EXP�ۺ�ʵ��һ0512Doc.h"
#include "EXP�ۺ�ʵ��һ0512View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP�ۺ�ʵ��һ0512View

IMPLEMENT_DYNCREATE(CEXP�ۺ�ʵ��һ0512View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP�ۺ�ʵ��һ0512View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CEXP�ۺ�ʵ��һ0512View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CEXP�ۺ�ʵ��һ0512View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CEXP�ۺ�ʵ��һ0512View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CEXP�ۺ�ʵ��һ0512View::OnRecordLast)
END_MESSAGE_MAP()

// CEXP�ۺ�ʵ��һ0512View ����/����

CEXP�ۺ�ʵ��һ0512View::CEXP�ۺ�ʵ��һ0512View()
	: CRecordView(IDD_EXP0512_FORM)
	, Name(_T(""))
	, StuNum(_T(""))
	, Major(_T(""))
	, Sex(_T(""))
	, Birth(0)
	, Phone(_T(""))
	, Home(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CEXP�ۺ�ʵ��һ0512View::~CEXP�ۺ�ʵ��һ0512View()
{
}

void CEXP�ۺ�ʵ��һ0512View::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column6);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->column7);
	Invalidate();
}

BOOL CEXP�ۺ�ʵ��һ0512View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CEXP�ۺ�ʵ��һ0512View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP�ۺ�ʵ��һ0512Set;
	CRecordView::OnInitialUpdate();

}


// CEXP�ۺ�ʵ��һ0512View ���

#ifdef _DEBUG
void CEXP�ۺ�ʵ��һ0512View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP�ۺ�ʵ��һ0512View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP�ۺ�ʵ��һ0512Doc* CEXP�ۺ�ʵ��һ0512View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP�ۺ�ʵ��һ0512Doc)));
	return (CEXP�ۺ�ʵ��һ0512Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP�ۺ�ʵ��һ0512View ���ݿ�֧��
CRecordset* CEXP�ۺ�ʵ��һ0512View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP�ۺ�ʵ��һ0512View ��Ϣ�������


void CEXP�ۺ�ʵ��һ0512View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	
}


void CEXP�ۺ�ʵ��һ0512View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	
}


void CEXP�ۺ�ʵ��һ0512View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);

}


void CEXP�ۺ�ʵ��һ0512View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);

}

void CEXP�ۺ�ʵ��һ0512View::draw_pic(CString file)
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



void CEXP�ۺ�ʵ��һ0512View::OnDraw(CDC* /*pDC*/)
{
	// TODO: �ڴ����ר�ô����/����û���
	CString filename;
	filename = m_pSet->column8;
	draw_pic(filename);
}
