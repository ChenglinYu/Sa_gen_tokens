#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_7 = 2;                                        // Tag.BODY
    char entity_6[65];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    char entity_8[11];                                   // Tag.BODY
    entity_3 = 29;                                       // Tag.BODY
    if (entity_0 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 87;                                       // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_7] = 'j';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_1 = 73; entity_1 < entity_0; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_1] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER