// Julia.h : main header file for the JULIA application
//

#if !defined(AFX_JULIA_H__44F40646_FF64_43B7_AE26_77C2FF64FD98__INCLUDED_)
#define AFX_JULIA_H__44F40646_FF64_43B7_AE26_77C2FF64FD98__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CJuliaApp:
// See Julia.cpp for the implementation of this class
//

class CJuliaApp : public CWinApp
{
public:
	CJuliaApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJuliaApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CJuliaApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JULIA_H__44F40646_FF64_43B7_AE26_77C2FF64FD98__INCLUDED_)
