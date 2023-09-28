//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dados{
	char nome[100] = "";
	char telefone[12] = "";
	char email[100]= "";
	
}Contato;

//Funções
void menu();
void cadastrar_contato();
void editar_contato();
void excluir_contato();
void mostrar_contatos();
void buscar_contato();

int buscar_posicao(char nome[],int escolha);
void copiar_dados();
int abertura_arquivo(char nome_arq[],char tipo[]);
void mostrar_contato(int i);
void substituir_contato(int i,Contato pessoa);
void salvar();

//Variáveis Globais
FILE *arq;
Contato contatos[1000];
int posicao = 0;

int main(){
		
	if(abertura_arquivo("agenda.txt","a+")==0){
		copiar_dados();
		fclose(arq);
		menu();
	}
		
	return 0;
}

void menu(){
	int escolha = 0;
	while(escolha!=5){
		system("cls");
		printf("\t\tAGENDA\n\n");
		printf("1.CADASTRAR CONTATO\n2.BUSCAR CONTATO\n3.EDITAR CONTATO\n4.EXCLUIR CONTATO\n5.SAIR\n\nDigite sua escolha: ");	
			scanf("%d",&escolha);
		switch(escolha){
			case 1: 
					cadastrar_contato();
					break;
			case 2: 
					buscar_contato();
					break;
			case 3: 
					editar_contato();
					break;
			case 4: 
					excluir_contato();
					break;
			case 5: 
					fclose(arq);
					break;
			default:
					printf("\nEscolha invalida!");
					system("pause");
					break;
		}
	}
}

void buscar_contato(){
	bool termino = false;
	int escolha,valor = 0;
	char dado[100];
	
	while(termino == false){
		system("cls");
		printf("\t\tBuscar Contato\n\n");
		
		printf("1.Mostrar todos os contatos\n2.Buscar por nome\n3.Buscar por email\n4.Buscar por telefone\n5.Sair\nDigite sua escolha: ");
			scanf("%d",&escolha);
	
		system("cls");
		printf("\t\tBuscar Contato\n\n");
		fflush(stdin);
		switch(escolha){
			case 1:
				valor = 0;
				while(valor<=posicao){
					if(contatos[valor].nome[0] !='\0')
					printf("\nNome: %s\nEmail: %s\nTelefone: %s\n",contatos[valor].nome,contatos[valor].email,contatos[valor].telefone);
				valor++;
				}
				system("pause");
				break;		
			case 2:
				printf("Digite o nome: ");
					scanf("%99[^\n]",dado);
				
				valor = buscar_posicao(dado,1);
				if(valor == -1){
					printf("\nContato nao encontrado!\n");
					system("pause");
				}
				else{
					mostrar_contato(valor);
					system("pause");
				}
				break;
			case 3:
				printf("Digite o email: ");
					scanf("%99[^\n]",dado);
				
				valor = buscar_posicao(dado,2);
				if(valor == -1){
					printf("\nContato nao encontrado!\n");
					system("pause");
				}
				else{
					mostrar_contato(valor);
					system("pause");
				}
				break;
			case 4:
				printf("Digite o telefone: ");
					scanf("%99[^\n]",dado);
				
				valor = buscar_posicao(dado,3);
				if(valor == -1){
					printf("\nContato nao encontrado!\n");
					system("pause");
				}
				else{
					mostrar_contato(valor);
					system("pause");
				}
				break;
			case 5:
				termino = true;
				break;
			default:
				printf("\nEscolha invalida!\n");
				system("pause");
		}	
		
	}
}

int buscar_posicao(char nome[],int escolha){
	int valor = 0;
	
	while(valor<=posicao){
			if(contatos[valor].nome[0]!='\0'){
		if(escolha == 1 && strcmp(nome,contatos[valor].nome) == 0)
			return valor;
		else if(escolha == 2 && strcmp(nome,contatos[valor].email) == 0)
			return valor;
		else if(escolha == 3 && strcmp(nome,contatos[valor].telefone) == 0)
			return valor;		
		}
	valor++;
	}
	return -1;
	
	}

void cadastrar_contato(){
	int escolha = 0;
	posicao++;
	while(escolha !=5 && escolha!=4){
		system("cls");
		
		printf("\t\tCadastrando Novo Contato\n\n");
		printf("1.NOME\n2.EMAIL\n3.TELEFONE\n4.SALVAR\n5.SAIR\nDigite sua escolha:");
			scanf("%d",&escolha);
			
		system("cls");
		fflush(stdin);
		
		switch(escolha){
			case 1:
				printf("\t\tCadastrando Novo Contato\n\n");
				printf("Digite o nome: ");
					scanf("%99[^\n]",contatos[posicao].nome);
				break;
				
			case 2:
				printf("\t\tCadastrando Novo Contato\n\n");
				printf("Digite o email: ");
					scanf("%99[^\n]",contatos[posicao].email);
				break;
			case 3:
				printf("\t\tCadastrando Novo Contato\n\n");
				printf("Digite o telefone: ");
					scanf("%11[^\n]",contatos[posicao].telefone);
				break;
			case 4:
				printf("\t\tCadastrando Novo Contato\n\n");
					printf("DADOS DO CONTATO:\nNome: %s\nEmail: %s\nTelefone: %s\nDeseja Realmente Salvar (1 - SIM e 0 - NAO): ",contatos[posicao].nome,contatos[posicao].email,contatos[posicao].telefone);
						scanf("%d",&escolha);
				if(escolha == 1){
					salvar();
					printf("\nContato Salvo Com Sucesso!\n");
					system("pause");
					escolha = 4;			
					}
				else
					posicao--;
				break;
			case 5:
				posicao--;
				break;	
			default:
					printf("\nEscolha invalida!\n");
					system("pause");
}
}

}

