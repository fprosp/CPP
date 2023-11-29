
#define EXIT_OK 0
#define EXIT_FAIL 1
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string	file = "file.txt";
	std::ifstream	readFile(file);					// Apro un canale stream con il file indicato
	std::ofstream	writeFile(file + ".replace");	// Funzione creo nuovo file chiamto come scritto
	

	return (0);
}