// Importante destacar que essa é uma decisão de design nossa. Decidimos não aumentar o tamanho da pilha, 
// nem sobrescrever ninguém. Se você lembrar bem, no material de ArrayList nós decidimos que aumentaríamos
// a capacidade e absorveríamos o novo elemento. Já no material de Fila, nós decidimos que iríamos sobrescrever 
// o primeiro elemento sempre que um novo chegasse e a fila já estivesse cheia. Eu faço assim porque gosto de 
// explorar diferentes decisões de design enquanto estamos aprendendo :)

// Desafio. Que tal implementar a pilha das outras duas maneiras? Quando encher, faz o resize ao invés de lançar
// a exceção. A outra alternativa é sobrescrever o topo quando encher.


// Onde é usado?
//     ctrl + Z
//     botão voltar do Browser
//     algoritmos recursivos

import java.util.NoSuchElementException;

public class Pilha{ // LIFO - Last In First of
    private int topo;
    private String[] pilha;

    public Pilha(int tamanho) {
        this.topo = -1;
        this.pilha = new String[tamanho];
    }

    // Vazia
    public boolean isEmpty(){
        return this.topo == -1;
    }

    // Pilha cheia
    public boolean isFull() {
        return this.topo + 1 == this.pilha.length;
    }

    // Adiciona
    public void push(String element) {
        if (this.isEmpty()) throw new RuntimeException("Pilha Cheia!");
        this.pilha[++this.topo] = element;
    }

    // remove
    public String pop(){
        if (this.isEmpty()) throw new NoSuchElementException();
        return this.pilha[this.topo--];
    }

    // Olhar quem está no topo sem remover
    public String peek(){
        if (this.isEmpty()) throw new NoSuchElementException();
        return this.pilha[this.topo];
    }
}