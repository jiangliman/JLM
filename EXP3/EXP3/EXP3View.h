
// EXP3View.h : CEXP3View ��Ľӿ�
//

#pragma once


class CEXP3View : public CView
{
protected: // �������л�����
	CEXP3View();
	DECLARE_DYNCREATE(CEXP3View)

// ����
public:
	CEXP3Doc* GetDocument() const;

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
	virtual ~CEXP3View();
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

#ifndef _DEBUG  // EXP3View.cpp �еĵ��԰汾
inline CEXP3Doc* CEXP3View::GetDocument() const
   { return reinterpret_cast<CEXP3Doc*>(m_pDocument); }
#endif

