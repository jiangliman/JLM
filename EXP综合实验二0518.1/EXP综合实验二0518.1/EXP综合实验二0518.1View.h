
// EXP�ۺ�ʵ���0518.1View.h : CEXP�ۺ�ʵ���05181View ��Ľӿ�
//

#pragma once

class CEXP�ۺ�ʵ���05181Set;

class CEXP�ۺ�ʵ���05181View : public CRecordView
{
protected: // �������л�����
	CEXP�ۺ�ʵ���05181View();
	DECLARE_DYNCREATE(CEXP�ۺ�ʵ���05181View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP05181_FORM };
#endif
	CEXP�ۺ�ʵ���05181Set* m_pSet;

// ����
public:
	CEXP�ۺ�ʵ���05181Doc* GetDocument() const;

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
	virtual ~CEXP�ۺ�ʵ���05181View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit7();
	CString Name;
	CString StuNum;
	CString Major;
	CString Sex;
	double Birth;
	CString Phone;
	CString Home;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	virtual void draw_pic(CString file);
	virtual void OnDraw(CDC* /*pDC*/);
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // EXP�ۺ�ʵ���0518.1View.cpp �еĵ��԰汾
inline CEXP�ۺ�ʵ���05181Doc* CEXP�ۺ�ʵ���05181View::GetDocument() const
   { return reinterpret_cast<CEXP�ۺ�ʵ���05181Doc*>(m_pDocument); }
#endif

