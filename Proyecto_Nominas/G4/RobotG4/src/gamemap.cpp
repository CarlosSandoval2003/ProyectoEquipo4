#include "gamemap.h"
#include <iostream>
#include <fstream>
#include <windows.h>
//Implementacion de toda la funcionabilidad del mapa del juego

using namespace std;
gamemap::gamemap()
{
    //ctor
    playerCell = NULL;
    loadMapFromFile();
    isGameOver = false;
}
void gamemap::draw(){
    //system("cls");
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            // Utilizar las celulas cuando se dibuja el mapa
            cout << cell [i][j].id;
        }
        cout << endl;
    }
}
void gamemap::draw2(){
    //system("cls");
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            // Utilizar las celulas cuando se dibuja el mapa
            cout << cell [i][j].id;
        }
        cout << endl;
    }
}
void gamemap::draw3(){
    //system("cls");
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            // Utilizar las celulas cuando se dibuja el mapa
            cout << cell [i][j].id;
        }
        cout << endl;
    }
}
void gamemap::draw4(){
    //system("cls");
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            // Utilizar las celulas cuando se dibuja el mapa
            cout << cell [i][j].id;
        }
        cout << endl;
    }
}
void gamemap::draw3(){
    //system("cls");
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // Utilizar las celulas cuando se dibuja el mapa
            cout << cell [i][j].id;
        }
        cout << endl;
    }
}
gamemap::gamemap2()
{
    //ctor
    playerCell = NULL;
    loadMapFromFile2();
    isGameOver = false;
}
gamemap::gamemap3()
{
    //ctor
    playerCell = NULL;
    loadMapFromFile3();
    isGameOver = false;
}
gamemap::gamemap4()
{
    //ctor
    playerCell = NULL;
    loadMapFromFile4();
    isGameOver = false;
}
bool gamemap::setPlayerCell(int playerX, int playerY)
{
    loadMapFromFile2();
    if (cell[playerX][playerY].isBlockedCell() == false)
    {
        if (cell[playerX][playerY].id == '$')
        {
            drawVictoria();
            isGameOver = true;
            return true;
        } else
        { // eval�a espacio
            //Se verifica que maque con cero la posicion que abandona el jugador
            if (playerCell != NULL)
            {
                // Cambio permitira quitar los ceros en el camino del jugador, al traslador un cero a un char se convierte en espacio
                //playerCell->id='0';
                playerCell->id=0;
            }
            //cout << "Las coordenadas del jugador estan en: " << playerX << "," << playerY << endl;
            //Cambio de coordenadas para corregiro problema de los movimientos del jugador en el eje X
            //playerCell = &cell[playerY][playerX];
            playerCell = &cell[playerX][playerY];
            //Simbolo del jugador en el mapa
            playerCell->id=169; //ascii 169
        }

        return true;
    }
    else
    {
        return false;
    }

}
bool gamemap::setPlayerCell2(int playerX, int playerY)
{

    if (cell[playerX][playerY].isBlockedCell() == false)
    {
        if (cell[playerX][playerY].id == '#')
        {
            drawVictoria2();
            isGameOver = true;
            return true;
        } else
        { // eval�a espacio
            //Se verifica que maque con cero la posicion que abandona el jugador
            if (playerCell != NULL)
            {
                // Cambio permitira quitar los ceros en el camino del jugador, al traslador un cero a un char se convierte en espacio
                //playerCell->id='0';
                playerCell->id=0;
            }
            //cout << "Las coordenadas del jugador estan en: " << playerX << "," << playerY << endl;
            //Cambio de coordenadas para corregiro problema de los movimientos del jugador en el eje X
            //playerCell = &cell[playerY][playerX];
            playerCell = &cell[playerX][playerY];
            //Simbolo del jugador en el mapa
<<<<<<< HEAD
            playerCell->id=254; //ascii 254
=======
            playerCell->id=254; //ascii 169
>>>>>>> d6cff647aa36c9ada2b4a921a68abb9618c12a5d
        }

        return true;
    }
    else
    {
        return false;
    }

}
bool gamemap::setPlayerCell3(int playerX, int playerY)
{
<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> d6cff647aa36c9ada2b4a921a68abb9618c12a5d
=======
>>>>>>> 74909decd316040db6568f5684d1d556bad9c255
    loadMapFromFile3();

    if (cell[playerX][playerY].isBlockedCell() == false)
    {
        if (cell[playerX][playerY].id == 'A')
        {
            drawVictoria3();
            isGameOver = true;
            return true;
        } else
        { // eval�a espacio
            //Se verifica que maque con cero la posicion que abandona el jugador
            if (playerCell != NULL)
            {
                // Cambio permitira quitar los ceros en el camino del jugador, al traslador un cero a un char se convierte en espacio
                //playerCell->id='0';
                playerCell->id=0;
            }
            //cout << "Las coordenadas del jugador estan en: " << playerX << "," << playerY << endl;
            //Cambio de coordenadas para corregiro problema de los movimientos del jugador en el eje X
            //playerCell = &cell[playerY][playerX];
            playerCell = &cell[playerX][playerY];
            //Simbolo del jugador en el mapa
<<<<<<< HEAD
            playerCell->id=156; //ascii 156
=======
            playerCell->id=184; //ascii 169
>>>>>>> d6cff647aa36c9ada2b4a921a68abb9618c12a5d
        }

        return true;
    }
    else
    {
        return false;
    }

}
bool gamemap::setPlayerCell4(int playerX, int playerY)
{
    loadMapFromFile4();

    if (cell[playerX][playerY].isBlockedCell() == false)
    {
        if (cell[playerX][playerY].id == '@')
        {
            drawVictoria4();
            isGameOver = true;
            return true;
        } else
        { // eval�a espacio
            //Se verifica que maque con cero la posicion que abandona el jugador
            if (playerCell != NULL)
            {
                // Cambio permitira quitar los ceros en el camino del jugador, al traslador un cero a un char se convierte en espacio
                //playerCell->id='0';
                playerCell->id=0;
            }
            //cout << "Las coordenadas del jugador estan en: " << playerX << "," << playerY << endl;
            //Cambio de coordenadas para corregiro problema de los movimientos del jugador en el eje X
            //playerCell = &cell[playerY][playerX];
            playerCell = &cell[playerX][playerY];
            //Simbolo del jugador en el mapa
            playerCell->id=225; //ascii 225
        }

        return true;
    }
    else
    {
        return false;
    }

}
void gamemap::loadMapFromFile()
{
    string line;
    int row = 0;
    char userInput = ' ';
    ifstream myFile("map.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            //cout << line << endl;
            for (int p = 0; p < line.length(); p++)
            {
                if (line[p] == '0')
                {
                    cell[row][p].id = 0;
                } else
                {
                    cell[row][p].id = line[p];
                }
                // Cambio para quitar ceros y colocar espacios en blanco en el mapa
                // cell[row][p].id = line[p];
            }
            row++;
        }
        myFile.close();
    }
    else
    {
        cout << "Error FATAL: archivo del mapa no pudo ser cargado" << endl;
        cout << "Desea crearlo? " << endl;
        cin >> userInput;
        if (userInput='s')
        {
            createMapToFile();
        } else
        {
            cout << "NO podemos continuar el juego" << endl;
        }
    }

}
void gamemap::loadMapFromFile2()
{HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);
    string line;
    int row = 0;
    char userInput = ' ';
    ifstream myFile("map2.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            //cout << line << endl;
            for (int p = 0; p < line.length(); p++)
            {
                if (line[p] == '0')
                {
                    cell[row][p].id = 0;
                } else
                {
                    cell[row][p].id = line[p];
                }
                // Cambio para quitar ceros y colocar espacios en blanco en el mapa
                // cell[row][p].id = line[p];
            }
            row++;
        }
        myFile.close();
    }
    else
    {
        cout << "Error FATAL: archivo del mapa no pudo ser cargado" << endl;
        cout << "Desea crearlo? " << endl;
        cin >> userInput;
        if (userInput='s')
        {
            createMapToFile2();
        } else
        {
            cout << "NO podemos continuar el juego" << endl;
        }
    }

}
void gamemap::loadMapFromFile3()
{
<<<<<<< HEAD
=======
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 4);
>>>>>>> d6cff647aa36c9ada2b4a921a68abb9618c12a5d
    string line;
    int row = 0;
    char userInput = ' ';
    ifstream myFile("map3.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            //cout << line << endl;
            for (int p = 0; p < line.length(); p++)
            {
                if (line[p] == '0')
                {
                    cell[row][p].id = 0;
                } else
                {
                    cell[row][p].id = line[p];
                }
                // Cambio para quitar ceros y colocar espacios en blanco en el mapa
                // cell[row][p].id = line[p];
            }
            row++;
        }
        myFile.close();
    }
    else
    {
        cout << "Error FATAL: archivo del mapa no pudo ser cargado" << endl;
        cout << "Desea crearlo? " << endl;
        cin >> userInput;
        if (userInput='s')
        {
            createMapToFile3();
        } else
        {
            cout << "NO podemos continuar el juego" << endl;
        }
    }

}
void gamemap::loadMapFromFile4()
{
    string line;
    int row = 0;
    char userInput = ' ';
    ifstream myFile("map4.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            //cout << line << endl;
            for (int p = 0; p < line.length(); p++)
            {
                if (line[p] == '0')
                {
                    cell[row][p].id = 0;
                } else
                {
                    cell[row][p].id = line[p];
                }
                // Cambio para quitar ceros y colocar espacios en blanco en el mapa
                // cell[row][p].id = line[p];
            }
            row++;
        }
        myFile.close();
    }
    else
    {
        cout << "Error FATAL: archivo del mapa no pudo ser cargado" << endl;
        cout << "Desea crearlo? " << endl;
        cin >> userInput;
        if (userInput='s')
        {
            createMapToFile4();
        } else
        {
            cout << "NO podemos continuar el juego" << endl;
        }
    }

}
void gamemap::createMapToFile()
{
    ofstream myFile("map.txt");
    if (myFile.is_open())
    {
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (i == 0 || i == 14)
                {
                    myFile << "1";
                } else
                {
                    if (j == 0 || j == 29)
                    {
                        myFile << "1";
                    } else
                    {
                        myFile << "0";
                    }
                }

            }
            myFile << endl;
        }
        myFile.close();
    } else
    {
        cout << "Error FATAL: archivo no pudo ser creado" << endl;
    }
}
void gamemap::createMapToFile2()
{
    ofstream myFile("map2.txt");
    if (myFile.is_open())
    {
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (i == 0 || i == 14)
                {
                    myFile << "1";
                } else
                {
                    if (j == 0 || j == 29)
                    {
                        myFile << "1";
                    } else
                    {
                        myFile << "0";
                    }
                }

            }
            myFile << endl;
        }
        myFile.close();
    } else
    {
        cout << "Error FATAL: archivo no pudo ser creado" << endl;
    }
}
void gamemap::createMapToFile3()
{
    ofstream myFile("map3.txt");
    if (myFile.is_open())
    {
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (i == 0 || i == 14)
                {
                    myFile << "1";
                } else
                {
                    if (j == 0 || j == 29)
                    {
                        myFile << "1";
                    } else
                    {
                        myFile << "0";
                    }
                }

            }
            myFile << endl;
        }
        myFile.close();
    } else
    {
        cout << "Error FATAL: archivo no pudo ser creado" << endl;
    }
}
<<<<<<< HEAD
void gamemap::createMapToFile3()
=======
void gamemap::createMapToFile4()
{
    ofstream myFile("map4.txt");
    if (myFile.is_open())
    {
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (i == 0 || i == 14)
                {
                    myFile << "1";
                } else
                {
                    if (j == 0 || j == 29)
                    {
                        myFile << "1";
                    } else
                    {
                        myFile << "0";
                    }
                }

            }
            myFile << endl;
        }
        myFile.close();
    } else
    {
        cout << "Error FATAL: archivo no pudo ser creado" << endl;
    }
}
void gamemap::drawPortada()
>>>>>>> 74909decd316040db6568f5684d1d556bad9c255
{
    ofstream myFile("map3.txt");
    if (myFile.is_open())
    {
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (i == 0 || i == 14)
                {
                    myFile << "1";
                } else
                {
                    if (j == 0 || j == 9)
                    {
                        myFile << "1";
                    } else
                    {
                        myFile << "0";
                    }
                }

            }
            myFile << endl;
        }
        myFile.close();
    } else
    {
        cout << "Error FATAL: archivo no pudo ser creado" << endl;
    }
}
void gamemap::drawPortada()
{HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15);
    string line;
    char userInput = ' ';
    ifstream myFile("portada.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        getchar();
    }
    else
    {
        cout << "Error FATAL: el archivo de portada no pudo ser cargado" << endl;
    }
}
void gamemap::drawPortada2()
{HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15);
    string line;
    char userInput = ' ';
    ifstream myFile("portada2.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        getchar();
    }
    else
    {
        cout << "Error FATAL: el archivo de portada no pudo ser cargado" << endl;
    }
}
void gamemap::drawPortada3()
<<<<<<< HEAD
{
=======
{HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15);

>>>>>>> d6cff647aa36c9ada2b4a921a68abb9618c12a5d
    string line;
    char userInput = ' ';
    ifstream myFile("portada3.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        getchar();
    }
    else
    {
        cout << "Error FATAL: el archivo de portada no pudo ser cargado" << endl;
    }
}
void gamemap::drawPortada4()
{
    string line;
    char userInput = ' ';
    ifstream myFile("portada4.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        getchar();
    }
    else
    {
        cout << "Error FATAL: el archivo de portada no pudo ser cargado" << endl;
    }
}
void gamemap::drawVictoria()
{ HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 3);
    gamemap map;
    string line;
    char choice;
    ifstream myFile("premio.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        cout<<"Ingrese cualquier letra para vanzar al siguiente nivel"<<endl;
        cin >> choice;
    }
    else
    {
        cout << "Error FATAL: el archivo de ganador no pudo ser cargado" << endl;
    }
            if (choice == 'Y'){
                map.opcion = 1;
        }
}
void gamemap::drawVictoria2()
{HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    gamemap map;
    string line;
    char choice;
    ifstream myFile("premio2.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        cout<<"Ingrese cualquier letra para vanzar al siguiente nivel"<<endl;
        cin >> choice;
    }
    else
    {
        cout << "Error FATAL: el archivo de ganador no pudo ser cargado" << endl;
    }
            if (choice == 'Y'){
                map.opcion = 1;
        }
}
void gamemap::drawVictoria3()
<<<<<<< HEAD
{
=======
{HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 5);
>>>>>>> d6cff647aa36c9ada2b4a921a68abb9618c12a5d
    gamemap map;
    string line;
    char choice;
    ifstream myFile("premio3.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
        cout<<"Ingrese cualquier letra para vanzar al siguiente nivel"<<endl;
        cin >> choice;
    }
    else
    {
        cout << "Error FATAL: el archivo de ganador no pudo ser cargado" << endl;
    }
            if (choice == 'Y'){
                map.opcion = 1;
        }
}
void gamemap::drawVictoria4()
{
    gamemap map;
    string line;
    char choice;
    ifstream myFile("premio4.txt");
    if(myFile.is_open())
    {
        //Se obtiene el mapa externo y se general el mapa de celdas
        while( getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
    else
    {
        cout << "Error FATAL: el archivo de ganador no pudo ser cargado" << endl;
    }
            if (choice == 'Y'){
                map.opcion = 1;
        }
}
<<<<<<< HEAD


=======
>>>>>>> 74909decd316040db6568f5684d1d556bad9c255
gamemap::~gamemap()
{
    //dtor
}
