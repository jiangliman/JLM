
// Dlg0420.24�����ɫView.h : CDlg042024�����ɫView ��Ľӿ�
//

#pragma once


class CDlg042024�����ɫView : public CView
{
protected: // �������л�����
	CDlg042024�����ɫView();
	DECLARE_DYNCREATE(CDlg042024�����ɫView)

// ����
public:
	CDlg042024�����ɫDoc* GetDocument() const;

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
	virtual ~CDlg042024�����ɫView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Dlg0420.24�����ɫView.cpp �еĵ��԰汾
inline CDlg042024�����ɫDoc* CDlg042024�����ɫView::GetDocument() const
   { return reinterpret_cast<CDlg042024�����ɫDoc*>(m_pDocument); }
#endif

