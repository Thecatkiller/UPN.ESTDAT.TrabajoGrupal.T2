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
int limiteColaDAlumno = 10000, topeColaDAlumno = 0;


NodoDRegistro *ColaDRegistroI, *ColaDRegistroD;
int limiteColaDRegistro = 5000, topeColaDRegistro = 0;


NodoDAlumno *ColaDAlumnoAuxI, *ColaDAlumnoAuxD;
int limiteAuxColaDAlumno = 50, topeAuxColaDAlumno = 0;

#include "funciones.h"

#include "frmBuscarAlumno.h"


#include "frmRegistroAlumno.h"
#include "frmRegistroAsistencia.h"
#include "frmRegistroDocente.h"
#include "frmRegistroCurso.h"
#include "frmReporteProfesor.h"
#include "frmReporteAlumno.h"

#include "frmMain.h"



using namespace Evaluacion_T2;



[STAThread]
void main(){
	SetDefaultData();
	Application::EnableVisualStyles();
	Application::Run(gcnew frmMain);
}