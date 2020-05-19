
// Dlg0420.11Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Dlg0420.11.h"
#include "Dlg0420.11Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CDlg042011Dlg 对话框



CDlg042011Dlg::CDlg042011Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DLG042011_DIALOG, pParent)
	, x1(0)
	, x2(0)
	, z1(0)
	, z2(0)
	, z3(0)
	, z4(0)
	, z5(0)
	, z6(0)
	, z7(0)
	, z9(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CDlg042011Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x1);
	DDX_Text(pDX, IDC_EDIT2, x2);
	DDX_Text(pDX, IDC_EDIT7, z1);
	DDX_Text(pDX, IDC_EDIT8, z2);
	DDX_Text(pDX, IDC_EDIT4, z3);
	DDX_Text(pDX, IDC_EDIT9, z4);
	DDX_Text(pDX, IDC_EDIT10, z5);
	DDX_Text(pDX, IDC_EDIT3, z6);
	DDX_Text(pDX, IDC_EDIT6, z7);
	DDX_Text(pDX, IDC_EDIT5, z9);
}

BEGIN_MESSAGE_MAP(CDlg042011Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CDlg042011Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON4, &CDlg042011Dlg::OnBnClickedButton4)
	ON_EN_CHANGE(IDC_EDIT8, &CDlg042011Dlg::OnEnChangeEdit8)
	ON_EN_CHANGE(IDC_EDIT5, &CDlg042011Dlg::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT9, &CDlg042011Dlg::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT2, &CDlg042011Dlg::OnEnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT6, &CDlg042011Dlg::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT10, &CDlg042011Dlg::OnEnChangeEdit10)
	ON_BN_CLICKED(IDC_BUTTON3, &CDlg042011Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, &CDlg042011Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON7, &CDlg042011Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON6, &CDlg042011Dlg::OnBnClickedButton6)
END_MESSAGE_MAP()


// CDlg042011Dlg 消息处理程序

BOOL CDlg042011Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CDlg042011Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CDlg042011Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CDlg042011Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CDlg042011Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	z1 = x1 + x2;
	UpdateData(false);
}


void CDlg042011Dlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	if (x2 == 0) {
		MessageBox(_T("除数不能为0!"));
	}
	else
	{
		z4 = x1 / x2;
	}
	UpdateData(false);
}


void CDlg042011Dlg::OnEnChangeEdit8()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CDlg042011Dlg::OnEnChangeEdit5()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CDlg042011Dlg::OnEnChangeEdit9()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CDlg042011Dlg::OnEnChangeEdit2()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CDlg042011Dlg::OnEnChangeEdit6()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CDlg042011Dlg::OnEnChangeEdit10()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void CDlg042011Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	z2 = x1 - x2;
	UpdateData(false);
}


void CDlg042011Dlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	z3 = x1 * x2;
	UpdateData(false);
}


void CDlg042011Dlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	if (x1<0 && x2<0) {
		MessageBox(_T("被开方数不能小于0！"));
	}
	if (x1<0 && x2>=0) {
		MessageBox(_T("被开方数不能小于0！"));
		z7 = sqrt(x2);
		
	}
	if (x1>=0 && x2<0) {
		MessageBox(_T("被开方数不能小于0！"));
		z5 = sqrt(x1);
		
	}
	else {
		z5 = sqrt(x1);
		z7 = sqrt(x2);
	}
	UpdateData(false);
}


void CDlg042011Dlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(true);
	if (x1 != 0 && x2 == 0) {
		MessageBox(_T("0没有倒数！"));
		z6 = 1 / x1;
		
	}
	if (x1 == 0 && x2 != 0) {
		MessageBox(_T("0没有倒数！"));
		z9 = 1 / x2;
		
	}
	if (x1 == 0 && x2 == 0) {
		MessageBox(_T("0没有倒数！"));
		
	}
	else {
		z6 = 1 / x1;
		z9 = 1 / x2;
	}
	UpdateData(false);
}
