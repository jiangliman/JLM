
// UsingWin32.2DllView.h : CUsingWin322DllView ��Ľӿ�
//

#pragma once


class CUsingWin322DllView : public CView
{
protected: // �������л�����
	CUsingWin322DllView();
	DECLARE_DYNCREATE(CUsingWin322DllView)

// ����
public:
	CUsingWin322DllDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CUsingWin322DllView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // UsingWin32.2DllView.cpp �еĵ��԰汾
inline CUsingWin322DllDoc* CUsingWin322DllView::GetDocument() const
   { return reinterpret_cast<CUsingWin322DllDoc*>(m_pDocument); }
#endif

