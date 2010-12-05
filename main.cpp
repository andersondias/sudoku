#include "tabuleiro.cpp"

//criando um tabuleiro novo e imprimindo ele, apenas para ver funcionar
int main (int argc, char const* argv[])
{
  Tabuleiro * tabuleiro = new Tabuleiro();
  tabuleiro->imprime_tabuleiro();

  return 0;
}
