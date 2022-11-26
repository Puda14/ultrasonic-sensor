const int trig = 3;     // chân trig của HC-SR04
const int echo = 4;     // chân echo của HC-SR04
const int LED_PIN1          = 12; 
const int LED_PIN2          = 11; 
const int LED_PIN3          = 10; 
void setup()
{
    Serial.begin(9600);     // giao tiếp Serial với baudrate 9600
    pinMode(trig,OUTPUT);   // chân trig sẽ phát tín hiệu
    pinMode(echo,INPUT);    // chân echo sẽ nhận tín hiệu
    pinMode(LED_PIN1, OUTPUT);
    pinMode(LED_PIN2, OUTPUT);
    pinMode(LED_PIN3, OUTPUT);
}

void loop()
{
    unsigned long duration; // biến đo thời gian
    int distance;           // biến lưu khoảng cách
    
    /* Phát xung từ chân trig */
    digitalWrite(trig,LOW);   // tắt chân trig
    delayMicroseconds(2);
    digitalWrite(trig,HIGH);   // phát xung từ chân trig
    delayMicroseconds(5);   // xung có độ dài 5 microSeconds
    digitalWrite(trig,LOW);   // tắt chân trig
    
    /* Tính toán thời gian */
    // Đo độ rộng xung HIGH ở chân echo. 
    duration = pulseIn(echo,HIGH);  
    // Tính khoảng cách đến vật.
    distance = int(duration/2/29.412);
    
    /* In kết quả ra Serial Monitor */
    Serial.print(distance);
    Serial.println("cm");
  
    if(distance < 300 )
    {
      digitalWrite(LED_PIN1, HIGH);
    }
  else  digitalWrite(LED_PIN1, LOW);
    if(distance < 200 )
    {
      digitalWrite(LED_PIN2, HIGH);
    }
  else  digitalWrite(LED_PIN2, LOW);
    if(distance < 100 )
    {
      digitalWrite(LED_PIN3, HIGH);
    }
  else  digitalWrite(LED_PIN3, LOW);
    delay(200);
}
