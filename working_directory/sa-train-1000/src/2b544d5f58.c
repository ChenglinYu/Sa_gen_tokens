#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_7[33];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_6[60];                                   // Tag.BODY
    entity_1 = 31;                                       // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    entity_3 = 40;                                       // Tag.BODY
    if (entity_4 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 19;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_1] = 'P';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_2 = 54; entity_2 < entity_4; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_2] = 'K';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER