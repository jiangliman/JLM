
// EXP0505.2(1)Doc.h : CEXP050521Doc 类的接口
//


#pragma once
#include "EXP0505.2(1)Set.h"


class CEXP050521Doc : public CDocument
{
protected: // 仅从序列化创建
	CEXP050521Doc();
	DECLARE_DYNCREATE(CEXP050521Doc)

// 特性
public:
	CEXP050521Set m_EXP050521Set;

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CEXP050521Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
