
// EXP3.3View.h : CEXP33View ��Ľӿ�
//

#pragma once


class CEXP33View : public CView
{
protected: // �������л�����
	CEXP33View();
	DECLARE_DYNCREATE(CEXP33View)

// ����
public:
	CEXP33Doc* GetDocument() const;

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
	virtual ~CEXP33View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP3.3View.cpp �еĵ��԰汾
inline CEXP33Doc* CEXP33View::GetDocument() const
   { return reinterpret_cast<CEXP33Doc*>(m_pDocument); }
#endif

