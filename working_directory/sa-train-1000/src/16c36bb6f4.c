#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_1[42];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_9[20];                                   // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_4 = 98;                                       // Tag.BODY
    entity_1[entity_4] = '1';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 91;                                       // Tag.BODY
    if (entity_2 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 98;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 79; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_3] = 's';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER