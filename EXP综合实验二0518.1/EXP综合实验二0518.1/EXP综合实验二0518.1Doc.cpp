
// EXP�ۺ�ʵ���0518.1Doc.cpp : CEXP�ۺ�ʵ���05181Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "EXP�ۺ�ʵ���0518.1.h"
#endif

#include "EXP�ۺ�ʵ���0518.1Set.h"
#include "EXP�ۺ�ʵ���0518.1Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CEXP�ۺ�ʵ���05181Doc

IMPLEMENT_DYNCREATE(CEXP�ۺ�ʵ���05181Doc, CDocument)

BEGIN_MESSAGE_MAP(CEXP�ۺ�ʵ���05181Doc, CDocument)
END_MESSAGE_MAP()


// CEXP�ۺ�ʵ���05181Doc ����/����

CEXP�ۺ�ʵ���05181Doc::CEXP�ۺ�ʵ���05181Doc()
{
	// TODO: �ڴ����һ���Թ������

}

CEXP�ۺ�ʵ���05181Doc::~CEXP�ۺ�ʵ���05181Doc()
{
}

BOOL CEXP�ۺ�ʵ���05181Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CEXP�ۺ�ʵ���05181Doc ���л�

void CEXP�ۺ�ʵ���05181Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CEXP�ۺ�ʵ���05181Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CEXP�ۺ�ʵ���05181Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CEXP�ۺ�ʵ���05181Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CEXP�ۺ�ʵ���05181Doc ���

#ifdef _DEBUG
void CEXP�ۺ�ʵ���05181Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEXP�ۺ�ʵ���05181Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CEXP�ۺ�ʵ���05181Doc ����
