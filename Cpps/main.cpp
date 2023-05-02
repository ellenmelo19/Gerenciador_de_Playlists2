#include <iostream>
#include <string>

using namespace std;

// Classe para representar uma música
class Musica {
public:
    Musica(string nome, string artista, string playlist) {
        this->nome = nome;
        this->artista = artista;
        this->playlist = playlist;
    }
    string nome;
    string artista;
    string playlist;
    Musica* proximo = nullptr;
};

// Função para cadastrar uma nova música
Musica* cadastrarMusica(Musica* lista) {
    string nome, artista, playlist;
    cout << "Digite o nome da música que você quer inserir:" << endl;
    cin >> nome;
    cout << "Agora digite o nome do artista:" << endl;
    cin >> artista;
    cout << "Por fim, em qual playlist deseja salvar?" << endl;
    cin >> playlist;

    Musica* novaMusica = new Musica(nome, artista, playlist);
    novaMusica->proximo = lista;

    return novaMusica;
}

// Função para imprimir todas as músicas cadastradas
void imprimirMusicas(Musica* lista) {
    cout << "Músicas cadastradas:" << endl;
    while (lista != nullptr) {
        cout << "Música: " << lista->nome << " | Artista: " << lista->artista << " | Playlist: " << lista->playlist << endl;
        lista = lista->proximo;
    }
}

int main() {
    Musica* lista = nullptr;
    int opcao;

    do {
        cout << "O que você deseja fazer?" << endl;
        cout << "1 - Cadastrar nova música" << endl;
        cout << "2 - Imprimir músicas cadastradas" << endl;
        cout << "3 - Sair" << endl;
        cin >> opcao;

        switch (opcao) {
            case 1:
                lista = cadastrarMusica(lista);
                break;
            case 2:
                imprimirMusicas(lista);
                break;
            case 3:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    } while (opcao != 3);

    // Liberar a memória alocada pelos objetos Musica
    while (lista != nullptr) {
        Musica* proximo = lista->proximo;
        delete lista;
        lista = proximo;
    }

    return 0;
}

