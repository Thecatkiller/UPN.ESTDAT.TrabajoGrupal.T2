using namespace std;
#include <iostream>
#include <string.h>
#include <iostream>
#include <istream>
#include <sstream>
#include <stdlib.h>
#include <string>

#include "estructuras.h"


NodoSCurso *PilaCursoI, *PilaCursoF;
int limitePilaCurso = 500, topePilaCurso = 0;

NodoSDocente *PilaDocenteI, *PilaDocenteF;
int limitePilaDocente = 200, topePilaDocente = 0;

NodoDAlumno *ColaDAlumnoI, *ColaDAlumnoD;
int limiteColaDAlumno = 100, topeColaDAlumno = 0;

#include "funciones.h"

#include "frmRegistroAlumno.h"
#include "frmRegistroAsistencia.h"
#include "frmRegistroDocente.h"
#include "frmRegistroCurso.h"
#include "frmMain.h"



using namespace Evaluacion_T2;



[STAThread]
void main(){
	SetDefaultData();
	Application::EnableVisualStyles();
	Application::Run(gcnew frmMain);
}