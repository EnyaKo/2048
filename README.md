# Sudoku
Sudoku Game in C++

# Structure
- Header file
  - blank.h
  - mainwindow.h
- Source code
  - blank.cpp
  - main.cpp
  - mainwindow.cpp
- List
  - mainwindow.ui
- Resouces
  - pic.qrc
    - pictures I used
# UML Diagram
<p>
<img src="UML_diagram/Blank UML.JPG" height="500" />

<p>
<img src="UML_diagram/MainWindow UML UML.JPG" height="500" />

# Source code
- data members in blank.h; 16 labels in mainwindow.ui
  - declare blank b[17] in mainwindow.h
    - line 38
    - b[1] - b[16] represents label B1 - B16 in mainwindow.ui 
  - data members in blank.h
    - int position  : index of b[]
    - int num       : value of b[]
    - bool isAdded  : true = exponential of 2 of the value of b[] has altered
    - bool isMoved  : true = the value of b[] has changed (from 0 or to 0)
- function in mainwindow.h
  - void initialize();           
    - initialize all 
    - used when restart/start game
  - void initialize_A();                     
    - initialize bool isAdded
    - used after every key press
  - void initialize_M();
  - void start();                       
    - initialize bool isMoved
    - used after every key press
  - void setMap(blank &b);                    
    - connect pictures to every possible b.num of every index of b[]  
  - void setRandom();                         
    - randomly choose two index of b[] which its value is zero(b.num = 0) and changed to 2
  - void keyPressEvent(QKeyEvent *event);     
    - used event to control key_up/down/left/right 
  - bool anyMoved();                          
    - check if any isMoved is true in b[]
  - bool isWin();                           
    - check if the user win(check any b.num = 2048)
  - bool isLose();               
    - check if the user lose(no more b.num can be added) 
  - void setScore(); 
    - score every addition
