#ifndef IO_H
#define IO_H

void print(char *text);
void println(char *text);

void printDouble(double value);
void printlnDouble(double value);

void printFloat(float value);
void printlnFloat(float value);

void printInt(int value);
void printlnInt(int value);

double getDouble();
float getFloat();
int getInt();
char * getString(int len);

#endif
