
// EXP4.2View.h : CEXP42View ��Ľӿ�
//

#pragma once


class CEXP42View : public CView
{
protected: // �������л�����
	CEXP42View();
	DECLARE_DYNCREATE(CEXP42View)

// ����
public:
	CEXP42Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP42View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // EXP4.2View.cpp �еĵ��԰汾
inline CEXP42Doc* CEXP42View::GetDocument() const
   { return reinterpret_cast<CEXP42Doc*>(m_pDocument); }
#endif

