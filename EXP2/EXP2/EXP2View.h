
// EXP2View.h : CEXP2View ��Ľӿ�
//

#pragma once


class CEXP2View : public CView
{
protected: // �������л�����
	CEXP2View();
	DECLARE_DYNCREATE(CEXP2View)

// ����
public:
	CEXP2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EXP2View.cpp �еĵ��԰汾
inline CEXP2Doc* CEXP2View::GetDocument() const
   { return reinterpret_cast<CEXP2Doc*>(m_pDocument); }
#endif

