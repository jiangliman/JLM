
// EXP�ۺ�ʵ��0526View.cpp : CEXP�ۺ�ʵ��0526View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP�ۺ�ʵ��0526.h"
#endif

#include "EXP�ۺ�ʵ��0526Set.h"
#include "EXP�ۺ�ʵ��0526Doc.h"
#include "EXP�ۺ�ʵ��0526View.h"
#include"highlightshow.h"
#include"MYADD.h"
#include"MYEDIT.h"
#include"MYSELECT.h"
#include"MYSORT.h"
#include"MYRECORD.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP�ۺ�ʵ��0526View

IMPLEMENT_DYNCREATE(CEXP�ۺ�ʵ��0526View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP�ۺ�ʵ��0526View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT8, &CEXP�ۺ�ʵ��0526View::OnEnChangeEdit8)
	ON_COMMAND(ID_RECORD_FIRST, &CEXP�ۺ�ʵ��0526View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CEXP�ۺ�ʵ��0526View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CEXP�ۺ�ʵ��0526View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CEXP�ۺ�ʵ��0526View::OnRecordLast)
	ON_BN_CLICKED(IDC_Delete, &CEXP�ۺ�ʵ��0526View::OnBnClickedDelete)
	ON_BN_CLICKED(IDC_showpicture, &CEXP�ۺ�ʵ��0526View::OnBnClickedshowpicture)
	ON_BN_CLICKED(IDC_Add, &CEXP�ۺ�ʵ��0526View::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_Edit, &CEXP�ۺ�ʵ��0526View::OnBnClickedEdit)
	ON_COMMAND(ID_select, &CEXP�ۺ�ʵ��0526View::Onselect)
	ON_COMMAND(ID_sort, &CEXP�ۺ�ʵ��0526View::Onsort)
	ON_COMMAND(ID_record, &CEXP�ۺ�ʵ��0526View::Onrecord)
	ON_COMMAND(ID_restore, &CEXP�ۺ�ʵ��0526View::Onrestore)
END_MESSAGE_MAP()

// CEXP�ۺ�ʵ��0526View ����/����

CEXP�ۺ�ʵ��0526View::CEXP�ۺ�ʵ��0526View()
	: CRecordView(IDD_EXP0526_FORM)
	, Name(_T(""))
	, StuNum(0)
	, Major(_T(""))
	, Sex(_T(""))
	, Birth(0)
	, Phone(0)
	, Home(_T(""))
	, Picture(_T(""))
	, StuNumber(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CEXP�ۺ�ʵ��0526View::~CEXP�ۺ�ʵ��0526View()
{
}

void CEXP�ۺ�ʵ��0526View::DoDataExchange(CDataExchange* pDX)
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

BOOL CEXP�ۺ�ʵ��0526View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CEXP�ۺ�ʵ��0526View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP�ۺ�ʵ��0526Set;
	CRecordView::OnInitialUpdate();

}


// CEXP�ۺ�ʵ��0526View ���

#ifdef _DEBUG
void CEXP�ۺ�ʵ��0526View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP�ۺ�ʵ��0526View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP�ۺ�ʵ��0526Doc* CEXP�ۺ�ʵ��0526View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP�ۺ�ʵ��0526Doc)));
	return (CEXP�ۺ�ʵ��0526Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP�ۺ�ʵ��0526View ���ݿ�֧��
CRecordset* CEXP�ۺ�ʵ��0526View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP�ۺ�ʵ��0526View ��Ϣ�������


void CEXP�ۺ�ʵ��0526View::OnEnChangeEdit8()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CRecordView::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}

void CEXP�ۺ�ʵ��0526View::draw_pic(CString file)
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



void CEXP�ۺ�ʵ��0526View::OnDraw(CDC* /*pDC*/)
{
	// TODO: �ڴ����ר�ô����/����û���
	CString filename;
	filename = m_pSet->column8;
	draw_pic(filename);
}


void CEXP�ۺ�ʵ��0526View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
}


void CEXP�ۺ�ʵ��0526View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
}


void CEXP�ۺ�ʵ��0526View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
}


void CEXP�ۺ�ʵ��0526View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
}

void CEXP�ۺ�ʵ��0526View::OnBnClickedshowpicture()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	highlightshow showdlg;
	showdlg.FileName = m_pSet->column8;
	int r = showdlg.DoModal();
	if (r == IDOK)
	{
	}
}



void CEXP�ۺ�ʵ��0526View::OnBnClickedDelete()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);

}





void CEXP�ۺ�ʵ��0526View::OnBnClickedAdd()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	MYADD adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK)
	{
		m_pSet->AddNew();
		m_pSet->column1 = adddlg.Name1;
		m_pSet->column2 = adddlg.StuNum1;;
		m_pSet->column3 = adddlg.Major1;
		m_pSet->column4 = adddlg.Sex1;;
		m_pSet->column5 = adddlg.Birth1;
		m_pSet->column6 = adddlg.Phone1;;
		m_pSet->column7 = adddlg.Home1;
		m_pSet->column8 = adddlg.Picture1;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CEXP�ۺ�ʵ��0526View::OnBnClickedEdit()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	MYEDIT editdlg;
	editdlg.Name2 = m_pSet->column1;
	editdlg.StuNum2 = m_pSet->column2;
	editdlg.Major2 = m_pSet->column3;
	editdlg.Sex2 = m_pSet->column4;
	editdlg.Birth2 = m_pSet->column5;
	editdlg.Phone2 = m_pSet->column6;
	editdlg.Home2 = m_pSet->column7;
	editdlg.Picture2 = m_pSet->column8;
	int r = editdlg.DoModal();
	if (r == IDOK)
	{
		m_pSet->Edit();
		m_pSet->column1 = editdlg.Name2;
		m_pSet->column2 = editdlg.StuNum2;
		m_pSet->column3 = editdlg.Major2;
		m_pSet->column4 = editdlg.Sex2;;
		m_pSet->column5 = editdlg.Birth2;
		m_pSet->column6 = editdlg.Phone2;
		m_pSet->column7 = editdlg.Home2;
		m_pSet->column8 = editdlg.Picture2;
		m_pSet->Update();
		UpdateData(false);

	}
}


void CEXP�ۺ�ʵ��0526View::Onselect()
{
	// TODO: �ڴ���������������
	MYSELECT selectdlg;
	int r = selectdlg.DoModal();
	if (r == IDOK)
	{

		m_pSet->m_strFilter.Format(_T("%s"), selectdlg.select);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CEXP�ۺ�ʵ��0526View::Onsort()
{
	// TODO: �ڴ���������������
	MYSORT sortdlg;
	int r = sortdlg.DoModal();
	if (r == IDOK)
	{
		m_pSet->m_strSort.Format(_T("%s"), sortdlg.sort);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CEXP�ۺ�ʵ��0526View::Onrecord()
{
	// TODO: �ڴ���������������
	MYRECORD recorddlg;
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
	if (r == IDOK) {
	}
}


void CEXP�ۺ�ʵ��0526View::Onrestore()
{
	// TODO: �ڴ���������������
	m_pSet->m_strFilter.Format(_T(""));
	m_pSet->m_strSort.Format(_T(""));
	m_pSet->Requery();
	UpdateData(false);
}
