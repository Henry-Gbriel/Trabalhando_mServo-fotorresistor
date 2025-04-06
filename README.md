# 🚦 Projeto Arduino: Controle de Servo Motor com Fotoresistor (LDR)

Este projeto utiliza um **fotoresistor (LDR)** para medir a intensidade da luz ambiente e, com base nessa leitura, movimenta um **servo motor** para diferentes posições.

link do autodesk tinkercad: https://www.tinkercad.com/things/6NENI4MAHCr-servo-motor-e-fotorresistor

---

## 🎯 Objetivo

Controlar a posição de um servo motor conforme os níveis de luminosidade detectados por um LDR.

---

## ⚙️ Materiais Utilizados

- 1x Arduino UNO
- 1x Servo motor (SG90 ou similar)
- 1x Fotoresistor (LDR)
- 1x Resistor 1kΩ (para o LDR)
- Jumpers (cabos de conexão)
- 1x Protoboard
- Cabo USB para alimentação e programação

---

## 🔌 Esquema de Montagem

### Conexões do LDR:
- Um terminal do LDR conectado ao **5V**
- Outro terminal do LDR conectado ao:
  - **A0** (entrada analógica do Arduino)
  - Um resistor de **1kΩ** que vai para o **GND**

### Conexões do Servo Motor:
- **Vermelho (VCC):** 5V do Arduino  
- **Preto (GND):** GND do Arduino  
- **Verde (Sinal):** Pino Digital **2** do Arduino

---

## 🖼️ Imagem do Circuito

![Imagem do Circuito](https://github.com/user-attachments/assets/3154ddce-c11e-4488-9fa8-7a4928ef8222)


<h2>📄 Licença</h2>
<p>Este projeto está licenciado sob a <a href="LICENSE">MIT License</a>.</p>
    
<h2>🤝 Contribuição</h2>
<p>Fique à vontade para abrir issues e enviar pull requests para melhorias no projeto!</p>
    
<h2>📞 Contato</h2>
<p>Caso tenha dúvidas ou sugestões, entre em contato:</p>
<ul>
    <li>📧 Email: <a href="mailto:santossilvahenrygabriel58@gmail.com">Meu email de contato</a></li>
    <li>🔗 LinkedIn: <a href="www.linkedin.com/in/henry-gabriel-santos-silva-6ba776209">Meu Perfil linkedin</a></li>
</ul>
    
<hr>
    
<p>⭐ Se gostou do projeto, deixe um star no repositório!</p>
