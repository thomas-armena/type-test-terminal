#include <iostream>
#include <curses.h>

int main(){
	initscr();
	noecho();

	move(3,6);
	printw("Welcome to Type Test");
	refresh();
	move(5,0);
	for(int i = 0; i < 50; i++){
		int c = getch();
		if ((c >= 'a' && c <= 'z') || c == ' '){
			printw("%c", c);
		}
		refresh();
	}
	getch();
	endwin();
}
