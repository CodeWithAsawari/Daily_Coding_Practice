 public class Assignment1 extends  Thread {

    public void run() {
        System.out.print("Hello from Thread");
    }  public static void main(String[] args) {
        Assignment1 t = new Assignment1();
        t.start();
    }
}
    

