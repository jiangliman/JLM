
// Dlg0414.10View.h : CDlg041410View ��Ľӿ�
//

#pragma once


class CDlg041410View : public CView
{
protected: // �������л�����
	CDlg041410View();
	DECLARE_DYNCREATE(CDlg041410View)

// ����
public:
	CDlg041410Doc* GetDocument() const;

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
	virtual ~CDlg041410View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnMButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Dlg0414.10View.cpp �еĵ��԰汾
inline CDlg041410Doc* CDlg041410View::GetDocument() const
   { return reinterpret_cast<CDlg041410Doc*>(m_pDocument); }
#endif

