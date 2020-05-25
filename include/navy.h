/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#ifndef NAVY_H_
#define NAVY_H_

#include <signal.h>

typedef struct navy_s {
    int coord;
    int coord_2;
    int next;
    int next_2;
    int number;
    int direction;
} navy_t;

#define FAILURE 84

int check_map(int **map);
int get_move(int bit);
int error_position(char **tab);
int length_error(char **tab);
int tranfer_epid(int pid);
char *get_coord(void);
int create_bytes(int value);
int get_end_status(int **map);
int check_position(char *pos);
int **create_empty_map(int fill_value);
char ***get_position_file(char *filepath);
int output_moves(int enemy_pid, int value);
int connect_users(int ac, char **av);
int **init_file_map(char ***triple);
void display_user1_2_map(int **map, int **history);
int save_hit(char *move, int **map);
int check_victory(int **map, int enemy_pid, int player_id);
void catch_move(int sig, siginfo_t *siginfo, void *ucontext);
void *update_signal(void (*f_ptr)(int, siginfo_t *, void *));
int navy_algorithm(int player_id, int enemy_pid, int **map, int **history);

extern const int pos_nbr[7];
extern const char *position_elements;
extern const int enemy_pos_nbr[3];
extern const char *enemy_position_elements;
extern const int ship_ids[4];

#endif