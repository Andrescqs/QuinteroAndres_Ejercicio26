#include <fstream>
#include <iostream>
#include <string.h>
using namespace std; 

float * archivo(string filename, int *n_points);
float multiplicacion(float x, float y);

int main(){
  float *x = NULL;
  float *y = NULL;
  int N = 20;
  
	x = new float[N];
	x = archivo("valores_x.txt", &N);  
	y = new float[N];
	y = archivo("valores_y.txt", &N);  
	
	float* arreglo = NULL;
    arreglo = new float[N];
	
	for(int i=0; i<N; i++){
		
		arreglo[i] = multiplicacion(x[i], y[i]);
		cout << arreglo[i] << endl;
	}
	
	
  return 0;
}

float * archivo(string filename, int *n_points){
  int n_lines=0;
  ifstream infile; 
  string line;
  int i;
  float *array;

  /*cuenta lineas*/
  infile.open(filename); 
  getline(infile, line);
  while(infile){
    n_lines++;
    getline(infile, line);
  }
  infile.close();
  *n_points = n_lines;

  /*reserva la memoria necesaria*/
  array = new float[n_lines];

  /*carga los valores*/
  i=0;
  infile.open(filename); 
  getline(infile, line);  
  while(infile){
    array[i] = atof(line.c_str());
    i++;
    getline(infile, line);
  }
  infile.close();

  return array;
}



float multiplicacion(float x, float y){
    float xc = x;
	float yc = y;
    float c = 0;   
	c = xc * yc;

    return c;
    
}




