#include<iostream>
#include<string>
using namespace std;

class Auto
{
public:
  void Liiku(int km);
  void KerroAjetutKm();
  Auto(string merkki, int ajetut_km);
private:
  string merkki_;
  int ajetut_km_;
};

Auto::Auto(string merkki, int ajetut_km) : merkki_(merkki), ajetut_km_(ajetut_km)
{
}

void Auto::Liiku(int km)
{
  ajetut_km_ = ajetut_km_ + km;
  cout << "Wrooom..." << km << " kilometriä ajettu." << endl;
}

void Auto::KerroAjetutKm()
{
  cout << merkki_ << " merkkisellä autolla on ajettu " << ajetut_km_ << " km" << endl;
}


// osoittimen avulla toteutettu assosiaatiosuhde Auto-luokkaan.
/* Kaksi jäsenmuuttujaa: henkilön nimen (string) ja
osoittimen Auto-luokan olioihin */
class Henkilo
{
	public:
	/* Parametrillinen muodostin, joka muodostaa uuden henkilön ja
	sijoittaa olion jäsenmuuttujiin parametrina saadut nimen ja
	osoittimen tiettyyn auto-olioon.*/
	Henkilo(string henkilon_nimi, Auto* kaara);
	/* Funktio AjaAutoa saa kokonaislukutyypin parametrin, 
	jolla ilmaistaan ajettavien kilometrien määrä. AjaAutoa-funktion
	tehtävänä on kutsua Auto-luokan Liiku funktiota, jolle ajettavien 
	kilometrien lukumäärä välitetään.*/
	void AjaAutoa(int km);
	/* Funktio VaihdaAutoa, joka saa parametrina osoittimen uuteen 
	auto-olioon ja jonka funktio vaihtaa entisen auton tilalle. */
	void VaihdaAutoa(Auto* uusi_auto);
	
	private:
	string henkilon_nimi_;
	Auto* auto_;
};

Henkilo::Henkilo(string henkilon_nimi, Auto* kaara) : 
henkilon_nimi_(henkilon_nimi), auto_(kaara)
{
	// auto_ = new Auto;
}

void Henkilo::AjaAutoa(int km)
{
	// Kutsu "Liiku" funktiota ja välitä sille ajettavien km lkm
	auto_->Liiku(km);
}

void Henkilo::VaihdaAutoa(Auto* uusi_auto)
{
	// vaihda  saatuusi auto entisen tilalle
		if (uusi_auto != NULL)
	{
		auto_ = uusi_auto;
	}
}
