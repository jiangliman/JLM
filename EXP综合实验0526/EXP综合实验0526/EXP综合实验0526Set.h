
// EXP�ۺ�ʵ��0526Set.h: CEXP�ۺ�ʵ��0526Set ��Ľӿ�
//


#pragma once

// ���������� 2020��6��24��, 19:41

class CEXP�ۺ�ʵ��0526Set : public CRecordset
{
public:
	CEXP�ۺ�ʵ��0526Set(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CEXP�ۺ�ʵ��0526Set)

// �ֶ�/��������

// �����ַ�������(�������)��ӳ���ݿ��ֶ�(ANSI �������͵� CStringA �� Unicode
// �������͵� CStringW)��ʵ���������͡�
//  ����Ϊ��ֹ ODBC ��������ִ�п���
// ����Ҫ��ת�������ϣ�������Խ���Щ��Ա����Ϊ
// CString ���ͣ�ODBC ��������ִ�����б�Ҫ��ת����
// (ע��: ����ʹ�� 3.5 �����߰汾�� ODBC ��������
// ��ͬʱ֧�� Unicode ����Щת��)��

	long	m_ID;
	CStringW	column1;
	long	column2;
	CStringW	column3;
	CStringW	column4;
	double	column5;
	double	column6;
	CStringW	column7;
	CStringW	column8;

// ��д
	// �����ɵ��麯����д
	public:
	virtual CString GetDefaultConnect();	// Ĭ�������ַ���

	virtual CString GetDefaultSQL(); 	// ��¼����Ĭ�� SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX ֧��

// ʵ��
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

