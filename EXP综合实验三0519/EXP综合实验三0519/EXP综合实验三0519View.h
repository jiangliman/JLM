
// EXP�ۺ�ʵ����0519View.h : CEXP�ۺ�ʵ����0519View ��Ľӿ�
//

#pragma once

class CEXP�ۺ�ʵ����0519Set;

class CEXP�ۺ�ʵ����0519View : public CRecordView
{
protected: // �������л�����
	CEXP�ۺ�ʵ����0519View();
	DECLARE_DYNCREATE(CEXP�ۺ�ʵ����0519View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP0519_FORM };
#endif
	CEXP�ۺ�ʵ����0519Set* m_pSet;

// ����
public:
	CEXP�ۺ�ʵ����0519Doc* GetDocument() const;

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
	virtual ~CEXP�ۺ�ʵ����0519View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long i;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedAbort();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // EXP�ۺ�ʵ����0519View.cpp �еĵ��԰汾
inline CEXP�ۺ�ʵ����0519Doc* CEXP�ۺ�ʵ����0519View::GetDocument() const
   { return reinterpret_cast<CEXP�ۺ�ʵ����0519Doc*>(m_pDocument); }
#endif

