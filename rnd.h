/*
 * rnd.h -- macro.h: Seed srand(.) with /dev/random 
 *
 * */

#ifndef TMACRO_H_RND
#define TMACRO_H_RND

#include <fcntl.h>  /*open*/
#include <unistd.h> /*read*/
#include <stdlib.h> /*srand, exit*/
#include <stdio.h>  /*fputs*/
#include <time.h>   /*time*/

int getrnd(void) {
    int f = open("/dev/random", O_RDONLY);
    if(f < 0) {
#ifdef RND_HARD_FAIL
        fputs("[macro.h/rnd] error opening /dev/random. exiting", stderr);
        exit(EXIT_FAILURE);
#else
        srand(time(NULL));
        return;
#endif
    }
    unsigned n;
    read(f, &n, sizeof n);
    close(f);
    return n;
}

#define seedrnd() srand(getrnd())

#endif /*TMACRO_H_RND*/
