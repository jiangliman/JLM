
// EXP0302.3View.h : CEXP03023View ��Ľӿ�
//

#pragma once


class CEXP03023View : public CView
{
protected: // �������л�����
	CEXP03023View();
	DECLARE_DYNCREATE(CEXP03023View)

// ����
public:
	CEXP03023Doc* GetDocument() const;

// ����
public:
	

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP03023View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // EXP0302.3View.cpp �еĵ��԰汾
inline CEXP03023Doc* CEXP03023View::GetDocument() const
   { return reinterpret_cast<CEXP03023Doc*>(m_pDocument); }
#endif

