
// EXP0302.4View.h : CEXP03024View ��Ľӿ�
//

#pragma once


class CEXP03024View : public CView
{
protected: // �������л�����
	CEXP03024View();
	DECLARE_DYNCREATE(CEXP03024View)

// ����
public:
	CEXP03024Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP03024View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EXP0302.4View.cpp �еĵ��԰汾
inline CEXP03024Doc* CEXP03024View::GetDocument() const
   { return reinterpret_cast<CEXP03024Doc*>(m_pDocument); }
#endif

