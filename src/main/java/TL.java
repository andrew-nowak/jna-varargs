import com.sun.jna.Library;
import com.sun.jna.Native;


public class TL {
    public interface LibTL extends Library {
        LibTL INSTANCE = Native.load("tl", LibTL.class);

        int three_va(int a, int b, int c, Object... rest);
        int four_va(int a, int b, int c, int d, Object... rest);
        int five_va(int a, int b, int c, int d, int e, Object... rest);
    }

    public static void main(String[] args) {
        LibTL.INSTANCE.three_va(1, 2, 3, 98, 99);
        LibTL.INSTANCE.four_va(1, 2, 3, 4, 98, 99);
        LibTL.INSTANCE.five_va(1, 2, 3, 4, 5, 98, 99);
    }
}
