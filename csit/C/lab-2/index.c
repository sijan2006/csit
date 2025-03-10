#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

void number_generator(int *options);

char players[19][10] = {"Antony", "Ronaldo", "Messi", "Mbappe", "Vinicius", "Yamal", "Bellingham", "Musiala",
                        "Valveder", "Rafiniha", "Salah", "Neymar", "Ramos", "Haaland", "Harry", "Martinez",
                        "Bruno", "Courtios", "Allison", "Rudiger"};

void main()
{
    int options[8], i, user_input, score = 0;
    int user_inputs[8] = {0};

    printf("\n\n====================================");
    printf("\n          🎮 MEMORY GAME 🎮          ");
    printf("\n====================================");
    printf("\n          Press any key to start");
    printf("\n====================================\n");
    getchar();
    printf("\n\n✅ Game Started! Let's Play!\n");
    printf("====================================\n");
    printf("               📜 RULES 📜              \n");
    printf("====================================\n");
    printf("1️⃣  Eight words will be displayed on the screen for **10 seconds**.\n");
    printf("2️⃣  After that, you will see a list of **20 words**.\n");
    printf("3️⃣  Your task is to identify and enter the numbers (1-20) of the players that were displayed earlier.\n");
    printf("4️⃣  Each correct number will earn you 1 point!\n");
    printf("====================================\n");
    printf("       💪 Best of Luck! 💪\n");
    printf("\n      Press enter key to start");
    printf("\n====================================\n");
    getchar();

    srand(time(0));
    number_generator(options);

    // Show the 8 player
    printf("\n\nHere are the 8 players to memorize: \n");
    for (i = 0; i < 8; i++)
    {
        printf("%d. %s\t", i, players[options[i] - 1]);
    }

    fflush(stdout);

// Wait for 8 seconds before clearing the screen or hiding the list
#ifdef _WIN32
    Sleep(8000); // Sleep for 8 seconds on Windows
#else
    sleep(8); // Sleep for 8 seconds on Unix-like systems
#endif

// Clear the screen (Hide the list after 8 seconds)
#ifdef _WIN32
    system("cls"); // Clear the screen on Windows
#else
    system("clear"); // Clear the screen on Unix-like systems
#endif

    printf("\n\nHere is a list of 20 players with their numbers:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d. %s\t", i + 1, players[i]);
    }
    printf("\n\nEnter the numbers of the players you remember (1-20). You can enter in any order.\n");
    for (i = 0; i < 8; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &user_input);
        user_inputs[i] = user_input;
    }
    for (i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (user_inputs[i] == options[j])
            {
                score++;
                break;
            }
        }
    }

    printf("\nYour final score is: %d / 8\n", score);
    printf("\n          🎮 THANKS FOR PLAYING 🎮          ");
}

void number_generator(int *options)
{
    int random_number, min = 1, max = 20, i, j;

    for (i = 0; i < 8; i++)
    {
        int is_unique;

        do
        {
            random_number = (rand() % (max - min + 1)) + min; // Generate a random number between 1 and 20
            is_unique = 1;                                    // Assume it's unique

            // Check if the number already exists in the array
            for (j = 0; j < i; j++)
            {
                if (options[j] == random_number)
                {
                    is_unique = 0; // If it exists, it's not unique
                    break;
                }
            }

        } while (!is_unique); // Repeat until a unique number is found

        *(options + i) = random_number; // Assign the unique random number to the options array
    }
}