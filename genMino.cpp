#include <cstdlib>
#include <new>
#include "genMino.h"
#define NUM_MINO 5
#define MINO_S 0
#define MINO_I 1
#define MINO_L 2
#define MINO_J 3
#define MINO_O 4
Mino * genMino()
{
	int mino_type;
	Mino * ptr;
	mino_type = random() % NUM_MINO;
	try{
	/*for(int i=0;i<30000000;i++)
	{
		if(mino_type==MINO_S) ptr=new MinoS;
		else if(mino_type==MINO_I) ptr=new MinoI;
		else if(mino_type==MINO_L) ptr=new MinoL;
		else if(mino_type==MINO_J) ptr=new MinoJ;
		else if(mino_type==MINO_O) ptr=new MinoO;
		if(ptr==NULL) throw bad_alloc();
	}*/
	switch(mino_type) {
		case MINO_S: 
			ptr = new MinoS;
			break;
		case MINO_I:
			ptr = new MinoI;
			break;
		case MINO_L:
			ptr = new MinoL;
			break;
		case MINO_J:
			ptr = new MinoJ;
			break;
		case MINO_O:
			ptr = new MinoO;
			break;
		}

		return ptr;
	}
	//catch(...)
	catch(std::bad_alloc &failed_new)
	{
		cerr<<"Exception : "<<failed_new.what()<<endl;
		//cerr<<"Exception caught"<<endl;
		exit(1);
	}
}

