
// EXP5.21View.h : CEXP521View ��Ľӿ�
//

#pragma once


class CEXP521View : public CView
{
protected: // �������л�����
	CEXP521View();
	DECLARE_DYNCREATE(CEXP521View)

// ����
public:
	CEXP521Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	

// ʵ��
public:
	virtual ~CEXP521View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // EXP5.21View.cpp �еĵ��԰汾
inline CEXP521Doc* CEXP521View::GetDocument() const
   { return reinterpret_cast<CEXP521Doc*>(m_pDocument); }
#endif

