
// EXP�ۺ�ʵ��0526Doc.h : CEXP�ۺ�ʵ��0526Doc ��Ľӿ�
//


#pragma once
#include "EXP�ۺ�ʵ��0526Set.h"


class CEXP�ۺ�ʵ��0526Doc : public CDocument
{
protected: // �������л�����
	CEXP�ۺ�ʵ��0526Doc();
	DECLARE_DYNCREATE(CEXP�ۺ�ʵ��0526Doc)

// ����
public:
	CEXP�ۺ�ʵ��0526Set m_EXP�ۺ�ʵ��0526Set;

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
	virtual ~CEXP�ۺ�ʵ��0526Doc();
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
