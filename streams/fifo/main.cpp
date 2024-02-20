#include <iostream>
#include <queue>
#include <string>

class FIFOQueue {
private:
    std::queue<std::string> messages;

public:
    // Adicionar uma mensagem à fila
    void enqueue(const std::string& message) {
        messages.push(message);
    }

    // Remover e retornar a mensagem mais antiga da fila
    std::string dequeue() {
        if (messages.empty()) {
            return "Fila vazia";
        } else {
            std::string message = messages.front();
            messages.pop();
            return message;
        }
    }

    // Verificar se a fila está vazia
    bool isEmpty() const {
        return messages.empty();
    }
};

int main() {
    FIFOQueue messageQueue;

    // Adicionando algumas mensagens à fila
    messageQueue.enqueue("Primeira mensagem");
    messageQueue.enqueue("Segunda mensagem");
    messageQueue.enqueue("Terceira mensagem");

    // Removendo e exibindo as mensagens da fila na ordem em que foram adicionadas
    while (!messageQueue.isEmpty()) {
        std::cout << "Mensagem recebida: " << messageQueue.dequeue() << std::endl;
    }

    return 0;
}