void editar_contato(){
	int escolha = 0,valor;
	char nome[100];
	Contato novo;
	bool termino = false;
	
		system("cls");
		printf("\t\tEditar Contato\n\n");
		
		fflush(stdin);
		printf("\nDigite o nome do contato que deseja alterar: ");
			scanf("%99[^\n]",nome);
		
		valor = buscar_posicao(nome,1);
		if(valor == -1){
			printf("\nContato nao encontrado!\n");
			system("pause");
		}
		else{
			mostrar_contato(valor);
			system("pause");
			
			strcpy(novo.nome,contatos[valor].nome);
			strcpy(novo.email,contatos[valor].email);
			strcpy(novo.telefone,contatos[valor].telefone);
			
			while(termino == false){
				system("cls");
				printf("\t\tEditar Contato\n\n");
				printf("\n1.Editar Nome\n2.Editar Email\n3.Editar Telefone\n4.Salvar\n5.Sair\nDigite sua escolha: ");
					scanf("%d",&escolha);
				
				system("cls");
				fflush(stdin);
				
				switch(escolha){
					case 1: 
						printf("\t\tEditar Contato\n\n");
						printf("\nDigite o nome: ");
							scanf("%99[^\n]",novo.nome);
						break;
					case 2:
						printf("\t\tEditar Contato\n\n");
						printf("\nDigite o email: ");
							scanf("%99[^\n]",novo.email);
						break;
					case 3:
						printf("\t\tEditar Contato\n\n");
						printf("\nDigite o telefone: ");
							scanf("%11[^\n]",novo.telefone);
						break;
					case 4:
						printf("\t\tEditar Contato\n\n");
						printf("Dados:\nNome: %s\nEmail: %s\nTelefone: %s\n",novo.nome,novo.email,novo.telefone);
						printf("\nDeseja salvar (1- SIM ou 0 - NAO): ");
							scanf("%d",&escolha);
						if(escolha==1){
							printf("\nDados Salvos com Sucesso!");
							substituir_contato(valor,novo);
							salvar();
							escolha = 4;
							termino = true;
						}

						break;
					
					case 5:
						termino = true;
						break;
					default:
						printf("\nEscolha invalida!\n");
						system("pause");
						break;	
				}
			}
		}
			
}
		
void excluir_contato(){
	bool  termino = false;
	int valor,escolha;
	char nome[100];
	while(termino == false){
		system("cls");
		printf("\t\tExcluir Contato\n\n");
		
		fflush(stdin);
		printf("Digite o nome do contato: ");
			scanf("%99[^\n]",nome);
		
		valor = buscar_posicao(nome,1);
		if(valor == -1){
			printf("\nContato nao encontrado!\n");
			system("pause");
			termino = true;
		}
		else{
			mostrar_contato(valor);
		
			printf("\nDeseja realmente excluir o contato (1 - SIM ou 0 - NAO): ");
				scanf("%d",&escolha);
			if(escolha == 1){
				contatos[valor].nome[0]='\0';
				salvar();
				printf("\nContato excluido com sucesso!\n");
				system("pause");
			}			
				termino = true;
	}
}
}

void salvar(){
	int i = 0;
	
	abertura_arquivo("agenda.txt","w+");
	
	
	while(i<=posicao){
		if(contatos[i].nome[0] != '\0')
		fprintf(arq,"%s\n%s\n%s\n",contatos[i].nome,contatos[i].email,contatos[i].telefone);
	i++;
	}
	
	
	
	fclose(arq);
}

int abertura_arquivo(char nome_arq[],char tipo[]){
		arq = fopen(nome_arq,tipo);
		if(arq == NULL){
			printf("Nao foi possivel abrir o arquivo!");
			return -1;
		}
		return 0;
}

void copiar_dados(){
	rewind(arq);
	while(fscanf(arq,"%99[^\n]\n%99[^\n]\n%11[^\n]\n",contatos[posicao].nome,contatos[posicao].email,contatos[posicao].telefone)!=-1){	
		posicao++;	
	}
}

void mostrar_contato(int i){
	printf("\nNome: %s\nEmail: %s\nTelefone: %s\n",contatos[i].nome,contatos[i].email,contatos[i].telefone);
}

void substituir_contato(int i,Contato pessoa){
	strcpy(contatos[i].nome,pessoa.nome);
	strcpy(contatos[i].email,pessoa.email);
	strcpy(contatos[i].telefone,pessoa.telefone);
}
