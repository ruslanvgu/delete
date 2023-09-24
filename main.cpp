#include <iostream>
int main(int argc, char** argv){

	for(int i=0; i<argc; ++i){
		std::cout <<i<<":"<< argv[i] <<std::endl;
	}
	std::cout << "New cange1" <<std::endl;
	return 0;
}
