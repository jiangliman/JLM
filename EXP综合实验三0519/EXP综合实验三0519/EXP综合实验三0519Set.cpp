
// EXP�ۺ�ʵ����0519Set.cpp : CEXP�ۺ�ʵ����0519Set ���ʵ��
//

#include "stdafx.h"
#include "EXP�ۺ�ʵ����0519.h"
#include "EXP�ۺ�ʵ����0519Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP�ۺ�ʵ����0519Set ʵ��

// ���������� 2020��5��26��, 17:47

IMPLEMENT_DYNAMIC(CEXP�ۺ�ʵ����0519Set, CRecordset)

CEXP�ۺ�ʵ����0519Set::CEXP�ۺ�ʵ����0519Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CEXP�ۺ�ʵ����0519Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x7efc\x5408\x5b9e\x9a8c\x4e09\x6570\x636e;DBQ=C:\\Users\\\x5948\x5948\x8010\x8010\\Documents\\Database1.accdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CEXP�ۺ�ʵ����0519Set::GetDefaultSQL()
{
	return _T("[�ۺ�ʵ��������]");
}

void CEXP�ۺ�ʵ����0519Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// CEXP�ۺ�ʵ����0519Set ���

#ifdef _DEBUG
void CEXP�ۺ�ʵ����0519Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CEXP�ۺ�ʵ����0519Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

