
// EXP�ۺ�ʵ��0526View.h : CEXP�ۺ�ʵ��0526View ��Ľӿ�
//

#pragma once

class CEXP�ۺ�ʵ��0526Set;

class CEXP�ۺ�ʵ��0526View : public CRecordView
{
protected: // �������л�����
	CEXP�ۺ�ʵ��0526View();
	DECLARE_DYNCREATE(CEXP�ۺ�ʵ��0526View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP0526_FORM };
#endif
	CEXP�ۺ�ʵ��0526Set* m_pSet;

// ����
public:
	CEXP�ۺ�ʵ��0526Doc* GetDocument() const;

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
	virtual ~CEXP�ۺ�ʵ��0526View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit8();
	CString Name;
	double StuNum;
	CString Major;
	CString Sex;
	double Birth;
	double Phone;
	CString Home;
	CString Picture;
	virtual void draw_pic(CString file);
	virtual void OnDraw(CDC* /*pDC*/);
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedshowpicture();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedEdit();
	afx_msg void Onselect();
	afx_msg void Onsort();
	afx_msg void Onrecord();
	afx_msg void Onrestore();
	long StuNumber;
};

#ifndef _DEBUG  // EXP�ۺ�ʵ��0526View.cpp �еĵ��԰汾
inline CEXP�ۺ�ʵ��0526Doc* CEXP�ۺ�ʵ��0526View::GetDocument() const
   { return reinterpret_cast<CEXP�ۺ�ʵ��0526Doc*>(m_pDocument); }
#endif

