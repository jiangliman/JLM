
// EXP�ۺ�ʵ���0518.1View.cpp : CEXP�ۺ�ʵ���05181View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP�ۺ�ʵ���0518.1.h"
#endif

#include "EXP�ۺ�ʵ���0518.1Set.h"
#include "EXP�ۺ�ʵ���0518.1Doc.h"
#include "EXP�ۺ�ʵ���0518.1View.h"
#include"MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP�ۺ�ʵ���05181View

IMPLEMENT_DYNCREATE(CEXP�ۺ�ʵ���05181View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP�ۺ�ʵ���05181View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT7, &CEXP�ۺ�ʵ���05181View::OnEnChangeEdit7)
	ON_COMMAND(ID_RECORD_FIRST, &CEXP�ۺ�ʵ���05181View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CEXP�ۺ�ʵ���05181View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CEXP�ۺ�ʵ���05181View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CEXP�ۺ�ʵ���05181View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &CEXP�ۺ�ʵ���05181View::OnBnClickedButton1)
END_MESSAGE_MAP()

// CEXP�ۺ�ʵ���05181View ����/����

CEXP�ۺ�ʵ���05181View::CEXP�ۺ�ʵ���05181View()
	: CRecordView(IDD_EXP05181_FORM)
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

CEXP�ۺ�ʵ���05181View::~CEXP�ۺ�ʵ���05181View()
{
}

void CEXP�ۺ�ʵ���05181View::DoDataExchange(CDataExchange* pDX)
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

BOOL CEXP�ۺ�ʵ���05181View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CEXP�ۺ�ʵ���05181View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP�ۺ�ʵ���05181Set;
	CRecordView::OnInitialUpdate();

}


// CEXP�ۺ�ʵ���05181View ���

#ifdef _DEBUG
void CEXP�ۺ�ʵ���05181View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP�ۺ�ʵ���05181View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP�ۺ�ʵ���05181Doc* CEXP�ۺ�ʵ���05181View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP�ۺ�ʵ���05181Doc)));
	return (CEXP�ۺ�ʵ���05181Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP�ۺ�ʵ���05181View ���ݿ�֧��
CRecordset* CEXP�ۺ�ʵ���05181View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP�ۺ�ʵ���05181View ��Ϣ�������


void CEXP�ۺ�ʵ���05181View::OnEnChangeEdit7()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CEXP�ۺ�ʵ���05181View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
}


void CEXP�ۺ�ʵ���05181View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CEXP�ۺ�ʵ���05181View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
}


void CEXP�ۺ�ʵ���05181View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
}
void CEXP�ۺ�ʵ���05181View::draw_pic(CString file)
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



void CEXP�ۺ�ʵ���05181View::OnDraw(CDC* /*pDC*/)
{
	// TODO: �ڴ����ר�ô����/����û���
	CString filename;
	filename = m_pSet->column8;
	draw_pic(filename);
}


void CEXP�ۺ�ʵ���05181View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	MyDlg dlg;
	dlg.picname = m_pSet->column8;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
	  }
}
