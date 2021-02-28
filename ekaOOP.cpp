#include <iostream>
using namespace std;

class Piste
{
	// Luokan taidot
	public:
	//"AsetaX" 
	void AsetaX(int x);
	//"AsetaY"
	void AsetaY(int y);
	//"Siirra"
	void Siirra(int x, int y);
	//"KerroPaikka".
	void KerroPaikka();
	// Jäsenmuuttujat
	private:
	int x_;
	int y_;
};

void Piste::AsetaX(int x)
{
  x_ = x;
}

void Piste::AsetaY(int y)
{
  y_ = y;
}

void Piste::Siirra(int x, int y)
{
  x_ = x_ + x;
  y_ = y_ + y;
}

void Piste::KerroPaikka()
{
  cout << "Pisteen x-koordinaatti: " << x_ << endl;
  cout << "Pisteen y-koordinaatti: " << y_ << endl;
}

int main()
{
   Piste pikseli;
   pikseli.AsetaX(34);
   pikseli.AsetaY(100);
   
   cout << "Pisteolio muodostettu ja koordinaatit asetettu.\n";
   
   pikseli.KerroPaikka();
   pikseli.Siirra(20, -33);
   
   cout << "Pistettä siirretty.\n";
   
   pikseli.KerroPaikka();
   
   return 0;
 }
