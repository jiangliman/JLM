
// EXP0505.2(1)Set.cpp : CEXP050521Set ���ʵ��
//

#include "stdafx.h"
#include "EXP0505.2(1).h"
#include "EXP0505.2(1)Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP050521Set ʵ��

// ���������� 2020��5��18��, 22:57

IMPLEMENT_DYNAMIC(CEXP050521Set, CRecordset)

CEXP050521Set::CEXP050521Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	column1 = L"";
	column2 = L"";
	column3 = L"";
	column4 = L"";
	column5 = L"";
	column6 = L"";
	m_nFields = 6;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CEXP050521Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x542b\x7167\x7247\x8def\x5f84;DBQ=C:\\Users\\\x5948\x5948\x8010\x8010\\Desktop\\\x5b66\x751f\x4fe1\x606f\x8868\x542b\x7167\x7247\x8def\x5f84.xls;DefaultDir=C:\\Users\\\x5948\x5948\x8010\x8010\\Desktop;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CEXP050521Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CEXP050521Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Text(pFX, _T("[����]"), column1);
	RFX_Text(pFX, _T("[�Ա�]"), column2);
	RFX_Text(pFX, _T("[ѧ��]"), column3);
	RFX_Text(pFX, _T("[����]"), column4);
	RFX_Text(pFX, _T("[�ֻ�����]"), column5);
	RFX_Text(pFX, _T("[ѧ��������Ƭ��ȫ·��]"), column6);

}
/////////////////////////////////////////////////////////////////////////////
// CEXP050521Set ���

#ifdef _DEBUG
void CEXP050521Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CEXP050521Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

