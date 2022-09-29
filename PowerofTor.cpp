#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();
      int  thorX =  initial_tx;
      int thorY = initial_ty;
    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();

        string direcaoX = "";
        string direcaoY = "";
      
      // move o thor para oeste(esquerda) se caso a posição X dele for maior que a posição do cristal
        if(thorX > light_x){
            direcaoX ="W";
            thorX--;

        }
     // move o thor para leste(direita) se caso a posição X dele for menor que a posição do cristal
        if(thorX < light_x ){
            direcaoX = "E";
            thorX++;
        }



     // move o thor para norte(cima) se caso a posição Y dele for maior que a posição do cristal
        if(thorY > light_y){
            direcaoY ="N";
            thorY--;
            
        }
      // move o thor para sul(baixo) se caso a posição X dele for menor que a posição da cristal
          if(thorY < light_y){
            direcaoY = "S";
            thorY++;
            
        }

        cout << direcaoY << direcaoX << endl;

    

     
   
   
        
        
    }
}