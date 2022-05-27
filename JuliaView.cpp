// JuliaView.cpp : implementation of the CJuliaView class
//

#include "stdafx.h"
#include "Julia.h"

#include "JuliaDoc.h"
#include "JuliaView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


/////////////////////////////////////////////////////////////////////////////
// CJuliaView

IMPLEMENT_DYNCREATE(CJuliaView, CView)

BEGIN_MESSAGE_MAP(CJuliaView, CView)
	//{{AFX_MSG_MAP(CJuliaView)
	ON_WM_PAINT()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJuliaView construction/destruction

CJuliaView::CJuliaView()
{
	Buffer=new char[SIZE];
	LoadPaleta("paleta.pal");
	REALMIN=-1.5; 
    IMAGMIN=-1.5; 
    REALMAX= 1.5; 
    IMAGMAX= 1.5; 
	DIVERGE=4.0;
	MAX=256;
}

CJuliaView::~CJuliaView()
{
	delete [] Buffer;
}

BOOL CJuliaView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CJuliaView drawing

void CJuliaView::OnDraw(CDC* pDC)
{
	CJuliaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
}

/////////////////////////////////////////////////////////////////////////////
// CJuliaView diagnostics

#ifdef _DEBUG
void CJuliaView::AssertValid() const
{
	CView::AssertValid();
}

void CJuliaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CJuliaDoc* CJuliaView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJuliaDoc)));
	return (CJuliaDoc*)m_pDocument;
}
#endif //_DEBUG

void CJuliaView::LoadPaleta(LPSTR Name)
{
	f.open(Name);
	for(i=0;i<256;i++){
		f.getline(Buffer,SIZE+1,'\n');
		sscanf(Buffer,"%d %d %d",&R,&G,&B);
		Paleta[i].Rojo= R;
		Paleta[i].Verde=G;
		Paleta[i].Azul= B;
	}
	f.close();
}
/////////////////////////////////////////////////////////////////////////////
// CJuliaView message handlers

void CJuliaView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting

	// TODO: Add your message handler code here
	
	// Do not call CView::OnPaint() for painting messages

	//proceso que dibuja el fractal
	  for(i=0;i<maxx;i++)
		  for(j=0;j<maxy;j++){
	        //asignamos a Z las coordenadas del plano complejo
             Z.real(((REALMAX-REALMIN)/(maxx)) * i + REALMIN);
			 Z.imag(((IMAGMAX-IMAGMIN)/(maxy)) * j + IMAGMIN);
			   
			 Contador=0; //inicializamos el contador
			 //iniciamos C=-0.745+0.1i
			 //C es una constante
			 C.real(-0.745);
			 C.imag(0.1);
		do{
		   Z=(Z*Z)+C; //ecuacion Z=Z²+C
		   Contador++;//incrementamos el contador
		   if(norm(Z) > DIVERGE)break;
		 }while(Contador < MAX);
	      R=Paleta[Contador].Rojo;
		  G=Paleta[Contador].Verde;
		  B=Paleta[Contador].Azul;
	      if(Contador==MAX)
		   dc.SetPixel(i,maxy-j,RGB(0,0,0));
	      else
		   dc.SetPixel(i,maxy-j,RGB(R,G,B));
	 }
}

void CJuliaView::OnSize(UINT nType, int cx, int cy) 
{
	CView::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	maxx=cx;
	maxy=cy;
	
}
