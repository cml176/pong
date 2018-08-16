STEPS TO COMPILE:

1) Open: Developer Command Prompt for Visual Studio 17
2) change directory to Pong folder 
	i.e., cd c:/github/pong/Pong

3) use command : 
	cl test.cpp Coordinates.cpp Paddle.cpp PongTable.cpp Ball.cpp 

	*the 'cl' command compiles and links the files you give it.
	 and creates a .exe file to run (test.exe since test.cpp has our main function)

4) if build is successful:
	run test.exe


TODO:
CREATE UNIT TESTS FOR:
	*Ball.h
	*Paddle.h
	*PongTable.h


