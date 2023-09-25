#include <iostream>
#include "timer.h"

int main(int argc, char** argv){

	{
	Timer tm;

	for(int i=0; i<argc; ++i){
		std::cout <<i<<":"<< argv[i] <<std::endl;
	}
	}

	return 0;
}
