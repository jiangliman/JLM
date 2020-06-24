
// EXP综合实验0526View.cpp : CEXP综合实验0526View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP综合实验0526.h"
#endif

#include "EXP综合实验0526Set.h"
#include "EXP综合实验0526Doc.h"
#include "EXP综合实验0526View.h"
#include"highlightshow.h"
#include"MYADD.h"
#include"MYEDIT.h"
#include"MYSELECT.h"
#include"MYSORT.h"
#include"MYRECORD.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP综合实验0526View

IMPLEMENT_DYNCREATE(CEXP综合实验0526View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP综合实验0526View, CRecordView)
	ON_EN_CHANGE(IDC_EDIT8, &CEXP综合实验0526View::OnEnChangeEdit8)
	ON_COMMAND(ID_RECORD_FIRST, &CEXP综合实验0526View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CEXP综合实验0526View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CEXP综合实验0526View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CEXP综合实验0526View::OnRecordLast)
	ON_BN_CLICKED(IDC_Delete, &CEXP综合实验0526View::OnBnClickedDelete)
	ON_BN_CLICKED(IDC_showpicture, &CEXP综合实验0526View::OnBnClickedshowpicture)
	ON_BN_CLICKED(IDC_Add, &CEXP综合实验0526View::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_Edit, &CEXP综合实验0526View::OnBnClickedEdit)
	ON_COMMAND(ID_select, &CEXP综合实验0526View::Onselect)
	ON_COMMAND(ID_sort, &CEXP综合实验0526View::Onsort)
	ON_COMMAND(ID_record, &CEXP综合实验0526View::Onrecord)
	ON_COMMAND(ID_restore, &CEXP综合实验0526View::Onrestore)
END_MESSAGE_MAP()

// CEXP综合实验0526View 构造/析构

CEXP综合实验0526View::CEXP综合实验0526View()
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
	// TODO: 在此处添加构造代码

}

CEXP综合实验0526View::~CEXP综合实验0526View()
{
}

void CEXP综合实验0526View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
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

BOOL CEXP综合实验0526View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CEXP综合实验0526View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP综合实验0526Set;
	CRecordView::OnInitialUpdate();

}


// CEXP综合实验0526View 诊断

#ifdef _DEBUG
void CEXP综合实验0526View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP综合实验0526View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP综合实验0526Doc* CEXP综合实验0526View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP综合实验0526Doc)));
	return (CEXP综合实验0526Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP综合实验0526View 数据库支持
CRecordset* CEXP综合实验0526View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP综合实验0526View 消息处理程序


void CEXP综合实验0526View::OnEnChangeEdit8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

void CEXP综合实验0526View::draw_pic(CString file)
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



void CEXP综合实验0526View::OnDraw(CDC* /*pDC*/)
{
	// TODO: 在此添加专用代码和/或调用基类
	CString filename;
	filename = m_pSet->column8;
	draw_pic(filename);
}


void CEXP综合实验0526View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
}


void CEXP综合实验0526View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
}


void CEXP综合实验0526View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);
}


void CEXP综合实验0526View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
}

void CEXP综合实验0526View::OnBnClickedshowpicture()
{
	// TODO: 在此添加控件通知处理程序代码
	highlightshow showdlg;
	showdlg.FileName = m_pSet->column8;
	int r = showdlg.DoModal();
	if (r == IDOK)
	{
	}
}



void CEXP综合实验0526View::OnBnClickedDelete()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);

}





void CEXP综合实验0526View::OnBnClickedAdd()
{
	// TODO: 在此添加控件通知处理程序代码
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


void CEXP综合实验0526View::OnBnClickedEdit()
{
	// TODO: 在此添加控件通知处理程序代码
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


void CEXP综合实验0526View::Onselect()
{
	// TODO: 在此添加命令处理程序代码
	MYSELECT selectdlg;
	int r = selectdlg.DoModal();
	if (r == IDOK)
	{

		m_pSet->m_strFilter.Format(_T("%s"), selectdlg.select);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CEXP综合实验0526View::Onsort()
{
	// TODO: 在此添加命令处理程序代码
	MYSORT sortdlg;
	int r = sortdlg.DoModal();
	if (r == IDOK)
	{
		m_pSet->m_strSort.Format(_T("%s"), sortdlg.sort);
		m_pSet->Requery();
		UpdateData(false);
	}
}


void CEXP综合实验0526View::Onrecord()
{
	// TODO: 在此添加命令处理程序代码
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


void CEXP综合实验0526View::Onrestore()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->m_strFilter.Format(_T(""));
	m_pSet->m_strSort.Format(_T(""));
	m_pSet->Requery();
	UpdateData(false);
}
