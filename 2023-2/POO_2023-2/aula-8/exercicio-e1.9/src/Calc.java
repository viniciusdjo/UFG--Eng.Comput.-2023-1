public class Calc {
    int n1;
    int n2;

    public double sum() {
        return n1 + n2;
    }
    public double sub() {
        return n1-n2;
    }
    public double times() {
        return n1*n2;
    }
    public double div()throws ArithmeticException{
        if (n2 == 0) {
            throw new ArithmeticException("Division by zero");
        }
        return (double) n1 /n2;
    }
}
