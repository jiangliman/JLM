
// EXP0225����ʵ��View.h : CEXP0225����ʵ��View ��Ľӿ�
//

#pragma once


class CEXP0225����ʵ��View : public CView
{
protected: // �������л�����
	CEXP0225����ʵ��View();
	DECLARE_DYNCREATE(CEXP0225����ʵ��View)

// ����
public:
	CEXP0225����ʵ��Doc* GetDocument() const;

// ����
public:
	CString s2;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP0225����ʵ��View();
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

#ifndef _DEBUG  // EXP0225����ʵ��View.cpp �еĵ��԰汾
inline CEXP0225����ʵ��Doc* CEXP0225����ʵ��View::GetDocument() const
   { return reinterpret_cast<CEXP0225����ʵ��Doc*>(m_pDocument); }
#endif

