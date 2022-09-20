#pragma once 

enum state;
enum event;

typedef struct {
    enum state state;
    const transition (*table)[];
} machine;

typedef enum state transition(void);

machine mato_new(transition table[][], int nstate, int nevent);
int mato_trigger(machine *m, enum event event);
