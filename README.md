
# Rastros / toxica / deconstruccion

Para activar el sistema de las tres piezas es necesario:

1. Cablear la comunicacion y la alimentacion

2. Compilar openFrameworks

3. Descargar [ofxThermalPrinter](https://github.com/patriciogonzalezvivo/ofxThermalPrinter)

4. Cambiar getPixelsRef por getPixels en src/ofxThermalPrinter.cpp

5. En src/ofxThermalPrinter.h, en algunos casos, es necesario cambiar el baudrate de 19200 a 9200

6. Ahi mismo cambiar

``#define BYTE_TIME (11L * 1000000L / BAUDRATE)``

por

``#define BYTE_TIME 11L / BAUDRATE``

## Modo

Modo 0: rastros

Modo 1: toxica

Modo 2: deconstruccion 