#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    entity_3 = 34;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[10];                                   // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    if (entity_4 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 68;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 99; entity_2 < entity_4; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER