
// EXP5.11View.h : CEXP511View ��Ľӿ�
//

#pragma once


class CEXP511View : public CView
{
protected: // �������л�����
	CEXP511View();
	DECLARE_DYNCREATE(CEXP511View)

// ����
public:
	CEXP511Doc* GetDocument() const;

// ����
public:
	int r, sx, sy;
	CString filename;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP511View();
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
};

#ifndef _DEBUG  // EXP5.11View.cpp �еĵ��԰汾
inline CEXP511Doc* CEXP511View::GetDocument() const
   { return reinterpret_cast<CEXP511Doc*>(m_pDocument); }
#endif

