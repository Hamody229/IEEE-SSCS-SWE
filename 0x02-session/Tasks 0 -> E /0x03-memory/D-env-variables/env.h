#ifndef ENV_H
#define ENV_H

typedef struct env_var
{
    char *key;
    char *value;
    struct env_var *next;
} env_var;

env_var *add_env_var(env_var **head, const char *key, const char *value);
int update_env_var(env_var *head, const char *key, const char *new_value);
int delete_env_var(env_var **head, const char *key);
char *get_env_var(env_var *head, const char *key);
env_var *init_env_list(char **envp);
void print_env_to_file(env_var *head, const char *filename);
void free_env_list(env_var *head);

#endif
