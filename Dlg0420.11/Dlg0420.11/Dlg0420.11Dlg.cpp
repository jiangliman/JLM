
// Dlg0420.11Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Dlg0420.11.h"
#include "Dlg0420.11Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CDlg042011Dlg �Ի���



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


// CDlg042011Dlg ��Ϣ�������

BOOL CDlg042011Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CDlg042011Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CDlg042011Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CDlg042011Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	z1 = x1 + x2;
	UpdateData(false);
}


void CDlg042011Dlg::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	if (x2 == 0) {
		MessageBox(_T("��������Ϊ0!"));
	}
	else
	{
		z4 = x1 / x2;
	}
	UpdateData(false);
}


void CDlg042011Dlg::OnEnChangeEdit8()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CDlg042011Dlg::OnEnChangeEdit5()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CDlg042011Dlg::OnEnChangeEdit9()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CDlg042011Dlg::OnEnChangeEdit2()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CDlg042011Dlg::OnEnChangeEdit6()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CDlg042011Dlg::OnEnChangeEdit10()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CDlg042011Dlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	z2 = x1 - x2;
	UpdateData(false);
}


void CDlg042011Dlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	z3 = x1 * x2;
	UpdateData(false);
}


void CDlg042011Dlg::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	if (x1<0 && x2<0) {
		MessageBox(_T("������������С��0��"));
	}
	if (x1<0 && x2>=0) {
		MessageBox(_T("������������С��0��"));
		z7 = sqrt(x2);
		
	}
	if (x1>=0 && x2<0) {
		MessageBox(_T("������������С��0��"));
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	if (x1 != 0 && x2 == 0) {
		MessageBox(_T("0û�е�����"));
		z6 = 1 / x1;
		
	}
	if (x1 == 0 && x2 != 0) {
		MessageBox(_T("0û�е�����"));
		z9 = 1 / x2;
		
	}
	if (x1 == 0 && x2 == 0) {
		MessageBox(_T("0û�е�����"));
		
	}
	else {
		z6 = 1 / x1;
		z9 = 1 / x2;
	}
	UpdateData(false);
}
