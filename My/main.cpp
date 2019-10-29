#include <afxwin.h>
#include <atlimage.h>
#include <afxdlgs.h>

class CMainFrame :public CFrameWnd {
public:
	CMainFrame() { Create(NULL, L"Hi"); }
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};

class CMyApp :public CWinApp {
	BOOL InitInstance() {
		CMainFrame* Frm = new CMainFrame();
		m_pMainWnd = Frm;
		Frm->ShowWindow(1);
		return TRUE;
	}
};
CMyApp theApp; BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
ON_WM_PAINT()
END_MESSAGE_MAP()

void CMainFrame::OnPaint()
{
	
	CPaintDC dc(this);
	CImage img;
	img.Load(L"anu.png");
	img.Draw(dc, 0, 0);
}
     