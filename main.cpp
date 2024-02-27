#include <iostream>
#include <vector>
#include "timer.h"

using namespace std;
int main(int argc, char** argv){

	{
		Timer<std::chrono::nanoseconds> tm;

		for(int i=0; i<argc; ++i){
			std::cout <<i<<":"<< argv[i] <<std::endl;
		}
	}

	return 0;
}
