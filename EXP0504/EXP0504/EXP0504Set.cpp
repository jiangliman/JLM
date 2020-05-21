
// EXP0504Set.cpp : CEXP0504Set ���ʵ��
//

#include "stdafx.h"
#include "EXP0504.h"
#include "EXP0504Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP0504Set ʵ��

// ���������� 2020��5��10��, 19:05

IMPLEMENT_DYNAMIC(CEXP0504Set, CRecordset)

CEXP0504Set::CEXP0504Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0.0;
	column1 = L"";
	column2 = L"";
	column3 = 0.0;
	column4 = 0.0;
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CEXP0504Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f;DBQ=C:\\USERS\\\x5948\x5948\x8010\x8010\\DESKTOP\\\x5b66\x751f\x4fe1\x606f\x8868.xls;DefaultDir=C:\\USERS\\\x5948\x5948\x8010\x8010\\DESKTOP;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CEXP0504Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CEXP0504Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Double(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[ѧ��]"), column2);
	RFX_Double(pFX, _T("[����]"), column3);
	RFX_Double(pFX, _T("[�ֻ�����]"), column4);

}
/////////////////////////////////////////////////////////////////////////////
// CEXP0504Set ���

#ifdef _DEBUG
void CEXP0504Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CEXP0504Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

