#include <iostream>
#include <exception>
// untuk obyek yang akan digunakan
#include <array>
// untuk obyek yang akan digunakan
using namespace std;

int main()
{
	cout << "Awal PROGRAM" << endl; // PENANDA 1
	try
	{
		array<int, 3> data = { 6, 7, 8 };
		// pesan array integer 3 element
		cout << data.at(5) << endl;
		//memanggil array ke elemnt ke 5
	}
}

