
// Dlg0414.11View.h : CDlg041411View ��Ľӿ�
//

#pragma once


class CDlg041411View : public CView
{
protected: // �������л�����
	CDlg041411View();
	DECLARE_DYNCREATE(CDlg041411View)

// ����
public:
	CDlg041411Doc* GetDocument() const;

// ����
public:
	CString filename;
	int r;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CDlg041411View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopdialog();
};

#ifndef _DEBUG  // Dlg0414.11View.cpp �еĵ��԰汾
inline CDlg041411Doc* CDlg041411View::GetDocument() const
   { return reinterpret_cast<CDlg041411Doc*>(m_pDocument); }
#endif

