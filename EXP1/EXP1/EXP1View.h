
// EXP1View.h : CEXP1View ��Ľӿ�
//

#pragma once


class CEXP1View : public CView
{
protected: // �������л�����
	CEXP1View();
	DECLARE_DYNCREATE(CEXP1View)

// ����
public:
	CEXP1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EXP1View.cpp �еĵ��԰汾
inline CEXP1Doc* CEXP1View::GetDocument() const
   { return reinterpret_cast<CEXP1Doc*>(m_pDocument); }
#endif

