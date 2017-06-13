tetris:	tetris.o genMino.o Mino.o MinoI.o MinoS.o MinoJ.o MinoL.o MinoO.o
	g++ -o tetris tetris.o genMino.o Mino.o MinoI.o MinoS.o MinoJ.o MinoL.o MinoO.o
tetris.o: tetris.cpp genMino.h
	g++ -c tetris.cpp
genMino.o: genMino.h genMino.cpp Mino.h MinoI.h MinoS.h MinoJ.h MinoL.h MinoO.h
	g++ -c genMino.cpp
Mino.o: Mino.h Mino.cpp 
	g++ -c Mino.cpp
MinoI.o: MinoI.h MinoI.cpp Mino.h
	g++ -c MinoI.cpp
MinoS.o: MinoS.h MinoS.cpp Mino.h
	g++ -c MinoS.cpp
MinoJ.o: MinoJ.h MinoJ.cpp Mino.h
	g++ -c MinoJ.cpp
MinoL.o: MinoL.h MinoL.cpp Mino.h
	g++ -c MinoL.cpp
MinoO.o: MinoO.h MinoO.cpp Mino.h
	g++ -c MinoO.cpp
