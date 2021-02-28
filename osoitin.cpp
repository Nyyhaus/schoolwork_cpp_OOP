#include<iostream>
using namespace std;
// Funktion "muuta_lukua" prototyyppi
void muuta_lukua(int* luku);

/*Funktion tehtävänä on kysyä korvaavaa lukua, joka sijoitetaan 
parametrina saadun osoitteen epäsuorasti viittamaan muuttujaan. */
void muuta_lukua(int* luku)
{
	cout << "Anna korvaava luku: ";
	cin >> *luku;
}

int main()
{
  int luku = 2;
  cout << "Luku ohjelman alussa: " << luku << endl;
  muuta_lukua(&luku);
  cout << "Luku ohjelman lopussa: " << luku << endl;
  return 0;
}
