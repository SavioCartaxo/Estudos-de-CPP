public class ArrayList {
    
    public static final int TAMANHO_DEFAULT = 20;
    private String[] array;
    private int tamanho;

    // Construtor
    public ArrayList() {
        tamanho = 0;
        array = new String[TAMANHO_DEFAULT];
    }

    public ArrayList(int n) {
        tamanho = 0;
        array = new String[n];
    }

    // Metodos de apoio
    public void assegureCapacidade(int tamanhoQueQuer){
        if (tamanhoQueQuer > this.array.length)
            resize(Math.max(tamanhoQueQuer, this.array.length * 2));
    }


    public void resize(int tamanhoNovo) {
        String[] arrayNovo = new String[tamanhoNovo];
        for (int i = 0; i < this.array.length; i++)
            arrayNovo[i] = this.array[i];
        this.array = arrayNovo;
    }

    public void shiftParaDireita(int idx){
        if (idx < 0 || idx >= this.array.length)
            throw new IndexOutOfBoundsException("index invalido");

        this.assegureCapacidade(this.array.length + 1);

        for(int i = this.tamanho; i > idx; i--) {
            array[i] = array[i-1];
        }
    }

    public void shiftParaEsquerda(int idx) {
        for (int i = idx; i < this.tamanho - 1; i++) {
            this.array[i] = this.array[i+1];
        }
        this.tamanho--;
    }

    // Adicionar
    public void add(String n){
        this.assegureCapacidade(this.array.length + 1);
        this.array[tamanho++] = n;
    }

    public void add(String n, int idx) {
        if (idx < 0 || idx >= this.tamanho)
            throw new IndexOutOfBoundsException("Deu ruim com o index");

        this.assegureCapacidade(this.array.length + 1);
        this.shiftParaDireita(idx);

        this.array[idx] = n;
        this.tamanho++;
    }

    public void set(String n, int idx) {
        if (idx < 0 || idx >= this.tamanho)
            throw new IndexOutOfBoundsException("Deu ruim com o index");

        this.array[idx] = n;
    }

    // Remover
    public void remove(int idx) {
        if (idx < 0 || idx >= this.tamanho)
            throw new IndexOutOfBoundsException();
        
        shiftParaEsquerda(idx);
    }

    public boolean remove(String s){
        if (s == null)
            return false;
        
        for (int i = 0; i < tamanho; i++) {
            if (s.equals(this.array[i])) {
                shiftParaEsquerda(i);
                return true;
            }
        }
        
        return false;
    }

}