const int pinoTemp = A0; // Pino para o sensor de temperatura (LM35)
const int pinoLDR = A1;  // Pino para o sensor LDR
const int pinoPH = A2;   // Pino para o sensor de pH (simulado)
int celsius = 0;
int tempBase = 0;

// Parâmetros de calibração para turbidez (valores de exemplo)
const float maxTurbidez = 100; // Valor máximo de turbidez em NTU
const int maxValorLDR = 1023;  // Valor máximo possível do LDR (10-bit ADC)

void setup() {
    Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
    // Leitura da temperatura do sensor LM35
    tempBase = 40;
    int valorTemp = analogRead(pinoTemp);
    celsius = map(((valorTemp - 20) * 3.04), 0, 1023, -40, 125);

    // Leitura dos valores de pH no potenciômetro
    int valorSensorPH = analogRead(pinoPH);
    float pH = valorSensorPH * (14.0 / 1023.0);

    // Leitura da turbidez do sensor LDR
    int valorLDR = analogRead(pinoLDR);
    // Cálculo da turbidez: valor máximo de turbidez menos a proporcionalidade inversa do valor do LDR
    float turbidez = maxTurbidez * (1.0 - (float)valorLDR / maxValorLDR);

    // Determina a qualidade da turbidez
    String qualidadeTurbidez;
    if (turbidez <= 2) {
    qualidadeTurbidez = "Excelente";
    } else if (turbidez <= 5) {
    qualidadeTurbidez = "Mediana";
    } else {
    qualidadeTurbidez = "Ruim";
    }

    // Determina a qualidade da temperatura
    String qualidadeTemperatura;
    if (celsius >= 20 && celsius <= 25) {
    qualidadeTemperatura = "Ideal";
    } else if ((celsius >= 15 && celsius < 20) || (celsius > 25 && celsius <= 30)) {
    qualidadeTemperatura = "Boa";
    } else {
    qualidadeTemperatura = "Ruim";
    }

    // Determina a qualidade do pH
    String qualidadePH;
    if (pH >= 6.5 && pH <= 8.5) {
    qualidadePH = "Ideal";
    } else if ((pH >= 6.0 && pH < 6.5) || (pH > 8.5 && pH <= 9.0)) {
    qualidadePH = "Boa";
    } else {
    qualidadePH = "Ruim";
    }

    // Determina a qualidade geral da água
    String qualidadeAgua;
    if ((qualidadeTemperatura == "Ideal" || qualidadeTemperatura == "Boa") &&
    (qualidadePH == "Ideal" || qualidadePH == "Boa") &&
    (qualidadeTurbidez == "Excelente" || qualidadeTurbidez == "Mediana")) {
    qualidadeAgua = "Boa para uso";
    } else {
    qualidadeAgua = "Ruim para uso";
    }

    // Imprime os valores de temperatura, turbidez e pH no Monitor Serial
    Serial.print("Temperatura: ");
    Serial.print(celsius);
    Serial.print(" C\t");
    Serial.print("Qualidade: ");
    Serial.print(qualidadeTemperatura);
    Serial.print("\t");

    Serial.print("Turbidez: ");
    Serial.print(turbidez);
    Serial.print(" NTU\t");
    Serial.print("Qualidade: ");
    Serial.print(qualidadeTurbidez);
    Serial.print("\t");

    Serial.print("	pH: ");
    Serial.print(pH);
    Serial.print("\t");
    Serial.print("Qualidade: ");
    Serial.print(qualidadePH);
    Serial.print("\t");

    Serial.print("Qualidade da Agua: ");
    Serial.println(qualidadeAgua);

    delay(2000); // Aguarda 2 segundos antes da próxima leitura
}
