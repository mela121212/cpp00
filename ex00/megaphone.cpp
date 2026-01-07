#include <iostream> 

int main(int argc, char **argv) 
{
  int   i;
  int   j;

  i = 1;
  if (argc == 1) 
  {
    std::cout << "* LOUD AND UNBEARABLE FEDDBACK NOISE *" << std::endl;
    return 1;
  }
  while (i < argc)
  {
    j = 0;
    while (argv[i][j] != '\0')
    {
        std::cout << (char)toupper(argv[i][j]);
        j++;
    }
    i++;
  }
  std::cout << std::endl;
  return 0;
}

/*
// Biblioteca que proporciona funciones para realizar operaciones de entrada y salida de datos.
#include <iostream> 

int main(int argc, char **argv) 
{
  // variables enteras, i y j, que se utilizaran como contadores en los bucles.
  int   i;
  int   j;

  i = 1;
  // Si no hay argumentos
  // Imprime un mensaje en la salida con (std::cout)
  // y el programa termina con un codigo de retorno de 1.
  if (argc == 1) 
  {
    std::cout << "* LOUD AND UNBEARABLE FEDDBACK NOISE *" << std::endl;
    return 1;
  }
  // Itero sobre los argumentos pasados al programa, excepto el primero (el nombre del programa). 
  // Para cada argumento:
  // Se inicializa la variable j a 0 para recorrer los caracteres del argumento actual.
  // Itero sobre los caracteres del argumento actual hasta encontrar el caracter nulo ('\0').
  // Convierto cada caracter en mayuscula utilizando toupper y se imprime en la salida estandar.
  while (i < argc)
  {
    j = 0;
    while (argv[i][j] != '\0')
    {
        std::cout << (char)toupper(argv[i][j]);
        j++;
    }
    i++;
  }
  // Se imprime una nueva linea en la salida estandar
  std::cout << std::endl;
  return 0;
}
*/

/*
  g++ -Wall -Wextra -Werror megaphone.cpp -o megaphone
*/