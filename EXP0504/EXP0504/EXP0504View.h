
// EXP0504View.h : CEXP0504View ��Ľӿ�
//

#pragma once

class CEXP0504Set;

class CEXP0504View : public CRecordView
{
protected: // �������л�����
	CEXP0504View();
	DECLARE_DYNCREATE(CEXP0504View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP0504_FORM };
#endif
	CEXP0504Set* m_pSet;

// ����
public:
	CEXP0504Doc* GetDocument() const;

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
	virtual ~CEXP0504View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	double ID;
	CString name;
	CString stunumber;
	double old;
	double phone;
};

#ifndef _DEBUG  // EXP0504View.cpp �еĵ��԰汾
inline CEXP0504Doc* CEXP0504View::GetDocument() const
   { return reinterpret_cast<CEXP0504Doc*>(m_pDocument); }
#endif

