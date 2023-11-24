
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.List;

public class LerLivros {
    public static void main(String[] args) {
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream("/home/marinho/Documents/GitHub/UFG-computer-engineering/2023-2/POO_2023-2/Java-class/Stream-testes/stream-object/src/pasta-de-arquivos/acervo.obj"))) {
            List<Livro> livros = (List<Livro>) ois.readObject();
            for (Livro livro : livros) {
                System.out.println(livro);
            }
        } catch (IOException | ClassNotFoundException e) {
            e.printStackTrace();
        }
    }
}
