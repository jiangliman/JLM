
// EXP综合实验四0525Set.cpp : CEXP综合实验四0525Set 类的实现
//

#include "stdafx.h"
#include "EXP综合实验四0525.h"
#include "EXP综合实验四0525Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CEXP综合实验四0525Set 实现

// 代码生成在 2020年6月2日, 14:12

IMPLEMENT_DYNAMIC(CEXP综合实验四0525Set, CRecordset)

CEXP综合实验四0525Set::CEXP综合实验四0525Set(CDatabase* pdb)
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
	m_nDefaultType = dynaset;
}
//#error 安全问题: 连接字符串可能包含密码。
// 此连接字符串中可能包含明文密码和/或其他重要
// 信息。请在查看完此连接字符串并找到所有与安全
// 有关的问题后移除 #error。可能需要将此密码存
// 储为其他格式或使用其他的用户身份验证。
CString CEXP综合实验四0525Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90_\x5b66\x751f\x4fe1\x606f\x7efc\x5408\x5b9e\x9a8c;DBQ=C:\\Users\\\x5948\x5948\x8010\x8010\\Desktop\\\x5b66\x751f\x4fe1\x606f\x8868\x7efc\x5408\x5b9e\x9a8c.xls;DefaultDir=C:\\Users\\\x5948\x5948\x8010\x8010\\Desktop;DriverId=790;FIL=excel 8.0;MaxBufferSize=2048;PageTimeout=5;");
}

CString CEXP综合实验四0525Set::GetDefaultSQL()
{
	return _T("[Sheet1$]");
}

void CEXP综合实验四0525Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() 和 RFX_Int() 这类宏依赖的是
// 成员变量的类型，而不是数据库字段的类型。
// ODBC 尝试自动将列值转换为所请求的类型
	RFX_Text(pFX, _T("[姓名]"), column1);
	RFX_Text(pFX, _T("[学号]"), column2);
	RFX_Text(pFX, _T("[专业]"), column3);
	RFX_Text(pFX, _T("[性别]"), column4);
	RFX_Double(pFX, _T("[出生年月]"), column5);
	RFX_Text(pFX, _T("[手机号码]"), column6);
	RFX_Text(pFX, _T("[家庭住址]"), column7);
	RFX_Text(pFX, _T("[学生本人相片文件名]"), column8);

}
/////////////////////////////////////////////////////////////////////////////
// CEXP综合实验四0525Set 诊断

#ifdef _DEBUG
void CEXP综合实验四0525Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void CEXP综合实验四0525Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

