
// EXP2.1View.h : CEXP21View ��Ľӿ�
//

#pragma once


class CEXP21View : public CView
{
protected: // �������л�����
	CEXP21View();
	DECLARE_DYNCREATE(CEXP21View)

// ����
public:
	CEXP21Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP21View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP2.1View.cpp �еĵ��԰汾
inline CEXP21Doc* CEXP21View::GetDocument() const
   { return reinterpret_cast<CEXP21Doc*>(m_pDocument); }
#endif

