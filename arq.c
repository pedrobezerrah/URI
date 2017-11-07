#include <stdio.h>
#include <locale.h>
int main(void){
    struct{
        int matricula;
        char nome[100];
    }Aluno;
    FILE *arquivo;
    int i;
        if((arquivo = fopen("novoArquivo.txt", "w"))==NULL){
            printf("Sorry queridx, nao foi possivel abrir o arquivo no momento!\n");
            return 1;
        }

    arquivo = fopen("novoArquivo.txt", "w");
        do{
            printf("Matricula: ");
            scanf("%d", &Aluno.matricula);
            if(Aluno.matricula == 0) break;
            printf("Nome: ");
            scanf("%s", Aluno.nome);
            fwrite(&Aluno, sizeof(Aluno), 1, arquivo);
        }while(0);

    fclose(arquivo);

    if((arquivo = fopen("novoArquivo.txt", "r"))==NULL){
        printf("Sorry queridx, nao foi possivel abrir o arquivo no momento!\n");
        return 1;
    }

    while(fread(&Aluno, sizeof(Aluno), 1, arquivo)==1){
        printf("Matricula: %d\nNome: %s\n", Aluno.matricula, Aluno.nome);
    }
    fclose(arquivo);
    return 0;
}
