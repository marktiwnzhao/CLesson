#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>

void Load();

void Play();

void PrintScore();

void Quit();

SDL_Window *window = NULL;//窗口
SDL_Renderer *renderer = NULL;//渲染器

//加载图片
SDL_Surface *MainBackGroundSurface = NULL;
SDL_Texture *MainBackGroundTexture = NULL;
SDL_Rect MainBackGroundRect;

//加载字体
TTF_Font *ScoreFont = NULL;
SDL_Surface *ScoreSurface = NULL;
SDL_Texture *ScoreTecture = NULL;
SDL_Rect ScoreRect;
SDL_Color FontColor = {20, 25, 255, 255};

int SDL_main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_VIDEO);//初始化库
    TTF_Init();
    window = SDL_CreateWindow("Example", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 800, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_Event MainEvent;//主事件

    Load();

    SDL_RenderClear(renderer);//清空当前渲染器
    SDL_RenderCopy(renderer, MainBackGroundTexture, NULL, &MainBackGroundRect);
    SDL_RenderPresent(renderer);

    while(SDL_WaitEvent(&MainEvent)) {
        switch (MainEvent.type) {
            case SDL_QUIT://退出事件
                Quit();
                break;
            case SDL_KEYDOWN://键盘事件
                switch(MainEvent.key.keysym.sym) {
                    case SDLK_RETURN:
                    case SDLK_s:
                        Play();
                        //some functions
                        break;
                    case SDLK_h:
                        PrintScore();
                        break;
                    case SDLK_ESCAPE:
                        Quit();
                        break;
                    default:
                        break;
                }
                break;
            case SDL_MOUSEBUTTONDOWN://鼠标事件
                printf("(%d, %d)\n", MainEvent.button.x, MainEvent.button.y);
                break;
            case SDL_MOUSEBUTTONUP:
                if(MainEvent.button.x > 360 && MainEvent.button.x < 566 && MainEvent.button.y > 340 && MainEvent.button.y < 572) {
                    Play();
                }
                break;
            case SDL_MOUSEMOTION:
                break;
            default:
                break;
        }
    }

    Quit();

}

void Load() {
    MainBackGroundSurface = IMG_Load("boss.png");
    MainBackGroundTexture = SDL_CreateTextureFromSurface(renderer, MainBackGroundSurface);
    MainBackGroundRect.x = 0;
    MainBackGroundRect.y = 0;
    MainBackGroundRect.w = MainBackGroundSurface->w;
    MainBackGroundRect.h = MainBackGroundSurface->h;

    ScoreFont = TTF_OpenFont("fonts.ttf", 50);
}

void Play() {
    printf("Try the first step\n");
}

void PrintScore() {
    ScoreSurface = TTF_RenderUTF8_Blended(ScoreFont, "1024", FontColor);
    ScoreTecture = SDL_CreateTextureFromSurface(renderer, ScoreSurface);
    ScoreRect.x = 100;
    ScoreRect.y = 100;
    ScoreRect.w = ScoreSurface->w;
    ScoreRect.h = ScoreSurface->h;
    SDL_RenderCopy(renderer, ScoreTecture, NULL, &ScoreRect);
    SDL_RenderPresent(renderer);
}

void Quit() {
    SDL_FreeSurface(MainBackGroundSurface);
    SDL_FreeSurface(ScoreSurface);
    SDL_DestroyTexture(MainBackGroundTexture);
    SDL_DestroyTexture(ScoreTecture);

    TTF_CloseFont(ScoreFont);

    SDL_DestroyWindow(window);//相当于free
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
