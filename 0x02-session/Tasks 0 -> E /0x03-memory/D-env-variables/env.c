#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "env.h"

env_var *add_env_var(env_var **head, const char *key, const char *value)
{
    if (!key || key[0] == '\0') return NULL;

    env_var *current = *head;
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = value ? strdup(value) : NULL;
            return current;
        }
        current = current->next;
    }

    env_var *new_node = malloc(sizeof(env_var));
    if (!new_node) return NULL;

    new_node->key = strdup(key);
    new_node->value = value ? strdup(value) : NULL;
    new_node->next = *head;
    *head = new_node;
    return new_node;
}

int update_env_var(env_var *head, const char *key, const char *new_value)
{
    while (head)
    {
        if (strcmp(head->key, key) == 0)
        {
            free(head->value);
            head->value = new_value ? strdup(new_value) : NULL;
            return 1;
        }
        head = head->next;
    }
    return 0;
}

int delete_env_var(env_var **head, const char *key)
{
    env_var *curr = *head, *prev = NULL;
    while (curr)
    {
        if (strcmp(curr->key, key) == 0)
        {
            if (prev) prev->next = curr->next;
            else *head = curr->next;

            free(curr->key);
            free(curr->value);
            free(curr);
            return 1;
        }
        prev = curr;
        curr = curr->next;
    }
    return 0;
}

char *get_env_var(env_var *head, const char *key)
{
    while (head)
    {
        if (strcmp(head->key, key) == 0)
            return head->value;
        head = head->next;
    }
    return NULL;
}

env_var *init_env_list(char **envp)
{
    env_var *head = NULL;
    int i = 0;
    while (envp[i])
    {
        char *entry = strdup(envp[i]);
        char *sep = strchr(entry, '=');
        if (sep)
        {
            *sep = '\0';
            add_env_var(&head, entry, sep + 1);
        }
        free(entry);
        i++;
    }
    return head;
}

void print_env_to_file(env_var *head, const char *filename)
{
    FILE *file = fopen(filename, "w");
    if (!file) return;

    while (head)
    {
        fprintf(file, "%s=%s\n", head->key, head->value ? head->value : "");
        head = head->next;
    }
    fclose(file);
}

void free_env_list(env_var *head)
{
    while (head)
    {
        env_var *tmp = head;
        head = head->next;
        free(tmp->key);
        free(tmp->value);
        free(tmp);
    }
}
