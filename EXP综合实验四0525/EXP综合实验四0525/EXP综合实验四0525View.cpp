
// EXP�ۺ�ʵ����0525View.cpp : CEXP�ۺ�ʵ����0525View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP�ۺ�ʵ����0525.h"
#endif

#include "EXP�ۺ�ʵ����0525Set.h"
#include "EXP�ۺ�ʵ����0525Doc.h"
#include "EXP�ۺ�ʵ����0525View.h"
#include"SELECT_DLG.h"
#include"SORT_DLG.h"
#include"RECORD_DLG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP�ۺ�ʵ����0525View

IMPLEMENT_DYNCREATE(CEXP�ۺ�ʵ����0525View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP�ۺ�ʵ����0525View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT4, &CEXP�ۺ�ʵ����0525View::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT5, &CEXP�ۺ�ʵ����0525View::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT7, &CEXP�ۺ�ʵ����0525View::OnEnChangeEdit7)
	ON_COMMAND(ID_RECORD_FIRST, &CEXP�ۺ�ʵ����0525View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CEXP�ۺ�ʵ����0525View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CEXP�ۺ�ʵ����0525View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CEXP�ۺ�ʵ����0525View::OnRecordLast)
	ON_EN_CHANGE(IDC_EDIT6, &CEXP�ۺ�ʵ����0525View::OnEnChangeEdit6)
	ON_COMMAND(ID_SELECT, &CEXP�ۺ�ʵ����0525View::OnSelect)
	ON_COMMAND(ID_SORT, &CEXP�ۺ�ʵ����0525View::OnSort)
	ON_COMMAND(ID_RECORD, &CEXP�ۺ�ʵ����0525View::OnRecord)
END_MESSAGE_MAP()

// CEXP�ۺ�ʵ����0525View ����/����

CEXP�ۺ�ʵ����0525View::CEXP�ۺ�ʵ����0525View()
	: CRecordView(IDD_EXP0525_FORM)
	, Name(_T(""))
	, StuNum(_T(""))
	, Major(_T(""))
	, Sex(_T(""))
	, Birth(0)
	, Phone(_T(""))
	, Home(_T(""))
	, Picture(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CEXP�ۺ�ʵ����0525View::~CEXP�ۺ�ʵ����0525View()
{
}

void CEXP�ۺ�ʵ����0525View::DoDataExchange(CDataExchange* pDX)
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
	DDX_Text(pDX, IDC_EDIT8, m_pSet->column8);
	Invalidate();
}

BOOL CEXP�ۺ�ʵ����0525View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CEXP�ۺ�ʵ����0525View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP�ۺ�ʵ����0525Set;
	CRecordView::OnInitialUpdate();

}


// CEXP�ۺ�ʵ����0525View ���

#ifdef _DEBUG
void CEXP�ۺ�ʵ����0525View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP�ۺ�ʵ����0525View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP�ۺ�ʵ����0525Doc* CEXP�ۺ�ʵ����0525View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP�ۺ�ʵ����0525Doc)));
	return (CEXP�ۺ�ʵ����0525Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP�ۺ�ʵ����0525View ���ݿ�֧��
CRecordset* CEXP�ۺ�ʵ����0525View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP�ۺ�ʵ����0525View ��Ϣ�������


void CEXP�ۺ�ʵ����0525View::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CEXP�ۺ�ʵ����0525View::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CEXP�ۺ�ʵ����0525View::OnEnChangeEdit7()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CEXP�ۺ�ʵ����0525View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
}


void CEXP�ۺ�ʵ����0525View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
}


void CEXP�ۺ�ʵ����0525View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
}


void CEXP�ۺ�ʵ����0525View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
}

void CEXP�ۺ�ʵ����0525View::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDC_PICTURE)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_PICTURE)->GetClientRect(&rect);
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


void CEXP�ۺ�ʵ����0525View::OnDraw(CDC* /*pDC*/)
{
	// TODO: �ڴ����ר�ô����/����û���
	CString filename;
	filename = m_pSet->column8;
	draw_pic(filename);
}



void CEXP�ۺ�ʵ����0525View::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CEXP�ۺ�ʵ����0525View::OnSelect()
{
	// TODO: �ڴ���������������
	SELECT_DLG selectdlg;
	int r = selectdlg.DoModal();
	if (r == IDOK)
	{

		m_pSet->m_strFilter.Format(_T("%s"), selectdlg.select);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CEXP�ۺ�ʵ����0525View::OnSort()
{
	// TODO: �ڴ���������������
	SORT_DLG sortdlg;
	int r = sortdlg.DoModal();
	if (r == IDOK)
	{
		m_pSet->m_strSort.Format(_T("%s"), sortdlg.sort);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CEXP�ۺ�ʵ����0525View::OnRecord()
{
	// TODO: �ڴ���������������
	RECORD_DLG recorddlg;
	CString s1, s;
	m_pSet->MoveFirst();
	while (!m_pSet->IsEOF())
	{
		int n = m_pSet->GetODBCFieldCount();
		for (int i = 0; i < n; i++)
		{
			m_pSet->GetFieldValue((short)i, s1);
			s += _T("   ") + s1;
		    
	}
		s += _T("\r\n");
		recorddlg.record = s;
		UpdateData(false);
		m_pSet->MoveNext();
	}
	int r = recorddlg.DoModal();
   if (r== IDOK) {
}
}
