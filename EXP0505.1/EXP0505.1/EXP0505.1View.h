
// EXP0505.1View.h : CEXP05051View ��Ľӿ�
//

#pragma once

class CEXP05051Set;

class CEXP05051View : public CRecordView
{
protected: // �������л�����
	CEXP05051View();
	DECLARE_DYNCREATE(CEXP05051View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP05051_FORM };
#endif
	CEXP05051Set* m_pSet;

// ����
public:
	CEXP05051Doc* GetDocument() const;

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
	virtual ~CEXP05051View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	CString Name;
	CString Sex;
	CString StuNum;
	CString Old;
	CString Phone;
	CString PicWay;
};

#ifndef _DEBUG  // EXP0505.1View.cpp �еĵ��԰汾
inline CEXP05051Doc* CEXP05051View::GetDocument() const
   { return reinterpret_cast<CEXP05051Doc*>(m_pDocument); }
#endif

