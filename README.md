# lab8
<br>1.The program terminates without showing “I love C++.”
<br>  because before the cout<<"I love C++"<<endl; statement, an empty throw statement is executed, 
<br>  which will result to the call of "terminate" function, and the program will be terminated immediately.
<br>
<br>2. The program will show “I love C++”, because the cout statement is placed under catch block, and will be executed 
<br>   after the catch block.
<br>
<br>3. compilation: make
<br>   execution: ./tetris
#lab8.script
<br>Script started on 2017年06月14日 (週三) 00時33分33秒
<br>[01;32mpd2vm@pd2vm-VirtualBox[01;34m ~/lab8 $[00m ./tetris[4Pmakescript <br>lab8.scriptmake[K./tetris[K./tetris[4Pmake
<br>g++ -c genMino.cpp
<br>g++ -o tetris tetris.o genMino.o Mino.o MinoI.o MinoS.o MinoJ.o MinoL.o MinoO.o
<br>[01;32mpd2vm@pd2vm-VirtualBox[01;34m ~/lab8 $[00m make./tetris
<br>generated 10000000 minos
<br>generated 10000000 minos
<br>Exception : std::bad_alloc
<br>[01;32mpd2vm@pd2vm-VirtualBox[01;34m ~/lab8 $[00m 
<br>Script done on 2017年06月14日 (週三) 00時33分50秒
