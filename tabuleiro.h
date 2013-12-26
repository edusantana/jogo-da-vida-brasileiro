
typedef struct {
	// Declarações dos campos
} Rodada;


typedef struct {
	// Declarações dos campos
//	(void*) (casas[2]);
} Tabuleiro;

typedef void Casas_Creator();

// passa função de criação de casas
void cria_tabuleiro(Casas_Creator*);
Tabuleiro* get_tabuleiro();

