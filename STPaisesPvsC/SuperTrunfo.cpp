#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>

struct Pais {
    std::string nome;
    int populacao; // em milhões
    double area;   // em mil km²
    int pontosTuristicos; // total de pontos turísticos
};

void mostrarPais(const Pais& p) {
    std::cout << "País: " << p.nome
              << " | População: " << p.populacao << "M"
              << " | Área: " << p.area << " mil km²"
              << " | Pontos Turísticos: " << p.pontosTuristicos << "\n";
}

int main() {
    std::vector<Pais> baralho = {
        {"Brasil", 213, 8516, 25},
        {"Estados Unidos", 331, 9834, 30},
        {"China", 1441, 9597, 20},
        {"Índia", 1393, 3287, 15},
        {"Rússia", 146, 17098, 12},
        {"Alemanha", 83, 357, 18},
        {"Japão", 125, 378, 14},
        {"França", 67, 551, 22}
    };

    std::srand(::time(nullptr));
    int pontosJogador = 0, pontosComputador = 0;

    for (int rodada = 1; rodada <= 3; ++rodada) {
        // Embaralhar o baralho para cada rodada
        std::vector<Pais> baralhoTemp = baralho;
    std::shuffle(baralhoTemp.begin(), baralhoTemp.end(), std::default_random_engine(std::rand()));

        // Distribuir 3 cartas para cada jogador
        std::vector<Pais> cartasJogador(baralhoTemp.begin(), baralhoTemp.begin() + 3);
        std::vector<Pais> cartasComputador(baralhoTemp.begin() + 3, baralhoTemp.begin() + 6);

        std::cout << "\n--- Rodada " << rodada << " ---\n";
        std::cout << "Suas cartas:\n";
        for (int i = 0; i < 3; ++i) {
            std::cout << i+1 << ": ";
            mostrarPais(cartasJogador[i]);
        }

        int escolhaCarta;
        do {
            std::cout << "Escolha sua carta (1-3): ";
            std::cin >> escolhaCarta;
        } while (escolhaCarta < 1 || escolhaCarta > 3);

        const Pais& jogador = cartasJogador[escolhaCarta-1];
        // Computador escolhe carta aleatória
        int escolhaCartaComp = std::rand() % 3;
        const Pais& computador = cartasComputador[escolhaCartaComp];

        std::cout << "\nSua carta escolhida:\n";
        mostrarPais(jogador);

        std::cout << "\nEscolha o atributo para competir (1=População, 2=Área, 3=Pontos Turísticos): ";
        int escolha;
        std::cin >> escolha;

        bool venceu = false;
        if (escolha == 1)
            venceu = jogador.populacao > computador.populacao;
        else if (escolha == 2)
            venceu = jogador.area > computador.area;
        else if (escolha == 3)
            venceu = jogador.pontosTuristicos > computador.pontosTuristicos;
        else {
            std::cout << "Opção inválida!\n";
            --rodada; // não conta rodada inválida
            continue;
        }

        std::cout << "\nCarta do computador:\n";
        mostrarPais(computador);

        if (venceu) {
            std::cout << "\nVocê venceu a rodada!\n";
            pontosJogador++;
        } else {
            std::cout << "\nVocê perdeu a rodada!\n";
            pontosComputador++;
        }
        std::cout << "Placar: Você " << pontosJogador << " x " << pontosComputador << " Computador\n";
    }

    std::cout << "\n=== Resultado final ===\n";
    if (pontosJogador > pontosComputador)
        std::cout << "Parabéns! Você venceu o jogo!\n";
    else if (pontosJogador < pontosComputador)
        std::cout << "O computador venceu o jogo!\n";
    else
        std::cout << "Empate!\n";
    return 0;
}
