
// EXP2.2View.h : CEXP22View ��Ľӿ�
//

#pragma once


class CEXP22View : public CView
{
protected: // �������л�����
	CEXP22View();
	DECLARE_DYNCREATE(CEXP22View)

// ����
public:
	CEXP22Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP22View();
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

#ifndef _DEBUG  // EXP2.2View.cpp �еĵ��԰汾
inline CEXP22Doc* CEXP22View::GetDocument() const
   { return reinterpret_cast<CEXP22Doc*>(m_pDocument); }
#endif

