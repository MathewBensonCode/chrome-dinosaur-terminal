#ifndef GAME_H
#define GAME_H

struct vec2i{
	int x;
	int y;
};

struct rect{
	vec2i offset;
	vec2i bounds;

	int top() const;
	int bot() const;
	int left() const;
	int right() const;

	int width() const;
	int height() const;

	bool contains(vec2i a) const;
};


bool isCollided(rect a, rect b); /* function to check if rect B is contained in rect B */
int init();
bool run(int &max_score);
void close();

#endif
