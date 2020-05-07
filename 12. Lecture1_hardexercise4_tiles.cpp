#include<simplecpp>
main_program
{
    turtleSim();
    repeat(4)
    {
        repeat(4)
        {
            penDown();
            repeat(4)
            {
                forward(50); right(90); wait(0.2);
            }
            penUp();forward(60);
        }
        forward(-240); right(90); forward(60); left(90);
    }
    wait(5);
}
