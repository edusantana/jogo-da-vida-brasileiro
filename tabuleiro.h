typedef void Casas_Creator();
typedef void Casa_Function();

typedef struct {
	// Declarações dos campos
//	(void*) (casas[2]);
  Casa_Function* casas[10];
} Tabuleiro;


// passa função de criação de casas
void cria_tabuleiro(Casas_Creator*);
Tabuleiro* get_tabuleiro();

void cria_casas(Tabuleiro*);
