
// �����Բ�ƶ�View.h : C�����Բ�ƶ�View ��Ľӿ�
//

#pragma once


class C�����Բ�ƶ�View : public CView
{
protected: // �������л�����
	C�����Բ�ƶ�View();
	DECLARE_DYNCREATE(C�����Բ�ƶ�View)

// ����
public:
	C�����Բ�ƶ�Doc* GetDocument() const;

// ����
public:
	CRect rect;
	CRect m_rect;
	bool set;
	int n, flag;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�����Բ�ƶ�View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnMove(int x, int y);
	afx_msg void OnCircle();
};

#ifndef _DEBUG  // �����Բ�ƶ�View.cpp �еĵ��԰汾
inline C�����Բ�ƶ�Doc* C�����Բ�ƶ�View::GetDocument() const
   { return reinterpret_cast<C�����Բ�ƶ�Doc*>(m_pDocument); }
#endif

