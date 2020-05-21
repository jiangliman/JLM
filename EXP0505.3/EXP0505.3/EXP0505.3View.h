
// EXP0505.3View.h : CEXP05053View ��Ľӿ�
//

#pragma once

class CEXP05053Set;

class CEXP05053View : public CRecordView
{
protected: // �������л�����
	CEXP05053View();
	DECLARE_DYNCREATE(CEXP05053View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP05053_FORM };
#endif
	CEXP05053Set* m_pSet;

// ����
public:
	CEXP05053Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~CEXP05053View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString Name;
	CString Sex;
	CString StuNum;
	CString Old;
	CString Phone;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	virtual void draw_pic(CString file);
	virtual void OnDraw(CDC* /*pDC*/);
};

#ifndef _DEBUG  // EXP0505.3View.cpp �еĵ��԰汾
inline CEXP05053Doc* CEXP05053View::GetDocument() const
   { return reinterpret_cast<CEXP05053Doc*>(m_pDocument); }
#endif

