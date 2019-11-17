#include "test.h"
#include <stdio.h>

struct BaseDev;


extern void from_C_printDev(struct BaseDev *pDev);
extern struct BaseDev* makePsuDev();
extern struct BaseDev* makeSffDev();


void foo(){

    struct BaseDev* pPsu = makePsuDev();
    struct BaseDev* pSff = makeSffDev();

    printf("pPsu: \n");
    from_C_printDev(pPsu);

    printf("pSff: \n");
    from_C_printDev(pSff);

}