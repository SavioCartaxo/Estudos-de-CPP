// O que define a fila é sua política de acesso. Toda adição é feita no final da fila (addLast) e toda 
// remoção é no início da fila (removeFirst). Essas são as duas operações que implementam a política 
// First In First Out (FIFO).

public class Fila { // queue // FIFO (First in First of)
    private String[] fila;
    private int head;
    private int tail;
    private int size;    

    public Fila(int size){
        this.fila = new String[size];
        this.size = size;
        this.head = 0; // Inicio da fila
        this.tail = -1; // Fim da fila
    }

    // Temos duas operações principais em Fila: addLast(String ele) e removeFirst()
    // adições são no final e as remoções são no início

    public boolean isEmpty() {
        return this.tail == -1;
    }

    public boolean isFull(){
        return this.tail + 1 == this.size;
    }

    public void addLast(String element){
        if (this.isFull()) throw new RuntimeException("Fila cheia");
        this.fila[++this.tail] = element;
    }

    public void removeFirst(){
        if (this.isEmpty()) throw new RuntimeException("Fila vazia");
        
        // ShiftLeft
        for (int i = this.head; i < this.tail; i++) {
            this.fila[i] = this.fila[i+1];
        }

        this.tail--;
    }

// fila = [“a”, “b”, “c”]; head = 0, tail = 2;

// Como você pode ver, a fila está cheia. Qual seria o resultado então de uma operação addLast(“d”)? Há 3 soluções aquiL
//     Uma solução é simplesmente lançar uma exceção indicando que a fila está cheia.

//     Outra alternativa é crescer dinamicamente a fila, isto é, aumentar o array, transcrever
//     todo mundo para o novo array e operar nele. Essa é a decisão que tomamos para implementar
//     uma ArrayList, por exemplo. Veja no material de ArrayList.

//     Uma outra solução é sobrescrever algum elemento da fila. Como trata-se de uma fila, escolhemos
//     o primeiro que entrou (mais antigo) para ser sobrescrito.


// Em linhas gerais, remover o início da fila deveria ser apenas fazer head = head + 1, certo? Ou seja, 
// em O(1). Mas e porque é complicado? Porque fazendo isso, nós liberamos uma posição anterior a head que 
// poderia ser usada para uma nova adição. Como fazer para tail assumir essa nova posição quando for adicionado 
// um elemento? Utilizando a operação de resto da divisão pelo tamanho da fila (%). Vamos montar um exemplo para 
// ficar claro.

}