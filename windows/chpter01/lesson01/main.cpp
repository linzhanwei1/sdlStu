#include <iostream>

extern "C" {
#include "SDL.h"
}

using namespace std;

// 坑：SDL本身已经定义了main函数
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