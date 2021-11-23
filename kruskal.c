#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#define U 5


typedef struct edge 
{
	int island;
} edge;




int  main()
{
	printf("Matrise Pish farz 5*5 mibashad!! agar mikhahid matris ra avz konid yadetan bashad baiad dar code define ra motenaseb ba matris khod avaz konid!\n");
	
		printf("\n");
	printf("Agar mikhaid az matrise sorate soal estefade konid adade \"1\" va agar mikhaid az matrise delkhah estefade adade \"0\" ra vareed konid!: ");
	
		int a=5;
			while(a!=0 && a!=1)
			{
			scanf("%d",&a);
				
				if(a!=0 && a!=1)
				{
					printf("Retry: ");
				}
			}
				if(a==0)
				{
					printf("AZ barname kharej shode va ba taghire matris.txt matrise delkhahe khod ra vared konid\n");
				
						printf("Ba taghire matris.txt digar ba zadane \"1\" matrise sorate soal nakhahad amad!\n");
						
							printf("Dafeye badi ke varede brname shodid \"1\" ra bezanid ta matrise jadid ra barname bekhabad\n");
				
							return 3;
				}
				
	if(a==1)
	{
		FILE *matris=fopen("matris.txt","r");
						
			if(matris==NULL)
			{
			
				printf("Can Not Open The File!!\n");
			
				return 4;
			}
			
					int matris_cost[U][U];
					//matris ro por mikonam
						for(int i=0;i<U;i++)
						{
							for(int j=0;j<U;j++)
							{
								fscanf(matris,"%d",&matris_cost[i][j]);
							}
						}
						//karam ba file matris.txt tamom shode!
						fclose(matris);
						/*for(int i=0;i<U;i++)
						{
							for(int j=0;j<U;j++)
							{
								printf("%d ",matris_cost[i][j]);
							}
							printf("\n");
						}*/
		int i=0,a,b,c,d=0,e=0;
		edge edge[U];

		while(i!=U)
		{
			//age hameye jazireha yeki shode bod zamane etmame kaare
			if(edge[0].island == edge[1].island && edge[0].island == edge[2].island && edge[0].island == edge[3].island && edge[0].island == edge[4].island )
			{
				printf("Min Cost is: %d\n",d);
				
				return 1;
			}
				//donbale kamtarin yalam
				for(int m=0;m<U;m++)
				{
					for(int n=0;n<U;n++)
					{
						if(m==0 && n==0)
						{
							a=matris_cost[m][n];
							
							b=m+1;
							
							c=n+1;
						}else 
						{
							if(a>matris_cost[m][n])
							{
								a=matris_cost[m][n];
							
								b=m;
							
								c=n;
							}
						}
					}
				}
				/*age raes haye peida shode to yal jazireye barabar nadashtan 
					bia va chapeshun kon age na ke .........*/
			if(edge[b].island != edge[c].island)
			{
			
				matris_cost[b][c]=1000;
				
					matris_cost[c][b]=1000;
				
						d=d+a;
					
					int y=edge[c].island;
					
				for(int h=0;h<U;h++)
				{
				
					 if(edge[h].island == y )
					{
						edge[h].island=edge[b].island;
					}
				}
						
						i++;
			
							printf("Harekate %d.. Nodes:%d->%d  Cost:%d\n",e+1,b+1,c+1,a);
				
								e++;
			
				//age na ke bozorgeshun kon ke dafe bad to halghe gir nayoftam
				
			}else
			{
				matris_cost[b][c]=1000;
				
				matris_cost[c][b]=1000;
				
				i--;
			}
			
				
			
		}
	}
				
			
	return 0;
}