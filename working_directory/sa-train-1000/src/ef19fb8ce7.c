#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_1[0];                                    // Tag.BODY
    entity_5 = 88;                                       // Tag.BODY
    if (entity_2 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 47;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 84; entity_8 < entity_2; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_8] = '3';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER