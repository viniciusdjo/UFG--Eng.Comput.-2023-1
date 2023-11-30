public class Main {
    public static void main(String[] args) {
//        Instance MyThread
        MyThread thread1 = new MyThread();

//        Instance Runnable
        MyRunnable runnable = new MyRunnable();
        Thread thread2 = new Thread(runnable);

//        Execution
        thread1.start();
        thread2.start();
    }
}