public class ForEachTest {

	public static void main(String[] args) {
		
		int arrayList[] = {10, 20, 30, 40, 50};
		
		for(int i : arrayList) {
			System.out.println("i = " + i);
		}
		
		System.out.println("Statement after for-each!");
	}

}