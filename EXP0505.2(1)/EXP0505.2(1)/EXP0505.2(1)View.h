
// EXP0505.2(1)View.h : CEXP050521View ��Ľӿ�
//

#pragma once

class CEXP050521Set;

class CEXP050521View : public CRecordView
{
protected: // �������л�����
	CEXP050521View();
	DECLARE_DYNCREATE(CEXP050521View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP050521_FORM };
#endif
	CEXP050521Set* m_pSet;

// ����
public:
	CEXP050521Doc* GetDocument() const;

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
	virtual ~CEXP050521View();
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
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // EXP0505.2(1)View.cpp �еĵ��԰汾
inline CEXP050521Doc* CEXP050521View::GetDocument() const
   { return reinterpret_cast<CEXP050521Doc*>(m_pDocument); }
#endif

