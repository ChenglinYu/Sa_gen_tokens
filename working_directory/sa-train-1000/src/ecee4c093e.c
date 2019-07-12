#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[59];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_9[46];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_6 = 15;                                       // Tag.BODY
    entity_0 = 90;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_0){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 26;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 86; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_7] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_1[entity_6] = 'O';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER