Projeto do meu curso Análise e Desenvolvimento de Sistemas, utilizando a linguagem de programação C

#include <stdio.h>																		
#include <conio.h>
#include <locale.h>	
#include <string.h>																			
#include <stdlib.h>
#include <unistd.h> 	

char admin [100];	
char nome_funcionario[10] [100];																	                        																		                   																		             														
char cpf [10][100];															
char rg [10][100];																		
char buscar [100];																		

int senha,opcao,i,j,quantidade,sair;	
int encontrou=0;
int quantidade_exclui;	
int opcao_excluir;	
int nome_excluir;		
int alterar_cadastro;
int quantidade_alterar;
int opcao_alterar;
int cadastro_alterar;
																				
int main ()
{
system("Color A");
 	setlocale(LC_ALL, ""); 
 	
	    printf("\n-------------------------------------------");
	    printf("  \n         CENTRAL TESLA, INC.    	 ");
	    printf("\n-------------------------------------------");	
		printf("\n");															
	
		printf ("\n Bem vindo(a) ao portal administrativo da empresa, \n por favor nos informe seu login de acesso: ");
		printf("\n");
		printf("\n");
		
		printf("USUARIO: ");
		fflush(stdin);
		gets(admin);
		printf("SENHA:  ");
		fflush(stdin);
		scanf ("%d", &senha);	
		printf("\n");		
		system("cls");
		
    	printf("Estamos só conferindo se o seu login, por favor aguarde.");
	    sleep(1);
	    printf("...");
	    sleep(1);
	    system("cls"); 																		
	
	if (senha == 909086){
	
	//while (opcao != 1){
	//	while (sair != 6){

	
	
			printf("\n-------------------------------------------");
			printf("  \n         PAINEL ADMINISTRATIVO TESLA, INC.	     ");
			printf("\n-------------------------------------------");
			printf("\nSeja bem vindo(a) %s\n ", admin);
		       		 
		  	printf("\n");
		  		  
			printf("\nVocê sera direcionado para o painel administrativo");	
			printf("\n");
			printf("\nPressione qualquer tecla para continuar e siga as instruções... \n");
			getche ();
			system("cls");
			
			printf("CARREGANDO O MENU");
			sleep(1);
			printf("...");
			sleep(1);
			
			system("cls");
			
	do{	
		    printf("\n-------------------------------------------");
			printf("  \n         MENU ADMINISTRATIVO TESLA, INC.	     ");
			printf("\n-------------------------------------------");
			printf("\n");
									                                                  
			printf("\n1° Deseja realizar cadastro de funcionários?, (Digite 1) ");	
			printf("\n");
			
			printf("\n2° Deseja ver a lista de funcionarios cadastrados anteriomente e os dados?, (Digite 2)  ");
			printf("\n");
			
			printf("\n3° Deseja buscar algum funcionario especifico?, (Digite 3)  ");
			printf("\n");
					
			printf("\n4° Deseja apagar dados ou informações de algum usuario?, (Digite 4)  ");
			printf("\n");
			
	    	printf("\n5° Deseja fazer alterações de cadastro?, (Digite 5)  ");
			printf("\n");		
				
			printf("\n6° Ou se desejar sair, (digite 6)");
		    printf("\n");
		    
		   	printf("\nDeseja qual das opções acima? \n");
			scanf("%d", &opcao);
				
			switch (opcao){
			
			case 1:
				system ("cls");
				printf("Só um minuto estamos preparando a aba de cadastro");
				sleep(1);
				printf("...");
				sleep(1);
				system ("cls");	
					
				printf("\n-------------------------------------------------------------");
				printf("  \n         CENTRAL CADASTRO TESLA, INC.	    ");
				printf("\n-------------------------------------------------------------");
	            printf("\n");
			    
				printf ("\nBem vindo(a) a pagina de cadastro de funcionarios, abaixo tem algumas instruções. \n");
		    	printf("\n");
			
				printf("\n1º lembrando que você não conseguirar recadastrar um funcionario por aqui. \n");
			    printf("\n");
			
				printf("\n2º Casos os dados dos funciorarios estiverem incorreto, sera anulado. \n");
			    printf("\n");
			
				printf("\n3º limite maximo de cadastramento diario é de 2 funcionarios. \n");
				printf("\n");
			
				printf("\nPressione qualquer tecla para continuar.... \n");
				getche ();																				
		  	  	system("cls");
		    
				printf("\nDigite o numero de cadastros que deseja efetuar:  \n");
				scanf("%d", &quantidade);
				printf("\n");
				
				printf("Pressione qualquer tecla para continuar.... ");
				getche ();		 	
		 		system ("cls");
		 	
					
		   	for(i=0;i<quantidade;i++){ 											
			 										 																				
				printf("\n-----------------------------");
				printf("\n   TESLA CADASTROS", i+1);
				printf("\n-----------------------------");
				printf("\n");
				
				printf("\nINSIRA O RG ");
				fflush (stdin);
				gets (rg [i]);																				 
				printf("\n");
								
				printf("\nINSIRA O CPF ");
				fflush (stdin);
				gets (cpf [i]);																			
				printf("\n");    
				
				printf("\nINSIRA O NOME DO FUNCIONARIO ");
				fflush (stdin);
				gets (nome_funcionario [i]);																		
		        system("cls");	
			
			printf("\nCadastro finalizado com sucesso, agora é só aguardar os dados serem enviados para a empresa\n");
				
				printf("enviando os dados");
				sleep(1);
				printf("...");
				sleep(1);
				system("cls");
				
				printf("Dados enviados, pressione em qualquer tecla para continuar");
				getche ();
				system ("cls");
				}
				
			break;
				
				case 2: 
				system ("cls");
				
				printf("\n-------------------------------------------------------------");
				printf("  \n         PAINEL ADMINISTRATIVO TESLA, INC	    ");
				printf("\n-------------------------------------------------------------");
			
				printf("\n Você selecionou a opção para ver a lista com os dados dos funcionarios \n");
				printf("\n");
				printf ("\n A lista junto com os dados dos usuarios vão aparecer na tela!  ");
				getche ();
				system("cls");
				
				printf("Processando");
				sleep(1);
				printf("...");
				sleep(1);
				system("cls");
				
			printf("Confira os dados de cadastro abaixo:"); 
			
			for (i=0;i<quantidade; i++){
				
			   	
				printf("\n-------------------------------------------------------------");
				printf(" \n     DADOS DO CADASTRO %d ", i+1);
				printf("\n------------------------------------------------------------- ");
				printf("\n");
						
				printf("Nome do funcionario: %s\n ", nome_funcionario [i]);
				printf("RG do funcionario: %s\n", rg [i]);
				printf("CPF do funcionario: %s\n ", cpf [i]);
				printf("\n");
				getche();
				}
					
			system("cls");
							
			break;
		
				case 3:
				system ("cls");
				
				printf("\n-------------------------------------------------------------");
				printf("  \n         PAINEL ADMINISTRATIVO TESLA, INC	    ");
				printf("\n-------------------------------------------------------------");
				
				printf("\nVocê selecionou a opção para buscar algum funcionario especifico! \n");
				printf("\n");
				
				printf ("\nNos informe o nome do funcionario que deseja encontrar: \n ");
				gets (buscar);
				gets (buscar);
				
				for (i=0;i<quantidade;i++){
				if (strcmp(nome_funcionario [i], buscar)==0){
					
					printf("\n\n");
					printf("Estamos procurando o funcionario selecionado, por favor aguarde");
					sleep(1);
					printf("...");
					sleep(1);
					printf("\n");	
					printf ("Conseguimos localizar o funcionario na empresa: %s\n ", nome_funcionario[i]);	
					system("pause");	
					encontrou = 1;
				}		
			}
			 if(encontrou!= 1){
			  		printf("Estamos procurando o funcionario selecionado, por favor aguarde");
					sleep(1);
					printf("...");
					sleep(1);
					printf("\n");
					printf ("\nLamentamos, mas não conseguimos localizar o funcionario inserido: %s\n ", nome_funcionario[i]);
					system("pause");
				}	
											
			system("cls");
			
			break;
			
				case 4:
					system ("cls");
				
					printf("\n-------------------------------------------------------------");
					printf("  \n         PAINEL ADMINISTRATIVO TESLA, INC	    ");
					printf("\n-------------------------------------------------------------");
					printf("\n");
					printf("\n");
					
			  	    printf("Você selecionou a opção de excluir cadastros");
					printf("\n");
					printf("\n");
					printf("Estamos te direcionando para o menu de exclusão \n");
					sleep(1);
					system ("cls");
					
					printf("\n-------------------------------------------------------------");
					printf("  \n         PAINEL ADMINISTRATIVO TESLA, INC	    ");
					printf("\n-------------------------------------------------------------");
					printf("\n");
					printf("\n");
						
					printf ("\n1° EXCLUIR TODOS OS DADOS DE CADASTRO      \n");
					printf("\n2° EXCLUIR APENAS O CPF");
					printf("\n");
					printf("\nQual opção deseja prosseguir?  \n");
					scanf("%d", &opcao_excluir);
					printf("\n");
					
					printf("\nQual a quantidade de cadastro que deseja excluir? : \t ");
					scanf("%d", &quantidade_exclui);
					
					switch(opcao_excluir)
					{
					
								case 1:				
								   		 system("cls");	
										
										printf("\nVocê seleciou a opção para excluir todos os dados.. \n");					
										for (i=0;i<quantidade_exclui;i++){
																			
										printf(" \nNos informe qual cadastro será realizado a exclusão: \t ");
										scanf("%d", &nome_excluir);				
										printf("\n");
										printf("Estamos só conferindo o funcionario escolhido acima, por favor aguarde");
										printf("\n");
										sleep(1);	
										system("cls");
																
										printf(" \n -------------------------------  ");	
										printf("\n");							 									
										printf ("\n   EXCLUINDO %d CADASTRO", nome_excluir);
										printf("\n");	
										printf(" \n -------------------------------  ");
										printf("\n");
												
										memset(nome_funcionario[nome_excluir-1],0,sizeof(nome_funcionario[nome_excluir-1]));
										printf("\nNOME DO FUNCIONARO FOI EXCLUIDO \n");
						
										memset(cpf[nome_excluir-1],0,sizeof(cpf[nome_excluir-1]));
										printf("\nCPF EXCLUIDO \n ");					
												
										memset(rg[nome_excluir-1],0,sizeof(rg[nome_excluir-1]));
										printf(" \nRG DO FUNCIONARIO FOI EXCLUIDO\n");	
										printf("\n");
										
										system("pause");
										system("cls");	
																								
									}
												
							break;
									
									
									case 2:	
										system("cls");
											
										printf("\nVocê selecionou a opção: EXCLUIR CPF ");
										printf("\n");
										for (i=0;i<quantidade_exclui;i++){
																			
										printf("\nDigite qual cadastro voce quer excluir: \t ");
										scanf("%d", &nome_excluir);	
													
									    printf("\n");
										printf("Estamos só conferindo o funcionario escolhido acima, por favor aguarde");
										printf("\n");
										sleep(1);	
										system("cls");
																								
										printf(" \n ------------------------------  ");	
										printf("\n");							 									
										printf ("\n   EXCLUINDO  %d CADASTRO", nome_excluir);
										printf("\n");	
										printf(" \n ---------------------------------  ");
										printf("\n");
													
										memset(nome_funcionario[nome_excluir-1],0,sizeof(nome_funcionario[nome_excluir-1]));
										printf("\nCPF DO FUNCIONARO FOI EXCLUIDO \n");
										printf("\n\n");
										system("pause");
										system("cls");						
										printf("Pressione qualquer tecla para continuar");
										getche();
												
									}
										
								default:
									printf("\nSelecione uma das opções acima, por favor");
									getche();
									printf("\n\n");
                                    system("\n pause");
                                    system("cls");
                                    break;
					break;	
																				
					}	
						
					break;
																			
			 	case 5:
					system ("cls");
							
					printf("\n-------------------------------------------------------------");
					printf("  \n         PAINEL ADMINISTRATIVO TESLA, INC	    ");
					printf("\n-------------------------------------------------------------");
					printf("\n");
					printf("\n");
				
					printf("Você selecionou a opção: fazer alterações de cadastro");				
					printf("\n");
					printf("pressione qualquer tecla para continuar");
					getche();
					sleep(1);
					printf("...");
					system("cls");
					
					printf("\n");											
					printf ("\n1°- ALTERAR  TODOS OS DADOS DE CADASTRO   \n");	
					printf("\n2°- ALTERAR APENAS O CPF \n");
					printf("Qual opção deseja prosseguir? \n");
					scanf("%d",&opcao_alterar);
					printf("\n");
					
					printf("\nQuantos cadastros deseja alterar? \t ");
					scanf("%d", &quantidade_alterar);
					printf("\n");
					printf("Estamos preparando tudo para você");
					sleep(1);
					printf("...");
					sleep(1);
					system("cls");
					
					
				switch(opcao_alterar)
				{
				
					case 1:				
							system("cls");	
							printf("\nVocê seleciou a opção para alterar todos os dados.. \n");
							printf("\n");						
								for (i=0;i<quantidade_alterar;i++){
										
							printf("\nQual cadastro voce quer alterar: \t ");
							scanf("%d", &cadastro_alterar);
							printf("\n");
												
							printf(" \n ------------------------------  ");	
							printf("\n");							 									
							printf ("\n   ALTERACAO DO %d CADASTRO", cadastro_alterar);
							printf("\n");	
							printf(" \n ------------------------------  ");	
							printf("\n");
													
							printf ("\nNovo nome do funcionario : \t");
							fflush (stdin);
							scanf ("%[^.\n]s", &nome_funcionario[cadastro_alterar-1]);
											
							printf ("\nNovo CPF do funcionario : \t");
							fflush (stdin);
							scanf ("%[^.\n]s", &cpf[cadastro_alterar-1]);
										 
							printf ("\nNovo RG do funcionario : \t");
							fflush (stdin);
							scanf ("%[^.\n]s", &rg[cadastro_alterar-1]);								 			
							system("cls");
							printf ("\nNOME alterado  : %s \n", nome_funcionario[cadastro_alterar-1]);
							printf ("\nCPF alterardo : %s \n", cpf[cadastro_alterar-1]);
							printf ("\nRG alterado : %s \n", rg[cadastro_alterar-1]);																				
							printf("\n\n");
							system("pause");	
							system("cls");
							
						}
						
				break;
				
					case 2:
						
							system("cls");	
							printf("\nVocê selecionou a opção alterar apenas o CPF do funcionario");
							printf("\n");
								for (i=0;i<quantidade_alterar;i++){
																		
							printf("\nQual cadastro voce quer alterar: \t ");
							scanf("%d", &cadastro_alterar);
																
							printf(" \n ------------------------------  ");		
							printf("\n");							 									
							printf ("\n   ALTERANDO  %d CPF  ", cadastro_alterar);
							printf("\n");	
							printf(" \n ------------------------------  ");	
							printf("\n");
													
							printf ("\nDigite o novo CPF: \t");
							fflush (stdin);
							scanf ("%[^.\n]s", &cpf[cadastro_alterar-1]);
							system("cls");
							printf ("\nNovo CPF DO FUNCIONARIO: %s \n", cpf[cadastro_alterar-1]);																				
							printf("\n");	
							system("pause");
							system("cls");
						}																											
				break;
				
					default:
						printf("\nSelecione uma das opções acima, por favor");
						getche();
						printf("\n");
						system("\n pause");
						system("cls");
						break;				
				break;
				
				}
								
				break;
					case 6:
					system ("cls");
						
					printf("\n-------------------------------------------------------------");
					printf("  \n         PAINEL ADMINISTRATIVO TESLA, INC	    ");
					printf("\n-------------------------------------------------------------");
					printf("\n");
					printf("\n");
				
					printf ("\nVocê quer mesmo sair? ");
					printf("DIGITE SIM PARA SAIR: \n");
					scanf("%s", &sair);
					system("cls");
					
					printf("FECHANDO O SISTEMA");
					sleep(1);
					printf("...");
					sleep(1);
					system("exit(1)");
		   	}	
  		}while(opcao != 6);	  	
	}		  			 	
	else{
	printf("Senha inserida está incorreta, tente novamente mais tarde");
	return 0;
		}
}