import java.io.FileInputStream;
import java.io.IOException;

public class ExemploLeituraArquivo {
    public static void main(String[] args) {
        try (FileInputStream fis = new FileInputStream("/home/marinho/Documents/GitHub/UFG-computer-engineering/2023-2/POO_2023-2/Java-class/Stream-testes/stream-teste/src/pasta-exemplo/saida.txt")) {
            int conteudo;
            while ((conteudo = fis.read()) != -1) {
                System.out.print((char) conteudo);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
