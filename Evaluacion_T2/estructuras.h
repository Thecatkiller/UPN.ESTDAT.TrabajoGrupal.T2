struct Fecha{
	int dia, mes, año, hora, minuto;
};
struct Alumno{
	char codigo[10], nombre[100], Apellido[100];
	int estado;
};
struct Docente{
	char codigo[10], nombresAP[100];
	double sueldoxHora;
};


struct Curso{
	char codigo[10], nombre[50];
	int creditos;
};


struct NodoDAlumno{
	Alumno dato;
	NodoDAlumno *izq, *der;
};



struct Registro{
	char codigo[10];
	Fecha HI, HS;
	Docente unDocente;
	Curso unCurso;
	NodoDAlumno *I, *D;
	int tope = 0, lim = 60;
	double horas;
	
};

struct NodoSCurso{
	Curso dato;
	NodoSCurso *puntero;
};

struct NodoSDocente{
	Docente dato;
	NodoSDocente *puntero;
};

struct NodoSRegistro{
	Registro dato;
	NodoSRegistro *puntero;
};

struct NodoDRegistro{
	Registro dato;
	NodoDRegistro *izq, *der;
};