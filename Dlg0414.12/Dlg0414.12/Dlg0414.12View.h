
// Dlg0414.12View.h : CDlg041412View ��Ľӿ�
//

#pragma once


class CDlg041412View : public CView
{
protected: // �������л�����
	CDlg041412View();
	DECLARE_DYNCREATE(CDlg041412View)

// ����
public:
	CDlg041412Doc* GetDocument() const;

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
	virtual ~CDlg041412View();
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

#ifndef _DEBUG  // Dlg0414.12View.cpp �еĵ��԰汾
inline CDlg041412Doc* CDlg041412View::GetDocument() const
   { return reinterpret_cast<CDlg041412Doc*>(m_pDocument); }
#endif

