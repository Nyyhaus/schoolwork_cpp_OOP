#include <string>
// Laadi luokka Asiakastili
class Asiakastili
{
	public:
/* "LisaaAsiakas" saa parametrinä asiakkaan tilinumeron, saldon ja
nimen sijoittaen nämä olion jäsenmuuttujiin. Ei palauta arvoa. */
	void LisaaAsiakas(int tilinumero, int saldo, string asiakkaan_nimi);
		
/* "NaytaTiedot" ei parametrejä, eikä palauta arvoa. 
Funktion tehtävävänä on tulostaa näytölle kolme riviä, jotka sisältävät 
olion jäsenmuuttujien arvot esimerkkitulosteen mukaisella tavalla.*/
	void NaytaTiedot();
/* "MuutaSaldoa" ottaa kokonaisluvun, jonka se sijoittaa
olion saldoa kuvaavaan jäsenmuuttujaan. Ei palauta arvoa. */
	void MuutaSaldoa(int luku);
/* "VertaaTiliNro" saa kokonaislukuarvon, jota verrataan olion 
tilinumeroon. Mikäli parametrinä välitetty tilinumero on sama kuin
olion tiedoissa sijaitseva, palauttaa jäsenfunktio kokonaislukuarvon 1.
Muuten palauttaa kokonaislukuarvon 0. */
	int VertaaTiliNro(int luku);
	// Jäsenmuuttujat tilinumerolle, saldolle, sekä asiakkaan nimelle.
	private:
	int tilinumero_, saldo_;
	string asiakkaan_nimi_;
};
/* "LisaaAsiakas" saa parametrinä asiakkaan tilinumeron, saldon ja
nimen sijoittaen nämä olion jäsenmuuttujiin. Ei palauta arvoa. */
void Asiakastili::LisaaAsiakas(int tilinumero, int saldo, string asiakkaan_nimi)
{
	tilinumero_ = tilinumero;
	saldo_ = saldo;
	asiakkaan_nimi_ = asiakkaan_nimi;
}

/* "NaytaTiedot" ei parametrejä, eikä palauta arvoa. 
Funktion tehtävävänä on tulostaa näytölle kolme riviä, jotka sisältävät 
olion jäsenmuuttujien arvot esimerkkitulosteen mukaisella tavalla.*/
void Asiakastili::NaytaTiedot()
{
	cout << "Tilinumero: " << tilinumero_ << endl << "\
Asiakkaan nimi: " << asiakkaan_nimi_ << endl << "\
Tilin saldo: " << saldo_ << endl;
}
/* "MuutaSaldoa" ottaa kokonaisluvun, jonka se sijoittaa
olion saldoa kuvaavaan jäsenmuuttujaan. Ei palauta arvoa. */

void Asiakastili::MuutaSaldoa(int luku)
{
	saldo_ = luku;
}
/* "VertaaTiliNro" saa kokonaislukuarvon, jota verrataan olion 
tilinumeroon. Mikäli parametrinä välitetty tilinumero on sama kuin
olion tiedoissa sijaitseva, palauttaa jäsenfunktio kokonaislukuarvon 1.
Muuten palauttaa kokonaislukuarvon 0. */

int Asiakastili::VertaaTiliNro(int luku)
{
	if (luku == tilinumero_)
		return 1;
	else
		return 0;
}
/* Selvitä löytyykö käytössä olevasta oliotaulukosta oliota eli 
asiakasta, jolla on sama tilinumero kuin ohjelmalle juuri syötetty
tilinumero. Jos oliotaulukko (asiakasrekisteri[5]) sisältää asiakkaan,
jolla on sama numero, tulee ohjelman asettaa bool-muuttujalle "loytyi" 
arvo "true", sekä kutsua täsmäävän olion metodia "NaytaTiedot()".*/
		  for (int i = 0; i < 6; i++)
		  {
			  		  /*Tilinumero, jota haetaan
		  oliotaulukon olioista sijaitsee muuttujassa "tilin_nro".*/
			  if (asiakasrekisteri[i].VertaaTiliNro(tilin_nro) == 1)
			  {
				  loytyi = true;
				  /* Olioiden funktioihin viitataan pistenotaatiolla. */
				  asiakasrekisteri[i].NaytaTiedot();
			  }
		  }

