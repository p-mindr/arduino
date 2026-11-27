// STM32F103 - 조도센서 기반 LED 밝기 자동 제어
// 광센서(CDS): ADC 핀 (예: PA0)
// LED: PWM 지원 핀 (예: PA1, TIM2 채널)

const int lightSensorPin = PA0;   // 광센서 아날로그 입력 핀
const int ledPin = PA1;           // LED PWM 출력 핀

int lightValue = 0;               // 광센서 원본 값 (0~4095, STM32는 12bit ADC)
int ledBrightness = 0;            // LED PWM 출력값 (0~255)

// 광센서 값의 범위 (환경에 따라 캘리브레이션 필요)
const int LIGHT_MIN = 0;
const int LIGHT_MAX = 4095;

void setup() {
  Serial.begin(115200);
  pinMode(lightSensorPin, INPUT_ANALOG);
  pinMode(ledPin, PWM);            // STM32duino에서 PWM 핀 모드 설정
}

void loop() {
  // 1. 조도 값 읽기 (STM32F103 기본 ADC 해상도: 12bit, 0~4095)
  lightValue = analogRead(lightSensorPin);

  // 2. 조도값을 LED 밝기로 반전 매핑
  //    조도가 낮음(어두움) -> LED 밝기 증가
  //    조도가 높음(밝음)   -> LED 밝기 감소
  ledBrightness = map(lightValue, LIGHT_MIN, LIGHT_MAX, 255, 0);
  ledBrightness = constrain(ledBrightness, 0, 255);

  // 3. PWM 출력 (STM32duino analogWrite 기본 분해능은 8bit, 0~255)
  analogWrite(ledPin, ledBrightness);

  // 4. 디버깅용 시리얼 출력
  Serial.print("Light: ");
  Serial.print(lightValue);
  Serial.print("  LED PWM: ");
  Serial.println(ledBrightness);

  delay(100);
}

회로 구성