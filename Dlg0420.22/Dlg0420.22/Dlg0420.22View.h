
// Dlg0420.22View.h : CDlg042022View ��Ľӿ�
//

#pragma once


class CDlg042022View : public CView
{
protected: // �������л�����
	CDlg042022View();
	DECLARE_DYNCREATE(CDlg042022View)

// ����
public:
	CDlg042022Doc* GetDocument() const;

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
	virtual ~CDlg042022View();
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
};

#ifndef _DEBUG  // Dlg0420.22View.cpp �еĵ��԰汾
inline CDlg042022Doc* CDlg042022View::GetDocument() const
   { return reinterpret_cast<CDlg042022Doc*>(m_pDocument); }
#endif

