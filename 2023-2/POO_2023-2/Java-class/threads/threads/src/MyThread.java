public class MyThread extends Thread{
    @Override
    public void run() {
        for (int i = 10; i > 0; i--) {
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Thread #2: "+ i);
        }
        System.out.println("Thread #2 is finished");
    }
}
