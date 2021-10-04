/*
 * Map Generator (run this in Windows cmd for best effect)
 * to compile this, type inside cmd
 *     gcc map.c -std=c99 -o map
 * to generate level 2 map of seed 101, type inside cmd
 *     map 2 101
 * to generate level 3 map of seed 101, type inside cmd
 *     map 3 101
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define GIANT 0xdb
#define ELF 0xb0
#define PLUG 0xdb
#define UNPLUG 0xb0

// define BETTERVERSION to generate map using codepage 437
 
int main (int rock, char** mode) {
  FILE* fp = fopen("generatedmap", "w");
  int leaderboard = 0;
  int oath = 0; 
  int sign = 0;
  int xo = 0; 
  int yo = 0;
  int x = 0; 
  int y = 0;
  int mountain = 0;
  if (rock == 3) {
    leaderboard = atoi(mode[2]);
    mountain = atoi(mode[1]);
  }
  if (mountain == 2 || mountain == 3) {
    srand(leaderboard);
    
    oath = 21;
    sign = 21;
    if (oath%2 == 1) xo = (oath+1)/2;
    else xo = oath/2;
    if (sign%2 == 1) yo = (sign+1)/2;
    else yo = sign/2;

    x = 2*xo-1;
    y = 2*yo-1;

    char* map = malloc(sizeof(char)*x*y);
    char* cell = malloc(sizeof(char)*xo*yo);
    char* stack = malloc(sizeof(char)*xo*yo);
    int stk_ptr = 0;
    int current_cell = 0;
    int u = 0; /* neighbour up */
    int d = 0; /* neighbour down */
    int l = 0; /* neighbour left */
    int r = 0; /* neighbour right */
    int c = 0; /* count */
    int utmrbc = 0;

    /* Init almost-complete map */
    for (int i = 0; i != y; i++) {
      for (int j = 0; j != x; j++) {
        if (i%2 == 1 || j%2 == 1) map[i*x + j] = GIANT;
        else map[i*x + j] = ELF;
      }
    }
    /* Init cell */
    for (int i = 0; i != yo; i++) {
      for (int j = 0; j != xo; j++) {
        cell[i*xo + j] = UNPLUG;
      }
    }
    /* Init stack */
    for (int i = 0; i != xo*yo; i++) {
      stack[i] = 0;
    }
    stk_ptr = 0;

    /* Start mapping */
    cell[0] = PLUG;
    stk_ptr = 1;
    stack[0] = 0;
    while(stk_ptr != 0) {
      current_cell = stack[stk_ptr-1];
      stk_ptr--;
      c=0; u=0; d=0; l=0; r=0;
      if (current_cell >= xo && cell[current_cell-xo] == (char)UNPLUG){u=1;c++;}
      if (current_cell%xo != 0 && cell[current_cell-1] == (char)UNPLUG){l=1;c++;}
      if (current_cell < xo*(yo-1) && cell[current_cell+xo] == (char)UNPLUG){d=1;c++;}
      if (current_cell%xo != (xo-1) && cell[current_cell+1] == (char)UNPLUG){r=1;c++;}
      if (c != 0) {
        stack[stk_ptr] = current_cell;
        stk_ptr++;
        utmrbc = rand()%c;
        c--;
        if (u == 1) if (utmrbc != c) c--; else { l=0; r=0; d=0; }
        if (d == 1) if (utmrbc != c) c--; else { l=0; r=0; u=0; }
        if (l == 1) if (utmrbc != c) c--; else { u=0; r=0; d=0; }
        if (r == 1) if (utmrbc != c) c--; else { l=0; u=0; d=0; }

        if (u == 1) {
          map[(((int)(current_cell/xo))*2-1)*x+(current_cell%xo)*2] = ELF;
          cell[current_cell-xo] = PLUG;
          stack[stk_ptr] = current_cell-xo;
          stk_ptr++;
        } else if (l == 1) {
          map[((int)(current_cell/xo))*2*x+(current_cell%xo)*2-1] = ELF;
          cell[current_cell-1] = PLUG;
          stack[stk_ptr] = current_cell-1;
          stk_ptr++;
        } else if (d == 1) {
          map[(((int)(current_cell/xo))*2+1)*x+(current_cell%xo)*2] = ELF;
          cell[current_cell+xo] = PLUG;
          stack[stk_ptr] = current_cell+xo;
          stk_ptr++;
        } else if (r == 1) {
          map[((int)(current_cell/xo))*2*x+(current_cell%xo)*2+1] = ELF;
          cell[current_cell+1] = PLUG;
          stack[stk_ptr] = current_cell+1;
          stk_ptr++;
        }
      }
    }

    int vase = 0;
    for (int i = 0; i != x*y; i++) {
      if (map[i] == (char)ELF) vase++;
    }
    utmrbc = rand()%vase;
    for (int i = 0; i != x*y; i++) {
      if (map[i] == (char)ELF) {
        if (utmrbc == 0) {
#ifdef BETTERVERSION
          map[i] = 0xE8;
#else
          map[i] = '@';
#endif
          break;
        } else {
          utmrbc--;
        }
      }
    }
    vase--;
    utmrbc = rand()%vase;
    for (int i = 0; i != x*y; i++) {
      if (map[i] == (char)ELF) {
        if (utmrbc == 0) {
#ifdef BETTERVERSION
          map[i] = 0xEB;
#else
          map[i] = '&';
#endif
          break;
        } else {
          utmrbc--;
        }
      }
    }

    if (mountain == 3) {
      vase--;
      utmrbc = rand()%vase;
      for (int i = 0; i != x*y; i++) {
        if (map[i] == (char)ELF) {
          if (utmrbc == 0) {
#ifdef BETTERVERSION
            map[i] = 0xE0;
#else
            map[i] = 'A';
#endif
            break;
          } else {
            utmrbc--;
          }
        }
      }
      vase--;
      utmrbc = rand()%vase;
      for (int i = 0; i != x*y; i++) {
        if (map[i] == (char)ELF) {
          if (utmrbc == 0) {
#ifdef BETTERVERSION
            map[i] = 0xE5;
#else
            map[i] = 'B';
#endif
            break;
          } else {
            utmrbc--;
          }
        }
      }
      vase--;
      utmrbc = rand()%vase;
      for (int i = 0; i != x*y; i++) {
        if (map[i] == (char)ELF) {
          if (utmrbc == 0) {
#ifdef BETTERVERSION
            map[i] = 0xE2;
#else
            map[i] = 'C';
#endif
            break;
          } else {
            utmrbc--;
          }
        }
      }
      vase--;
      utmrbc = rand()%vase;
      for (int i = 0; i != x*y; i++) {
        if (map[i] == (char)ELF) {
          if (utmrbc == 0) {
#ifdef BETTERVERSION
            map[i] = 0xE3;
#else
            map[i] = 'D';
#endif
            break;
          } else {
            utmrbc--;
          }
        }
      }
      vase--;
      utmrbc = rand()%vase;
      for (int i = 0; i != x*y; i++) {
        if (map[i] == (char)ELF) {
          if (utmrbc == 0) {
#ifdef BETTERVERSION
            map[i] = 0xE4;
#else
            map[i] = 'E';
#endif
            break;
          } else {
            utmrbc--;
          }
        }
      }
      vase--;
      utmrbc = rand()%vase;
      for (int i = 0; i != x*y; i++) {
        if (map[i] == (char)ELF) {
          if (utmrbc == 0) {
#ifdef BETTERVERSION
            map[i] = 0xE9;
#else
            map[i] = 'F';
#endif
            break;
          } else {
            utmrbc--;
          }
        }
      }
    }


#ifndef BETTERVERSION
    system("chcp 437");
    system("cls");
    printf("+");
    fprintf(fp, "+");
    for (int i = 0; i != x; i++) {
      printf("--");
      fprintf(fp, "--");
    }
    printf("+");
    fprintf(fp, "+");
    printf("\n");
    fprintf(fp, "\n");
    for (int i = 0; i != y; i++) {
      printf("%c", '|');
      fprintf(fp, "%c", '|');
      for (int j = 0; j != x; j++) {
        if (map[i*x+j] == (char)ELF) {
          printf(". ");
          fprintf(fp, ". ");
        } else if (map[i*x+j] == (char)GIANT) {
          printf("++");
          fprintf(fp, "++");
        } else {
          printf("%c%c", map[i*x+j], map[i*x+j]);
          fprintf(fp, "%c%c", map[i*x+j], map[i*x+j]);
        }
      }
      printf("%c\n", '|');
      fprintf(fp, "%c\n", '|');
    }
    printf("+");
    fprintf(fp, "+");
    for (int i = 0; i != x; i++) {
      printf("--");
      fprintf(fp, "--");
    }
    printf("+");
    fprintf(fp, "+");
    printf("\n");
    fprintf(fp, "\n");
#else
    system("cls");
    for (int i = 0; i != x+2; i++) {
      printf("%c", GIANT);
      fprintf(fp, "%c", GIANT);
    }
    printf("\n");
    fprintf(fp, "\n");
    for (int i = 0; i != y; i++) {
      printf("%c", GIANT);
      fprintf(fp, "%c", GIANT);
      for (int j = 0; j != x; j++) {
        printf("%c", map[i*x+j]);
        fprintf(fp, "%c", map[i*x+j]);
      }
      printf("%c\n", GIANT);
      fprintf(fp, "%c\n", GIANT);
    }
    for (int i = 0; i != x+2; i++) {
      printf("%c", GIANT);
      fprintf(fp, "%c", GIANT);
    }
    printf("\n");
    fprintf(fp, "\n");
    printf("\n");
    fprintf(fp, "\n");
#endif

    free(map);
    free(cell);
    free(stack);
  } else {
    printf("Usage: map <level> <seed>\n");
  }
 	return 0;
 }
