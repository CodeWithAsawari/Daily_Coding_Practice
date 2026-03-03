 class MyRunnable implements Runnable {
    public void run() {
        System.out.print("Runnable Thread Executed");
    }
}

public class Assignment2 {
    public static void main(String[] args) {

        // Create object of MyRunnable
        MyRunnable r = new MyRunnable();

        // Create Thread object and start it
        Thread t = new Thread(r);
        t.start();
    }
}