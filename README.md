# Projeto: Monitoramento da Qualidade da Água 🌊

## Descrição do Projeto 📝
Este projeto utiliza um Arduino para monitorar a qualidade da água em termos de temperatura, pH e turbidez. A qualidade da água é crucial para diversos usos, incluindo consumo humano, agrícola e industrial. Monitorar esses parâmetros ajuda a garantir que a água esteja adequada para o uso pretendido.

## Componentes Utilizados 🛠️
- Arduino Uno: Microcontrolador que atua como o cérebro do projeto.
- Sensor de Temperatura LM35: Mede a temperatura da água.

- Sensor de pH (simulado com potenciômetro): Mede o nível de pH da água.
- LDR (Light Dependent Resistor): Utilizado para medir a turbidez da água, que depende da quantidade de luz que passa através da água.
- Resistor de 30kΩ: Utilizado em conjunto com o LDR para medir a turbidez.
- Protoboard e fios jumpers: Para realizar as conexões elétricas.

## Funcionamento ⚙️
- Temperatura: O sensor LM35 mede a temperatura da água, e o Arduino processa essa leitura para determinar se a temperatura está dentro dos padrões ideais.

- pH: Utilizando um potenciômetro como substituto do sensor de pH, o Arduino lê e converte o valor analógico em um valor de pH.
- Turbidez: O LDR mede a quantidade de luz que passa através da água. O Arduino converte essa leitura em um valor de turbidez (NTU).
- Avaliação da Qualidade da Água: Com base nas leituras de temperatura, pH e turbidez, o Arduino determina a qualidade geral da água, classificando-a como "Boa para uso" ou "Ruim para uso".

## Expectativas sobre o Projeto 🌟
Este projeto visa fornecer uma solução acessível e eficiente para monitoramento da qualidade da água em tempo real. Esperamos que essa ferramenta possa ser utilizada em pequenos reservatórios, aquários e até mesmo em ambientes de pesquisa para garantir a qualidade adequada da água.

## Desenvolvedores 🤝
| Desenvolvedor | Avatar | RM |
| ------------- | ------ | -- |
| ![](https://img.shields.io/badge/DESENVOLVEDOR-JoãoVictor-blue?style=for-the-badge&logo=appveyor) | <a href="https://github.com/jota0802"><img src="https://avatars.githubusercontent.com/u/161319025?v=4" height="50" style="max-width: 100%;"></a> | RM556790 |
| ![](https://img.shields.io/badge/DESENVOLVEDOR-LuizGustavo-blue?style=for-the-badge&logo=appveyor) | <a href="https://github.com/luyz-gusta"><img src="https://avatars.githubusercontent.com/u/110852235?v=4" height="50" style="max-width: 100%;"></a> | RM558358 |
| ![](https://img.shields.io/badge/DESENVOLVEDOR-Marcello-blue?style=for-the-badge&logo=appveyor) | <a href="https://github.com/MarcelloFMoreira"><img src="https://avatars.githubusercontent.com/u/161846509?v=4" height="50" style="max-width: 100%;"></a> | RM557531 |
