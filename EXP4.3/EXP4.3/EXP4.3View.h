
// EXP4.3View.h : CEXP43View ��Ľӿ�
//

#pragma once


class CEXP43View : public CView
{
protected: // �������л�����
	CEXP43View();
	DECLARE_DYNCREATE(CEXP43View)

// ����
public:
	CEXP43Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP43View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EXP4.3View.cpp �еĵ��԰汾
inline CEXP43Doc* CEXP43View::GetDocument() const
   { return reinterpret_cast<CEXP43Doc*>(m_pDocument); }
#endif

