#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_7[54];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_2 = 39;                                       // Tag.BODY
    entity_5 = 94;                                       // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    char entity_3[36];                                   // Tag.BODY
    if (entity_0 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 36;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 97; entity_1 < entity_0; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_3[entity_1] = 'X';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_2] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_6[21];                                   // Tag.BODY
    entity_8 = 61;                                       // Tag.BODY
    entity_6[entity_8] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER