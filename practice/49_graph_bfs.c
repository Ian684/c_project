/* 圖最短步數: 入列就標記 */
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void bfs(const int edges[4][4], int start, int dist[4]) {
  int q[4], head = 0, tail = 0;
  for (int i = 0; i < 4; i++)
    dist[i] = -1;
  dist[start] = 0;
  q[tail++] = start;
  while (head < tail) {
    int u = q[head++];
    for (int v = 0; v < 4; v++)
      if (edges[u][v] && dist[v] < 0) {
        dist[v] = dist[u] + 1;
        q[tail++] = v;
      }
  }
}
int main(void) {
  const int e[4][4] = {{0, 1, 0, 0}, {1, 0, 1, 0}, {0, 1, 0, 0}, {0, 0, 0, 0}};
  int d[4];
  bfs(e, 0, d);
  assert(d[0] == 0 && d[2] == 2 && d[3] == -1);
  puts("BFS unreachable OK");
  return 0;
}
