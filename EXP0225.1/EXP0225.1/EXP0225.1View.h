
// EXP0225.1View.h : CEXP02251View ��Ľӿ�
//

#pragma once


class CEXP02251View : public CView
{
protected: // �������л�����
	CEXP02251View();
	DECLARE_DYNCREATE(CEXP02251View)

// ����
public:
	CEXP02251Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP02251View();
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

#ifndef _DEBUG  // EXP0225.1View.cpp �еĵ��԰汾
inline CEXP02251Doc* CEXP02251View::GetDocument() const
   { return reinterpret_cast<CEXP02251Doc*>(m_pDocument); }
#endif

