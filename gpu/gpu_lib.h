#ifndef GPU_LIB_H
#define GPU_LIB_H
#include <stdint.h>

void iniciar_tela();
void desmapear_tela();
void limpar_tela();
void desenhar_bloco(uint32_t line, uint32_t col, uint32_t B, uint32_t G, uint32_t R);
void desenhar_tela_inicial();
void desenhar_T_vermelho();
void desenhar_E_laranja();
void desenhar_T_amarelo();
#endif