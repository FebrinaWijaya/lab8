# lab8
<br>1. The program terminates without showing “I love C++.”
<br>   Because before the cout<<"I love C++"<<endl; statement, an empty throw statement is executed, 
<br>   which will result to the call of "terminate" function, and the program will be terminated immediately.
<br>
<br>2. The program will show “I love C++”, because the cout statement is placed under catch block, and will be executed after
<br>   the catch block.
<br>
<br>3. compilation: make
<br>   execution: ./tetris
