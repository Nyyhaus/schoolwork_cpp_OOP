{
	int x, y;
	//Luo uusi (dynaaminen) olio luokasta "Piste"
	Piste* osoitin_olioon = new Piste;
	
	//Kysy käyttäjältä pisteoliolle asetettavat koordinaatit
	cout << "Anna uuden pisteen x: ";
	cin >> x;
	cout << "Anna uuden pisteen y: ";
	cin >> y;
	
	// Aseta saadut koordinaatit funktiossa luodulle oliolle
	osoitin_olioon->AsetaPiste(x, y);
	
	// Palauta olion osoite sitä kutsuvalle pääohjelmalle
	return osoitin_olioon;
	
	/*Funktio "uusi_piste" palauttaa osoitteen funktion sisällä 
muodostettuun dynaamiseen olioon, 
jonka vuoksi sen prototyyppi on seuraava: Piste* uusi_piste();*/
}

int main()
{
  Piste* pisteolio;
  pisteolio = uusi_piste();
  pisteolio->TulostaPiste();
  delete pisteolio;

  return 0;
}
