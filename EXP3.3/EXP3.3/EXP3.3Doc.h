
// EXP3.3Doc.h : CEXP33Doc ��Ľӿ�
//


#pragma once


class CEXP33Doc : public CDocument
{
protected: // �������л�����
	CEXP33Doc();
	DECLARE_DYNCREATE(CEXP33Doc)

// ����
public:
	

// ����
public:
	CPoint m_Point;
	CPoint n_Point;
	CRect ca;

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
	virtual ~CEXP33Doc();
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
