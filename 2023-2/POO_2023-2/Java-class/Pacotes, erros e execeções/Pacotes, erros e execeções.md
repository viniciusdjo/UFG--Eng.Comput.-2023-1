# *Pacotes Java*
---

## *O conceito de pacotes*
* Um pacote é: um conjunto de classes e interfaces relacionadas e outros pacotes que provê **acesso protegido** e **gerenciamento de espaço de nomes (namespaces)**
![image1](image.png)

## *Acesso Protegido*
* Os pacotes são organizados em diretórios
* Há um mecanismo de controle de acesso (package) às classes e interfaces de um determinado pacote
* Somente as classes e interfaces de um mesmo pacote podem acessar uns aos outros de forma irrestrita, porém restrigindo o acesso a outros tipos de pacotes

## *Gerenciamento de Espaço de Nomes*
* Para que os nomes de seus tipos não entrem em conflito com os nomes de tipos de outros pacotes, cada qual cria o seu prório espaço de nomes (namespaces)
  
`java.lang.Object e org.omg.CORRA.Object`

![pacotes-java](image-1.png)

* O Java 8 define mais de 200 pacotes para serem utilizados no desenvolvimento de aplicativos Java

### *Principais pacotes Java*
```java
java.lang: //classes e interfaces fundamentais – importado automaticamente
java.applet: //classes e interfaces para a criação de applets na Internet
java.util: //classes e interfaces utilitárias
java.io: //classes e interfaces para entrada e saída
java.nio: //classes e interfaces para buffers
java.net: //classes e interfaces para uso em rede (TCP/IP)
java.rmi: //classes e interfaces para acesso remoto
java.sql: //classes e interfaces para acesso ao Banco de Dados
java.awt: //interface gráfica universal nativa
java.text: //internacionalização, transformação e formatação de texto
java.time: //classes para datas e calendários
javax.crypto: //classes e interfaces para operações de criptografia
javax.xml: //classes e interfaces para manipulação de XML
```
* O nome dos pacotes são hierárquicos e separados por pontos
* Convecionalmente, os elementos dos nomes de pacotes estão normalmente em letras minúsculas
* Para indicar que as classes de um arquivo pertencem a um determinado pacote, utiliza-se a palavra reservada **package**
* A declaração de pacote, se houver, deve estar sempre no inicío do arquivo de origem
* Hierarquias de pacotes são construídas através de hierarquias de diretório
* Para se criar uma classe como pertencente a um pacote, deve-se:
  * Declará-la em um arquivo dentro do diretório que representa o pacote
  * Declarar, na primeira linha, que a classe pertence ao pacote, usando-se a palavra reservada

# *Importação de Pacotes Java*
---
* Para se usar uma classe/interface que está dentro de um pacote, precisa-se referenciar o nome completo desse pacote no acesso à classe:
  `com.hobnob.graphics.Triangulo objeto = new com.hobnob.graphics.Triangulo();`
* Pode-se usar o comando **import** para simplificar a chamada à classe Triangulo
  ```java
  import com.hobnob.graphics.Triangulo; 
  Triangulo objeto = new Triangulo();
  ```
* É possível importar as classes/interfaces de um pacote inteiro:
  `import com.hobnob.graphics.*;`
* Com o coringa "*" é possível importar todas as classes/interfaces que estão definidas em um pacote, **exceto os seus subpacotes**
* Importar todas as classes de um pacote não implica em perda de performance em tempo de execução. Contudo, importar de um em um é considerada uma boa prática, pois facilita a leitura do código para os outros desenvolvedores

# *Controle de Acesso*
---
* Um membro de pacote só pode ser acessado por classes/interfaces declaradas no mesmo pacote
* Quando o modificador de acesso é omitido, diz-se que o membro (atributos/métodos) é do tipo **package**
* Todas as classes do mesmo pacote têm acesso aos atributos e métodos umas das outras

## *Resumo de Visibilidade*
**Visibilidade** | **public** | **protected** | **package (default)** | **private**
--- | --- | --- | --- | ---
Classe | Sim | Sim | Não | Sim
SubClasse | Sim | Sim | Não | Não
Pacote | Sim | Sim | Sim | Não
Geral | Sim | Não | Não | Não

# *Exercícios 1*
---
1. Criar a hierarquia de classes abaixo pertencentes ao pacote
br.abctreinamentos.rh
![exer1](image-2.png)

<details>
<summary>Resposta</summary>

```java
package br.abctreinamentos.rh;
```
</details>