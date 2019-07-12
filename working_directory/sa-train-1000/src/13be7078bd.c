#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_6 = 33;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_7[42];                                   // Tag.BODY
    if (entity_2 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 47;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 94; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = '5';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER