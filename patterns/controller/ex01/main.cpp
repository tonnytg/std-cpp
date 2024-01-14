#include <iostream>
#include <fstream>
#include <string>

class Pessoa {
public:
    Pessoa(const std::string& nome, int idade) : nome(nome), idade(idade) {}

    // Método para salvar os dados da pessoa em um arquivo
    bool salvarEmArquivo(const std::string& nomeArquivo) {
        std::ofstream arquivo(nomeArquivo);

        if (arquivo.is_open()) {
            arquivo << "Nome: " << nome << std::endl;
            arquivo << "Idade: " << idade << std::endl;
            arquivo.close();
            return true;
        } else {
            std::cerr << "Erro ao abrir o arquivo." << std::endl;
            return false;
        }
    }

private:
    std::string nome;
    int idade;
};

class PessoaService {
public:
    bool salvarPessoa(const std::string& nome, int idade, const std::string& nomeArquivo) {
        Pessoa pessoa(nome, idade);
        return pessoa.salvarEmArquivo(nomeArquivo);
    }
};

class PessoaController {
public:
    bool criarPessoa(const std::string& nome, int idade) {
        PessoaService service;
        return service.salvarPessoa(nome, idade, "dados_pessoa.txt");
    }
};

int main() {
    PessoaController controller;

    std::string nome;
    int idade;

    std::cout << "Digite o nome da pessoa: ";
    std::cin >> nome;

    std::cout << "Digite a idade da pessoa: ";
    std::cin >> idade;

    if (controller.criarPessoa(nome, idade)) {
        std::cout << "Dados da pessoa foram salvos com sucesso!" << std::endl;
    } else {
        std::cerr << "Erro ao salvar os dados da pessoa." << std::endl;
    }

    return 0;
}
