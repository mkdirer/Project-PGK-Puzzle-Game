///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "INFO.h"

///////////////////////////////////////////////////////////////////////////

MyDialog2::MyDialog2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	SetTitle(_("Uk\u0142adanka obrazkowa"));
	wxIcon mainicon;
	mainicon.LoadFile("ikona.ico", wxBITMAP_TYPE_ICO);
	SetIcon(mainicon);

	wxImage imag;
	imag.LoadFile("info.jpg");
	wxBitmap bitm(imag.Scale(100, 100));

	bitmap = new wxStaticBitmap(this, wxID_ANY, bitm, wxDefaultPosition, wxDefaultSize, 0);
	bSizer1->Add(bitmap, 0, wxALIGN_CENTER | wxTOP, 60);

	m_staticText1 = new wxStaticText(this, wxID_ANY, wxT("Sliding puzzle to jedyna w swoim rodzaju gra familijna, w kt�rej\ngracz ma za zadanie u�o�enie kompletnego obrazka z jego \npomieszanych fragment�w. Uk�adanka obrazkowa wprowadzi ci�\nw wir emocjonuj�cej, trzymaj�cej w napi�ciu rozgrywki, w kt�rej\nty sam decydujesz o poziomie trudno�ci. Ciesz si� prostot� gry, \nodkrywaj nowe plansze z zaskakuj�cymi zdj�ciami, podno� \npoprzeczk� zwi�kszaj�c liczb� puzzli, powi�ksz swoj� wiedz� \no �wiecie gry, zyskaj wy�sze notowania w rankingu staraj�c si� \nwykona� jak najmniejsza liczb� ruch�w, sta� si� mistrzem \npuzzli. Sprawd� czy podo�asz wyzwaniu. Wierzymy,\n�e �aden level/poziom nie stanowi dla ciebie trudno�ci :)\n\nProjekt realizowany jako praca zaliczeniowa z przedmiotu \nPodstawy Grafiki Komputerowej z u�yciem biblioteki wxWidgets\n\n\n"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText1->SetLabelMarkup(wxT("Sliding puzzle to jedyna w swoim rodzaju gra familijna  w kt�rej\ngracz ma za zadanie u�o�enie kompletnego obrazka z jego \npomieszanych fragment�w. Uk�adanka obrazkowa wprowadzi ci�\nw wir emocjonuj�cej, trzymaj�cej w napi�ciu rozgrywki, w kt�rej\nty sam decydujesz o poziomie trudno�ci. Ciesz si� prostot� gry, \nodkrywaj nowe plansze z zaskakuj�cymi zdj�ciami, podno� \npoprzeczk� zwi�kszaj�c liczb� puzzli, powi�ksz swoj� wiedz� \no �wiecie gry, zyskaj wy�sze notowania w rankingu staraj�c si� \nwykona� jak najmniejsza liczb� ruch�w, sta� si� mistrzem \npuzzli. Sprawd� czy podo�asz wyzwaniu. Wierzymy,\n�e �aden level/poziom nie stanowi dla ciebie trudno�ci :)\n\nProjekt realizowany jako praca zaliczeniowa z przedmiotu \nPodstawy Grafiki Komputerowej z u�yciem biblioteki wxWidgets\n\n\n"));
	m_staticText1->Wrap(-1);
	bSizer1->Add(m_staticText1, 0, wxALIGN_CENTER | wxTOP, 50);

	m_staticText2 = new wxStaticText(this, wxID_ANY, wxT("Autorzy:\nTomasz Szkaradek,\nMonika Kidawska ,\n�ukasz Wajda.\n"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText2->Wrap(-1);
	bSizer1->Add(m_staticText2, 0, wxALIGN_CENTER | wxALL, 5);


	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);
}


MyDialog2::~MyDialog2()
{
}
