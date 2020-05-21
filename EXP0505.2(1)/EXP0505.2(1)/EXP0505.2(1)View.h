
// EXP0505.2(1)View.h : CEXP050521View 类的接口
//

#pragma once

class CEXP050521Set;

class CEXP050521View : public CRecordView
{
protected: // 仅从序列化创建
	CEXP050521View();
	DECLARE_DYNCREATE(CEXP050521View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP050521_FORM };
#endif
	CEXP050521Set* m_pSet;

// 特性
public:
	CEXP050521Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~CEXP050521View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString Name;
	CString Sex;
	CString StuNum;
	CString Old;
	CString Phone;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	virtual void draw_pic(CString file);
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // EXP0505.2(1)View.cpp 中的调试版本
inline CEXP050521Doc* CEXP050521View::GetDocument() const
   { return reinterpret_cast<CEXP050521Doc*>(m_pDocument); }
#endif

