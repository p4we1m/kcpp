#include <iostream>
#include <sstream>

int main() {
  std::stringstream ss;

  // Zapisywanie danych do strumienia
  ss << "Pawel ";
  ss << 2000;
  ss << " ";
  ss << 3.141592;

  // Konwertowanie strumienia na łańcuch znaków
  std::string result = ss.str();
  std::cout << "Wynik: " << result << std::endl;

  // Odczytywanie danych ze strumienia
  int num;
  double pi;
  std::string text;

  ss >> text;
  ss >> num;
  ss >> pi;

  std::cout << "Odczytane dane:\n";
  std::cout << "Tekst: " << text << std::endl;
  std::cout << "Liczba całkowita: " << num << std::endl;
  std::cout << "Liczba zmiennoprzecinkowa: " << pi << std::endl;

  return 0;
}
