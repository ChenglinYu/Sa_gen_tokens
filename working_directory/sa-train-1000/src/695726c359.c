#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_1 = 10;                                       // Tag.BODY
    entity_0 = 35;                                       // Tag.BODY
    char entity_8[4];                                    // Tag.BODY
    char entity_3[88];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    if (entity_7 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 41;                                       // Tag.BODY
    entity_8[entity_1] = 'u';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_2 = 92; entity_2 < entity_7; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_2] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER