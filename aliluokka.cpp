#include<iostream>
using namespace std;

class Kuvio
{
public:
  Kuvio(char tekstuuri);
  char PalautaTekstuuri();
  virtual void Piirra() = 0;

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


class Nelio : public Kuvio
{
public:
  Nelio(char tekstuuri, int sivun_pituus);
  void Piirra();
private:
  int sivun_pituus_;
};

Nelio::Nelio(char tekstuuri, int sivun_pituus) : Kuvio(tekstuuri), sivun_pituus_(sivun_pituus)
{
}


void Nelio::Piirra()
{
  int i, j;
  for(i=0; i<sivun_pituus_; i++)
  {
    for(j=0; j<sivun_pituus_; j++)
    {
      if(j==sivun_pituus_ - 1){
        cout << PalautaTekstuuri() << endl;
      }
      else{
        cout << PalautaTekstuuri();
      }
    }
  }
}


// Luokan "Kuvio" aliluokka
class Nelikulmio : public Kuvio
{
	public:
	/* Parametrillinen muodostin, joka välittää Kuvio-luokan muodostimelle 
Nelikulmio-muodostimen saaman char-tyyppisen parametrin ja alustaa 
edellisessä mainitut jäsenmuuttujat muodostimelle välitetyin parametrein */
	Nelikulmio(char merkki, int korkeus, int leveys);
	/* Funktion Piirra toteutus, joka piirtää nelikulmion sen jäsenmuuttujissa 
olevien korkeus ja leveys tietojen perusteella. Piirtämiseen käytetään
yliluokan jäsenmuuttujassa olevaa tekstuurimerkkiä kuten 
esimerkkitulosteesta voidaan havaita. Piirtämiseen tarvittava
tekstuuri saadaan käyttöön Kuvio-luokan PalautaTekstuuri() funktiolla. */
	void Piirra();
	private:
	// Jäsenmuuttujat: korkeus_ ja leveys_
	int korkeus_;
	int leveys_;
};

Nelikulmio::Nelikulmio(char merkki, int korkeus, int leveys) : 
Kuvio(merkki), korkeus_(korkeus), leveys_(leveys)
{	
}

void Nelikulmio::Piirra()
{
	int x, y;
	
	for (x = 0; x < korkeus_; x++)
	{
		for (y = 0; y < leveys_; y++)
		{
			if ( y == leveys_ - 1)
			{
				cout << PalautaTekstuuri() << endl;
			}
			else
			{
				cout << PalautaTekstuuri();
			}
		}
	}
}
