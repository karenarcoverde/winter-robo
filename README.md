# winter-robo

## Função da Robô Winter: 
Uma Robô Autônoma que desvia ao encontrar um obstáculo. Ao andar para trás, um som parecido com o robô R2-D2 do Star Wars é acionado.  


## Como usar a Robô Winter: 
É necessário conectar o conector da bateria de 9V no arduino e colocar o fios positivo e negativo do suporte para pilhas no lugar correto da mini protoboard (olhar os  **[esquemas](https://github.com/karenarcoverde/winter-robo/tree/master/esquemas_robo)**, caso necessário).

## Link do vídeo no YouTube: 
https://youtu.be/5RSSYW5R4Xc



## Objetivo:
Aprimorar meus conhecimentos sobre Eletrônica, Programação, Arduino e Robótica. 

## Observação importante:
**Considerar o referencial de uma pessoa na traseira da Robô e olhando para o sensor ultrassônico para melhor entendimento do código.**



## Softwares utilizados:
* **[Arduino 1.8.9](https://www.arduino.cc/en/Main/Software):** Executar o programa que faz a Robô se movimentar
* **[Fritzing](https://fritzing.org/download/):** Esboço do circuito montado no Chassi 2WD

## Linguagem utilizada:
* C++ 

## Como incluir as bibliotecas:
* Biblioteca Ultrasonic.zip: Sketch &#8594; Incluir Biblioteca &#8594; Adicionar biblioteca .ZIP
* Biblioteca musical_notes.h: Ctrl + Shift + N &#8594; Nome para o novo arquivo &#8594; Digitar musical_notes.h &#8594; OK &#8594; Copiar e Colar o código musical_notes.h na nova aba


## Pastas:
* **[imagens_robo](https://github.com/karenarcoverde/winter-robo/tree/master/imagens_robo):** Fotos antes e depois de montar a Robô.
* **[esquemas_robo](https://github.com/karenarcoverde/winter-robo/tree/master/esquemas_robo):** Esquemas do teste das rodas e da Robô Winter (Final da Montagem).
* **[codigos_robo](https://github.com/karenarcoverde/winter-robo/tree/master/codigos_robo):** Códigos utilizados para testar as rodas e a Robô Winter com a função de desviar obstáculos.
* **[teste_rodas](https://github.com/karenarcoverde/winter-robo/tree/master/codigos_robo/teste_rodas):** Contém o código para testar as rodas da Robô.
* **[winter_robo](https://github.com/karenarcoverde/winter-robo/tree/master/codigos_robo/winter_robo):** Contém os códigos e a biblioteca para a Robô Winter funcionar, com a seguinte função de desviar de obstáculos e emitir som semelhante ao Robô R2-D2 ao frear.

## Arquivos: 
* **[robo_antes.jpg](https://github.com/karenarcoverde/winter-robo/blob/master/imagens_robo/robo_antes.jpg):** Foto que contém todos os itens utilizados antes de montar a Robô. <br>
*Obs: Os itens que estão circulados em vermelho serão colocados em outra foto que dê para visualizar melhor pelo fato do item ser transparente.* <br>

* **[chassi_pá_antes.jpg](https://github.com/karenarcoverde/winter-robo/blob/master/imagens_robo/chassi_p%C3%A1_antes.jpg):** Os itens para montar o Chassi, o Chassi e a pá que é encaixada no Micro Servo 9g são mostrados na foto com uma melhor visualização. <br>
*Obs: A pá utilizada para o servo motor foi a da direita.* <br> 

* **[esquema_teste_rodas.jpg](https://github.com/karenarcoverde/winter-robo/blob/master/esquemas_robo/esquema_teste_rodas.jpg):** Teste para saber se as rodas estão girando para o lado correto. <br>

* **[esquema_winter_robo.jpg](https://github.com/karenarcoverde/winter-robo/blob/master/esquemas_robo/esquema_winter_robo.jpg):** Montagem final da Robô Winter com a seguinte função de desviar de obstáculos e o som emitido semelhante ao Robô R2-D2 ao frear. <br>

* **[teste_rodas.ino](https://github.com/karenarcoverde/winter-robo/blob/master/codigos_robo/teste_rodas/teste_rodas.ino):** Código utilizado para testar se as rodas estão girando para o lado correto ("para frente" e andando em linha reta). Caso esteja girando para o lado errado, basta inverter os pólos positivo e negativo do motor na ligação da ponte H L9110. <br>

* **[winter_robo_andando.jpg](https://github.com/karenarcoverde/winter-robo/blob/master/imagens_robo/winter_robo_andando.jpg):** Contém uma imagem da Robô andando enquanto ela estava ligada. <br>

* **[winter_robo.jpeg](https://github.com/karenarcoverde/winter-robo/blob/master/imagens_robo/winter_robo.jpeg):** Contém uma imagem da Robô parada enquanto ela estava desligada. <br>

* **[winter_robo_vista_frontal.jpg](https://github.com/karenarcoverde/winter-robo/blob/master/imagens_robo/winter_robo_vista_frontal.jpg):** Contém uma imagem da Robô vista frontalmente para uma melhor visualização. <br>

* **[winter_robo_vista_lateral.jpg](https://github.com/karenarcoverde/winter-robo/blob/master/imagens_robo/winter_robo_vista_lateral.jpg):** Contém uma imagem da Robô vista lateralmente para uma melhor visualização. <br>

* **[winter_robo_vista_superior.jpg](https://github.com/karenarcoverde/winter-robo/blob/master/imagens_robo/winter_robo_vista_superior.jpg):** Contém uma imagem da Robô vista superiormente para uma melhor visualização. <br>

* **[Ultrasonic.zip](https://github.com/karenarcoverde/winter-robo/blob/master/codigos_robo/winter_robo/Ultrasonic.zip):** Biblioteca usada para o sensor ultrassônico na Robô. Esta biblioteca faz com que a Robô pegue a distância em centímetros até o obstáculo. Por meio do "Trig" que dispara pulsos sonoros do sensor e o objeto reflete esses pulsos, o resultado será um eco ("Echo") recebido e convertido em sinal elétrico.  <br>

* **[musical_notes.h](https://github.com/karenarcoverde/winter-robo/blob/master/codigos_robo/winter_robo/musical_notes.h):** Biblioteca usada com as notas musicais e suas respectivas frequências. <br>

* **[winter_robo.ino](https://github.com/karenarcoverde/winter-robo/blob/master/codigos_robo/winter_robo/winter_robo.ino):** Contém o código para fazer a Robô desviar de obstáculos e emitir o som semelhante ao Robô R2-D2 ao frear. <br>
**Explicação do código:** <br>
O servo motor se direciona 90°. O sensor ultrassônico pega a distância até o obstáculo em cm. Quando a Robô vê um obstáculo a uma distância menor ou igual a 35 cm, a Robô freia e faz uma comparação da distância da direita com a distância da esquerda. Caso a distância da Robô até o obstáculo não seja menor ou igual a 35 cm, a Robô anda para frente. A comparação é feita girando a pá do servo motor para 175°, sensor ultrassônico se direcionando para esquerda e captura a distância da esquerda. Depois o servo motor girá a pá para 10°, sensor ultrassônico se direcionando para direita e captura a distância da direita. Quando a Robô termina de ver os dois lados, ela volta para a posição original de 90° (meio/metade, sensor ultrassônico direcionado para frente). Em seguida faz uma comparação de qual distância é maior ou igual. Segue um quadro abaixo do que é feito quando é descoberta quem é maior ou igual.  

statuss | comparação| passo 1| passo 2| passo 3
------------ | ------------- | ------------- | ------------- | ------------- 
1 | esquerda > direita | anda para trás | faz curva para esquerda | FREIA 
2 | esquerda < direita | anda para trás | faz curva para direita | FREIA
0 | esquerda = direita | anda para trás | faz curva para esquerda | FREIA


Na segunda tabela é mostrada o funcionamento das rodas de acordo com a direção escolhida. <br>

direcao | função | passo 1| passo 2 | passo 3
------------ | ------------- | ------------- | ------------- | ------------- 
1 | anda para frente | roda esquerda gira para frente| roda direita gira para frente | -
2 | anda para trás | roda esquerda gira para trás | roda direita gira para trás | -
3 | faz curva para direita | roda esquerda gira para frente | roda direita gira para trás | -
4 | faz curva para esquerda | roda esquerda gira para trás | roda direita gira para frente | -
5 | FREIA | roda esquerda desliga  | roda direita desliga | emite som R2-D2






## Materiais utilizados:
* 1 Kit Chassi 2WD (2 rodas) Robô para Arduino: Chassi em acrílico, Motores DC (3~6v), Rodas de Borracha, Roda Boba (Universal), Suporte para 4 Pilhas e Jogo de Parafusos
* 1 Arduino Uno R3 + Cabo Usb para Arduino
* 1 Adaptador Bateria 9v para Arduino
* 1 Bateria 9V Alcalina Panasonic
* 2 Pilha AA 1,5V Panasonic Alcalina (par)
* 1 Módulo Ponte H Dupla HG7881 (L9110)
* 1 Módulo Sensor de Distância Ultrassônico HC-SR04
* 1 Micro Servo 9g SG90 TowerPro
* 1 Buzzer Ativo 5v
* 2 Mini Protoboard 170 pontos
* Jumpers - Macho/Macho
* Jumpers - Macho/Femea
* Tubo Termo-retrátil 2mm - 1 metro
* Fita Adesiva de Espuma Dupla Face 1,5m Banana: 01 rolo de 19 mm x 1,5 m 




## Ferramentas utilizadas:
* Ferro de Solda Hikari Power-30
* Solda Estanho em Fio Hikari HS-63: Resina Tipo: "M", Liga: Sn 63% x Pb 37% e Tamanho do diâmetro: 1mm
* 1 Esponja Vegetal para Suporte de Solda
* 1 Alicate Universal Hikari HK-502
* Jogo de Chaves de Precisão C/6 Peças e Maleta

