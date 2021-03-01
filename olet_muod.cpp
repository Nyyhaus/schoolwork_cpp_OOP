/* Oletusmuodostin, joka alustaa jäsenmuuttujan
"x_" arvolla 1 ja jäsenmuuttujan "y_" arvolla 1. */
Piste::Piste() : x_(1), y_(1)
{
	
}


int main()
{
  Piste  pisteolio;
  pisteolio.TulostaPiste();
  return  0;
}
