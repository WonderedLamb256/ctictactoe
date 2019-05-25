#include <stdio.h>

int main()
{
	char tttarray[3][3];
	int quit = 0;
	int win = 0;
	int turn = 1;
	int loopinit = 1;
	int xc = 0;
	int yc = 0;
	char x = 'x';
	char o = 'o';
	char printboardl1()
	{
		printf( "%c", tttarray[1][1], "%c", tttarray[2][1], "%c", tttarray[3][1], "\n" );
	}
	char printboardl2()
	{
		printf( "%c", tttarray[1][2], "%c", tttarray[2][2], "%c", tttarray[3][2], "\n" );
	}
	char printboardl3()
	{
		printf( "%c", tttarray[1][3], "%c", tttarray[2][3], "%c", tttarray[3][3], "\n" );
	}
	while ( loopinit == 1 )
	{
		if ( quit == 1 )
		{
			printf( "A player quit." );
			loopinit = 0;
		}
		else if ( win == 1 )
		{
			printf( "A player won! Reload game." );
			loopinit = 0;
		}
		if ( turn == 1 )
		{
			printf( "It is X's turn. " );
			printf( "Enter X coordinate: " );
			scanf( "%d", &xc );
			printf( "Enter Y coordinate: " );
			scanf( "%d", &yc );
			tttarray[xc][yc] = x;
			printboardl1();
			printboardl2();
			printboardl3();
			turn = 2;
		}
		else if ( turn == 2 )
		{
			printf( "It is O's turn. " );
			printf( "Enter X coordinate: " );
			scanf( "%d", &xc );
			printf( "Enter Y coordinate: " );
			scanf( "%d", &yc );
			tttarray[xc][yc] = o;
			printboardl1();
			printboardl2();
			printboardl3();
			turn = 1;
		}
	}
}
