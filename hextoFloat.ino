


void setup() {
  String x = String(1191174410, HEX);
  int str_len = x.length() + 1;
  char modbus_data[str_len];
  x.toCharArray(modbus_data, str_len);

  union {
    uint32_t i;
    float f;
  } data;
  data.i = strtoul(modbus_data, NULL, 16);
  Serial.begin(115200);
  
  Serial.println(data.f, 1);

  Serial.println(x);
}

void loop() {
  // put your main code here, to run repeatedly:
}
