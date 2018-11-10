
/**
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
int getInt(char mensaje[]);

/**
 * \brief Solicita un n�mero al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El n�mero ingresado por el usuario
 *
 */
float getFloat(char mensaje[]);

/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[]);

/**
 * \brief Genera un n�mero aleatorio
 * \param desde N�mero aleatorio m�nimo
 * \param hasta N�mero aleatorio m�ximo
 * \param iniciar Indica si se trata del primer n�mero solicitado 1 indica que si
 * \return retorna el n�mero aleatorio generado
 *
 */
//char getNumeroAleatorio(int desde , int hasta, int iniciar);

///--------------------------------------------------------
///VALIDA QUE ES

/**
 * \brief Verifica si el valor recibido es num�rico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n�merico y 0 si no lo es
 *
 */
int esNumerico(char str[]) ;

/**
 * \brief Verifica si el valor recibido es num�rico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es n�merico y 0 si no lo es
 *
 */
int esNumericoFlotante(char str[]);

/**
 * \brief Verifica si el valor recibido contiene solo n�meros, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int esTelefono(char str[]);

/**
 * \brief Verifica si el valor recibido contiene solo letras y n�meros
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y n�meros, y 0 si no lo es
 *
 */
int esAlfaNumerico(char str[]);

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char str[]);
///--------------------------------------------------------
///GET STRING

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[]);

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[]);

/**
 * \brief Solicita un texto num�rico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo n�meros
 */
int getStringNumeros(char mensaje[],char input[]);

/**
 * \brief Solicita un texto num�rico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargar� el texto ingresado
 * \return 1 si el texto contiene solo n�meros
 */
int getStringNumerosFlotantes(char mensaje[],char input[]);
///----------------------------------------------------------
///GET VALID

/**
 * \brief Solicita un numero entero al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \param input entero donde se cargara el dato ingresado
 * \param lowLimit entero minimo que podra ingresar
 * \param highLimit enteromaximo que podra ingresar
 * \return devuelve el dato ingresado validado
 *
 */
int getValidInt(char requestMessage[],int*auxInt, int lowLimit, int hiLimit);
//int getValidInt(char requestMessage[],int input, int lowLimit, int hiLimit);
/**
 * \brief Solicita un numero flotante al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param input flotante donde se cargara el dato ingresado
 * \param lowLimit flotante minimo que podra ingresar
 * \param highLimit flotante maximo que podra ingresar
 * \return retorna el dato validado
 */
int getValidFloat(float* input,char requestMessage[], float lowLimit, float hiLimit);

/**
 * \brief Solicita un string y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param input Array donde se cargara el texto ingresado
 * \param lowLimit minimo de caracteres
 * \param highLimit maximo de caracteres
 * \return -1 para error y 0 para ok
 *
 */
int getValidString(char requestMessage[], char *input, int lowLimit, int highLimit);

/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getValidSexo(char mensaje[],char*input);

/**
 * \brief Solicita un string y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param input Array donde se cargara el texto ingresado
 * \return -1 para error y 0 para ok
 *
 */
int getStringAlfaNumerico(char mensaje[],char input[]);

/**
 * \brief Limpia el stdin, similar a fflush
 * \param -
 * \return -
 *
 */
void cleanStdin(void);

/**
 * \brief Solicita un string y lo valida
 * \param mensaje Es el mensaje a ser mostrado para solicitar el dato
 * \param input Array donde se cargara el texto ingresado
 * \return -1 para error y 0 para ok
 *
 */
void getStringConEspacio(char mensaje[],char input[]);

/**
 * \brief Solicita un string y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param input Array donde se cargara el texto ingresado
 * \param lowLimit minimo de caracteres
 * \param highLimit maximo de caracteres
 * \return -1 para error y 0 para ok
 *
 */
int getValidAlfaNumerico(char errorMessage[], char input[], int lowLimit, int highLimit);

/**
 * \brief Solicita un string y lo valida
 * \param lista Array Es la cadena de string a arreglar
 * \param len Es el largo de la cadena
 * \return -1 para error y 0 para ok
 *
 */
void arreglarCadena(char lista[], int len);

/**
 * \brief Solicita un string y lo valida
 * \param mensaje Es el mensaje a ser mostrado para solicitar el dato
 * \param errorMessage Es el mensaje de error
 * \return -1 para error y 0 para ok
 *
 */
char getCharPregunta(char requestMessage[], char errorMessage[]);

/**
 * \brief Solicita un string y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param input Array donde se cargara el texto ingresado
 * \param lowLimit minimo de caracteres
 * \param highLimit maximo de caracteres
 * \return -1 para error y 0 para ok
 *
 */
int getValidStringNumerosFlotantes(char requestMessage[], char *input, int lowLimit, int highLimit);

int getValidStringNumeros(char requestMessage[], char *input, int lowLimit, int highLimit);
