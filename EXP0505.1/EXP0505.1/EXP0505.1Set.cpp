
// EXP0505.1Set.cpp : CEXP05051Set ���ʵ��
//

#include "stdafx.h"
#include "EXP0505.1.h"
#include "EXP0505.1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP05051Set ʵ��

// ���������� 2020��5��11��, 21:46

IMPLEMENT_DYNAMIC(CEXP05051Set, CRecordset)

CEXP05051Set::CEXP05051Set(CDatabase* pdb)
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
CString CEXP05051Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x542b\x7167\x7247\x8def\x5f84;DBQ=C:\\Users\\\x5948\x5948\x8010\x8010\\Desktop\\\x5b66\x751f\x4fe1\x606f\x8868\x542b\x7167\x7247\x8def\x5f84.xls;DefaultDir=C:\\Users\\\x5948\x5948\x8010\x8010\\Desktop;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CEXP05051Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CEXP05051Set::DoFieldExchange(CFieldExchange* pFX)
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
// CEXP05051Set ���

#ifdef _DEBUG
void CEXP05051Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CEXP05051Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

