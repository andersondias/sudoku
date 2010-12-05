#include <iostream>
#include <fstream>
#include "helpers.h"
#include "importador_por_arquivo.h"

ImportadorPorArquivo::ImportadorPorArquivo()
{
  FILE* file = fopen("jogos", "r");

  //o arquivo de jogos tem 150 configurações iniciais disponíveis
  int line_number = random(150);

  //lê linhas até ler a linha sorteada
  for (int i = 0; i <= line_number; i++) {
    fgets(line, sizeof(line), file);
  }
}

char* ImportadorPorArquivo::get_linha()
{
  return line;
}
