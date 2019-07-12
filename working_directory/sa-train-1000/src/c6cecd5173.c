#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    char entity_0[38];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 91;                                       // Tag.BODY
    if (entity_6 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 15;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 66; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_9[49];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0[entity_2] = 'N';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 23;                                       // Tag.BODY
    entity_9[entity_5] = 'p';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER