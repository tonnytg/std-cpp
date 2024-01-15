#include <iostream>
#include <vector>
#include <string>

class Tarefa {
public:
    Tarefa(int id, std::string descricao, bool concluida)
        : id(id), descricao(descricao), concluida(concluida) {}

    int getId() const { return id; }
    std::string getDescricao() const { return descricao; }
    bool isConcluida() const { return concluida; }

private:
    int id;
    std::string descricao;
    bool concluida;
};

class TarefaRepository {
public:
    void adicionarTarefa(const Tarefa& tarefa) {
        tarefas.push_back(tarefa);
    }

    const std::vector<Tarefa>& listarTarefas() const {
        return tarefas;
    }

private:
    std::vector<Tarefa> tarefas;
};

class TarefaView {
public:
    void mostrarTarefas(const std::vector<Tarefa>& tarefas) {
        std::cout << "Lista de Tarefas:\n";
        for (const Tarefa& tarefa : tarefas) {
            std::cout << "[" << tarefa.getId() << "] ";
            std::cout << (tarefa.isConcluida() ? "[Concluída] " : "[Pendente] ");
            std::cout << tarefa.getDescricao() << "\n";
        }
    }
};

class TarefaController {
public:
    TarefaController(TarefaRepository& repo, TarefaView& view)
        : repo(repo), view(view) {}

    void adicionarTarefa(const std::string& descricao) {
        int proximoId = repo.listarTarefas().size() + 1;
        Tarefa tarefa(proximoId, descricao, false);
        repo.adicionarTarefa(tarefa);
    }

    void listarTarefas() {
        const std::vector<Tarefa>& tarefas = repo.listarTarefas();
        view.mostrarTarefas(tarefas);
    }

private:
    TarefaRepository& repo;
    TarefaView& view;
};

int main() {
    TarefaRepository repo;
    TarefaView view;
    TarefaController controller(repo, view);

    controller.adicionarTarefa("Fazer compras");
    controller.adicionarTarefa("Estudar C++");
    controller.adicionarTarefa("Ler um livro");

    controller.listarTarefas();

    return 0;
}
