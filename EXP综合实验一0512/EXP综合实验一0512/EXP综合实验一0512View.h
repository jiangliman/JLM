
// EXP�ۺ�ʵ��һ0512View.h : CEXP�ۺ�ʵ��һ0512View ��Ľӿ�
//

#pragma once

class CEXP�ۺ�ʵ��һ0512Set;

class CEXP�ۺ�ʵ��һ0512View : public CRecordView
{
protected: // �������л�����
	CEXP�ۺ�ʵ��һ0512View();
	DECLARE_DYNCREATE(CEXP�ۺ�ʵ��һ0512View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP0512_FORM };
#endif
	CEXP�ۺ�ʵ��һ0512Set* m_pSet;

// ����
public:
	CEXP�ۺ�ʵ��һ0512Doc* GetDocument() const;

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
	virtual ~CEXP�ۺ�ʵ��һ0512View();
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
};

#ifndef _DEBUG  // EXP�ۺ�ʵ��һ0512View.cpp �еĵ��԰汾
inline CEXP�ۺ�ʵ��һ0512Doc* CEXP�ۺ�ʵ��һ0512View::GetDocument() const
   { return reinterpret_cast<CEXP�ۺ�ʵ��һ0512Doc*>(m_pDocument); }
#endif

