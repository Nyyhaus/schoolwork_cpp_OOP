// Muodostin sijoittaa parametrina saadut arvot jäsenmuuttujiin "x_" ja "y_"
Piste::Piste(int x, int y) : x_(x), y_(y)
{
	
}

int main()
{
  int x, y;
  cout << "Anna muodostettavan olion x-koordinaatti: ";
  cin >> x;
  cout << "Anna muodostettavan olio y-koordinaatti: ";
  cin >> y;
  Piste pisteolio(x, y);
  pisteolio.TulostaPiste();
  return 0;
}
