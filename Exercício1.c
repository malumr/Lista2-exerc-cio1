#include <stdio.h>
// Maria Luiza de Matos Ribeiro
float mediaTurma(int alunos) {
	float soma = 0, nota, media;
	for (int i = 0; i < alunos; i++) {
		printf("Digite a nota do aluno %d: ", i + 1);
		scanf("%f", &nota);
		soma += nota;
	}
	media = soma / alunos;
	return media;
}
float mediaEscola(int turmas) {
	int alunos;
	float media, somaMedias = 0;
	for (int i = 0; i < turmas; i++) {
		printf("\nDigite o nC:mero de alunos da turma %d: ", i + 1);
		scanf("%d", &alunos);
		media = mediaTurma(alunos);
		printf("MC)dia da turma %d: %.2f\n", i + 1, media);
		somaMedias += media;
	}
	return somaMedias / turmas;
}
int main() {
	int turmas;
	float mediaGeral;
	printf("Digite o nC:mero de turmas: ");
	scanf("%d", &turmas);
	mediaGeral = mediaEscola(turmas);
	printf("\nMC)dia geral da escola: %.2f\n", mediaGeral);
	return 0;
}