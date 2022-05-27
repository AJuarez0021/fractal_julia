// JuliaDoc.cpp : implementation of the CJuliaDoc class
//

#include "stdafx.h"
#include "Julia.h"

#include "JuliaDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CJuliaDoc

IMPLEMENT_DYNCREATE(CJuliaDoc, CDocument)

BEGIN_MESSAGE_MAP(CJuliaDoc, CDocument)
	//{{AFX_MSG_MAP(CJuliaDoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJuliaDoc construction/destruction

CJuliaDoc::CJuliaDoc()
{
}

CJuliaDoc::~CJuliaDoc()
{
}

BOOL CJuliaDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CJuliaDoc serialization

void CJuliaDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}

/////////////////////////////////////////////////////////////////////////////
// CJuliaDoc diagnostics

#ifdef _DEBUG
void CJuliaDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CJuliaDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CJuliaDoc commands
