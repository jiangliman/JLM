
// Dlg4.7.1View.h : CDlg471View ��Ľӿ�
//

#pragma once


class CDlg471View : public CView
{
protected: // �������л�����
	CDlg471View();
	DECLARE_DYNCREATE(CDlg471View)

// ����
public:
	CDlg471Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CDlg471View();
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

#ifndef _DEBUG  // Dlg4.7.1View.cpp �еĵ��԰汾
inline CDlg471Doc* CDlg471View::GetDocument() const
   { return reinterpret_cast<CDlg471Doc*>(m_pDocument); }
#endif

