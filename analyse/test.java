package test;
import Eraser.Sobriete67;
public class test {
	public static void main(String[] args) {
		long start = System.currentTimeMillis();
		Sobriete67.erase(test_matériel_standard.standard);
	    long end = System.currentTimeMillis();      
	    System.out.println("Elapsed Time in milli seconds: "+ (end-start));
	    
	    long startx2 = System.currentTimeMillis();
	    Sobriete67.erase(test_matériel_double_long.standard);
	    long endx2 = System.currentTimeMillis();      
	    System.out.println("Elapsed Time in milli seconds: "+ (endx2-startx2));

	}

}
