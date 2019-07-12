#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1 = 60;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_4[98];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_0[70];                                   // Tag.BODY
    entity_2 = 50;                                       // Tag.BODY
    entity_0[entity_1] = 'Y';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 37;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 71; entity_8 < entity_5; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_8] = 'v';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER