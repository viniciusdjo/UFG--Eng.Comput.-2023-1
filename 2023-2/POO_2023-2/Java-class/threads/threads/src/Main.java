public class Main {
    public static void main(String[] args) throws InterruptedException {
//        Instance MyThread
        MyThread thread1 = new MyThread();

//        Instance Runnable
        MyRunnable runnable = new MyRunnable();
        Thread thread2 = new Thread(runnable);

//        Execution
        thread1.start();
        thread1.join(3000);
        thread2.start();

        System.out.println(1/0);
    }
}