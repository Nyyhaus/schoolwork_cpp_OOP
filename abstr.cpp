#include<iostream>
using namespace std;


// Abstrakti luokka "Kuvio"
class Kuvio
{
	public:
	/* Parametrillinen muodostin, jolle välitetään muodostamisen 
	yhteydessä char-tyypin parametri, jonka arvo sijoitetaan muuttujaan 
	tekstuuri_ */
	Kuvio(char tekstuuri);
	/* Jäsenfunktio PalautaTekstuuri(), joka palauttaa sitä kutsuttaessa
jäsenmuuttujan tekstuuri_ arvon */
	char PalautaTekstuuri();
	// Puhtaasti virtuaalinen funktio Piirra
	virtual void Piirra();
	private:
	char tekstuuri_;
};

Kuvio::Kuvio(char tekstuuri) : tekstuuri_(tekstuuri)
{
}

char Kuvio::PalautaTekstuuri()
{
	return tekstuuri_;
}

void Kuvio::Piirra()
{
}

int main()
{
  int sivun_pituus;
  char tekstuuri;
  cout << "Anna muodostettavan neliön sivun pituus: ";
  cin >> sivun_pituus;
  cout << "Syötä merkki, jota käytetään neliön tekstuurina: ";
  cin >> tekstuuri;

  Kuvio* nelio = new Nelio(tekstuuri, sivun_pituus);
  nelio->Piirra();
  delete nelio;

  return 0;
}
