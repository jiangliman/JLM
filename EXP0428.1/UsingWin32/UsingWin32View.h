
// UsingWin32View.h : CUsingWin32View ��Ľӿ�
//

#pragma once


class CUsingWin32View : public CView
{
protected: // �������л�����
	CUsingWin32View();
	DECLARE_DYNCREATE(CUsingWin32View)

// ����
public:
	CUsingWin32Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsingWin32View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingWin32View.cpp �еĵ��԰汾
inline CUsingWin32Doc* CUsingWin32View::GetDocument() const
   { return reinterpret_cast<CUsingWin32Doc*>(m_pDocument); }
#endif

