#include <iostream>

extern "C" {
#include "SDL.h"
}

using namespace std;

// �ӣ�SDL�����Ѿ�������main����
#undef main
int main(int argc, char* argv[]) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == -1) {
		return 1;
	}
	else {
		cout << "SDL init success." << endl;
	}

	SDL_Delay(2000);

	SDL_Quit();

	return 0;
}