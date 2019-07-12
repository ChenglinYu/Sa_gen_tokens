#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[60];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 20;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[14];                                   // Tag.BODY
    entity_6 = 22;                                       // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    if (entity_3 < entity_8){                            // Tag.BODY
    entity_2[entity_6] = 'R';                            // Tag.BUFWRITE_TAUT_SAFE
    } else {                                             // Tag.BODY
    entity_3 = 76;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_9 = 61; entity_9 < entity_3; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_9] = 'a';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER