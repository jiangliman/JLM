
// EXP0505.3Doc.h : CEXP05053Doc ��Ľӿ�
//


#pragma once
#include "EXP0505.3Set.h"


class CEXP05053Doc : public CDocument
{
protected: // �������л�����
	CEXP05053Doc();
	DECLARE_DYNCREATE(CEXP05053Doc)

// ����
public:
	CEXP05053Set m_EXP05053Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CEXP05053Doc();
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
