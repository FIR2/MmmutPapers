

public class GFG extends Thread {
	// initiated run method for Thread
	public void run()
	{
		System.out.println("Thread Started Running...");
	}
	public static void main(String[] args)
	{
		GFG g1 = new GFG();
		// invoking Thread
		g1.run();
	}
}
