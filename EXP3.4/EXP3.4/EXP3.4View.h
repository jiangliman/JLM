
// EXP3.4View.h : CEXP34View ��Ľӿ�
//

#pragma once


class CEXP34View : public CView
{
protected: // �������л�����
	CEXP34View();
	DECLARE_DYNCREATE(CEXP34View)

// ����
public:
	CEXP34Doc* GetDocument() const;
	
// ����
public:


// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP34View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // EXP3.4View.cpp �еĵ��԰汾
inline CEXP34Doc* CEXP34View::GetDocument() const
   { return reinterpret_cast<CEXP34Doc*>(m_pDocument); }
#endif

