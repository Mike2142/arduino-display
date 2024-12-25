// Библиотека для работы с текстовым дисплеем
#include <LiquidCrystal.h>
 
// Назначаем контакты для подключения дисплея
// Используется 4-битный параллельный интерфейс
constexpr int RS_PIN = 2;
constexpr int EN_PIN = 3;
constexpr int DB4_PIN = 4;
constexpr int DB5_PIN = 5;
constexpr int DB6_PIN = 6;
constexpr int DB7_PIN = 7;
 
// Создаём объект для работы с дисплеем
// В параметрах передаём используемые пины
LiquidCrystal lcd(RS_PIN, EN_PIN, DB4_PIN, DB5_PIN, DB6_PIN, DB7_PIN);
 
void setup() {
  // Инициализируем дисплей на 2 строки по 16 символов
  lcd.begin(16, 2);

}
 
void loop() {

  // Устанавливаем курсор на первом знакоместе в первой строке
  lcd.setCursor(0, 0);
  // Печатаем первую строку
  lcd.print("Hello, world!");

  delay(3000);
  lcd.clear();

  // Устанавливаем курсор на первом знакоместе во второй строке
  lcd.setCursor(0, 0);
  // Печатем вторую строку
  lcd.print("mkolyadin.ru");

  delay(3000);
  lcd.clear();

  // Устанавливаем курсор на первом знакоместе во второй строке
  lcd.setCursor(0, 0);
  // Печатем вторую строку
  lcd.print("(O - O) _.../");

  delay(3000);
  lcd.clear();


}