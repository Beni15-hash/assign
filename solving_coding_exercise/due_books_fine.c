#include <stdio.h>
int main()
{
    int book_id, due_date, return_date, due_days, fine, rate;
    char key;
    printf("Enter due_date:");
    scanf("%d", &due_date);
    printf("Return Date:");
    scanf("%d", &return_date);
    printf("Book ID:");
    scanf("%d", &book_id);
    due_days = return_date - due_date;

    if (due_days >= 15)
    {
        rate = 100;
        fine = due_days * rate;
    }
    else if (due_days >= 8)
    {
        rate = 50;
        fine = due_days * rate;
    }
    else if (due_days >= 1)
    {
        rate = 20;
        fine = due_days * rate;
    }
    else
    {
        rate = 0;
        fine = 0;
    }
    printf("Book ID ==>: %d\n\n", book_id);
    printf("Due date==> %d\n\n", due_date);
    printf("Return date ==> %d\n\n", return_date);
    printf("Fine Rate: ==> %d\n\n", rate);
    printf("Fine:  ==>%d\n\n", fine);

    printf("Press any key to exit ...");
    scanf("%s", &key);
    return 0;
}