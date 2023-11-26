import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.List;

public class SalvarLivros {
    public static void main(String[] args) {
        List<Livro> livros = new ArrayList<>();
        livros.add(new Livro("O Senhor dos Anéis", "J.R.R. Tolkien", 1954));
        livros.add(new Livro("Dom Quixote", "Miguel de Cervantes", 1605));

        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("/home/marinho/Documents/GitHub/UFG-computer-engineering/2023-2/POO_2023-2/Java-class/Stream-testes/stream-object/src/pasta-de-arquivos/acervo.obj"))) {
            oos.writeObject(livros);
            System.out.println("Livros salvos com sucesso.");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
