
class Pelaaja
{
	public:
	// Pelaaja();
	void AsetaNimi(string nimi);
	string KerroNimi();
	void AsetaRooli(string rooli);
	string KerroRooli();
	void AsetaNro(int nro);
	int KerroNro();
	
	private:
	string nimi_;
	string rooli_;
	int pelinro_;
		
};
/*
Pelaaja::Pelaaja() : nimi_(), rooli_(), pelinro_()
{
}
*/
void Pelaaja::AsetaNimi(string nimi)
{
	nimi_ = nimi;
}

string Pelaaja::KerroNimi()
{
	return nimi_;
}
void Pelaaja::AsetaRooli(string rooli)
{
	rooli_ = rooli;
}

string Pelaaja::KerroRooli()
{
	return rooli_;
}
void Pelaaja::AsetaNro(int nro)
{
	pelinro_ = nro;
}

int Pelaaja::KerroNro()
{
	return pelinro_;
}
