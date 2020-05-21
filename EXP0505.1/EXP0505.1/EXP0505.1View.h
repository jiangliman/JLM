
// EXP0505.1View.h : CEXP05051View 类的接口
//

#pragma once

class CEXP05051Set;

class CEXP05051View : public CRecordView
{
protected: // 仅从序列化创建
	CEXP05051View();
	DECLARE_DYNCREATE(CEXP05051View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP05051_FORM };
#endif
	CEXP05051Set* m_pSet;

// 特性
public:
	CEXP05051Doc* GetDocument() const;

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
	virtual ~CEXP05051View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit2();
	CString Name;
	CString Sex;
	CString StuNum;
	CString Old;
	CString Phone;
	CString PicWay;
};

#ifndef _DEBUG  // EXP0505.1View.cpp 中的调试版本
inline CEXP05051Doc* CEXP05051View::GetDocument() const
   { return reinterpret_cast<CEXP05051Doc*>(m_pDocument); }
#endif

