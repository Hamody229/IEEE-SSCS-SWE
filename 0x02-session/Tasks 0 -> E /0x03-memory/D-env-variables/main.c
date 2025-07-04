#include <stdio.h>
#include "env.h"
#include "macros.h"

int main(int argc, char **argv, char **envp)
{

    (void)argc;
    (void)argv;
    
    env_var *env_list = init_env_list(envp);

    add_env_var(&env_list, "MY_VAR", "123");
    update_env_var(env_list, "MY_VAR", "456");
    add_env_var(&env_list, "", "nope");
    delete_env_var(&env_list, "HOME");

    char *val = get_env_var(env_list, "MY_VAR");
    if (val) printf("MY_VAR=%s\n", val);

    print_env_to_file(env_list, ENV_FILE);

    free_env_list(env_list);
    return 0;
}
