# Airplane Seat Map
A program that displays a map of seats available on an airplane and updates the map according to a user's selection of a seat.

### Synopsis
After displaying the seat map, the program prompts the user for a seat desired, the user types in a seat, and
then the map of available seats is updated. This continues until all seats are filled or until the user signals
that the program should end.

If a the user types in a seat that is already taken, the program should say that the seat is occupied and ask for another
choice.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/airplane-seat-map.git
   ```
    or [download as ZIP](https://github.com/cramaechi/airplane-seat-map/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd airplane-seat-map
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./airplane_seat_map
```

Sample Output:
```
                             1  AB CD                                                                                 
                             2  AB CD                                                                                 
                             3  AB CD                                                                                 
                             4  AB CD                                                                                 
                             5  AB CD                                                                                 
                             6  AB CD                                                                                 
                             7  AB CD                                                                                 
Enter seat desired: 1A                                                                                                
                                                                                                                      
                                                                                                                      
                             1  XB CD                                                                                 
                             2  AB CD                                                                                 
                             3  AB CD                                                                                 
                             4  AB CD                                                                                 
                             5  AB CD                                                                                 
                             6  AB CD                                                                                 
                             7  AB CD                                                                                 
Continue? (y/n): y

Enter seat desired: 1C                                                                                                
                                                                                                                      
                                                                                                                      
                             1  XB XD                                                                                 
                             2  AB CD                                                                                 
                             3  AB CD                                                                                 
                             4  AB CD                                                                                 
                             5  AB CD                                                                                 
                             6  AB CD                                                                                 
                             7  AB CD                                                                                 
Continue? (y/n): y   

Enter seat desired: 2C                                                                                                
                                                                                                                      
                                                                                                                      
                             1  XB XD                                                                                 
                             2  AB XD                                                                                 
                             3  AB CD                                                                                 
                             4  AB CD                                                                                 
                             5  AB CD                                                                                 
                             6  AB CD                                                                                 
                             7  AB CD
Continue? (y/n): n                                                                                                    
```
