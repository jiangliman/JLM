
// EXP�ۺ�ʵ���0518.2Dlg.h : ͷ�ļ�
//

#pragma once


// CEXP�ۺ�ʵ���05182Dlg �Ի���
class CEXP�ۺ�ʵ���05182Dlg : public CDialogEx
{
// ����
public:
	CEXP�ۺ�ʵ���05182Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXP05182_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	virtual void draw_pic(CString file);
	
};
