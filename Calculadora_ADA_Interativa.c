/* Projeto de Algoritmos e Programação para AC2 - Facens
         Profª: Angelina Vitorino de Souza Melaré
    Engenharia de Computação Matutino - 1º Semestre 2021
           Calculadora Trigonométrica Interativa
                Giulia Oliveira - RA 210071
         Lucas Ribeiro Bonfílio de Lemos - RA 210442
Mônica Alessandra Garcia Beletato Kiyota Moutinho - RA 190608 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define PI 3.14159

int main()
{

	int x, t, escolhaOpcao, numConverter, escolhaSCT, escolhaLei, opl;
	float quantRCon, radConv, quantGCon, grausConv, conta, valor, angulo, catOp, hi, ad, cosseno, valorLadoA, valorLadoB, opLadoA, opLadoB;
	char op, cont, o;

	printf("\n			    Oi !  	                                  \xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\n");
	printf("Eu sou a Ada, a sua calculadora trigonom\x82trica interativa. :)          \xf4\xf4\xf4\xf4\xf4________\xf4\xf4\xf4\xf4\xf4\xf4\n");
	printf("Fui batizada em homenagem \x85 renomada matem\xa0tica Ada Lovelace, a      \xf4\xf4\xf4\xf4_________________\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\n");
	printf("''inventora'' dos softwares, que criou o primeiro programa de       \xf4\xf4_______________________\xf4\xf4\xf4__\xf4\xf4\xf4\xf4\xf4\xf4\xf4\n");
	printf("computador registrado na hist\xa2ria ! \x90 incr\xa1vel, n\x82 ?     \x5c        \xf4\xf4___________________________\xf4\xf4_\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\n");
	printf("						          \x5c       \xf4\xf4_____\xf4\xf4\xf4\xf4____________________\xf4_______\xf4\xf4\n");
	printf("Ok, vamos l\xa0 ! Aqui tenho os passos para te guiar:         \x5c      \xf4\xf4_____\xf40_\xf4_____________________\xf4\xf4_\xf4\xf4\xf4\xf4\xf4\xf4\xf4 \n");
	printf("1 - Assim que o menu aparecer, vou te mostrar quais as      \x5c   \xf4\xf4_____\xf4________\xf4\xf4\xf4\xf4_______________\xf4\xf4_\xf4\xf4\n");
	printf("modalidades de c\xa0lculos que tenho a oferecer. Dentre elas,     \xf4\xf4_____\xf4___\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4________\xf4______\xf4_\xf4\xf4\n");
	printf("tenho os c\xa0lculos de seno, cosseno e tangente para quaisquer   \xf4\xf4__\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4_____\xf4\xf4_\xf4_____\xf4__\xf4\xf4_____\xf4_\xf4\xf4\n");
	printf("\x83ngulos, como tamb\x82m, podemos descobrir o valor de acordo       \xf4\xf4\xf4\xf4\xf4\xf4\xf4      \xf4_\xf4\xf4__\xf4_\xf4_____\xf4\xf4\xf4__\xf4_______\xf4\n");
	printf("com os lados do tri\x83ngulo utilizando as fun\x87oes trigonom\x82tricas.             \xf4_\xf4\xf4\xf4\xf4\xf4_\xf4_____\xf4\xf4\xf4\xf4__\xf4\xf4_____\xf4\xf4\n");
	printf("Cabe a voc\x88 escolher qual te atende melhor ! :)			             \xf4_\xf4\xf4\xf4\xf4\xf4\xf4_\xf4____\xf4__\xf4\xf4\xf4\xf4\xf4\xf4_____\xf4\n");
	printf("No menu, tamb\x82m tenho lei dos cossenos e lei dos senos, caso voc\x88 esteja     \xf4\xf4\xf4\xf4\xf4  \xf4_\xf4____\xf4____\xf4\xf4\xf4\xf4\xf4____\xf4\xf4\n");
	printf("lidando com um tri\x83ngulo qualquer e, tabela de \x83ngulos not\xa0veis !             \xf4\xf4\xf4   \xf4\xf4_\xf4___\xf4\xf4\xf4\xf4__\xf4\xf4\xf4\xf4\xf4___\xf4\xf4\n");
	printf("						                                     \xf4__\xf4__\xf4\xf4 \xf4\xf4\xf4__\xf4\xf4\xf4\xf4___\xf4\n");
	printf("						                                      \xf4\xf4\xf4\xf4__\xf4   \xf4\xf4__\xf4\xf4\xf4___\xf4\n");
	printf("2 - Depois, \x82 s\xa2 digitar a op\x87%co desejada e partir pro c\xa0lculo ;)	               \xf4\xf4\xf4\xf4\xf4     \xf4_\xf4\xf4\xf4\xf4__\xf4\xf4\n", 198);
	printf("						                                                   \xf4_\xf4\xf4\xf4__\xf4\xf4\n");
	printf("						                                                    \xf4\xf4\xf4\xf4\xf4_\xf4\xf4\n");
	printf("						                                                     \xf4\xf4\xf4\xf4_\xf4\xf4\n");
	printf("						                                                     \xf4\xf4\xf4\xf4_\xf4\xf4\n");
	printf("						                                                      \xf4_\xf4_\xf4\n");
	printf("						                                                      \xf4___\xf4\n");
	printf("						                                                      \xf4\xf4_\xf4\xf4\n");
	printf("						                                                  \xf4\xf4\xf4\xf4\xf4\xf4_\xf4\xf4\xf4\xf4\n");
	printf("						                                                 \xf4\xf4________\xf4\xf4\xf4\xf4\n");
	printf("						                                                \xf4\xf4___________\xf4\xf4\xf4\n");
	printf("						                                                \xf4\xf4_\xf4_\xf4\xf4\xf4_______\xf4\xf4\n");
	printf("						                                                 \xf4\xf4_\xf4\xf4_\xf4\xf4\xf4\xf4____\xf4\xf4\n");
	printf("						                                                           \xf4\xf4___\xf4\n");
	printf("						                                                            \xf4__\xf4\n");
	printf("					                                                                     \xf4\xf4\n");
	system("pause");
	system("cls");
	do
	{
	printf("                                     \xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\n   ");
	printf("                             \xf4\xf4\xf4\xf4\xf4________\xf4\xf4\xf4\xf4\xf4\xf4		      Aqui, vou poder te ajudar nas seguintes op\x87%ces:\n", 228);
	printf("                     \xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\_________________\xf4\xf4\xf4\xf4	 	     1 - C\xa0lculo das fun\x87oes seno, cosseno e tangente.\n");
	printf("                  \xf4\xf4\xf4\xf4\xf4\xf4\xf4\__\xf4\xf4\xf4_______________________\xf4\xf4		     2 - C\xa0lculo de Lei dos Cossenos e Lei dos Senos.\n");
	printf("                \xf4\xf4_\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4___________________________\xf4\xf4         /   3 - Tabelinha com os valores dos \x83ngulos not\xa0veis.\n");
	printf("               \xf4\xf4\_______\xf4____________________\xf4\xf4\xf4\xf4_____\xf4\xf4        /    \n");
	printf("               \xf4\xf4\xf4\xf4\xf4\xf4\xf4_\xf4\xf4_____________________\xf40_\xf4_____\xf4\xf4       /\n");
	printf("                  \xf4\xf4_\xf4\xf4_______________\xf4\xf4\xf4\xf4________\xf4_____\xf4\xf4    /\n");
	printf("                 \xf4\xf4_\xf4______\xf4________\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4___\xf4_____\xf4\xf4\n");
	printf("                 \xf4_\xf4\xf4_____\xf4\xf4__\xf4_____\xf4_\xf4\xf4_____\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4__\xf4\xf4\n");
	printf("                 \xf4_______\xf4__\xf4\xf4\xf4_____\xf4_\xf4__\xf4\xf4_\xf4      \xf4\xf4\xf4\xf4\xf4\xf4\xf4\n");
	printf("                \xf4\xf4_____\xf4\xf4__\xf4\xf4\xf4\xf4_____\xf4_\xf4\xf4\xf4\xf4\xf4_\xf4\n");
	printf("                \xf4_____\xf4\xf4\xf4\xf4\xf4\xf4__\xf4____\xf4_\xf4\xf4\xf4\xf4\xf4\xf4_\xf4\n");
	printf("              \xf4\xf4____\xf4\xf4\xf4\xf4\xf4____\xf4____\xf4_\xf4  \xf4\xf4\xf4\xf4\xf4\n");
	printf("              \xf4\xf4___\xf4\xf4\xf4\xf4\xf4__\xf4\xf4\xf4\xf4___\xf4\xf4_\xf4   \xf4\xf4\xf4\n");
	printf("              \xf4___\xf4\xf4\xf4\xf4__\xf4\xf4\xf4 \xf4\xf4__\xf4__\xf4\n");
	printf("              \xf4___\xf4\xf4\xf4__\xf4\xf4   \xf4__\xf4\xf4\xf4\xf4\n");
	printf("             \xf4\xf4__\xf4\xf4\xf4\xf4_\xf4     \xf4\xf4\xf4\xf4\xf4\n");
	printf("             \xf4\xf4__\xf4\xf4\xf4_\xf4\n");
	printf("             \xf4\xf4_\xf4\xf4\xf4\xf4\xf4\n");
	printf("             \xf4\xf4_\xf4\xf4\xf4\xf4\n");
	printf("             \xf4\xf4_\xf4\xf4\xf4\xf4\n");
	printf("              \xf4_\xf4_\xf4\n");
	printf("              \xf4___\xf4\n");
	printf("              \xf4\xf4_\xf4\xf4\n");
	printf("            \xf4\xf4\xf4\xf4_\xf4\xf4\xf4\xf4\xf4\xf4\n");
	printf("          \xf4\xf4\xf4\xf4________\xf4\xf4\n");
	printf("         \xf4\xf4\xf4___________\xf4\xf4\n");
	printf("        \xf4\xf4_______\xf4\xf4\xf4_\xf4_\xf4\xf4\n");
	printf("        \xf4\xf4____\xf4\xf4\xf4\xf4_\xf4\xf4_\xf4\xf4\n");
	printf("        \xf4___\xf4\xf4\n");
	printf("         \xf4__\xf4\n");
	printf("          \xf4\xf4\n");
    printf("\n\nDigite o n\xa3mero da sua op\x87%co desejada, e vamos calcular juntos !  ", 198);
	scanf("%d", &escolhaOpcao);
	fflush(stdin);
	printf("\n\n-------------------------------------------------------------------------------------------\n\n");
	    if (escolhaOpcao == 1) //sct
	    {
	    	printf("Beleza, agora escolha entre:\n 1 - Seno\n 2 - Cosseno\n 3 - Tangente  ");
	    	scanf("%d", &escolhaSCT);
	    	fflush(stdin);

	    	switch (escolhaSCT)
	    		{
	    			case 1: //seno
	    			{
		                printf("\nInsira:\n [A] - Para descobrir o seno de acordo com o \x83ngulo.\n               		ou\n [B] - Para descobrir o seno de acordo com os lados.	 ");
		                scanf("%c", &o);
		                fflush(stdin);
	                  	if (toupper(o) == 'A') //para seno de acordo com o angulo
				        {
					        printf("\n\nDigite o \x83ngulo:    ");
							scanf("%f", &angulo);
							fflush(stdin);
							printf("\nO seno de %.2f graus \x82 %.2f ! :)", angulo, sin(angulo*PI/180));	
				        } //para seno de acordo com o angulo
						else if (toupper(o) == 'B') //para seno de acordo com o lado
				        {
					       	printf("\nDigite o valor do cateto oposto:     ");
					       	scanf("%f", &catOp);
					       	fflush(stdin);
					        printf("\nDigite o valor da hipotenusa:     ");
					       	scanf("%f", &hi);
					        fflush(stdin);
					       	printf("\nO seno do \x83ngulo \x82 %.2f ! :)", catOp/hi); //
				        }//seno lado
			            else
				        {
					       	printf("\nCaractere inv\xa0lido ! :(");
				        }
	                break;
					}//seno

					case 2:
					{
		            	printf("\nInsira:\n [A] - Para descobrir o cosseno de acordo com o \x83ngulo.\n                              ou\n [B] - Para descobrir o cosseno de acordo com os lados.    ");
						scanf("%c", &o);
						fflush(stdin);
						if (toupper(o) == 'A') //para cosseno de acordo com o angulo
						{
							printf("\nDigite o \x83ngulo:    ");
							scanf("%f", &angulo);
							fflush(stdin);
							printf("\nO cosseno de %.2f graus \x82 %.2f ! :)", angulo, cos(angulo*PI/180));
						} //para cosseno de acordo com o angulo
						else if (toupper(o) == 'B') //para cosseno de acordo com o lado
						{
							printf("\nDigite o valor do cateto adjascente:     ");
							scanf("%f", &ad);
							fflush(stdin);
							printf("\nDigite o valor da hipotenusa:     ");
							scanf("%f", &hi);
							fflush(stdin);
							printf("\nO cosseno do \x83ngulo \x82 %.2f ! :)", ad/hi);
						}//cosseno lado
						else
						{
							printf("\nCaractere inv\xa0lido ! :(");
						}
					    break;
					}//cosseno

					case 3:
					{
						printf("\nPressione:\n [A] - Para descobrir a tangente de acordo com o \x83ngulo.\n                              ou\n [B] - Para descobrir a tangente de acordo com os lados.    ");
						scanf("%c", &o);
						fflush(stdin);
						if (toupper(o) == 'A') //para tangente de acordo com o ângulo
						{
							printf("\nDigite o \x83ngulo:    ");
							scanf("%f", &angulo);
							fflush(stdin);
							printf("\nA tangente de %.2f graus \x82 %.2f ! :)", angulo, tan(angulo*PI/180));
						} //para tangente de acordo com o ângulo
						else if (toupper(o) == 'B') //para tangente de acordo com o lado
						{
							printf("\nDigite o valor do cateto adjascente:    ");
							scanf("%f", &ad);
							fflush(stdin);
							printf("\nDigite o valor do cateto oposto:     ");
							scanf("%f", &catOp);
							fflush(stdin);
							printf("\nA tangente do \x83ngulo \x82 %.2f ! :) ", catOp/ad); 
						}//tangente lado
						else
						{
							printf("\nCaractere inv\xa0lido ! :(");
						}
						break;
					}//tangente
					default:
					{
						printf("\nInfelizmente, n%co tenho essa op\x87%co ! :( \n", 198, 198);
					}
					system("pause");
					system("cls");
					break;
					}//switch seno, cosseno e tangente
		}//seno, cosseno e tangente

		else if (escolhaOpcao==2)
		{
            printf("Beleza, agora escolha entre:\n [1] - Lei dos Senos\n             ou\n [2] - Lei dos Cossenos \t");
            scanf("%d", &escolhaLei);
           	switch (escolhaLei)
            {
               	case 1 :
               	{
               		printf("\nDigite o valor do lado A:\t"); //lei dos senos
                	scanf("%f", &valorLadoA);
                	fflush(stdin);
                	printf("\nDigite o valor do \x83ngulo oposto ao lado A:\t"); //lei dos senos
                	scanf("%f", &opLadoA);
                	fflush(stdin);
                	printf("\nDigite o valor do \x83ngulo oposto ao lado que queremos descobrir:\t");
                	scanf("%f", &opLadoB);
                	fflush(stdin);
                	valorLadoB = (valorLadoA*sin(opLadoB*PI/180)) / sin(opLadoA*PI/180);
                	printf("\nO valor do lado B \x82 %.2f ! ;)", valorLadoB);
                	break;
                }
                case 2 :
                {
                	printf("\nDigite o valor do lado B:\t");
					scanf("%f", &catOp);
					fflush(stdin);
					printf("\nDigite o valor do lado C:\t");
					scanf("%f", &ad);
					fflush(stdin);
					printf("\nDigite o valor do \x83ngulo oposto ao lado que queremos descobrir:\t");
					scanf("%f", &angulo);
					fflush(stdin);
					cosseno = cos(angulo*PI/180);
    				conta = (pow(catOp,2) + pow(ad,2))- (2*catOp*ad*cosseno);
					printf("\nO valor do lado A \x82 %.2f .\n", sqrt(conta));
					break;
				}
				default:
				{
					printf("\nInfelizmente, não tenho essa op\x87%co ! :( \n", 198);
				}
				system("pause");
				system("cls");
			}//fim switch
		}//lei dos senos e cossenos

		else if (escolhaOpcao==3)
		{
			printf("\n               Ok, aqui vai uma tabelinha pra voc\x88:\n Ah, s\xa2 um lembrete: 'R' significa a ra\xa1z quadrada de alguma coisa !\n    Por exemplo, [R3/2] significa a ra\xa1z quadrada de 3/2 ! :)\n");
            printf("\n	____________________________________________");
	        printf("\n	|          |   Seno   |  Cosseno | Tangente |");
	        printf("\n	|__________|__________|__________|__________|");
	        printf("\n	| 30 graus |    1/2   |    R3/2  |   R3/3   |");
	        printf("\n	|__________|__________|__________|__________|");
	        printf("\n	| 45 graus |   R2/2   |    R2/2  |     1    |");
	        printf("\n	|__________|__________|__________|__________|");
	        printf("\n	| 60 graus |   R3/2   |    1/2   |    R3    |");
	        printf("\n	|__________|__________|__________|__________|\n\n");
	        system("pause");
		}//tabela com valores dos ângulos notáveis.
		else
		{
		printf("Poxa, n%co tenho essa op\x87%co nas minhas fun\x87%ces ! :(\n\n ", 198, 198, 228);
		system("pause");
		system("cls");
		}//opção fora do menu da calculadora.
	printf("\n Voc\x88 deseja continuar? Responda com [S] para sim e [N] para n%co:\t", 198);
    scanf("%c", &op);
    fflush(stdin);
    system("cls");
    }//fim da repeticao
	while(toupper(op)== 'S');

    printf("\n\n\n                                     \xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\n   ");
	printf("                             \xf4\xf4\xf4\xf4\xf4________\xf4\xf4\xf4\xf4\xf4\xf4		      Espero que tenha te ajudado em tudo o que voc\x88 precisava !\n");
	printf("                     \xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\_________________\xf4\xf4\xf4\xf4	 	                    Se precisar de mim, j\xa0 sabe, n\x82 ? \n");
	printf("                  \xf4\xf4\xf4\xf4\xf4\xf4\xf4\__\xf4\xf4\xf4_______________________\xf4\xf4		                   Estou \x85 um clique de dist\x83ncia ! ;)\n");
	printf("                \xf4\xf4_\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4___________________________\xf4\xf4         /   \n");
	printf("               \xf4\xf4\_______\xf4____________________\xf4\xf4\xf4\xf4_____\xf4\xf4        /    \n");
	printf("               \xf4\xf4\xf4\xf4\xf4\xf4\xf4_\xf4\xf4_____________________\xf40_\xf4_____\xf4\xf4       /\n");
	printf("                  \xf4\xf4_\xf4\xf4_______________\xf4\xf4\xf4\xf4________\xf4_____\xf4\xf4    /\n");
	printf("                 \xf4\xf4_\xf4______\xf4________\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4___\xf4_____\xf4\xf4\n");
	printf("                 \xf4_\xf4\xf4_____\xf4\xf4__\xf4_____\xf4_\xf4\xf4_____\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4\xf4__\xf4\xf4\n");
	printf("                 \xf4_______\xf4__\xf4\xf4\xf4_____\xf4_\xf4__\xf4\xf4_\xf4      \xf4\xf4\xf4\xf4\xf4\xf4\xf4\n");
	printf("                \xf4\xf4_____\xf4\xf4__\xf4\xf4\xf4\xf4_____\xf4_\xf4\xf4\xf4\xf4\xf4_\xf4\n");
	printf("                \xf4_____\xf4\xf4\xf4\xf4\xf4\xf4__\xf4____\xf4_\xf4\xf4\xf4\xf4\xf4\xf4_\xf4\n");
	printf("              \xf4\xf4____\xf4\xf4\xf4\xf4\xf4____\xf4____\xf4_\xf4  \xf4\xf4\xf4\xf4\xf4\n");
	printf("              \xf4\xf4___\xf4\xf4\xf4\xf4\xf4__\xf4\xf4\xf4\xf4___\xf4\xf4_\xf4   \xf4\xf4\xf4\n");
	printf("              \xf4___\xf4\xf4\xf4\xf4__\xf4\xf4\xf4 \xf4\xf4__\xf4__\xf4\n");
	printf("              \xf4___\xf4\xf4\xf4__\xf4\xf4   \xf4__\xf4\xf4\xf4\xf4\n");
	printf("             \xf4\xf4__\xf4\xf4\xf4\xf4_\xf4     \xf4\xf4\xf4\xf4\xf4\n");
	printf("             \xf4\xf4__\xf4\xf4\xf4_\xf4\n");
	printf("             \xf4\xf4_\xf4\xf4\xf4\xf4\xf4\n");
	printf("             \xf4\xf4_\xf4\xf4\xf4\xf4\n");
	printf("             \xf4\xf4_\xf4\xf4\xf4\xf4\n");
	printf("              \xf4_\xf4_\xf4\n");
	printf("              \xf4___\xf4\n");
	printf("              \xf4\xf4_\xf4\xf4\n");
	printf("            \xf4\xf4\xf4\xf4_\xf4\xf4\xf4\xf4\xf4\xf4\n");
	printf("          \xf4\xf4\xf4\xf4________\xf4\xf4\n");
	printf("         \xf4\xf4\xf4___________\xf4\xf4\n");
	printf("        \xf4\xf4_______\xf4\xf4\xf4_\xf4_\xf4\xf4\n");
	printf("        \xf4\xf4____\xf4\xf4\xf4\xf4_\xf4\xf4_\xf4\xf4\n");
	printf("        \xf4___\xf4\xf4\n");
	printf("         \xf4__\xf4\n");
	printf("          \xf4\xf4\n\n");
	system("pause");
    return 0;
}

