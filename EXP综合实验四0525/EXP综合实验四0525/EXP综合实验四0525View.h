
// EXP综合实验四0525View.h : CEXP综合实验四0525View 类的接口
//

#pragma once

class CEXP综合实验四0525Set;

class CEXP综合实验四0525View : public CRecordView
{
protected: // 仅从序列化创建
	CEXP综合实验四0525View();
	DECLARE_DYNCREATE(CEXP综合实验四0525View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP0525_FORM };
#endif
	CEXP综合实验四0525Set* m_pSet;

// 特性
public:
	CEXP综合实验四0525Doc* GetDocument() const;

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
	virtual ~CEXP综合实验四0525View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnEnChangeEdit7();
	CString Name;
	CString StuNum;
	CString Major;
	CString Sex;
	double Birth;
	CString Phone;
	CString Home;
	CString Picture;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	virtual void draw_pic(CString file);
	virtual void OnDraw(CDC* /*pDC*/);
	afx_msg void OnEnChangeEdit6();
	afx_msg void OnSelect();
	afx_msg void OnSort();
	afx_msg void OnRecord();
};

#ifndef _DEBUG  // EXP综合实验四0525View.cpp 中的调试版本
inline CEXP综合实验四0525Doc* CEXP综合实验四0525View::GetDocument() const
   { return reinterpret_cast<CEXP综合实验四0525Doc*>(m_pDocument); }
#endif

