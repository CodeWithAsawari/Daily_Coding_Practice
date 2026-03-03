 class Assignment5 extends Thread {
    public void run() {
        System.out.println("Thread Executing");
    }

    public static void main(String[] args) {
        Assignment5 t = new Assignment5();
        System.out.println("Default Thread Name: " + t.getName());
// Set new name of thread
t.setName("JavaThread");

 

// Start the thread
t.start();// Set new name of thread
System.out.println("Updated Thread Name: " + t.getName());
    }
}