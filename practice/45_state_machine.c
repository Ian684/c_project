/* 狀態機: 狀態轉移與非法事件 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { IDLE, RUNNING, DONE } State;
static State step(State state, char event) {
  switch (state) {
  case IDLE:
    return event == 's' ? RUNNING : IDLE;
  case RUNNING:
    return event == 'f' ? DONE : RUNNING;
  case DONE:
    return IDLE;
  }
  return IDLE;
}
int main(void) {
  State s = IDLE;
  s = step(s, 'x');
  assert(s == IDLE);
  s = step(s, 's');
  assert(s == RUNNING);
  s = step(s, 'f');
  assert(s == DONE);
  assert(step(s, 'x') == IDLE);
  puts("FSM OK");
  return 0;
}
