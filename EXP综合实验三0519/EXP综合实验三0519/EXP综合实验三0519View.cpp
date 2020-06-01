
// EXP综合实验三0519View.cpp : CEXP综合实验三0519View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "EXP综合实验三0519.h"
#endif

#include "EXP综合实验三0519Set.h"
#include "EXP综合实验三0519Doc.h"
#include "EXP综合实验三0519View.h"
#include"ADD_DLG.h"
#include"EDIT_DLG.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP综合实验三0519View

IMPLEMENT_DYNCREATE(CEXP综合实验三0519View, CRecordView)

BEGIN_MESSAGE_MAP(CEXP综合实验三0519View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON3, &CEXP综合实验三0519View::OnBnClickedButton3)
	ON_BN_CLICKED(IDABORT, &CEXP综合实验三0519View::OnBnClickedAbort)
	ON_BN_CLICKED(IDC_BUTTON2, &CEXP综合实验三0519View::OnBnClickedButton2)
END_MESSAGE_MAP()

// CEXP综合实验三0519View 构造/析构

CEXP综合实验三0519View::CEXP综合实验三0519View()
	: CRecordView(IDD_EXP0519_FORM)
	, i(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

CEXP综合实验三0519View::~CEXP综合实验三0519View()
{
}

void CEXP综合实验三0519View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL CEXP综合实验三0519View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void CEXP综合实验三0519View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_EXP综合实验三0519Set;
	CRecordView::OnInitialUpdate();

}


// CEXP综合实验三0519View 诊断

#ifdef _DEBUG
void CEXP综合实验三0519View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CEXP综合实验三0519View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CEXP综合实验三0519Doc* CEXP综合实验三0519View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEXP综合实验三0519Doc)));
	return (CEXP综合实验三0519Doc*)m_pDocument;
}
#endif //_DEBUG


// CEXP综合实验三0519View 数据库支持
CRecordset* CEXP综合实验三0519View::OnGetRecordset()
{
	return m_pSet;
}



// CEXP综合实验三0519View 消息处理程序


void CEXP综合实验三0519View::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}


void CEXP综合实验三0519View::OnBnClickedAbort()
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK) {
		long i = adddlg.ii;
		m_pSet->AddNew();
		m_pSet->m_1 = i;
		m_pSet->Update();
		UpdateData(false);
	}
}


void CEXP综合实验三0519View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	EDIT_DLG editdlg;
	int r = editdlg.DoModal();
	if (r == IDOK) {
		long i = editdlg.iii;
		m_pSet->Edit();
		m_pSet->m_1 = i;
		m_pSet->Update();
		UpdateData(false);
	}
}
