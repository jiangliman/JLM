
// EXP4.6View.h : CEXP46View ��Ľӿ�
//

#pragma once


class CEXP46View : public CView
{
protected: // �������л�����
	CEXP46View();
	DECLARE_DYNCREATE(CEXP46View)

// ����
public:
	CEXP46Doc* GetDocument() const;

// ����
public:
	CRect cr;
	int a;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP46View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLinedrawing();
	afx_msg void OnRectdrawing();
	afx_msg void OnEllipsedrawing();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP4.6View.cpp �еĵ��԰汾
inline CEXP46Doc* CEXP46View::GetDocument() const
   { return reinterpret_cast<CEXP46Doc*>(m_pDocument); }
#endif

