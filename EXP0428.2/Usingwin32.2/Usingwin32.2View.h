
// Usingwin32.2View.h : CUsingwin322View ��Ľӿ�
//

#pragma once


class CUsingwin322View : public CView
{
protected: // �������л�����
	CUsingwin322View();
	DECLARE_DYNCREATE(CUsingwin322View)

// ����
public:
	CUsingwin322Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsingwin322View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Usingwin32.2View.cpp �еĵ��԰汾
inline CUsingwin322Doc* CUsingwin322View::GetDocument() const
   { return reinterpret_cast<CUsingwin322Doc*>(m_pDocument); }
#endif

