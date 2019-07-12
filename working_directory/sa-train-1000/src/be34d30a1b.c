#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_0[37];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_7[8];                                    // Tag.BODY
    entity_5 = 69;                                       // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_1 = 80;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    if (entity_6 < entity_1){                            // Tag.BODY
    entity_0[entity_5] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                                             // Tag.BODY
    entity_6 = 2;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 66; entity_3 < entity_6; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_3] = 'U';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER