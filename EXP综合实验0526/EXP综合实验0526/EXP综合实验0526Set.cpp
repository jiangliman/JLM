
// EXP�ۺ�ʵ��0526Set.cpp : CEXP�ۺ�ʵ��0526Set ���ʵ��
//

#include "stdafx.h"
#include "EXP�ۺ�ʵ��0526.h"
#include "EXP�ۺ�ʵ��0526Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP�ۺ�ʵ��0526Set ʵ��

// ���������� 2020��6��24��, 19:41

IMPLEMENT_DYNAMIC(CEXP�ۺ�ʵ��0526Set, CRecordset)

CEXP�ۺ�ʵ��0526Set::CEXP�ۺ�ʵ��0526Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	column1 = L"";
	column2 = 0;
	column3 = L"";
	column4 = L"";
	column5 = 0.0;
	column6 = 0.0;
	column7 = L"";
	column8 = L"";
	m_nFields = 9;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CEXP�ۺ�ʵ��0526Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x8868\x7efc\x5408\x4fe1\x606f;DBQ=C:\\Users\\\x5948\x5948\x8010\x8010\\Documents\\\x5b66\x751f\x4fe1\x606f\x7efc\x5408\x5b9e\x9a8c.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CEXP�ۺ�ʵ��0526Set::GetDefaultSQL()
{
	return _T("[��1]");
}

void CEXP�ۺ�ʵ��0526Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Long(pFX, _T("[ѧ��]"), column2);
	RFX_Text(pFX, _T("[רҵ]"), column3);
	RFX_Text(pFX, _T("[�Ա�]"), column4);
	RFX_Double(pFX, _T("[��������]"), column5);
	RFX_Double(pFX, _T("[�ֻ�����]"), column6);
	RFX_Text(pFX, _T("[��ͥסַ]"), column7);
	RFX_Text(pFX, _T("[ѧ��������Ƭ�ļ���]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CEXP�ۺ�ʵ��0526Set ���

#ifdef _DEBUG
void CEXP�ۺ�ʵ��0526Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CEXP�ۺ�ʵ��0526Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

