#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_9;                                       // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_9 = 89;                                      // Tag.BODY
    char entity_6[40];                                  // Tag.BODY
    entity_6[entity_9] = 'G';                           // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_0[12];                                  // Tag.BODY
    int entity_1;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    entity_5 = 35;                                      // Tag.BODY
    int entity_8;                                       // Tag.BODY
    entity_8 = 26;                                      // Tag.BODY
    char entity_7[48];                                  // Tag.BODY
    entity_2 = rand();                                  // Tag.BODY
    entity_0[entity_5] = 'B';                           // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_2 < entity_8){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_2 = 94;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_1 = 3; entity_1 < entity_2; entity_1++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_7[entity_1] = '6';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER