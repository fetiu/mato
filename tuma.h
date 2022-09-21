#pragma once 

enum state;
enum event;

typedef struct {
    enum state state;
    const transition (*table)[];
} machine;

typedef enum state transition(void);

machine tuma_new(transition table[][], int nstate, int nevent);
int tuma_trigger(machine *m, enum event event);
