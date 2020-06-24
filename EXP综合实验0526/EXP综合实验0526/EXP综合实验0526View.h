
// EXP综合实验0526View.h : CEXP综合实验0526View 类的接口
//

#pragma once

class CEXP综合实验0526Set;

class CEXP综合实验0526View : public CRecordView
{
protected: // 仅从序列化创建
	CEXP综合实验0526View();
	DECLARE_DYNCREATE(CEXP综合实验0526View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_EXP0526_FORM };
#endif
	CEXP综合实验0526Set* m_pSet;

// 特性
public:
	CEXP综合实验0526Doc* GetDocument() const;

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
	virtual ~CEXP综合实验0526View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit8();
	CString Name;
	double StuNum;
	CString Major;
	CString Sex;
	double Birth;
	double Phone;
	CString Home;
	CString Picture;
	virtual void draw_pic(CString file);
	virtual void OnDraw(CDC* /*pDC*/);
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedshowpicture();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedEdit();
	afx_msg void Onselect();
	afx_msg void Onsort();
	afx_msg void Onrecord();
	afx_msg void Onrestore();
	long StuNumber;
};

#ifndef _DEBUG  // EXP综合实验0526View.cpp 中的调试版本
inline CEXP综合实验0526Doc* CEXP综合实验0526View::GetDocument() const
   { return reinterpret_cast<CEXP综合实验0526Doc*>(m_pDocument); }
#endif

