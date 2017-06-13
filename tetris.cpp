#include <iostream>
#include <cstdlib>
#include <ctime>
#include <new>
#include "genMino.h"
using namespace std;
int main()
{
	Mino * mino_ptr;

	srandom(time(NULL));
	for(int i=0;i<5;++i)
	{
		for(int i=0;i<10000000;++i)
		{
			mino_ptr = genMino();
		}
		cout<<"generated 10000000 minos"<<endl;
	}
	
	return 0;
}
