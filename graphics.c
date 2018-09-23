#include<stdio.h>
#include<ncurses.h>

int main(){
        
        int i,j;

        for(i=0;i<10;i++){
                if(i%2==0){
                        write(1,"HELLO",5);
                }
                else{
                        write(1,"WORLD",5);
                }
                sleep(1);
                /*deletes current line and returns to beginning*/
                write(1,"\33[2K\r",5);
        }
        return 0;

}
