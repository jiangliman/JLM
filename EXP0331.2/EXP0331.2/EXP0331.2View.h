
// EXP0331.2View.h : CEXP03312View ��Ľӿ�
//

#pragma once


class CEXP03312View : public CView
{
protected: // �������л�����
	CEXP03312View();
	DECLARE_DYNCREATE(CEXP03312View)

// ����
public:
	CEXP03312Doc* GetDocument() const;

// ����
public:
	CString s, str;
	int pos, flag, x, y;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP03312View();
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
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	
};

#ifndef _DEBUG  // EXP0331.2View.cpp �еĵ��԰汾
inline CEXP03312Doc* CEXP03312View::GetDocument() const
   { return reinterpret_cast<CEXP03312Doc*>(m_pDocument); }
#endif

