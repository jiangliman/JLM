
// EXP0.0View.h : CEXP00View ��Ľӿ�
//

#pragma once


class CEXP00View : public CView
{
protected: // �������л�����
	CEXP00View();
	DECLARE_DYNCREATE(CEXP00View)

// ����
public:
	CEXP00Doc* GetDocument() const;

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
	virtual ~CEXP00View();
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

#ifndef _DEBUG  // EXP0.0View.cpp �еĵ��԰汾
inline CEXP00Doc* CEXP00View::GetDocument() const
   { return reinterpret_cast<CEXP00Doc*>(m_pDocument); }
#endif

