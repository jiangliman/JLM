
// EXP5.12View.h : CEXP512View ��Ľӿ�
//

#pragma once


class CEXP512View : public CView
{
protected: // �������л�����
	CEXP512View();
	DECLARE_DYNCREATE(CEXP512View)

// ����
public:
	CEXP512Doc* GetDocument() const;

// ����
public:
	int r, sx, sy, w, h;
	CString filename;
	float rect_ratio, img_ratio;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CEXP512View();
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

#ifndef _DEBUG  // EXP5.12View.cpp �еĵ��԰汾
inline CEXP512Doc* CEXP512View::GetDocument() const
   { return reinterpret_cast<CEXP512Doc*>(m_pDocument); }
#endif

