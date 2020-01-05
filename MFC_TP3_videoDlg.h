
// MFC_TP3_videoDlg.h : fichier d'en-tête
//

#pragma once
#include <Vfw.h>

// boîte de dialogue CMFC_TP3_videoDlg
class CMFC_TP3_videoDlg : public CDialogEx
{
// Construction
public:
	CMFC_TP3_videoDlg(CWnd* pParent = NULL);	
	HWND hWndC;
	int Largeur = 640, Hauteur = 480;
	unsigned char * Imrgb = NULL;
	
	
	//************* fonctions membres
	static LPVOID CALLBACK DetectionContour(HWND hWndC, LPVIDEOHDR pV);
	static LPVOID CALLBACK DetectionContour2(HWND hWndC, LPVIDEOHDR pV);
	static LPVOID CALLBACK InverserImage(HWND hWndC, LPVIDEOHDR pV);
	static LPVOID CALLBACK SeuillageImage(HWND hWndC, LPVIDEOHDR pV);



// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_TP3_VIDEO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Prise en charge de DDX/DDV


// Implémentation
protected:
	HICON m_hIcon;

	// Fonctions générées de la table des messages
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedinit();
	afx_msg void OnBnClickedvideoformat();
//	afx_msg void OnBnClickedvideoformat2();
	afx_msg void OnBnClickedvideosource();
	afx_msg void OnBnClickedtraitement();
	//********************
	
	afx_msg void OnBnClickedinversion();
	afx_msg void OnBnClickedseuillage();
	afx_msg void OnBnClickedButton1();
};
