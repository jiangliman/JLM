
// EXP�ۺ�ʵ���0518.1Set.cpp : CEXP�ۺ�ʵ���05181Set ���ʵ��
//

#include "stdafx.h"
#include "EXP�ۺ�ʵ���0518.1.h"
#include "EXP�ۺ�ʵ���0518.1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP�ۺ�ʵ���05181Set ʵ��

// ���������� 2020��5��19��, 13:39

IMPLEMENT_DYNAMIC(CEXP�ۺ�ʵ���05181Set, CRecordset)

CEXP�ۺ�ʵ���05181Set::CEXP�ۺ�ʵ���05181Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = 0.0;
	column6 = L"";
	column7 = L"";
	column8 = L"";
	m_nFields = 8;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CEXP�ۺ�ʵ���05181Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x7efc\x5408\x5b9e\x9a8c;DBQ=C:\\Users\\\x5948\x5948\x8010\x8010\\Desktop\\\x5b66\x751f\x4fe1\x606f\x8868\x7efc\x5408\x5b9e\x9a8c.xls;DefaultDir=C:\\Users\\\x5948\x5948\x8010\x8010\\Desktop;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CEXP�ۺ�ʵ���05181Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CEXP�ۺ�ʵ���05181Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Double(pFX, _T("[��������]"), column5);
	RFX_Text(pFX, _T("[�ֻ�����]"), column6);
	RFX_Text(pFX, _T("[��ͥסַ]"), column7);
	RFX_Text(pFX, _T("[ѧ��������Ƭ�ļ���]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CEXP�ۺ�ʵ���05181Set ���

#ifdef _DEBUG
void CEXP�ۺ�ʵ���05181Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CEXP�ۺ�ʵ���05181Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

