
// EXP0504View.cpp : CEXP0504View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP0504.h"
#endif

#include "EXP0504Set.h"
#include "EXP0504Doc.h"
#include "EXP0504View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP0504View

IMPLEMENT_DYNCREATE(CEXP0504View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP0504View, CRecordView)
END_MESSAGE_MAP()

// CEXP0504View 构造/析构

CEXP0504View::CEXP0504View()
	: CRecordView(IDD_EXP0504_FORM)
	, ID(0)
	, name(_T(""))
	, stunumber(_T(""))
	, old(0)
	, phone(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CEXP0504View::~CEXP0504View()
{
}

void CEXP0504View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column4);
}

BOOL CEXP0504View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CEXP0504View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP0504Set;
	CRecordView::OnInitialUpdate();

}


// CEXP0504View 诊断

#ifdef _DEBUG
void CEXP0504View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP0504View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP0504Doc* CEXP0504View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP0504Doc)));
	return (CEXP0504Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP0504View 数据库支持
CRecordset* CEXP0504View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP0504View 消息处理程序
