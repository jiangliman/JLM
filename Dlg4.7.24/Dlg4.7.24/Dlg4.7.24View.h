
// Dlg4.7.24View.h : CDlg4724View ��Ľӿ�
//

#pragma once


class CDlg4724View : public CView
{
protected: // �������л�����
	CDlg4724View();
	DECLARE_DYNCREATE(CDlg4724View)

// ����
public:
	CDlg4724Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CDlg4724View();
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

#ifndef _DEBUG  // Dlg4.7.24View.cpp �еĵ��԰汾
inline CDlg4724Doc* CDlg4724View::GetDocument() const
   { return reinterpret_cast<CDlg4724Doc*>(m_pDocument); }
#endif

