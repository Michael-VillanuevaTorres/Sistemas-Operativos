int clear(char instruccion[]);
int cd (char instruccion[]);
int help (char instruccion[]);
int exit (char instruccion[]);
int pause (char instruccion[]);
int ls (char instruccion[]);
int echo (char instruccion[]);

int ejecutar(char **instruccion );

char** parsear(string linea);