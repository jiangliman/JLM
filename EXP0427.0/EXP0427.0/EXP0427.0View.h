
// EXP0427.0View.h : CEXP04270View ��Ľӿ�
//

#pragma once


class CEXP04270View : public CView
{
protected: // �������л�����
	CEXP04270View();
	DECLARE_DYNCREATE(CEXP04270View)

// ����
public:
	CEXP04270Doc* GetDocument() const;

// ����
public:
	CString filename;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP04270View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSave();
	
};

#ifndef _DEBUG  // EXP0427.0View.cpp �еĵ��԰汾
inline CEXP04270Doc* CEXP04270View::GetDocument() const
   { return reinterpret_cast<CEXP04270Doc*>(m_pDocument); }
#endif

