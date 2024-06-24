#include <SFML/Graphics.hpp>


#include <fstream>
#include <iostream>


using std::cout;
using std::endl;
using std::ifstream;

int main(int argc, char const** argv)
{
    
    int store1{}; 
    int store2{};
    int store3{};
    int store4{};
    int store5{};
    
    //opens the file and inputs the numbers
    
    ifstream myInput("/Users/kcashiogwu/Documents/revenue.txt");
    
    myInput >> store1; //reads frist value from file
    myInput >> store2;
    myInput >> store3;
    myInput >> store4;
    myInput >> store5;
    
    double total = store1 + store2 + store3 + store4 + store5;
    
    //closes the input screen
    myInput.close();
    
    cout << "store1 = " << store1 << " Which is " << (store1 / total) * 100 << "%" << " of the total revenue of 243,855" << endl;
    
    cout << "store2 = " << store2 << " Which is " << (store2 / total) * 100 << "%" << " of the total revenue of 243,855" << endl;
    
    cout << "store3 = " << store3 << " Which is " << (store3 / total) * 100 << "%" << " of the total revenue of 243,855" << endl;
    
    cout << "store4 = " << store4 << " Which is " << (store4 / total) * 100 << "%" << " of the total revenue of 243,855" << endl;
    
    cout << "store5 = " << store5 << " Which is " << (store5 / total) * 100 << "%" << " of the total revenue of 243,855" << endl;
    
    
    
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    // create a simple rectangle 50 pixels wide , 120 pixels high
    sf::RectangleShape myRect(sf::Vector2f(85.f,180.f));
    
    //set color of myrect GREEN
    myRect.setFillColor(sf::Color::Green);
    
    // move rect to approx middle of screen
    myRect.move(400,320);
    
    myRect.setOutlineColor(sf::Color::White);
    
    myRect.setOutlineThickness(2.f);
    
    // create another rectangle BLue
    sf::RectangleShape myRect2(sf::Vector2f(85.f,90.f));
    
    myRect2.setFillColor(sf::Color::Blue);
    
    myRect2.move(500,410);
    
    myRect2.setOutlineColor(sf::Color::White);
    
    myRect2.setOutlineThickness(2.f);
    
    // create CYAN rectangle
    sf::RectangleShape myRect3(sf::Vector2f(85.f,53.f));
    
    myRect3.setFillColor(sf::Color::Cyan);
    
    myRect3.move(200,445);
    
    myRect3.setOutlineColor(sf::Color::White);
    
    myRect3.setOutlineThickness(2.f);
    
    //draw YELLOW rectangle
    sf::RectangleShape myRect4(sf::Vector2f(85.f,89.f));
    
    myRect4.setFillColor(sf::Color::Yellow);
    
    myRect4.move(300,409);
    
    myRect4.setOutlineColor(sf::Color::White);
    
    myRect4.setOutlineThickness(2.f);
    
    //draw red rectangle
    sf::RectangleShape myRect5(sf::Vector2f(85.f,33.f));
    
    myRect5.setFillColor(sf::Color::Red);
    
    myRect5.move(600,465);
    
    myRect5.setOutlineColor(sf::Color::White);
    
    myRect5.setOutlineThickness(2.f);
    
    //draw BLACK rectangle
    sf::RectangleShape myRect6(sf::Vector2f(85.f,475.f));
    
    myRect6.setFillColor(sf::Color::Black);
    
    myRect6.move(100,25);
    
    myRect6.setOutlineColor(sf::Color::White);
    
    myRect6.setOutlineThickness(2.f);
    
    //creat a simple line 300 pixels wide, 4 pixels high
    sf::RectangleShape myLine;
    myLine.setSize(sf:: Vector2f(600, 1));
    
    //move myLine to the side of the screen
    myLine.move(100,500);
    
    // create a secend line this time its vertical
    sf::RectangleShape myLine2(sf::Vector2f(1.f,500.f));
    
    //move vertical line
    myLine2.move(100, 25);
    
    //create multiple lines for your vertical line to show the percentages(line3 starts at the top of the horizontal line)
    sf::RectangleShape line3;
    
    line3.setSize(sf::Vector2f(25,1));
    
    line3.move(75,50);
    //line 4
    sf::RectangleShape line4;
    
    line4.setSize(sf::Vector2f(25,1));
    
    line4.move(75,100);
    //line5
    sf::RectangleShape line5;
    
    line5.setSize(sf::Vector2f(25,1));
    
    line5.move(75,150);
    //line 6
    sf::RectangleShape line6;
    
    line6.setSize(sf::Vector2f(25,1));
    
    line6.move(75,200);
    //draw line 7
    sf::RectangleShape line7;
    
    line7.setSize(sf::Vector2f(25,1));
    
    line7.move(75,250);
    //draw line8
    sf::RectangleShape line8;
    
    line8.setSize(sf::Vector2f(25,1));
    
    line8.move(75,300);
    //draw line9
    sf::RectangleShape line9;
    
    line9.setSize(sf::Vector2f(25,1));
    
    line9.move(75,350);
    //draw line10
    sf::RectangleShape line10;
    
    line10.setSize(sf::Vector2f(25,1));
    
    line10.move(75,400);
    //draw line 11
    sf::RectangleShape line11;
    
    line11.setSize(sf::Vector2f(25,1));
    
    line11.move(75,450);
    //draw line 12
    sf::RectangleShape line12;
    
    line12.setSize(sf::Vector2f(25,1));
    
    line12.move(75,500);
    
    sf::RectangleShape line13;
    line13.setSize(sf::Vector2f(25,1));
    line13.move(75,25);
    
  
    //create texts for the colums

    
    sf::Font font;
    
    if (!font.loadFromFile("/System/Library/Fonts/NewYork.ttf"))
    {
        std::cout << "Error loading file" << std::endl;
        
        system("pause");
     }
    
    sf::Text text;
    
    text.setFont(font);
    //I just chose to space them out instead of making so much code.
    text.setString("Total      Store 1      Store 2      Store 3      Store 4      Store 5");
    
    text.setCharacterSize(24);
    
    text.setFillColor(sf::Color::Red);
    
    text.move(120, 500);
    
    //text 100
    sf::Text text100;
    text100.setFont(font);
    text100.setString("100");
    text100.setCharacterSize(24);
    text100.setFillColor(sf::Color::Red);
    text100.move(35,10);
    
        //text 90
    sf::Text text200;
    text200.setFont(font);
    text200.setString("90");
    text200.setCharacterSize(24);
    text200.setFillColor(sf::Color::Red);
    text200.move(35,35);

    
     //text 80
       sf::Text text300;
       text300.setFont(font);
       text300.setString("80");
       text300.setCharacterSize(24);
       text300.setFillColor(sf::Color::Red);
       text300.move(35,85);
    
    //text 70
    sf::Text text400;
    text400.setFont(font);
    text400.setString("70");
    text400.setCharacterSize(24);
    text400.setFillColor(sf::Color::Red);
    text400.move(35,135);
    
    //text 60
    sf::Text text500;
    text500.setFont(font);
    text500.setString("60");
    text500.setCharacterSize(24);
    text500.setFillColor(sf::Color::Red);
    text500.move(35,185);
    
    //text 50
    sf::Text text600;
    text600.setFont(font);
    text600.setString("50");
    text600.setCharacterSize(24);
    text600.setFillColor(sf::Color::Red);
    text600.move(35,235);
    
    //text 40
    sf::Text text700;
    text700.setFont(font);
    text700.setString("40");
    text700.setCharacterSize(24);
    text700.setFillColor(sf::Color::Red);
    text700.move(35,285);
    
    //text 30
    sf::Text text800;
    text800.setFont(font);
    text800.setString("30");
    text800.setCharacterSize(24);
    text800.setFillColor(sf::Color::Red);
    text800.move(35,335);
    
    //text 20
    sf::Text text900;
    text900.setFont(font);
    text900.setString("20");
    text900.setCharacterSize(24);
    text900.setFillColor(sf::Color::Red);
    text900.move(35,385);
    
    //text 10
    sf::Text text1000;
    text1000.setFont(font);
    text1000.setString("10");
    text1000.setCharacterSize(24);
    text1000.setFillColor(sf::Color::Red);
    text1000.move(35,435);
    
    //text 0
    sf::Text text0;
    text0.setFont(font);
    text0.setString("0");
    text0.setCharacterSize(24);
    text0.setFillColor(sf::Color::Red);
    text0.move(35,485);
    
    
    sf::Text title;
    title.setFont(font);
    title.setString(" Store Revenue (%) ");
    title.setCharacterSize(24);
    title.setFillColor(sf::Color::Red);
    title.move(400,25);
    
    sf::Text name;
    name.setFont(font);
    name.setString(" KC Ashiogwu ");
    name.setCharacterSize(24);
    name.setFillColor(sf::Color::White);
    name.move(600, 550);
    
        
    
    //create numbers for column
    
    // Start the game loop
        while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();

        // Draw the sprite (PURPLE(CYAN))
        window.draw(myRect);
        //window.draw(myrect2); //draws the rectangle into video memory
        
        //draws the horizontal line
        window.draw(myLine);
        
        //draws the vertical line
        window.draw(myLine2);
        
        //draw the mltiple vertical lines that show the percentage from 0 to 100
        window.draw(line3);
        
        window.draw(line4);
        
        window.draw(line5);
        
        window.draw(line6);
        
        window.draw(line7);
        
        window.draw(line8);
        
        window.draw(line9);
        
        window.draw(line10);
        
        window.draw(line11);
        
        window.draw(line12);
        
        window.draw(line13);
        
        //draw BLUE rectangle
        window.draw(myRect2);
        
        //draw GREEN rectangle
        window.draw(myRect3);
        
        //draw YELLOW rectangle
        window.draw(myRect4);
        
        //draw RED Rectangle
        window.draw(myRect5);
        
        //draw BLACK rectangle
        window.draw(myRect6);

        //draw text on screen "store 1"
        window.draw(text);
        
        //TEXT 100
        window.draw(text100);
        
        //TEXT 200
        window.draw(text200);
        
        //TEXT300
        window.draw(text300);
        
        //TEXT 400
        window.draw(text400);
        //TEXT 500
        window.draw(text500);
        //TEXT 600
        window.draw(text600);
        //TEXT 700
        window.draw(text700);
        //TEXT 800
        window.draw(text800);
        //TEXT 900
        window.draw(text900);
        
        //TEXT 1000
        window.draw(text1000);
        
        //TEXT 0
        window.draw(text0);
        window.draw(title);
        window.draw(name);
        
        
        // Update the window
        window.display(); // paint all the object drawn to the screen, allows to see objects
        }
      
    
    return EXIT_SUCCESS;
    }

