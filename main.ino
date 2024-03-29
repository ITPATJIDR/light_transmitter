void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
    int data[][4] = {{1,1,1,1}, {0,0,0,0}, {0,1,0,0}, {0,1,0,0}, {0,1,0,0}, {0,1,0,0}};

    int numRows = sizeof(data) / sizeof(data[0]); 
    int numCols = sizeof(data[0]) / sizeof(int);

    for (int i = 0; i < numRows; i++) { 
      for (int j = 0; j < numCols; j++) { 
        if (data[i][j] == 1) {
          digitalWrite(LED_BUILTIN, HIGH); 
        } else {
          digitalWrite(LED_BUILTIN, LOW); 
        }
        delayMicroseconds(650);
      }
    }
}
