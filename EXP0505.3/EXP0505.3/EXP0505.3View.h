
// EXP0505.3View.h : CEXP05053View 类的接口
//

#pragma once

class CEXP05053Set;

class CEXP05053View : public CRecordView
{
protected: // 仅从序列化创建
	CEXP05053View();
	DECLARE_DYNCREATE(CEXP05053View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP05053_FORM };
#endif
	CEXP05053Set* m_pSet;

// 特性
public:
	CEXP05053Doc* GetDocument() const;

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
	virtual ~CEXP05053View();
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
	virtual void OnDraw(CDC* /*pDC*/);
};

#ifndef _DEBUG  // EXP0505.3View.cpp 中的调试版本
inline CEXP05053Doc* CEXP05053View::GetDocument() const
   { return reinterpret_cast<CEXP05053Doc*>(m_pDocument); }
#endif

