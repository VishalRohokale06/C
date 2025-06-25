#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3
#define TILE_SIZE 100
#define WIDTH (SIZE * TILE_SIZE)
#define HEIGHT (SIZE * TILE_SIZE)

int board[SIZE][SIZE];

void shuffleBoard() {
    int numbers[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 9; i++) {
        int j = rand() % 9;
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }
    for (int i = 0, k = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++, k++) {
            board[i][j] = numbers[k];
        }
    }
}

void drawBoard(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] != 0) {
                SDL_Rect rect = {j * TILE_SIZE, i * TILE_SIZE, TILE_SIZE, TILE_SIZE};
                SDL_SetRenderDrawColor(renderer, 100, 149, 237, 255); // Blue tile
                SDL_RenderFillRect(renderer, &rect);
                
                char text[2];
                sprintf(text, "%d", board[i][j]);
                // You can draw text using SDL_ttf or render images with numbers here.
            }
        }
    }
    SDL_RenderPresent(renderer);
}

void swapTiles(int x1, int y1, int x2, int y2) {
    int temp = board[y1][x1];
    board[y1][x1] = board[y2][x2];
    board[y2][x2] = temp;
}

void moveTile(int dx, int dy) {
    int emptyX, emptyY;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] == 0) {
                emptyX = j;
                emptyY = i;
            }

    int newX = emptyX + dx;
    int newY = emptyY + dy;
    if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE)
        swapTiles(emptyX, emptyY, newX, newY);
}

int main() {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *window = SDL_CreateWindow("Puzzle Game",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    srand(time(NULL));
    shuffleBoard();

    SDL_Event e;
    int running = 1;
    while (running) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) running = 0;
            if (e.type == SDL_KEYDOWN) {
                switch (e.key.keysym.sym) {
                    case SDLK_UP: moveTile(0, 1); break;
                    case SDLK_DOWN: moveTile(0, -1); break;
                    case SDLK_LEFT: moveTile(1, 0); break;
                    case SDLK_RIGHT: moveTile(-1, 0); break;
                }
            }
        }
        drawBoard(renderer);
        SDL_Delay(50);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}

