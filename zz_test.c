#include <unistd.h>
#include <stdio.h>

t_stack    *rotate_it(t_stack *ab)
{
    t_stack *clone;
    t_stack *end;
    
    clone = ab;
    end = set_last(ab);
    while (ab != end)
        ab = ab->next;
    ab = switch_it(ab);
    return(ab);
}

int main()
{
    
}
