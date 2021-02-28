#include<iostream>
using namespace std;
// tähän funktion "muuta_lukua" prototyyppi
void muuta_lukua(int& luku);
// tähän itse funktio, joka saa viittauksen parametrina
// välitettävään muuttujaan
void muuta_lukua(int& luku)
{
	cout << "Anna korvaava luku: ";
	cin >> luku;
}

int main()
{
  int luku = 2;
  cout << "Luku ohjelman alussa: " << luku << endl;
  muuta_lukua(luku);
  cout << "Luku ohjelman lopussa: " << luku << endl;
  return 0;
}
