# Image Puzzle
This project is a computer game consisting of assembling an image from its mixed parts. The program gives the user the option to choose one of two versions. The first version involves moving the squares into the empty space to form the image. The second version involves swapping image elements with each other while simultaneously flipping them symmetrically relative to the chosen edge. During gameplay, the time and number of steps taken by the player are measured, and after the game is over, this data, assigned to the player's nickname, is placed in the rankings.

## Project Analysis
The user interface (frame with buttons and text fields) was created using wxFormBuilder. Using the New Game button, we download an image in jpg format - the image is cropped into squares or rectangles of a size determined by the number of divisions. Then, the cropped and mixed image fragments are displayed on the game board. After each move, we check if the arrangement is correct. If so, we stop the timer and add the user's score to the ranking.

## Usage
To play the game, follow these steps:

- Enter your nickname and choose the game difficulty level.
![image](https://user-images.githubusercontent.com/83553257/225876022-29ed3836-1336-4009-b2f2-a24d3abfbc1c.png)
- Click the New Game button to start the game.
![image](https://user-images.githubusercontent.com/83553257/225876087-da1306b9-29fe-444f-850b-0b9a0381e4a4.png)
- Use the mouse to move the squares or swap the elements and flip them symmetrically.
![image](https://user-images.githubusercontent.com/83553257/225876232-6763326e-e55f-4881-8eef-63b7789f047d.png)
- Click the Preview button or press the [Tab] key to see the original image.
- Change your nickname, number of divisions, game version, or draw a new image.
- Display instructions and information about the game.
- View the ranking of previously played games, sort them by different criteria, and choose your preferred sorting method.
![image](https://user-images.githubusercontent.com/83553257/225876353-c6989e46-3282-4849-b95b-0959da4a3be9.png)
