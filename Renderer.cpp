#include "Renderer.h"

namespace Render
{
	static SDL_Renderer* gRenderer;

	SDL_Renderer* get() { return gRenderer; }
	void set(SDL_Renderer* gRenderer_) { gRenderer = gRenderer_; }

	void setColor(uChar r, uChar g, uChar b) { SDL_SetRenderDrawColor(gRenderer, r, g, b, 255); }
	void clearScreen() { SDL_RenderClear(gRenderer); }
	void render() { SDL_RenderPresent(gRenderer); }

	void rect(SDL_Rect rect) { SDL_RenderFillRect(gRenderer, &rect); }
	void dot(int x, int y) { SDL_RenderDrawPoint(gRenderer, x, y); }
	void line(int x1, int y1, int x2, int y2) { SDL_RenderDrawLine(gRenderer, x1, y1, x2, y2); }
}
