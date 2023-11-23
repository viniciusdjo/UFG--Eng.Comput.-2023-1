import java.io.FileOutputStream;
import java.io.IOException;

public class ExemploEscritaArquivo {
    public static void main(String[] args) {
        try (FileOutputStream fos = new FileOutputStream("/home/marinho/Documents/GitHub/UFG-computer-engineering/2023-2/POO_2023-2/Java-class/Stream-testes/stream-teste/src/pasta-exemplo/saida.txt")) {
            String conteudo = "Este e um exemplo de escrita em arquivo.";
            byte[] bytes = conteudo.getBytes();
            fos.write(bytes);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
