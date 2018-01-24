#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void)
{
	FILE *fp;
	int p1 = 0;
	char marker[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	int game = 0;
	fp = fopen("tictactoe.htm","w+");
	if(fp == NULL)
	{
		perror("Failed :");
		return 1;
	}
	while(game == 0)
	{
		fprintf(fp,"<html>\n");
		fprintf(fp,"<head>\n");
		fprintf(fp,"<meta http-equiv = \"Refresh\" content=\"10\">");
		fprintf(fp,"<style>\n");
		fprintf(fp,"table, td {\nborder : 1px solid black;\nwidth: 100px;\ntext-align: center;\nheight: 50px\n}\n");
		fprintf(fp,"<title>Tic-Tac-Toe</title>\n");
		fprintf(fp,"</style>\n");
		fprintf(fp,"</head>\n");
		fprintf(fp,"<body>\n");
		//fprintf(fp,"<table id = \"board\" border = solid>\n");
		fprintf(fp,"<tr>\n");
		fprintf(fp,"<td>%c </td>\n<td>%c </td>\n<td>%c </td>\n",marker[0][0],marker[0][1],marker[0][2]);
		fprintf(fp,"</tr>\n");
		fprintf(fp,"<tr>\n");
		fprintf(fp,"<td>%c </td>\n<td>%c </td>\n<td>%c </td>\n",marker[1][0],marker[1][1],marker[1][2]);
		fprintf(fp,"</tr>\n");
		fprintf(fp,"<tr>\n");
		fprintf(fp,"<td>%c </td>\n<td>%c </td>\n<td>%c </td>\n",marker[2][0],marker[2][1],marker[2][2]);
		fprintf(fp,"</tr>\n");
		fprintf(fp,"</table>\n");
		fprintf(fp,"</body>\n");
		fprintf(fp,"</html>\n");

		system("firefox ./tictactoe.htm &\n");

		printf("Pick a row, 1,2,3\n");
			scanf("%d\n",&p1);

		if(p1 == 1)
		{
			printf("select coloum, 1,2,3\n");
				scanf("%d\n",&p1);
				p1 = p1 - 1;
				marker[0][p1]='X';
		}
		if(p1 == 2)
		{
			printf("select coloum, 1,2,3\n");
				scanf("%d\n",&p1);
				p1 = p1 - 1;
				marker[1][p1]='X';
		}
		if(p1 == 3)
		{
			printf("select coloum, 1,2,3\n");
				scanf("%d\n",&p1);
				p1 = p1 - 1;
				marker[2][p1]='X';
		}

	}
	fclose(fp);

	system("firefox ./tictactoe.htm &\n");

	return 0;
}
