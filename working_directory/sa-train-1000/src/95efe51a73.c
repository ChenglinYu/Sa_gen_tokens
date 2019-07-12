#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_2 = 49;                                       // Tag.BODY
    char entity_1[55];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 95;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 39; entity_3 < entity_6; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_3] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;                                        // Tag.BODY
    char entity_5[62];                                   // Tag.BODY
    entity_7 = 23;                                       // Tag.BODY
    entity_5[entity_7] = 'u';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER