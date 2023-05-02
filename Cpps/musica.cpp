#include "musica.h"
#include <iostream>

// Construtor padrão
Musica::Musica() {}

// Construtor com parâmetros
Musica::Musica(std::string titulo, std::string nomeArtista, std::string playlist) {
  this->titulo = titulo;
  this->nomeArtista = nomeArtista;
  this->playlist = playlist;
}

// Getters e Setters
std::string Musica::getTitulo() {
  return titulo;
}

void Musica::setTitulo(std::string titulo) {
  this->titulo = titulo;
}

std::string Musica::getNomeArtista() {
  return nomeArtista;
}

void Musica::setNomeArtista(std::string nomeArtista) {
  this->nomeArtista = nomeArtista;
}

std::string Musica::getPlaylist() {
  return playlist;
}

void Musica::setPlaylist(std::string playlist) {
  this->playlist = playlist;
}

// Imprime informações da música
void Musica::imprimirInformacoes() {
  std::cout << "Música: " << titulo << std::endl;
}
