#include <stdio.h>
#include <stdlib.h>

typedef struct Curso {
	int id;
	char* nomeDoCurso;
	char nomeDoCordenador[100];
	int duracao;
}Curso;

typedef struct Aluno {
	int ra;
	char aluno[100];
	int dia;
	int mes;
	int ano;
	struct Curso* curso;
} Aluno;

typedef struct No {
	struct Aluno* aluno;
	struct Aluno* prox;
} No;

typedef No* pt_No;
typedef Aluno* pt_Aluno;

int main(void) {
	pt_No lista;
	pt_Aluno aluno1;
	lista = (pt_No)malloc(sizeof(No));
	aluno1 = (pt_Aluno)malloc(sizeof(Aluno));
	Curso* curso1 = (Curso*)malloc(sizeof(Curso));

	curso1->nomeDoCurso = "Engenharia de Software";
	aluno1->curso = curso1;

	lista->aluno = aluno1;

	printf("%s", lista->aluno->curso->nomeDoCurso);

	return 0;
}