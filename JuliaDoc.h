// JuliaDoc.h : interface of the CJuliaDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_JULIADOC_H__4EDF72D6_9CC5_4E4A_88CF_89AA847D8295__INCLUDED_)
#define AFX_JULIADOC_H__4EDF72D6_9CC5_4E4A_88CF_89AA847D8295__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CJuliaDoc : public CDocument
{
protected: // create from serialization only
	CJuliaDoc();
	DECLARE_DYNCREATE(CJuliaDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJuliaDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CJuliaDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CJuliaDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JULIADOC_H__4EDF72D6_9CC5_4E4A_88CF_89AA847D8295__INCLUDED_)
