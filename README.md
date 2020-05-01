# arduino-sensor-luminosidade

## Objetivo

Circuito simples que detecta luminosidade de ambiente utilizando sensor (fotoresistor) LDR 5MM e controla relé que está ligado na corrente elétrica residencial.

### Vídeo

[![Vídeo](https://user-images.githubusercontent.com/22710963/76115701-6a040380-5fc7-11ea-937f-1ce134e0a05c.png)](https://youtu.be/Uq1nWzP8aSo)

### Circuito
  
![image](https://user-images.githubusercontent.com/22710963/76116853-6ec9b700-5fc9-11ea-97e8-b27dcc22919d.png)

## Hardware necessário

```
- a) 1 Placa Arduino com cabo USB
- b) 2 Resistores: um de 10kΩ e o outro de 300Ω
- c) 1 LED comum de 4mm
- d) 1 Protoboard
- e) 7-10 Cabos de conexão
- f) 1 Sensor de luminosidade (Fotoresistor) LDR 5mm
- g) 1 Relé SPDT (opcional)
```

### a) Placa Arduino

 Porta de 5V e 40mA
![image](https://user-images.githubusercontent.com/22710963/73710418-aac7de80-46e2-11ea-82d4-fabab3361d1f.png)

### b) Resistores  

 Servem para diminuir a tensão.

 O de 300Ω instalado entre o negativo do LED e a conexão com GND do Arduino.

![image](https://user-images.githubusercontent.com/22710963/76045740-c0783000-5f3c-11ea-9188-3b239840fbda.png)

O de 10kΩ instalado entre o sensor de luminosidade e a conexão com 5v do Arduino.

![image](https://user-images.githubusercontent.com/22710963/76045486-fbc62f00-5f3b-11ea-83a6-bf60d99b9471.png)

### c) LEDS comuns de 4mm

Diodo com 2V e 15mA, perna maior ligada no positivo

![image](https://user-images.githubusercontent.com/22710963/73710278-4a38a180-46e2-11ea-960c-8c0c3ff97b9c.png)

### d) Protoboard

![image](https://user-images.githubusercontent.com/22710963/73710865-e7e0a080-46e3-11ea-9ec4-4800b2b345b9.png)

### e) Cabos de conexão

![image](https://user-images.githubusercontent.com/22710963/73711525-e57f4600-46e5-11ea-8cb9-e9bb27543ea4.png)

### f) Sensor de luminosidade (Fotoresistor) LDR 5mm

Não possui lado de polaridade fixo.

![image](https://user-images.githubusercontent.com/22710963/76045914-34b2d380-5f3d-11ea-94bf-a2a1a03f8bb1.png)

### f) Relé SPDT

Não possui lado de polaridade fixo.

![image](https://user-images.githubusercontent.com/22710963/76117242-370f3f00-5fca-11ea-8191-36dfafe6a363.png)

### Instalação dos Leds

Perna maior do LED é ligado no positivo e a perna menor precisa de um resistor de 220 ou 330 Ohm entre a ligação com o GND (negativo)

![image](https://user-images.githubusercontent.com/22710963/73712954-7ce69800-46ea-11ea-980e-bec2802b2c12.png)

### Fórmula Lei de Ohm

V = R * I
  
- O "I" significa a intensidade da corrente elétrica, no entanto, muitas vezes se fala apenas da corrente elétrica (sem a palavra intensidade).
- Quando existe uma diferença de potencial elétrico entre componentes (polarizado) acontece um fluxo de partículas que equilibra o campo elétrico.
- Esse fluxo é a corrente elétrica.
- A corrente elétrica é medida em Ampere (A) que nada mais é do que a quantidade de elétrons que passa nesse fio em um tempo determinado!

- A tensão elétrica (V) é medida em Volts (em homenagem ao físico Alessandro Volta).

- A resistência (R) é medida em Ohm (Ω) e a intensidade (I) da corrente elétrica em Ampere (A).

- A relação entre tensão, resistência e intensidade da corrente define a Lei de Ohm: V = R * I

- Para calcular a corrente: I = V / R

- Para calcular a resistência: R = V / I

- Para calcular a tensão: V = R * I

### Tabela de Cores dos resistores na convenção internacional

![image](https://user-images.githubusercontent.com/22710963/73806830-5cc9de00-47a9-11ea-887a-f13d09948aea.png)

### Links úteis

- [Manual do mundo](https://www.youtube.com/watch?v=vEdYjAbzrAE&list=PLYjrJH3e_wDPwKigz0AcIgzk9BF4lqDuy)

- [Blog explicando o sensor-ldr-5mm](https://blogmasterwalkershop.com.br/arduino/como-usar-com-arduino-fotoresistor-sensor-ldr-5mm)

### Aplicações

- Luz com autoacendimento em jardins ou áreas externas

- Contador de pessoas que passam por algum lugar sem utilizar catracas (ao passarem fazem sombra e incrementam um contador)
