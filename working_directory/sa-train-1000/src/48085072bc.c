#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    entity_3 = 66;                                       // Tag.BODY
    char entity_0[45];                                   // Tag.BODY
    if (entity_4 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 91;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 72; entity_8 < entity_4; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_2[8];                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0[entity_8] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 36;                                       // Tag.BODY
    entity_2[entity_5] = 'r';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER