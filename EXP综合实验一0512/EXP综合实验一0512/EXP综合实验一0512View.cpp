
// EXP综合实验一0512View.cpp : CEXP综合实验一0512View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP综合实验一0512.h"
#endif

#include "EXP综合实验一0512Set.h"
#include "EXP综合实验一0512Doc.h"
#include "EXP综合实验一0512View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP综合实验一0512View

IMPLEMENT_DYNCREATE(CEXP综合实验一0512View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP综合实验一0512View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &CEXP综合实验一0512View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &CEXP综合实验一0512View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &CEXP综合实验一0512View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &CEXP综合实验一0512View::OnRecordLast)
END_MESSAGE_MAP()

// CEXP综合实验一0512View 构造/析构

CEXP综合实验一0512View::CEXP综合实验一0512View()
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
	// TODO: 在此处添加构造代码

}

CEXP综合实验一0512View::~CEXP综合实验一0512View()
{
}

void CEXP综合实验一0512View::DoDataExchange(CDataExchange* pDX)
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
	Invalidate();
}

BOOL CEXP综合实验一0512View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CEXP综合实验一0512View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP综合实验一0512Set;
	CRecordView::OnInitialUpdate();

}


// CEXP综合实验一0512View 诊断

#ifdef _DEBUG
void CEXP综合实验一0512View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP综合实验一0512View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP综合实验一0512Doc* CEXP综合实验一0512View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP综合实验一0512Doc)));
	return (CEXP综合实验一0512Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP综合实验一0512View 数据库支持
CRecordset* CEXP综合实验一0512View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP综合实验一0512View 消息处理程序


void CEXP综合实验一0512View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	
}


void CEXP综合实验一0512View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF()) {
		m_pSet->MoveFirst();
	}
	UpdateData(false);
	
}


void CEXP综合实验一0512View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF()) {
		m_pSet->MoveLast();
	}
	UpdateData(false);

}


void CEXP综合实验一0512View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);

}

void CEXP综合实验一0512View::draw_pic(CString file)
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



void CEXP综合实验一0512View::OnDraw(CDC* /*pDC*/)
{
	// TODO: 在此添加专用代码和/或调用基类
	CString filename;
	filename = m_pSet->column8;
	draw_pic(filename);
}
