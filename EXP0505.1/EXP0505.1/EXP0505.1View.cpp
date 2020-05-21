
// EXP0505.1View.cpp : CEXP05051View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CEXP05051View 构造/析构

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
	// TODO: 在此处添加构造代码

}

CEXP05051View::~CEXP05051View()
{
}

void CEXP05051View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->column5);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column6);
}

BOOL CEXP05051View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CEXP05051View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP05051Set;
	CRecordView::OnInitialUpdate();

}


// CEXP05051View 诊断

#ifdef _DEBUG
void CEXP05051View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP05051View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP05051Doc* CEXP05051View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP05051Doc)));
	return (CEXP05051Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP05051View 数据库支持
CRecordset* CEXP05051View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP05051View 消息处理程序


void CEXP05051View::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
