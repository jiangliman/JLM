#pragma once


// highlightshow �Ի���

class highlightshow : public CDialogEx
{
	DECLARE_DYNAMIC(highlightshow)

public:
	CString FileName;
	highlightshow(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~highlightshow();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual void draw_pic(CString file);
};
