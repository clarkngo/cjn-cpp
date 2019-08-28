// Author @Clark Jason Ngo
// Ivor Horton's Beginning C++ Beginning Visual C++ 2010
// Chapter 1 Programming with Visual C++ 2010
// Ex1_02.cpp A simple console program
// New project (empty project)
// @console app -> property pages (shift+f4) (Conf Prop -> General -> Char Set - 'Not Set'
// @solution explorer added C++ File named Ex1_02
#include < iostream > // Basic input and output library
int main()
{
	std::cout << "This is a simple program that outputs some text." << std::endl;
	std::cout << "You can output more lines of text" << std::endl;
	std::cout << "just by repeating the output statement like this." << std::endl;
	system("pause");
	return 0; // Return to the operating system
}