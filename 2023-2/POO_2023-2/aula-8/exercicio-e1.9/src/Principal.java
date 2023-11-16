import javax.swing.*;
import java.text.DecimalFormat;
import java.util.InputMismatchException;

public class Principal {
    public static void main(String[] args) {
        DecimalFormat dc = new DecimalFormat("0.00");
        Calc c = new Calc();

        try {
            c.n1 = Integer.parseInt(JOptionPane.showInputDialog(null, "First Number:"));
            c.n2 = Integer.parseInt(JOptionPane.showInputDialog(null, "Second Number:"));

            if (c.n1 < 0 || c.n2 < 0) {
                throw new NegativeNumber("Negative data input");
            }

            JOptionPane.showMessageDialog(null, "Sum : " + dc.format(c.sum()));
            JOptionPane.showMessageDialog(null, "Sub : " + dc.format(c.sub()));
            JOptionPane.showMessageDialog(null, "Times : " + dc.format(c.times()));
            JOptionPane.showMessageDialog(null, "Div : " + dc.format(c.div()));
        } catch (ArithmeticException e) {
            JOptionPane.showMessageDialog(null, "Division by zero", "Error", JOptionPane.ERROR_MESSAGE);
        } catch (InputMismatchException e) {
            JOptionPane.showMessageDialog(null, "Invalid Data Entry", "Error", JOptionPane.ERROR_MESSAGE);
        } catch (NumberFormatException e) {
            JOptionPane.showMessageDialog(null, "Invalid Value", "Error", JOptionPane.ERROR_MESSAGE);
        } catch (NegativeNumber e) {
            JOptionPane.showMessageDialog(null, "Invalid Negative Number", "Error", JOptionPane.ERROR_MESSAGE);
        }

    }
}
