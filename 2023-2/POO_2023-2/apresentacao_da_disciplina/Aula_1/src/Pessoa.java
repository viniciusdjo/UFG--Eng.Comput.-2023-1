//Definção de uma classe simples chamada "Pessoa"
public class Pessoa {
    //Atributos (variáveis de instância) da classe
    private String nome; //Atributo privado
    public Integer idade; //Atributo público

    //construtor da classe
    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }
    public void saudacao(){
        System.out.println("Olá, meu nome é "+ nome + " e eu tenho "+ idade + "anos.");
    }

    public String getNome(){
        return nome;
    }

    public void setNome(String novoNome){
        nome = novoNome;
    }
}
