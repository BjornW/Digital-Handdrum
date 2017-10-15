//This file contains the various Scales used by the digital handpan. 
//Each number corresponds to a position in the note_frequency.h table
//Many of these scales were imported using this site as a reference:
//https://hapidrum.co/hapi-drum-scale.aspx

///CHANGE WHEN ADDING NEW SCALES
int numOfScales = 7;//7-1=6 

int scale[][8] = 
{
//G Major (G3, A3, B3, D4, E4, G4, A4, B4) scale [0][x]  x=0-7
     {
       55,//196.00,//G3
       57,//220,//A3
       59,//246.94,//B3
       62,//293.66,//D4
       64,//329.63,//E4
       67,//392,//G4
       69,//440,//A4
       71//493.88,//B4
      },    
/////////////////////////////////////////////////////
//G Minor (G3, Bb3, C4, D4, F4, G4, Bb4, C5)
     {
      55,//196.00,//G3
      58,//(233.88);//Bb3
      60,//(261.63);//C4 (Middle C)
      62,//293.66,//D4
      65,//(174.61);//F4
      67,//392,//G4
      70,//(233.88);//Bb4
      72//(523.25);//C5
     },            
/////////////////////////////////////////////////////
//C Major (C4, D4, E4, G4, A4, C5, D5, E5)  
     {
      60,//(261.63);//C4 (Middle C)
      62,//293.66,//D4
      64,//329.63,//E4
      67,//392,//G4
      69,//440,//A4
      72,//(523.25);//C5
      74,//(587.32);//D5
      76//(659.26);//E5
     },
/////////////////////////////////////////////////////
//D Akebono (D4, E4, F4, A4, Bb4, D5, E5, F5) 
    {
      62,//(146.83);//D4
      64,//(164.81);//E4
      65,//(174.61);//F4
      69,//220,//A4
      70,//(233.88);//Bb4
      74,//293.66,//D5
      76,//329.63,//E5
      77//(349.23);//F5
      /*
      50,//(146.83);//D3
      52,//(164.81);//E3
      53,//(174.61);//F3
      57,//220,//A3
      58,//(233.88);//Bb3
      62,//293.66,//D4
      64,//329.63,//E4
      65//(349.23);//F4
      */
    },
/////////////////////////////////////////////////////
//D Major (D4, E4, F#4, A4, B4, D5, E5, F#5) 
     {
      62,//(146.83);//D4
      64,//(164.81);//E4
      66,//F#4
      69,//220,//A4
      71,//B4
      74,//293.66,//D5
      76,//329.63,//E5
      78//F#5
     },
/////////////////////////////////////////////////////
//A Minor (A3, C4, D4, E4, G4, A4, C5, D5)  
     {
      57,//A3
      60,//C4
      62,//(146.83);//D4
      64,//(164.81);//E4
      67,//392,//G4
      69,//220,//A4
      72,//C5
      74//293.66,//D5
     },
/////////////////////////////////////////////////////
//A Akebono (A3, B3, C4, E4, F4, A4, B4, C5)
     {
      57,//A3
      59,//246.94,//B3
      60,//C4
      64,//(164.81);//E4
      65,//(174.61);//F4
      69,//A4
      71,//B4
      72//C5
     },
/////////////////////////////////////////////////////
//D Akebono (D3, E3, F3, A3, Bb3, D4, E4, F4)
     {
      50,//A3
      52,//246.94,//B3
      53,//C4
      58,//(164.81);//E4
      59,//(174.61);//F4
      61,//A4
      64,//B4
      65//C5
     }
/////////////////////////////////////////////////////

};

int heads[][6]={
{0,0,0,0,0,1},
{0,0,0,0,1,0},
{0,0,0,1,0,0},
{0,0,1,0,0,0},
{0,1,0,0,0,0},
{1,0,0,0,0,0},
{0,0,0,0,1,1},

{0,0,0,1,0,1},
{0,0,0,1,1,0},
{0,0,1,0,0,1},
{0,0,1,0,1,0},
{0,0,1,1,0,0},
{0,1,0,0,0,1},
{0,1,0,0,1,0},
{0,1,0,1,0,0},

{0,1,1,0,0,0},
{1,0,0,0,0,1},
{1,0,0,0,1,0},
{1,0,0,1,0,0},
{1,0,1,0,0,0},
{1,1,0,0,0,0},
//22
{0,0,0,1,1,1},
{0,0,1,0,1,1},

{0,0,1,1,0,1},
{0,0,1,1,1,0},
{0,1,0,0,1,1},
{0,1,0,1,0,1},
{0,1,0,1,1,0},
{0,1,1,0,0,1},
{0,1,1,0,1,0},
{0,1,1,1,0,0},

{1,0,0,0,1,1},
{1,0,0,1,0,1},
{1,0,0,1,1,0},
{1,0,1,0,0,1},
{1,0,1,0,1,0},
{1,0,1,1,0,0},
{1,1,0,0,0,1},
{1,1,0,0,1,0},

{1,1,0,1,0,0},
{1,1,1,0,0,0},
{0,0,1,1,1,1},
{0,1,0,1,1,1},
{0,1,1,0,1,1},
{0,1,1,1,0,1},
{0,1,1,1,1,0},
{1,0,0,1,1,1},

{1,0,1,0,1,1},
{1,0,1,1,0,1},
{1,0,1,1,1,0},
{1,1,0,0,1,1},
{1,1,0,1,0,1},
{1,1,0,1,1,0},
{1,1,1,0,0,1},
{1,1,1,0,1,0},

{1,1,1,1,0,0},
//57
{0,1,1,1,1,1},
{1,0,1,1,1,1},
{1,1,0,1,1,1},
{1,1,1,0,1,1},
{1,1,1,1,0,1},
{1,1,1,1,1,0},
{1,1,1,1,1,1}
};