import java.util.*;

public class QuickSort{

    public void quickSort(int[] arr, int inicio, int fim){
        if (inicio < fim) {
            int p = particionamento(arr, inicio, fim);
            quickSort(arr, inicio, p);
            quickSort(arr, p+1, fim);
        }
    }

    public int particionamento(int[] arr, int inicio, int fim) {
        int pivot = pivot(arr,  inicio, fim);
        // int i = inicio + 1;

        // for (int j = inicio + 1; j <= fim; j++) {
        //     if (arr[j] < pivot) {
        //         swap(arr, i, j);
        //         i++;
        //     }
        // }

        // swap(arr, inicio, i-1);
        // return i-1;

        int i = inicio;
        int j = fim;

        while (true) {
            while (i <= fim && arr[i] < pivot) {
                i++;
            }

            while (j >= inicio && arr[j] > pivot) {
                j--;
            }

            if (i >= j) {
                return j;
            }

            swap(arr, i, j);
            i++;
            j--;
        }
    }

    public void swap(int[] arr, int a, int b){
        int c = arr[a];
        arr[a] = arr[b];
        arr[b] = c;
    }

    public int pivot(int[] arr, int inicio, int fim){
        // return arr[inicio];
        
        int randomIndex = inicio + new Random().nextInt(fim - inicio + 1);
        swap(arr, randomIndex, inicio);
        return arr[inicio];
    }

    public static void main(String[] args) {
        int[] arr = {10, 22, 3, 1, 53, 2, 5, 7, 38, 1};
        QuickSort ss = new QuickSort();
        ss.quickSort(arr, 0, arr.length - 1);
        System.out.println(Arrays.toString(arr));
    }
}