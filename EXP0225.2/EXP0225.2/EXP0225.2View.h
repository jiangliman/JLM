
// EXP0225.2View.h : CEXP02252View ��Ľӿ�
//

#pragma once


class CEXP02252View : public CView
{
protected: // �������л�����
	CEXP02252View();
	DECLARE_DYNCREATE(CEXP02252View)

// ����
public:
	CEXP02252Doc* GetDocument() const;

// ����
public:
	CString s;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP02252View();
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

#ifndef _DEBUG  // EXP0225.2View.cpp �еĵ��԰汾
inline CEXP02252Doc* CEXP02252View::GetDocument() const
   { return reinterpret_cast<CEXP02252Doc*>(m_pDocument); }
#endif

