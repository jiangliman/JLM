
// EXP0504Doc.h : CEXP0504Doc ��Ľӿ�
//


#pragma once
#include "EXP0504Set.h"


class CEXP0504Doc : public CDocument
{
protected: // �������л�����
	CEXP0504Doc();
	DECLARE_DYNCREATE(CEXP0504Doc)

// ����
public:
	CEXP0504Set m_EXP0504Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CEXP0504Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
