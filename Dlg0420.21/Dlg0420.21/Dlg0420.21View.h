
// Dlg0420.21View.h : CDlg042021View ��Ľӿ�
//

#pragma once


class CDlg042021View : public CView
{
protected: // �������л�����
	CDlg042021View();
	DECLARE_DYNCREATE(CDlg042021View)

// ����
public:
	CDlg042021Doc* GetDocument() const;

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
	virtual ~CDlg042021View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Dlg0420.21View.cpp �еĵ��԰汾
inline CDlg042021Doc* CDlg042021View::GetDocument() const
   { return reinterpret_cast<CDlg042021Doc*>(m_pDocument); }
#endif

