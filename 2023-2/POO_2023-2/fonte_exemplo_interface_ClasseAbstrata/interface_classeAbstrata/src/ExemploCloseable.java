import java.io.*;

public class ExemploCloseable {
    public static void main(String[] args) {
        // Declare um recurso que implementa a interface Closeable
        try (BufferedReader reader = new BufferedReader(new FileReader("exemplo.txt"))) {
            String linha;
            while ((linha = reader.readLine()) != null) {
                System.out.println(linha);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
/*Neste exemplo, a classe BufferedReader implementa a interface Closeable, e estamos usando um bloco try-with-resources para garantir que o recurso (neste caso, o BufferedReader) seja fechado automaticamente após seu uso. Isso é útil para garantir que os recursos sejam liberados adequadamente e não haja vazamentos de recursos. A classe FileReader também implementa Closeable, e ele é encapsulado dentro do BufferedReader.

Observe que o código envolve o uso de exceções de E/S (IOException) para lidar com potenciais erros ao lidar com arquivos, e isso é uma prática comum ao trabalhar com E/S em Java.
 */
