
// EXP�ۺ�ʵ����0525View.h : CEXP�ۺ�ʵ����0525View ��Ľӿ�
//

#pragma once

class CEXP�ۺ�ʵ����0525Set;

class CEXP�ۺ�ʵ����0525View : public CRecordView
{
protected: // �������л�����
	CEXP�ۺ�ʵ����0525View();
	DECLARE_DYNCREATE(CEXP�ۺ�ʵ����0525View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP0525_FORM };
#endif
	CEXP�ۺ�ʵ����0525Set* m_pSet;

// ����
public:
	CEXP�ۺ�ʵ����0525Doc* GetDocument() const;

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
	virtual ~CEXP�ۺ�ʵ����0525View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit7();
	CString Name;
	CString StuNum;
	CString Major;
	CString Sex;
	double Birth;
	CString Phone;
	CString Home;
	CString Picture;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	virtual void draw_pic(CString file);
	virtual void OnDraw(CDC* /*pDC*/);
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnSelect();
	afx_msg void OnSort();
	afx_msg void OnRecord();
};

#ifndef _DEBUG  // EXP�ۺ�ʵ����0525View.cpp �еĵ��԰汾
inline CEXP�ۺ�ʵ����0525Doc* CEXP�ۺ�ʵ����0525View::GetDocument() const
   { return reinterpret_cast<CEXP�ۺ�ʵ����0525Doc*>(m_pDocument); }
#endif

