
// EXP3.6View.h : CEXP36View ��Ľӿ�
//

#pragma once


class CEXP36View : public CView
{
protected: // �������л�����
	CEXP36View();
	DECLARE_DYNCREATE(CEXP36View)

// ����
public:
	CEXP36Doc* GetDocument() const;

// ����
public:
	int N;
	CArray<CRect,CRect> cr;
	bool set;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP36View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // EXP3.6View.cpp �еĵ��԰汾
inline CEXP36Doc* CEXP36View::GetDocument() const
   { return reinterpret_cast<CEXP36Doc*>(m_pDocument); }
#endif

