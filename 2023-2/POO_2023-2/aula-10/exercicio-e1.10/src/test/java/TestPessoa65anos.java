import org.junit.Test;

import static junit.framework.TestCase.assertEquals;

public class TestPessoa65anos {
    @Test
    public void testeCalculoImpostoPessoaIdosa() {
        // Crie uma pessoa com mais de 65 anos
        Pessoa pessoaIdosa = new Pessoa("João", 1500,70,5);

        // Verifique se o imposto calculado é igual ao esperado
        assertEquals(0, pessoaIdosa.calculaImposto(), 0.0); // Use uma margem de erro se necessário
    }
}
