
// EXP0310����ʵ��View.h : CEXP0310����ʵ��View ��Ľӿ�
//

#pragma once


class CEXP0310����ʵ��View : public CView
{
protected: // �������л�����
	CEXP0310����ʵ��View();
	DECLARE_DYNCREATE(CEXP0310����ʵ��View)

// ����
public:
	CEXP0310����ʵ��Doc* GetDocument() const;

// ����
public:
	int count;
	CString  s, x;
	int a, b;
	CArray<CRect, CRect&> A;
	CArray<CRect, CRect&> B;
	CArray<CRect, CRect&> C;
	CArray<CRect, CRect&> D;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP0310����ʵ��View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP0310����ʵ��View.cpp �еĵ��԰汾
inline CEXP0310����ʵ��Doc* CEXP0310����ʵ��View::GetDocument() const
   { return reinterpret_cast<CEXP0310����ʵ��Doc*>(m_pDocument); }
#endif

