import javax.swing.*;
import java.util.Random;

public class Massive {
    int[] a;
    Massive(int n){
        a = new int[n];
        for(int i = 0; i < a.length; i++){
            a[i] = r.nextInt(50);
        }
    }
    Random r = new Random();

    void print(){
        System.out.print("Массив: ");
        for (int i = 0; i < a.length; i++){
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }

    int sum(){
        int s = 0;
        for (int i = 0; i < a.length; i++){
            s += a[i];
        }
        return s;
    }
    boolean isSymmetric(){
        for (int i = 0; i < a.length / 2; i++){
            if (a[i] != a[a.length - 1 - i])
                return false;
        }
        return true;
    }
}
