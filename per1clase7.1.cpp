#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main()
	{
	int n[5];
	
	
	for ( size_t i =0; i < 5; ++i )
	n[ i ] = 0;
	
	cout << "Elemento" << setw( 13 ) << "Valor" << endl;
	
	
	for ( size_t j = 0; j < 5; ++j )
	cout << setw( 7 ) << j << setw( 13 ) << n[ j ] << endl;
	
	}
	
