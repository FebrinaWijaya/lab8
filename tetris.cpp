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
		for(int i=0;i<30000000;++i)
		{
			mino_ptr = genMino();
		}
		cout<<"generated 30000000 minos"<<endl;
	}
	
	return 0;
}
