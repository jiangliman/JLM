
// EXP0427View.h : CEXP0427View ��Ľӿ�
//

#pragma once


class CEXP0427View : public CView
{
protected: // �������л�����
	CEXP0427View();
	DECLARE_DYNCREATE(CEXP0427View)

	// ����
public:
	CEXP0427Doc* GetDocument() const;

	// ����
public:

	// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

	// ʵ��
public:
	virtual ~CEXP0427View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	
	
	afx_msg void OnPopout();
};


#ifndef _DEBUG  // EXP0427View.cpp �еĵ��԰汾
inline CEXP0427Doc* CEXP0427View::GetDocument() const
   { return reinterpret_cast<CEXP0427Doc*>(m_pDocument); }
#endif

