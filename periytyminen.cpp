#include<iostream>
using namespace std;

class Ajoneuvo
{
public:
  Ajoneuvo(int ajetut, int paino, string merkki, string malli);

protected:
  void Liikuta(int km);
  int PalautaAjetut();
  int PalautaPaino();
  string PalautaMerkki();
  string PalautaMalli();
  
private:
  int ajetut_;
  int paino_;
  string merkki_;
  string malli_;
};

Ajoneuvo::Ajoneuvo(int ajetut, int paino, string merkki, string malli) : ajetut_(ajetut), paino_(paino), 
merkki_(merkki), malli_(malli)
{
}

void Ajoneuvo::Liikuta(int km)
{ ajetut_ = ajetut_ + km; }

int Ajoneuvo::PalautaAjetut()
{ return ajetut_; }

int Ajoneuvo::PalautaPaino()
{ return paino_; }

string Ajoneuvo::PalautaMerkki()
{ return merkki_; }

string Ajoneuvo::PalautaMalli()
{ return malli_; }

// Luokka Auto, joka perii luokan Ajoneuvo. 
class Auto : public Ajoneuvo
{
	public:
	/*Auto-luokkaan on tehtävä parametrillinen muodostin, jolle välitetään 
auton muodostamiseen tarvittavat tiedot (ajetut_, paino_, merkki_, 
malli_, rekisteri_nro_ ja matkustajat_max_). Osa parametreista välitetään
Auto-luokan muodostajassa Ajoneuvo-luokan muodostajalle. Sinun tulisi 
kyetä päättelemään, mitkä. */
	Auto(int ajetut, int paino, string merkki, string malli, 
	string rekisteri_nro_, int matkustajat_max_);
	// Tulostaa auton tiedot mukaan lukien sen yläluokassa olevat tiedot. 
	void TulostaAutonTiedot();
	/* Tehtävänä on käyttää yliluokan palvelua Liikuta() ajettujen 
	kilometrien kirjaamiseksi. Lisäksi funktio AjaAutoa() tulostaa
	näytölle ajettujen kilometrien määrän. */	
	int AjaAutoa(int km);
	private:
	/* Luokka sisältää kaksi
autolle ominaista jäsenmuuttujaa: string-tyypin rekisteri_nro_ ja 
int-tyypin matkustajat_max_, joka kuvaa autolle suurinta sallittua 
matkustajamäärää. */
	string rekisteri_nro_;
	int matkustajat_max_;
};

Auto::Auto(int ajetut, int paino, string merkki, string malli, 
		   string rekisteri_nro, int matkustajat_max) : 
Ajoneuvo(ajetut, paino, merkki, malli), rekisteri_nro_(rekisteri_nro),
matkustajat_max_(matkustajat_max)
{
}

void Auto::TulostaAutonTiedot()
{
	// Tulosta auton tiedot mukaan lukien yläluokan tiedot
	cout << "Merkki: " << PalautaMerkki() << endl << "Malli: " <<
		PalautaMalli() << endl << "Paino: " << PalautaPaino() << endl <<
		"Ajetut kilometrit: " << PalautaAjetut() << endl <<"Rekisterinumero: "
		<< rekisteri_nro_ << endl << "Maksimi matkustajien määrä: " 
		<< matkustajat_max_ << "\n" << endl;
}

int Auto::AjaAutoa(int km)
{
	// Käytä yliluokan palvelua "Liikuta()
	Liikuta(km);
	// Tulosta näytölle ajetut kilometrit
	cout << "Autolla ajettu " << km << " kilometriä.\n" << endl;
}

int main()
{
  Auto pirssi(250000, 1700, "Toyota", "Carina II", "TFM-257", 5);
  pirssi.TulostaAutonTiedot();
  pirssi.AjaAutoa(25000);
  pirssi.TulostaAutonTiedot();
  return 0;
}
