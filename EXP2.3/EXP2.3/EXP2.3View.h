
// EXP2.3View.h : CEXP23View ��Ľӿ�
//

#pragma once


class CEXP23View : public CView
{
protected: // �������л�����
	CEXP23View();
	DECLARE_DYNCREATE(CEXP23View)

// ����
public:
	CEXP23Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&> A;
	CArray<CRect, CRect&> B;
	CArray<CRect, CRect&> C;


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP23View();
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

#ifndef _DEBUG  // EXP2.3View.cpp �еĵ��԰汾
inline CEXP23Doc* CEXP23View::GetDocument() const
   { return reinterpret_cast<CEXP23Doc*>(m_pDocument); }
#endif

