
// EXP5View.h : CEXP5View ��Ľӿ�
//

#pragma once


class CEXP5View : public CView
{
protected: // �������л�����
	CEXP5View();
	DECLARE_DYNCREATE(CEXP5View)

// ����
public:
	CEXP5Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // EXP5View.cpp �еĵ��԰汾
inline CEXP5Doc* CEXP5View::GetDocument() const
   { return reinterpret_cast<CEXP5Doc*>(m_pDocument); }
#endif

