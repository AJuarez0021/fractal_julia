// JuliaView.h : interface of the CJuliaView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_JULIAVIEW_H__06C70ECC_4A61_487E_9C4C_54504356A73B__INCLUDED_)
#define AFX_JULIAVIEW_H__06C70ECC_4A61_487E_9C4C_54504356A73B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <complex>
#include <fstream>
#define SIZE 255
using namespace std;

typedef struct{
	BYTE Rojo;
	BYTE Verde;
	BYTE Azul;
}Color;

class CJuliaView : public CView
{
protected: // create from serialization only
	CJuliaView();
	DECLARE_DYNCREATE(CJuliaView)

// Attributes
public:
	CJuliaDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJuliaView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CJuliaView();
	void LoadPaleta(LPSTR);
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
private:
	//coordenadas del plando complejo
    double REALMIN,IMAGMIN,REALMAX,IMAGMAX;
	float DIVERGE; //valor de divergencia
    int MAX;       //iteracion maxima
    int maxx,maxy;
	int i,j;
    int Contador;
	DWORD R,G,B;
	ifstream f;
	LPSTR Buffer;
	complex<double> Z,C;
	typedef Color TipoPaleta[256];
    TipoPaleta Paleta;
protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CJuliaView)
	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in JuliaView.cpp
inline CJuliaDoc* CJuliaView::GetDocument()
   { return (CJuliaDoc*)m_pDocument; }
#endif


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JULIAVIEW_H__06C70ECC_4A61_487E_9C4C_54504356A73B__INCLUDED_)
