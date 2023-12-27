# Tarefas

* [ ] Falar das aplicações nas quais são utilizados os protocolos IEEE 802.11, IEEE 802.15;
* [ ] Descrever as principais funcionalidades dos protocolos IEEE 802.11, IEEE 802.15;
* [ ] Comparar os protocolos  IEEE 802.11, IEEE 802.15;
* [ ] Pesquisar se houve alguma evolução para aperfeiçoar ou substituir os protocolos IEEE 802.11, IEEE 802.15;
* [ ] Redes pessoais: Bluetooth e Zigbee
* [ ] Exemplificar com um estudo de caso para os protocolos IEEE 802.11, IEEE 802.15;

## Aplicações de IEEE 802.11 e IEEE 802.15

### **IEEE 802.11:**

O IEEE 802.11 é um conjunto de padrões para redes locais sem fio (WLANs). Ele define as especificações para as camadas física (PHY) e de controle de acesso ao meio (MAC) das redes sem fio. Aqui estão algumas das aplicações mais comuns do IEEE 802.11:

1. **Conectividade à Internet sem fio (Wi-Fi):**
   - O uso mais difundido do IEEE 802.11 é para fornecer conectividade sem fio à Internet em ambientes como residências, escritórios, aeroportos, cafés e outros locais públicos.

2. **Redes Empresariais:**
   - Em ambientes empresariais, o IEEE 802.11 é frequentemente empregado para criar redes sem fio que facilitam a mobilidade dos dispositivos dentro de um escritório ou campus.

3. **Redes Mesh:**
   - O padrão 802.11s permite a formação de redes mesh sem fio, onde os dispositivos podem se comunicar diretamente uns com os outros, ampliando a cobertura da rede.

4. **Aplicações Industriais e de Manufatura:**
   - Em ambientes industriais, o IEEE 802.11 é usado para fornecer comunicação sem fio entre máquinas, sensores e sistemas de controle.

**Referências para IEEE 802.11:**
- Livro: "802.11 Wireless Networks: The Definitive Guide" de Matthew Gast.
- Artigo: ["IEEE 802.11ax: The Sixth Generation of Wi-Fi"](https://www.cio.com/article/3237548/ieee-802-11ax-the-sixth-generation-of-wi-fi.html)

### **IEEE 802.15:**

O IEEE 802.15 é um conjunto de padrões para redes sem fio de curto alcance. Ele inclui especificações para redes pessoais sem fio (WPANs) e é conhecido por várias versões, incluindo IEEE 802.15.1 (Bluetooth) e IEEE 802.15.4. Aqui estão algumas aplicações comuns:

1. **Bluetooth:**
   - O padrão IEEE 802.15.1 é mais conhecido como Bluetooth, uma tecnologia de comunicação sem fio usada em dispositivos pessoais, como fones de ouvido, teclados, mouses, e muitos dispositivos IoT.

2. **Redes de Sensores sem Fio (WSN):**
   - O IEEE 802.15.4 é frequentemente usado em aplicações de redes de sensores sem fio, onde sensores distribuídos coletam dados ambientais e os enviam para uma estação base.

3. **Monitoramento de Saúde:**
   - Em aplicações médicas, o IEEE 802.15.4 pode ser usado para criar redes de sensores que monitoram parâmetros de saúde e transmitem dados para dispositivos médicos.

4. **Automatização Residencial e Industrial:**
   - Em automação residencial e industrial, o IEEE 802.15.4 é utilizado para comunicação entre dispositivos, permitindo o controle remoto e a automação.

**Referências para IEEE 802.15:**
- Livro: "Wireless Sensor Networks: Principles, Design and Applications" de Alberto Cerpa e David Estrin.
- Artigo: ["A Survey on IEEE 802.15.4 Standard"](https://www.hindawi.com/journals/tswj/2014/218568/)

## Descrição das funcionalidades

### **IEEE 802.11:**

O IEEE 802.11, também conhecido como Wi-Fi, é um conjunto de padrões para redes locais sem fio. As principais funcionalidades incluem:

1. **Camada Física (PHY):**
   - O IEEE 802.11 opera em várias faixas de frequência, incluindo 2,4 GHz e 5 GHz. A camada PHY lida com a modulação do sinal, taxa de transmissão e técnicas de propagação.

2. **Controle de Acesso ao Meio (MAC):**
   - A camada MAC gerencia o acesso ao meio compartilhado, evitando colisões entre os dispositivos. Isso é feito usando o protocolo CSMA/CA (Carrier Sense Multiple Access with Collision Avoidance).

3. **Modos de Operação:**
   - O IEEE 802.11 suporta modos de operação como infraestrutura (conexão a pontos de acesso) e ad-hoc (comunicação direta entre dispositivos).

4. **Segurança:**
   - Diversos mecanismos de segurança são implementados, incluindo WEP, WPA, e WPA2/WPA3 para criptografia e autenticação.

5. **QoS (Qualidade de Serviço):**
   - O IEEE 802.11e introduz melhorias na qualidade de serviço, permitindo priorização de tráfego para aplicações sensíveis ao tempo, como chamadas de voz.

**Referências para IEEE 802.11:**
- Livro: "802.11 Wireless Networks: The Definitive Guide" de Matthew Gast.
- Vídeo: ["Wi-Fi Fundamentals"](https://www.youtube.com/watch?v=9C2iUoG6p2g)
- Artigo: ["Understanding IEEE 802.11 MAC Parameters"](https://ieeexplore.ieee.org/document/5191771)

### **IEEE 802.15:**

O IEEE 802.15 é um conjunto de padrões para redes sem fio de curto alcance, incluindo tecnologias como Bluetooth e Zigbee. Principais funcionalidades:

1. **Camada Física (PHY):**
   - O IEEE 802.15 oferece suporte a diferentes camadas PHY dependendo do padrão específico. Por exemplo, o Bluetooth opera em 2,4 GHz, enquanto o Zigbee pode operar em 2,4 GHz ou 868/915 MHz.

2. **Controle de Acesso ao Meio (MAC):**
   - O controle de acesso ao meio é gerenciado pela camada MAC, que pode incluir esquemas como TDMA (Time Division Multiple Access) no caso do Zigbee.

3. **Topologias de Rede:**
   - Suporta várias topologias, incluindo ponto a ponto, ponto a multiponto e redes mesh, dependendo da aplicação específica.

4. **Consumo de Energia Eficiente:**
   - Muitos padrões dentro do IEEE 802.15 são projetados para otimizar o consumo de energia, permitindo a operação eficiente em dispositivos alimentados por bateria.

5. **Segurança:**
   - Inclui mecanismos de segurança, como autenticação e criptografia, dependendo do padrão específico.

**Referências para IEEE 802.15:**
- Livro: "Wireless Sensor Networks: Principles, Design and Applications" de Alberto Cerpa e David Estrin.
- Vídeo: ["Bluetooth and IEEE 802.15.1"](https://www.youtube.com/watch?v=JrmmzYDiFs0)
- Artigo: ["ZigBee: A Low Power Wireless Technology for Industrial Applications"](https://ieeexplore.ieee.org/document/1641341)

## Comparação entre IEEE 802.11 e IEEE 802.15

Ambos os padrões, IEEE 802.11 e IEEE 802.15, são essenciais para comunicações sem fio, mas diferem em termos de aplicação, alcance, topologia de rede, consumo de energia e outras características. Vamos analisar detalhadamente as diferenças e semelhanças entre eles:

1. **Aplicações e Escopo:**
   - **IEEE 802.11:** Principalmente utilizado para redes locais sem fio (WLANs) e conectividade à Internet sem fio. Aplicações incluem Wi-Fi em residências, escritórios, e espaços públicos.
   - **IEEE 802.15:** Projetado para redes de curto alcance, incluindo redes pessoais sem fio (WPANs) e sensores sem fio. Exemplos incluem Bluetooth e Zigbee.

2. **Alcance e Frequência:**
   - **IEEE 802.11:** Opera em faixas de frequência de 2,4 GHz e/ou 5 GHz, proporcionando maior alcance em comparação com o IEEE 802.15.
   - **IEEE 802.15:** Pode operar em diferentes faixas de frequência, como 2,4 GHz (Bluetooth e Zigbee) e 868/915 MHz (Zigbee), mas geralmente tem um alcance mais curto em comparação com o IEEE 802.11.

3. **Topologia de Rede:**
   - **IEEE 802.11:** Suporta topologias de infraestrutura (conexão a pontos de acesso) e ad-hoc (comunicação direta entre dispositivos).
   - **IEEE 802.15:** Oferece suporte a várias topologias, incluindo ponto a ponto, ponto a multiponto e redes mesh, dependendo do padrão específico.

4. **Consumo de Energia:**
   - **IEEE 802.11:** Pode ser relativamente mais consumidor de energia, especialmente em dispositivos que requerem comunicação constante.
   - **IEEE 802.15:** Projetado para otimizar o consumo de energia, sendo frequentemente utilizado em dispositivos alimentados por bateria, como sensores sem fio.

5. **Velocidade de Transmissão:**
   - **IEEE 802.11:** Oferece taxas de transmissão mais altas, especialmente nas versões mais recentes como 802.11ax (Wi-Fi 6).
   - **IEEE 802.15:** Geralmente possui taxas de transmissão mais baixas em comparação com o IEEE 802.11, mas é suficiente para muitas aplicações de sensores e comunicação de curto alcance.

**Referências:**
- Vídeo: ["Wi-Fi 6 and 5G: What to Expect"](https://www.youtube.com/watch?v=rs62aK3-6qE)
- Vídeo: ["Bluetooth vs Zigbee vs Z-Wave vs Thread vs Wi-Fi vs Ethernet - What's the difference?"](https://www.youtube.com/watch?v=fzeylkX-4GA)
- Artigo: ["A Survey on Wireless Sensor Networks: Technologies, Protocols, and Applications"](https://www.hindawi.com/journals/js/2014/357149/)

## Evolução

**IEEE 802.11 (Wi-Fi):**

1. **Wi-Fi 6 (IEEE 802.11ax):**
   - Wi-Fi 6 é a mais recente iteração do padrão 802.11. Introduz melhorias significativas na eficiência espectral, aumento de capacidade, desempenho em ambientes densos e suporte a tecnologias como OFDMA (Orthogonal Frequency Division Multiple Access) para melhorar o throughput.
   - Vídeo: ["Wi-Fi 6 Explained"](https://www.youtube.com/watch?v=ciMkRJ2GnKM)
   - Artigo: ["Wi-Fi 6: What's Different, and Why it Matters"](https://www.cio.com/article/3433645/wi-fi-6-what-s-different-and-why-it-matters.html)

2. **Wi-Fi 6E:**
   - Uma extensão do Wi-Fi 6, o Wi-Fi 6E opera na faixa de 6 GHz, oferecendo mais largura de banda e menos interferência. Essa extensão visa melhorar ainda mais o desempenho em ambientes saturados.
   - Artigo: ["Wi-Fi 6E: What It Is and Why It’s Essential for the Future of Connectivity"](https://www.extremetech.com/extreme/318006-wi-fi-6e-what-it-is-and-why-its-essential-for-the-future-of-connectivity)

**IEEE 802.15:**

1. **Bluetooth LE (Low Energy):**
   - Enquanto o IEEE 802.15.1 (Bluetooth clássico) ainda é amplamente usado, a versão Bluetooth LE (também conhecida como Bluetooth Smart) foi introduzida para dispositivos que requerem baixo consumo de energia, como dispositivos IoT e sensores.
   - Vídeo: ["Bluetooth Low Energy (BLE) Explained"](https://www.youtube.com/watch?v=YQY4R7MgR_c)
   - Artigo: ["Bluetooth 5 vs BLE vs Bluetooth 4.2 and Classic Bluetooth"](https://www.electronicwings.com/nodemcu/bluetooth-5-vs-ble-vs-bluetooth-42-and-classic-bluetooth)

2. **Zigbee 3.0:**
   - O Zigbee Alliance lançou o Zigbee 3.0 para unificar e aprimorar os padrões Zigbee anteriores, proporcionando uma interoperabilidade aprimorada entre dispositivos Zigbee de diferentes fabricantes.
   - Artigo: ["Zigbee 3.0: What It Is and Why It Matters"](https://www.iotforall.com/zigbee-3-0)
