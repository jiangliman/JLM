
// EXP3.5View.h : CEXP35View ��Ľӿ�
//

#pragma once


class CEXP35View : public CView
{
protected: // �������л�����
	CEXP35View();
	DECLARE_DYNCREATE(CEXP35View)

// ����
public:
	CEXP35Doc* GetDocument() const;

// ����
public:
	int count;
	int i,j;
	CRect ca;
	CString s, s1;
	
	

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP35View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP3.5View.cpp �еĵ��԰汾
inline CEXP35Doc* CEXP35View::GetDocument() const
   { return reinterpret_cast<CEXP35Doc*>(m_pDocument); }
#endif

