
// Dlg4.7.22View.h : CDlg4722View ��Ľӿ�
//

#pragma once


class CDlg4722View : public CView
{
protected: // �������л�����
	CDlg4722View();
	DECLARE_DYNCREATE(CDlg4722View)

// ����
public:
	CDlg4722Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CDlg4722View();
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

#ifndef _DEBUG  // Dlg4.7.22View.cpp �еĵ��԰汾
inline CDlg4722Doc* CDlg4722View::GetDocument() const
   { return reinterpret_cast<CDlg4722Doc*>(m_pDocument); }
#endif

