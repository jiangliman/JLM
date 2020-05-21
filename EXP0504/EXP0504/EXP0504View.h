
// EXP0504View.h : CEXP0504View 类的接口
//

#pragma once

class CEXP0504Set;

class CEXP0504View : public CRecordView
{
protected: // 仅从序列化创建
	CEXP0504View();
	DECLARE_DYNCREATE(CEXP0504View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP0504_FORM };
#endif
	CEXP0504Set* m_pSet;

// 特性
public:
	CEXP0504Doc* GetDocument() const;

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
	virtual ~CEXP0504View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	double ID;
	CString name;
	CString stunumber;
	double old;
	double phone;
};

#ifndef _DEBUG  // EXP0504View.cpp 中的调试版本
inline CEXP0504Doc* CEXP0504View::GetDocument() const
   { return reinterpret_cast<CEXP0504Doc*>(m_pDocument); }
#endif

