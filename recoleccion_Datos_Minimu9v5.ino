#include <Wire.h>
#include <LSM6.h>  // Librería de Pololu para el sensor

LSM6 imu;

void setup() {
  Serial.begin(115200);
  Wire.begin();

  if (!imu.init()) {
    Serial.println("Error al inicializar el sensor!");
    while (1);
  }

  imu.enableDefault();  // Habilita el sensor con la configuración por defecto

  // Para cambiar la escala del acelerómetro, usa este método (descomentarlo si lo necesitas)
  imu.writeReg(LSM6::CTRL1_XL, 0x30);  // ±8g (puedes cambiar el valor según tu necesidad)
}

void loop() {
  imu.read();  // Lee los datos del acelerómetro y giroscopio

  // Muestra los valores de aceleración en los 3 ejes (X, Y, Z)
  Serial.print(imu.a.x);
  Serial.print('\t');
  Serial.print(imu.a.y);
  Serial.print('\t');
  Serial.println(imu.a.z);


  delay(18);  
}
