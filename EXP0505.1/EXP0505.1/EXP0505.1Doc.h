
// EXP0505.1Doc.h : CEXP05051Doc ��Ľӿ�
//


#pragma once
#include "EXP0505.1Set.h"


class CEXP05051Doc : public CDocument
{
protected: // �������л�����
	CEXP05051Doc();
	DECLARE_DYNCREATE(CEXP05051Doc)

// ����
public:
	CEXP05051Set m_EXP05051Set;

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
	virtual ~CEXP05051Doc();
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
