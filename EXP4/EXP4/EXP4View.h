
// EXP4View.h : CEXP4View ��Ľӿ�
//

#pragma once


class CEXP4View : public CView
{
protected: // �������л�����
	CEXP4View();
	DECLARE_DYNCREATE(CEXP4View)

// ����
public:
	CEXP4Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&> ca;


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP4View.cpp �еĵ��԰汾
inline CEXP4Doc* CEXP4View::GetDocument() const
   { return reinterpret_cast<CEXP4Doc*>(m_pDocument); }
#endif

