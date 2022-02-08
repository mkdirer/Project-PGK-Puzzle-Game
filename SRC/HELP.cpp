///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "HELP.h"

///////////////////////////////////////////////////////////////////////////

MyDialog3::MyDialog3( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	SetTitle(_("Uk\u0142adanka obrazkowa"));
	wxIcon mainicon;
	mainicon.LoadFile("ikona.ico", wxBITMAP_TYPE_ICO);
	SetIcon(mainicon);

	wxImage imag;
	imag.LoadFile("help.jpg");
	wxBitmap bitm(imag.Scale(100, 100));

	bitmap = new wxStaticBitmap(this, wxID_ANY, bitm, wxDefaultPosition, wxDefaultSize, 0);
	bSizer1->Add(bitmap, 0, wxALIGN_CENTER | wxTOP, 30);

	m_staticText1 = new wxStaticText(this, wxID_ANY, wxT("WPROWADZENIE:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText1->Wrap(-1);
	m_staticText1->SetFont(wxFont(10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));

	bSizer1->Add(m_staticText1, 0, wxLEFT | wxTOP, 40);

	m_staticText2 = new wxStaticText(this, wxID_ANY, wxT("Wprowad� NICK/NAZW� gracza oraz liczb� wierszy i kolumn do podzia�u obrazka.\nZatwierd� wyb�r przyciskiem START."), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText2->Wrap(-1);
	bSizer1->Add(m_staticText2, 0, wxLEFT, 40);

	m_staticText3 = new wxStaticText(this, wxID_ANY, wxT("PODSTAWOWE STEROWANIE:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText3->Wrap(-1);
	m_staticText3->SetFont(wxFont(10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));

	bSizer1->Add(m_staticText3, 0, wxLEFT, 40);

	m_staticText4 = new wxStaticText(this, wxID_ANY, wxT("Rozpocznij rozgrywk� klikaj�c lewym przyciskiem myszy w pole NOWA GRA. \nW celu zmiany wersji gry, rozwi� pasek Menu i dokonaj wyboru.\nWersja 1:\nAby przemie�ci� fragment obrazka w puste pole, wska� go kursorem i kliknij\nlewym przyciskiem myszy (oczywi�cie wskazany puzzel musi s�siadowa�\nz pustym polem).\nWersja 2: \nAby zamieni� ze sob� dwa s�siaduj�ce fragmenty, kliknij w ramk� miedzy nimi. \nW celu przemieszczenia czterech s�siaduj�cych element�w kliknij \nw skrzy�owanie ich kraw�dzi. Po wskazaniu ramki przy kraw�dzi planszy gry spowodujesz przesuni�cie ca�ego wiersza lub ca�ej kolumny.\nPoprawne u�o�enie obrazka sygnalizowane jest zielon� ikonk� (znajduj�c� si�\nw prawym panelu), a niepoprawne - czerwon�.\nKlik. Klik. Klik. \nNaci�nij klawisz [Tab], w trakcie rozgrywki, aby  wy�wietli�  na planszy gry\npoprawnie u�o�ony obrazek. Ponowne wci�ni�cie klawisza [Tab] przywraca\npoprzedni uk�ad planszy gry. \nAby zako�czy� gr� wejd� w MENU->EXIT lub klikaj�c lewym przyciskiem myszy\nw czerwony krzy�yk w g�rnym lewym rogu ekranu. \n"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText4->Wrap(-1);
	bSizer1->Add(m_staticText4, 0, wxLEFT, 40);

	m_staticText5 = new wxStaticText(this, wxID_ANY, wxT("INNE:"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText5->Wrap(-1);
	m_staticText5->SetFont(wxFont(10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial")));

	bSizer1->Add(m_staticText5, 0, wxLEFT, 40);

	m_staticText6 = new wxStaticText(this, wxID_ANY, wxT("U�� obrazek w jak najmniejszej liczbie ruch�w, w jak najkr�tszym czasie \noraz w jak najwi�kszej liczbie puzzli, aby uzyska� wy�sze notowania \nw rankingu. Przedstawione informacje zawarto w prawym panelu gry. \nPowodzenia. �yczymy udanej zabawy :)\n\nW razie dalszych problem�w oraz pyta� prosz� o pisemny kontakt \nz dzia�em obs�ugi klienta na adres mailowy: ITakNieOdpiszemy@gmail.com"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText6->Wrap(-1);
	bSizer1->Add(m_staticText6, 0, wxLEFT, 40);


	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);
}

MyDialog3::~MyDialog3()
{
}
