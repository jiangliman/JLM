
// EXP综合实验三0519View.h : CEXP综合实验三0519View 类的接口
//

#pragma once

class CEXP综合实验三0519Set;

class CEXP综合实验三0519View : public CRecordView
{
protected: // 仅从序列化创建
	CEXP综合实验三0519View();
	DECLARE_DYNCREATE(CEXP综合实验三0519View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP0519_FORM };
#endif
	CEXP综合实验三0519Set* m_pSet;

// 特性
public:
	CEXP综合实验三0519Doc* GetDocument() const;

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
	virtual ~CEXP综合实验三0519View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long i;
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedAbort();
	afx_msg void OnBnClickedButton2();
};

#ifndef _DEBUG  // EXP综合实验三0519View.cpp 中的调试版本
inline CEXP综合实验三0519Doc* CEXP综合实验三0519View::GetDocument() const
   { return reinterpret_cast<CEXP综合实验三0519Doc*>(m_pDocument); }
#endif

