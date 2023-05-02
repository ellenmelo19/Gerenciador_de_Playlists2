#ifndef MUSICA_H
#define MUSICA_H

#include <string>

class Musica {
  private:
    std::string titulo;
    std::string nomeArtista;
    std::string playlist;

  public:
    // Construtor padrão
    Musica();

    // Construtor com parâmetros
    Musica(std::string titulo, std::string nomeArtista, std::string playlist);

    // Getters e Setters
    std::string getTitulo();
    void setTitulo(std::string titulo);

    std::string getNomeArtista();
    void setNomeArtista(std::string nomeArtista);

    std::string getPlaylist();
    void setPlaylist(std::string playlist);

    // Imprime informações da música
    void imprimirInformacoes();
};

#endif

