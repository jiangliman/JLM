
// Dlg4.7.0View.h : CDlg470View ��Ľӿ�
//

#pragma once


class CDlg470View : public CView
{
protected: // �������л�����
	CDlg470View();
	DECLARE_DYNCREATE(CDlg470View)

// ����
public:
	CDlg470Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CDlg470View();
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

#ifndef _DEBUG  // Dlg4.7.0View.cpp �еĵ��԰汾
inline CDlg470Doc* CDlg470View::GetDocument() const
   { return reinterpret_cast<CDlg470Doc*>(m_pDocument); }
#endif

