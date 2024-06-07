# Projeto-GS-Edge
Projeto Edge Computing
README 📘
Projeto: Monitoramento da Qualidade da Água 🌊
Descrição do Projeto 📝
Este projeto utiliza um Arduino para monitorar a qualidade da água em termos de temperatura, pH e turbidez. A qualidade da água é crucial para diversos usos, incluindo consumo humano, agrícola e industrial. Monitorar esses parâmetros ajuda a garantir que a água esteja adequada para o uso pretendido.

Componentes Utilizados 🛠️
Arduino Uno: Microcontrolador que atua como o cérebro do projeto.
Sensor de Temperatura LM35: Mede a temperatura da água.
Sensor de pH (simulado com potenciômetro): Mede o nível de pH da água.
LDR (Light Dependent Resistor): Utilizado para medir a turbidez da água, que depende da quantidade de luz que passa através da água.
Resistor de 1kΩ: Utilizado em conjunto com o LDR para medir a turbidez.
Protoboard e fios jumpers: Para realizar as conexões elétricas.
Funcionamento ⚙️
Temperatura: O sensor LM35 mede a temperatura da água, e o Arduino processa essa leitura para determinar se a temperatura está dentro dos padrões ideais.
pH: Utilizando um potenciômetro como substituto do sensor de pH, o Arduino lê e converte o valor analógico em um valor de pH.
Turbidez: O LDR mede a quantidade de luz que passa através da água. O Arduino converte essa leitura em um valor de turbidez (NTU).
Avaliação da Qualidade da Água: Com base nas leituras de temperatura, pH e turbidez, o Arduino determina a qualidade geral da água, classificando-a como "Boa para uso" ou "Ruim para uso".
Expectativas sobre o Projeto 🌟
Este projeto visa fornecer uma solução acessível e eficiente para monitoramento da qualidade da água em tempo real. Esperamos que essa ferramenta possa ser utilizada em pequenos reservatórios, aquários e até mesmo em ambientes de pesquisa para garantir a qualidade adequada da água.

Colaboradores 🤝
https://github.com/luyz-gusta
https://github.com/MarcelloFMoreira