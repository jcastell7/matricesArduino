void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int matriz1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matriz2[] = {10, 11, 12};
  int vec[3];
  vector(0,matriz1,vec);
  imprimirVector(vec);
}
void imprimirVector(int vec[]) {
  for (int i = 0; i < 3; i++) {
    Serial.println(vec[i]);
  }
}
void vector(int index,int matriz[][3],int vec[3]) {
  for (int i = 0; i < 3; i++) {
    vec[i] = matriz[index][i];
  }
}
