
// Dlg0420.23View.h : CDlg042023View ��Ľӿ�
//

#pragma once


class CDlg042023View : public CView
{
protected: // �������л�����
	CDlg042023View();
	DECLARE_DYNCREATE(CDlg042023View)

// ����
public:
	CDlg042023Doc* GetDocument() const;

// ����
public:
	CRect cr;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CDlg042023View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Dlg0420.23View.cpp �еĵ��԰汾
inline CDlg042023Doc* CDlg042023View::GetDocument() const
   { return reinterpret_cast<CDlg042023Doc*>(m_pDocument); }
#endif

