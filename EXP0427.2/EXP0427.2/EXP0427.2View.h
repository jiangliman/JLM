
// EXP0427.2View.h : CEXP04272View ��Ľӿ�
//

#pragma once


class CEXP04272View : public CView
{
protected: // �������л�����
	CEXP04272View();
	DECLARE_DYNCREATE(CEXP04272View)

// ����
public:
	CEXP04272Doc* GetDocument() const;

// ����
public:
	CRect cr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP04272View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP0427.2View.cpp �еĵ��԰汾
inline CEXP04272Doc* CEXP04272View::GetDocument() const
   { return reinterpret_cast<CEXP04272Doc*>(m_pDocument); }
#endif

