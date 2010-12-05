#include "helpers.cpp"
#include "importador_por_arquivo.cpp"
#include "tabuleiro.cpp"

//criando um tabuleiro novo e imprimindo ele, apenas para ver funcionar
int main (int argc, char const* argv[])
{
  ImportadorPorArquivo * importador = new ImportadorPorArquivo();

  Tabuleiro * tabuleiro = new Tabuleiro(importador->get_linha());
  tabuleiro->imprime_tabuleiro();

  return 0;
}
