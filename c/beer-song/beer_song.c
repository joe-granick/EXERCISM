#include "beer_song.h"
#include <stdio.h>
void recite(uint8_t start_bottles, uint8_t take_down, char **song){
    uint8_t orig = start_bottles;
    int i = 0;
    
    while(take_down>0){
        if(start_bottles>0){        
            sprintf(song[i++],"%d bottle%s of beer on the wall, %d bottle%s of beer.", start_bottles, (start_bottles == 1) ? "" :"s", start_bottles, (start_bottles == 1) ? "" :"s");
            start_bottles--;
            if(start_bottles>0){sprintf(song[i++], "Take one down and pass it around, %d bottle%s of beer on the wall.", start_bottles, (start_bottles == 1) ? "" :"s");}
            else{sprintf(song[i++], "Take it down and pass it around, no more bottles of beer on the wall.");}
        }
        else{
            sprintf(song[i++], "No more bottles of beer on the wall, no more bottles of beer.");
            sprintf(song[i++], "Go to the store and buy some more, 99 bottles of beer on the wall.");
            start_bottles = orig;}
    take_down--;
    i++;

    }        
}
