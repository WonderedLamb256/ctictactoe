#include <stdio.h>
#include <string.h>

int main()
{
	char tttarray[3][3];
	int quit = 0;
	int win = 0;
	int turn = 1;
	int loopinit = 1;
	int xc = 0;
	int yc = 0;
	int x = 'x';
	int o = 'o';
	while ( loopinit = 1 )
	{
		printf ( "%s", tttarray );
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
			strcat(tttarray[xc][yc], x);
			printf ( "%s", tttarray );
			turn = 2;
		}
		else if ( turn == 2 )
		{
			printf( "It is O's turn. " );
			printf( "Enter X coordinate: " );
			scanf( "%d", &xc );
			printf( "Enter Y coordinate: " );
			scanf( "%d", &yc );
			strcat(tttarray[xc][yc], o);
			printf ( "%s", tttarray );
			turn = 1;
		}
	}
}
