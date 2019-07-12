#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_9[15];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    entity_7 = 2;                                        // Tag.BODY
    if (entity_4 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 94;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 23; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_2[32];                                   // Tag.BODY
    entity_9[entity_8] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 67;                                       // Tag.BODY
    entity_2[entity_3] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER