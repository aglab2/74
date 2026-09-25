/**
 * DEFINE_DIALOG macro
 *    - Dialog enum ID (see dialog_ids.h)
 *    - Voice Sound (see sounds.h)
 *    - Lines per box
 *    - Left offset (Distance from left edge of the screen to dialog box)
 *    - Bottom offset (Distance from bottom of the screen to the top of the dialog box, SCREEN_HEIGHT would be the top)
 *    - Text
 * 
 * 
 * Control characters:
 *   Special text commands are supported, for functions such as custom text color.
 *   See "ingame_menu.h" for more details.
 * 
 * 
 * Special Characters:
 *   Here are some special characters you can use:
 *      Ⓐ
 *      Ⓑ
 *      Ⓒ
 *      Ⓩ
 *      Ⓡ
 *      “ and ” (left and right quotes)
 *      ◀▶▼▲
 *      ★ ✪
 *
 * 
 * See segment2.c LUTs for more info:
 *    - main_font_lut
 *    - main_hud_utf8_2byte_lut
 *    - main_hud_utf8_3byte_lut
 *    - main_hud_utf8_4byte_lut
 */

#define _(a) a

DEFINE_DIALOG(DIALOG_000,1,3,30,200, _("Welcome to a new world!"))

DEFINE_DIALOG(DIALOG_001,1,5,95,200, _("Help me...\n\
I'm supposed to be a pink\n\
Bob-omb but Kamek\n\
transformed me :(\n\
\n\
Well...\n\
\n\
What I am supposed to\n\
tell you - this is the big\n\
observation tower.\n\
Some guys said only birds\n\
could reach the top.\n\
\n\
...Or other flying objects.\n\
\n\
So if you have problems\n\
with some of the\n\
missions, search for\n\
the Switch Palaces.\n\
They may help you."))

DEFINE_DIALOG(DIALOG_002,1,5,95,200, _("You can look beneath the\n\
flowers in first-person\n\
perspective (Ⓒ▲)\n\
\n\
Hmm... but why?"))

DEFINE_DIALOG(DIALOG_003,1,5,95,200, _("Welcome to the\n\
'Dumbest Plumber\n\
on Earth'-show.\n\
You only need\n\
a key to see it."))

DEFINE_DIALOG(DIALOG_004,1,4,95,200, _("Welcome to the\n\
Luminium-Sphere,\n\
the mechanical\n\
temple of Light.\n\
Enjoy the view and\n\
try not to fall off."))

DEFINE_DIALOG(DIALOG_005,1,3,30,200, _("Hey Mario! Is it true\n\
that you beat the Big\n\
Bob-omb? Cool!\n\
You must be strong... and\n\
pretty fast. So, how fast\n\
are you, anyway?\n\
Fast enough to beat me...\n\
Koopa the Quick? I don't\n\
think so. Just try me.\n\
How about a race to the\n\
mountaintop, where the\n\
Big Bob-omb was?\n\
Whaddya say? When I say\n\
『Go,』 let the race begin!\n\
\n\
Ready....\n\
\n\
//Go!////Don't Go"))

DEFINE_DIALOG(DIALOG_006,1,3,30,200, _("Warning!\n\
A lot of skill is needed\n\
to beat this level.\n\
\n\
Here are two tips:\n\
\n\
1. When you see\n\
a grey wall, try\n\
doing a wallkick.\n\
2. Triple jumps may\n\
help you pass some\n\
of the green slopes.\n\
\n\
Good luck!\n\
           -Koopa"))

DEFINE_DIALOG(DIALOG_007,1,3,30,200, _("The star is so close!\n\
\n\
Can you make the jump?"))

DEFINE_DIALOG(DIALOG_008,1,2,30,200, _("Check out the view!\n\
(Ⓒ▲)"))

DEFINE_DIALOG(DIALOG_009,1,6,30,200, _("Heyho, ma boy!\n\
I checked out some\n\
videos on YouTube\n\
and I found out\n\
everything about you!\n\
You cheated! Very often!\n\
And now I want revenge!\n\
Another race!\n\
And this time I will be\n\
the one who cheats!\n\
\n\
//Go//// Don't Go"))

DEFINE_DIALOG(DIALOG_010,1,5,30,200, _("You activated the red\n\
switch! Now you can\n\
fly through the sky.\n\
Did you see the red\n\
!-Box in Dice-Fortress?\n\
\n\
\n\
Would you like to save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_011,1,4,30,200, _("You activated the\n\
metal cap. It makes\n\
Mario so heavy that he\n\
can walk underwater.\n\
Have you seen a\n\
place where this\n\
might be useful?\n\
\n\
\n\
Would you like to save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_012,1,4,30,200, _("The vanish cap is now\n\
activated. Now turn\n\
yourself into a Boo and\n\
scare other people.\n\
\n\
Would you like to save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_013,1,6,30,200, _("You've collected 100\n\
coins! Mario gains\n\
a star from Toad.\n\
Do you want to save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_014,1,6,30,200, _("OMG! A star!\n\
Never seen that before!\n\
Do you still have\n\
the urge to save?\n\
\n\
//You Bet//Not Now"))

DEFINE_DIALOG(DIALOG_015,1,4,30,200, _("It is recommended to\n\
use Mario's perspective\n\
and zoom in with Ⓒ▲\n\
if you enter a house."))

DEFINE_DIALOG(DIALOG_016,1,3,30,200, _("This looks like a nice\n\
place to start jumping\n\
over some roofs.\n\
Perhaps you'll get to\n\
an interesting place?"))

DEFINE_DIALOG(DIALOG_017,1,4,30,200, _("Hey, I remember you!\n\
You are this evil\n\
person who defeated\n\
me last time!\n\
But now you\n\
stand no chance!\n\
\n\
\n\
Look how tiny\n\
this arena is!\n\
Mwahahaha!"))

DEFINE_DIALOG(DIALOG_018,1,2,30,200, _("These flowers\n\
aren't normal.\n\
\n\
They are hiding...\n\
treasures."))

DEFINE_DIALOG(DIALOG_019,1,3,30,200, _("Mysterious Hidden Object\n\
5 of 5\n\
\n\
This object displays\n\
a lot of creativity\n\
and innovation.\n\
Legend has it that\n\
this object has the\n\
power to split up\n\
groups of people that\n\
once were the same.\n\
\n\
Those split-up groups\n\
either love or hate\n\
what has happened.\n\
Was it a good idea\n\
to create this\n\
magical object?\n\
We'll see if the future has\n\
more of these mysterious\n\
objects to offer.\n\
\n\
\n\
I, for one, hope so."))

DEFINE_DIALOG(DIALOG_020,1,6,95,150, _("Dear Mario:\n\
something is wrong with\n\
the paintings in my castle.\n\
Please have a look at them.\n\
Yours truly--\n\
-the floating princess-"))

DEFINE_DIALOG(DIALOG_021,1,5,95,200, _("Mwahaha! \n\
I changed all the\n\
levels so you won't be\n\
able to rescue Peach!\n\
...Again."))

DEFINE_DIALOG(DIALOG_022,1,1,95,200, _("This door is locked."))

DEFINE_DIALOG(DIALOG_023,1,2,95,200, _("C'mon! Haven't you\n\
played this game before?"))

DEFINE_DIALOG(DIALOG_024,1,4,95,200, _("Are you too dumb\n\
to find the entrance\n\
to the first world?\n\
That's sad."))

DEFINE_DIALOG(DIALOG_025,1,5,95,200, _("Are you blind?\n\
Don't you see a 3\n\
on the door?\n\
And how many stars do\n\
you have? NOT THREE!"))

DEFINE_DIALOG(DIALOG_026,1,3,95,200, _("You can't even\n\
find 8 stars?\n\
Are you serious?"))

DEFINE_DIALOG(DIALOG_027,1,5,95,200, _("You need 100 stars\n\
to open this door.\n\
...But since you are\n\
so bad at this game...\n\
you will only need 30."))

DEFINE_DIALOG(DIALOG_028,1,3,95,200, _("50 stars. That's\n\
all I'm asking for.\n\
\n\
You could have 80\n\
by now but NO, you\n\
want to talk to doors!\n\
How stupid!"))

DEFINE_DIALOG(DIALOG_029,1,3,95,200, _("70 stars required.\n\
\n\
Sort of.\n\
If you don't have the\n\
time to collect 70 stars,\n\
go ahead and cheat."))

DEFINE_DIALOG(DIALOG_030,1,6,30,200, _("Hey Mario! Nice\n\
to see you again!\n\
\n\
I was trapped in here\n\
ever since we last met!\n\
\n\
Wow, you really got so\n\
many stars! Amazing!\n\
\n\
You really are a \n\
fat pl...\n\
hero!\n\
I'm sure it wasn't easy\n\
to get this far. Or did\n\
you cheat? Be honest.\n\
\n\
Well, now you may think\n\
you're almost done...\n\
but if you are okay with\n\
it, I still have some more \n\
tasks for you to do.\n\
\n\
I've read somewhere on\n\
the internet that there\n\
are 5 well hidden objects\n\
in this game. All of\n\
them are in this temple.\n\
One per star door.\n\
Can you find them all?\n\
\n\
And if that's not\n\
enough, check out the\n\
'Medal-Challenges' that\n\
came with this game."))

DEFINE_DIALOG(DIALOG_031,1,4,30,200, _("DAMN! You cheated\n\
again! I know it!\n\
\n\
Eh... take the star..."))

DEFINE_DIALOG(DIALOG_032,1,4,30,200, _("Tricky red coins ahead!\n\
Take your time and\n\
use Ⓒ▲ to look around\n\
if you are missing some."))

DEFINE_DIALOG(DIALOG_033,1,4,30,200, _("You just came out of\n\
the sewer system!\n\
Eww...\n\
You smell bad.\n\
Anyways, this is the\n\
game. Well, partly.\n\
This is the first DEMO.\n\
\n\
So everything past\n\
the entrance hall\n\
isn't changed yet.\n\
HACK BY LUGMILLORD"))

DEFINE_DIALOG(DIALOG_034,1,5,30,200, _("Good morning, my name\n\
is 'the Annoying Lakitu',\n\
and I'm here to\n\
interrupt you from\n\
playing this game."))

DEFINE_DIALOG(DIALOG_035,1,5,30,200, _("Remember to use L\n\
and the D-Pad while\n\
in Lakitu's perspective\n\
for optimal control\n\
over the camera."))

DEFINE_DIALOG(DIALOG_036,1,6,30,200, _("Hey, you!\n\
Yes, YOU!\n\
\n\
Welcome to Sunny Beach.\n\
Looks kinda peaceful,\n\
does it not?\n\
I think this level could\n\
be a bit too easy.\n\
So here's the deal:\n\
I'm not going to\n\
give you any hints\n\
where the stars are.\n\
Alright, here's one hint:\n\
There are 134 coins\n\
in this level.\n\
\n\
You hadn't expected a\n\
fewer amount, had you?"))

DEFINE_DIALOG(DIALOG_037,1,2,30,200, _("37"))

DEFINE_DIALOG(DIALOG_038,1,3,95,200, _("A star explodes to\n\
open the locked door.\n\
Don't ask why."))

DEFINE_DIALOG(DIALOG_039,1,5,30,200, _("Mario can grab onto\n\
some of the roofs.\n\
This may help when\n\
you try to get to the\n\
top of some buildings."))

DEFINE_DIALOG(DIALOG_040,1,3,30,200, _("WARNING!!\n\
Once you go down there,\n\
there's no way back.\n\
(If you are looking\n\
for coins - there aren't\n\
any down there.)"))

DEFINE_DIALOG(DIALOG_041,1,5,30,200, _("HARHARHAR!!\n\
I WIN!\n\
Finally!\n\
After more than a\n\
decade! No star for you!"))

DEFINE_DIALOG(DIALOG_042,1,5,30,200, _("Did you know that\n\
you can change your\n\
camera perspective\n\
by pressing L\n\
in the water?\n\
You need to be in the\n\
Lakitu perspective\n\
to do that.\n\
\n\
\n\
This is also possible in\n\
other situations, such\n\
as during flights."))

DEFINE_DIALOG(DIALOG_043,1,5,30,200, _("When using Lakitu's\n\
perspective, you can\n\
adjust your camera\n\
angle by pressing left\n\
or right on your D-Pad!\n\
You can also press \n\
up on the D-Pad to\n\
match the camera\n\
with the angle you're\n\
currently facing.\n\
Press down on the\n\
D-Pad to reset these\n\
adjustments."))

DEFINE_DIALOG(DIALOG_044,1,5,95,200, _("44"))

DEFINE_DIALOG(DIALOG_045,1,6,95,200, _("45"))

DEFINE_DIALOG(DIALOG_046,1,3,30,200, _("Can't reach a place\n\
because it's too high?\n\
\n\
Try using a combination\n\
of a triple jump\n\
and a wallkick.\n\
Or maybe you'll find\n\
a purple switch?"))

DEFINE_DIALOG(DIALOG_047,1,3,95,200, _("Ready when you are!\n\
The cannon is yours\n\
to use as you please."))

DEFINE_DIALOG(DIALOG_048,1,3,30,200, _("Mysterious Hidden Object\n\
4 of 5\n\
\n\
This object displays\n\
perfection (at least\n\
that's what I think).\n\
Having friends to help\n\
you out is always nice,\n\
but sometimes there\n\
are tasks you need\n\
to do on your own.\n\
\n\
Connect the worlds\n\
and show me ya moves.\n\
\n\
Will we ever see\n\
the glory again?\n\
\n\
This question remains\n\
unanswered."))

DEFINE_DIALOG(DIALOG_049,1,3,30,200, _("Remember to zoom in\n\
if you have problems\n\
with the camera."))

DEFINE_DIALOG(DIALOG_050,1,2,30,200, _("You are more than\n\
a decade too late."))

DEFINE_DIALOG(DIALOG_051,1,2,30,200, _("This sign is useless. But\n\
you've read it anyway."))

DEFINE_DIALOG(DIALOG_052,1,3,30,200, _("I've heard there's more\n\
than one star in each\n\
one of the side levels.\n\
It can be useful\n\
to visit them a\n\
few times more."))

DEFINE_DIALOG(DIALOG_053,1,6,30,200, _("Hey there, Mario!\n\
\n\
Tough luck, buddy!\n\
Bowser kidnapped Peach\n\
again (who cares...)\n\
AND...\n\
he stole even more\n\
stars than last time.\n\
\n\
The reason? He even found\n\
the 30 stars that were\n\
hidden in the toilet!\n\
...what? NO! We are not\n\
going to tell you which\n\
of the stars have been\n\
in the toilet. You collect \n\
ALL of them, okay?\n\
\n\
Oh, and one\n\
important thing:\n\
Talk to the 5\n\
Info-Toads in this\n\
area before heading\n\
into the adventure.\n\
They'll give you some \n\
important advice!\n\
\n\
Good luck\n\
   with... well, all\n\
        the stuff you do.\n\
\n\
\n\
By the way, hack by\n\
LUGMILLORD"))

DEFINE_DIALOG(DIALOG_054,1,6,30,200, _("Hi! I'm Info-Toad 1.\n\
\n\
Since Lakitu has been\n\
fired, some other useless\n\
dude is trying to do\n\
all the camera work.\n\
But... I guess he ain't as\n\
bad as we all expected...\n\
\n\
\n\
\n\
\n\
Though be aware that\n\
if you enter a narrow\n\
tunnel or small room,\n\
you better zoom in\n\
until the camera\n\
is inside the room."))

DEFINE_DIALOG(DIALOG_055,1,4,30,200, _("Hey-ey, Mario, buddy,\n\
howzit goin'? Step right\n\
up. You look like a fast\n\
sleddin' kind of guy.\n\
I know speed when I see\n\
it, yes siree--I'm the\n\
world champion sledder,\n\
you know. Whaddya say?\n\
How about a race?\n\
Ready...\n\
\n\
//Go//// Don't Go"))

DEFINE_DIALOG(DIALOG_056,1,6,30,200, _("Mysterious Hidden Object\n\
1 of 5\n\
\n\
This object expresses\n\
a certain rivalry\n\
towards you.\n\
\n\
Adventures, animals\n\
and jigsaw pieces...\n\
\n\
- put together in order\n\
to create a masterpiece!\n\
This object happens to\n\
contain a mystery so...\n\
mysterious that people\n\
cannot grasp it to this\n\
day.\n\
\n\
But the secret it\n\
contains was replaced\n\
some years ago.\n\
\n\
\n\
\n\
Now you may use the\n\
power of the biggest\n\
net imaginable to dig\n\
deeper into this hole\n\
of the unknown."))

DEFINE_DIALOG(DIALOG_057,1,4,30,200, _("This is it!\n\
The final level!\n\
The Crystal Palace!\n\
\n\
...Too bad most of the\n\
crystals are missing due\n\
to some... let's say -\n\
software problems."))

DEFINE_DIALOG(DIALOG_058,1,2,30,200, _("Twice the amount or\n\
else they won't count."))

DEFINE_DIALOG(DIALOG_059,1,6,30,200, _("Hey, you!\n\
Listen closely!\n\
\n\
This is how this\n\
level works:\n\
\n\
As you see, there are\n\
three different routes.\n\
\n\
You can't use the left\n\
one cause there's\n\
deadly quicksand.\n\
Instead, use the right\n\
path and use the Koopa\n\
shell you find at the end.\n\
\n\
\n\
\n\
If you manage to beat\n\
both paths, the cannon\n\
can be opened and\n\
you can take the\n\
path in the middle.\n\
\n\
And don't try to get\n\
past it without the\n\
cannon. The dark\n\
matter will kill you!\n\
\n\
\n\
Good luck wishes\n\
...the signpainter.\n\
\n\
Oh, wait, wrong game."))

DEFINE_DIALOG(DIALOG_060,1,4,30,200, _("DUDE, I'm Info-Toad\n\
number 2!\n\
\n\
\n\
It's important to\n\
have a look at the\n\
signs that are placed\n\
all over the country.\n\
They can give you some\n\
funky advice, you know.\n\
\n\
\n\
And some hidden ones\n\
may even tell you how\n\
many stars you can find\n\
in the smaller levels\n\
('Cause most of them\n\
now have way more\n\
stars than before)."))

DEFINE_DIALOG(DIALOG_061,1,4,30,200, _("You are fatter than I\n\
remembered...\n\
\n\
I mean...\n\
\n\
HI, I'M INFO-TOAD 3!\n\
\n\
\n\
I'm kinda greedy and\n\
want a lot of money to\n\
buy a car and a house\n\
and a spaceship and\n\
some galaxies as well.\n\
\n\
But you know what?\n\
I don't have enough\n\
coins to buy all this\n\
nice stuff.\n\
\n\
LISTEN TO ME!\n\
In the worlds of this\n\
game, you can find tons\n\
of coins. I mean, WOW,\n\
so much money!\n\
15 of them even have\n\
more than 100 of them.\n\
And I want those. If\n\
you collect 100 coins\n\
in one of those levels...\n\
...you get a ★!\n\
\n\
\n\
:)"))

DEFINE_DIALOG(DIALOG_062,1,4,30,200, _("Hello! I'm Info-Toad...\n\
number...\n\
oh, I forgot...\n\
\n\
4? Yes, I think 4.\n\
\n\
\n\
\n\
Well, anyways...\n\
This right here is\n\
the entrance to\n\
the first course.\n\
But you can't get\n\
all of its stars yet.\n\
You need to find the\n\
red cap switch first.\n\
I don't know where it is\n\
but it is -somewhere-.\n\
\n\
\n\
Oh, and I hope you are\n\
still as good at jumping\n\
as back in... whenever the\n\
original game came out.\n\
1996 or 1997, \n\
depending on\n\
where you live.\n\
\n\
But WHO CARES?\n\
\n\
If a place is too\n\
high for you, try a\n\
combination of a triple\n\
jump or side somersault\n\
and a wallkick.\n\
\n\
Or get on drugs, harhar.\n\
Oh, wait... bad idea.\n\
This is a family friendly\n\
game after all. DAMN!"))

DEFINE_DIALOG(DIALOG_063,1,5,30,200, _("I'm the impressive\n\
and unbelievable\n\
Info-Toad numero 5!\n\
\n\
\n\
Some people don't even\n\
recognize it but I'm\n\
floating like 50 cm\n\
over the ground 'cause\n\
I hate being small.\n\
Now... what was I\n\
supposed to tell you?\n\
Hmmm... I don't know.\n\
Neither do I care.\n\
\n\
I'll just entertain\n\
you with some\n\
funny sentences.\n\
\n\
\n\
Is this okay for you?\n\
No? You want infos?\n\
How about this one:\n\
\n\
'Press Ⓐ to jump'\n\
Awesome, isn't it? Now\n\
you know more than\n\
ever before. That's\n\
not enough? What\n\
else could I tell you?\n\
『Stop annoying Toads,\n\
'cause one day they will\n\
unite, take over the\n\
Mushroom Kingdom and\n\
'delete' all plumbers\n\
on Earth.\n\
\n\
...except for Luigi.』"))

DEFINE_DIALOG(DIALOG_064,1,5,30,200, _("Oh no! Bowser is hacking\n\
the game and makes the\n\
star door textures \n\
glitch out!\n\
\n\
...Oh boy, what a bad\n\
excuse.\n\
\n\
But you have to live\n\
with it :P"))

DEFINE_DIALOG(DIALOG_065,1,2,30,200, _("Wrong game.\n\
What are you doing here?"))

DEFINE_DIALOG(DIALOG_066,1,4,30,200, _("This roof used be covered\n\
with loads of crystals.\n\
Like 30 or 40.\n\
\n\
Oh well, we can't\n\
have everything\n\
we want, can we?\n\
\n\
Now, look. There is\n\
a secret in this level...\n\
Two actually.\n\
\n\
If you have obtained\n\
150 stars, you should\n\
go and find a hidden\n\
door in this level.\n\
There is also a pipe\n\
you could take without\n\
any stars needed, but\n\
it's even harder to reach."))

DEFINE_DIALOG(DIALOG_067,1,4,30,200, _("Mwahahaha, you again!\n\
You may think I'm still\n\
easy to defeat but\n\
YOU ARE WRONG!!\n\
I didn't have the money \n\
for some arena manipu-\n\
lation software since \n\
I already blew everything\n\
on 2D castles, but at \n\
least these spike balls \n\
are higher than before :P"))

DEFINE_DIALOG(DIALOG_068,1,5,30,200, _("68"))

DEFINE_DIALOG(DIALOG_069,1,2,30,200, _("To jump, push Ⓐ.\n\
\n\
What? You want\n\
useful information?\n\
No, not from me."))

DEFINE_DIALOG(DIALOG_070,1,6,30,200, _("Remember to use the\n\
D-Pad to help you\n\
configure the camera\n\
in Lakitu's perspective!\n\
And press L while in\n\
the water or in the sky."))

DEFINE_DIALOG(DIALOG_071,1,2,30,200, _("There is only one\n\
star in this level."))

DEFINE_DIALOG(DIALOG_072,1,4,30,200, _("Welcome to the\n\
Ombru-Sphere,\n\
the mechanical\n\
temple of Darkness.\n\
No refunds for those\n\
who fall into the\n\
endless void."))

DEFINE_DIALOG(DIALOG_073,1,4,95,200, _("This is the\n\
'Kubus of Darkness'.\n\
\n\
\n\
It produces all the\n\
darkness that\n\
causes nighttimes\n\
in any video game."))

DEFINE_DIALOG(DIALOG_074,1,3,30,200, _("Unless you can fly:\n\
\n\
That was a dumb idea!"))

DEFINE_DIALOG(DIALOG_075,1,6,30,200, _("Hey Mario,\n\
this is Bowser!\n\
Can't believe I couldn't\n\
find this level last\n\
time. Now, prepare for\n\
challenges a la Bowser."))

DEFINE_DIALOG(DIALOG_076,1,4,30,200, _("Heyho, enjoying the\n\
view as much as I do?\n\
I could see you jump\n\
around down there.\n\
He he, real busy,\n\
aren't ya? Here, you've\n\
earned this star!\n\
\n\
I'm happy around here,\n\
I don't need any stars.\n\
\n\
\n\
Sometimes, I even see\n\
a rabbit over there.\n\
Maybe you'll be lucky\n\
and catch him too."))

DEFINE_DIALOG(DIALOG_077,1,3,150,200, _("Mysterious Hidden Object\n\
3 of 5\n\
\n\
Do you see it?\n\
This object is full\n\
of shining glory.\n\
Someone brought\n\
it here in 2002.\n\
\n\
That day was certainly\n\
a dark day.\n\
\n\
Some people say\n\
this temple was\n\
built that day.\n\
Well, I don't think so.\n\
\n\
\n\
But I'm sure there's\n\
something missing.\n\
\n\
I remember there\n\
was a golden letter\n\
somewhere.\n\
Why would somebody\n\
throw this object away?\n\
\n\
We may never know\n\
if its glory will return\n\
one day, but I doubt it.\n\
Kinda sad story.\n\
\n\
Poor bear and bird."))

DEFINE_DIALOG(DIALOG_078,1,5,30,200, _("78"))

DEFINE_DIALOG(DIALOG_079,1,4,30,200, _("Owwwuu! Let me go!\n\
Uukee-kee! I was only\n\
teasing! Can't you take\n\
a joke?\n\
I'll tell you what, let's\n\
trade. If you let me go,\n\
I'll give you something\n\
really good.\n\
So, how about it?\n\
\n\
//Free him/ Hold on"))

DEFINE_DIALOG(DIALOG_080,1,1,30,200, _("80"))

DEFINE_DIALOG(DIALOG_081,1,4,30,200, _("81"))

DEFINE_DIALOG(DIALOG_082,1,4,30,200, _("Hey!\n\
How did you find me?\n\
Don't tell anyone\n\
that I'm here!\n\
Here... take this star\n\
if you want to and\n\
leave me alone, please."))

DEFINE_DIALOG(DIALOG_083,1,4,30,200, _("Did you know that\n\
there are quite a\n\
lot of stars on the \n\
overworld?\n\
There are 4 in the\n\
first part of it, which\n\
is called 'Valley of\n\
the Toads'.\n\
There are 6 in\n\
the second part,\n\
which is called\n\
'Tower of the East'.\n\
And there's one here\n\
at the 'Magma Temple'.\n\
And I have that one.\n\
You can have it :)"))

DEFINE_DIALOG(DIALOG_084,1,2,30,200, _("-This rabbit can't speak,\n\
but I think he likes you.\n\
Oh, he even has a\n\
present for you!-"))

DEFINE_DIALOG(DIALOG_085,1,5,30,200, _("This is the\n\
'Kubus of Light'.\n\
It provides energy\n\
for every video game\n\
sun in existence."))

DEFINE_DIALOG(DIALOG_086,1,3,30,200, _("Try out the Lakitu\n\
perspective when you\n\
attempt some wallkicks."))

DEFINE_DIALOG(DIALOG_087,1,3,30,200, _("10 stars are required\n\
to open this door.\n\
\n\
Also, some places will\n\
not send you out if\n\
you collect stars there.\n\
The first two Bowser\n\
courses are such places.\n\
The next overworld too."))

DEFINE_DIALOG(DIALOG_088,1,5,30,200, _("Psst! I know a secret!\n\
\n\
I've heard there are\n\
4 stars in a level\n\
called 'Frozen Slide'."))

DEFINE_DIALOG(DIALOG_089,1,5,95,200, _("Sometimes, I can see a \n\
little rabbit over there.\n\
\n\
He's so cute. Maybe he \n\
will come back one day."))

DEFINE_DIALOG(DIALOG_090,1,4,30,200, _("Mwahahaha, you again!\n\
You may think I'm still\n\
easy to defeat but\n\
YOU ARE WRONG!!\n\
I didn't have the money \n\
for some arena manipu-\n\
lation software since \n\
I already blew everything\n\
on 2D castles, but at \n\
least these spike balls \n\
are higher than before :P"))

DEFINE_DIALOG(DIALOG_091,2,2,30,200, _("Psst! I know a\n\
colorful secret!\n\
\n\
RGB 356\n\
\n\
Do you get it?"))

DEFINE_DIALOG(DIALOG_092,1,4,30,200, _("Mario!\n\
I'll be honest with you:\n\
I don't like you.\n\
(Dramatic music...)\n\
Well, as you can see,\n\
I didn't have the time\n\
to prepare this arena\n\
which is kind of a shame.\n\
But I guess there's\n\
no way around it.\n\
But trust me: You\n\
won't beat this game."))

DEFINE_DIALOG(DIALOG_093,1,3,30,200, _("Mario, to be honest,\n\
I'm impressed you\n\
made it this far.\n\
Getting here was\n\
way harder than in\n\
the original game.\n\
I have to admit -\n\
good job.\n\
\n\
And now...\n\
I will try to kill\n\
you as always."))

DEFINE_DIALOG(DIALOG_094,1,5,30,200, _("This door requires\n\
150 stars to pass\n\
through. But note that\n\
this door is optional.\n\
\n\
You can already\n\
reach this place,\n\
but then you must \n\
find the hidden pipe's\n\
location in this level."))

DEFINE_DIALOG(DIALOG_095,1,4,30,200, _("Out of order until\n\
the final release of\n\
the game.\n\
\n\
Do not enter."))

DEFINE_DIALOG(DIALOG_096,1,6,30,200, _("Do you see the floating\n\
platforms over there?\n\
To get their treasure,\n\
you need to start your\n\
flight from the highest\n\
point possible."))

DEFINE_DIALOG(DIALOG_097,1,3,30,200, _("How did you get up here?\n\
\n\
YOU ARE A CHEATER!!!"))

DEFINE_DIALOG(DIALOG_098,1,2,95,200, _("98"))

DEFINE_DIALOG(DIALOG_099,1,5,95,200, _("Mysterious Hidden Object\n\
2 of 5\n\
\n\
This object was lost\n\
some months ago.\n\
But even before - it \n\
was missing a lot\n\
of its glory.\n\
\n\
\n\
Losing all its shining\n\
power in late 2010\n\
made a lot of people\n\
lose hope to see a\n\
certain duo again."))

DEFINE_DIALOG(DIALOG_100,1,4,95,200, _("Warning.\n\
Explosive sign.\n\
Safety distance to\n\
Bob-ombs required.\n\
...Oh, and there's a \n\
cannon to the left."))

DEFINE_DIALOG(DIALOG_101,1,6,95,200, _("If Mario wears the wing\n\
cap, hold Ⓐ when\n\
jumping in order to\n\
glide down slowly.\n\
This can help you reach\n\
the tower cannons."))

DEFINE_DIALOG(DIALOG_102,1,5,30,200, _("Warning! This slide\n\
is kinda fast.\n\
If Mario gets too fast,\n\
try jumping and do\n\
a kick in mid-air."))

DEFINE_DIALOG(DIALOG_103,1,3,95,200, _("Want to get up there?\n\
Combine a triple jump\n\
with a wallkick.\n\
(When doing the wallkick,\n\
hold the control stick\n\
towards the wall)"))

DEFINE_DIALOG(DIALOG_104,1,5,30,200, _("Please excuse that \n\
Mario will always do\n\
his 'I got a key'-\n\
animation when beating\n\
this level, even when\n\
you get a star."))

DEFINE_DIALOG(DIALOG_105,1,3,95,200, _("105"))

DEFINE_DIALOG(DIALOG_106,1,2,95,200, _("The cannon is activated.\n\
C'mon! Hop in!"))

DEFINE_DIALOG(DIALOG_107,1,3,95,200, _("107"))

DEFINE_DIALOG(DIALOG_108,1,3,95,200, _("Boo!\n\
You're trapped.\n\
Now please scream."))

DEFINE_DIALOG(DIALOG_109,1,1,95,200, _("Hee hee heeeeee."))

DEFINE_DIALOG(DIALOG_110,1,3,95,200, _("This sign tells\n\
you nothing.\n\
Why are you reading it?"))

DEFINE_DIALOG(DIALOG_111,1,3,95,200, _("I can see you.\n\
\n\
All the time."))

DEFINE_DIALOG(DIALOG_112,1,3,30,200, _("Lots of dangers ahead!\n\
\n\
\n\
First:\n\
Toxic air! \n\
Don't breathe it in.\n\
SECOND:\n\
Holes!\n\
Don't fall into them!"))

DEFINE_DIALOG(DIALOG_113,1,5,30,200, _("You need a wallkick\n\
to get up there.\n\
Run and jump against a\n\
wall and press Ⓐ exactly\n\
when you touch the wall."))

DEFINE_DIALOG(DIALOG_114,1,5,95,200, _("Harharhar!!\n\
You don't seriously\n\
believe you could\n\
defeat me on top\n\
of this tiny platform?"))

DEFINE_DIALOG(DIALOG_115,1,1,95,200, _("Not again..."))

DEFINE_DIALOG(DIALOG_116,1,1,95,200, _("ARGH! How dare you!!!"))

DEFINE_DIALOG(DIALOG_117,1,1,95,200, _(""))

DEFINE_DIALOG(DIALOG_118,1,6,95,200, _("118"))

DEFINE_DIALOG(DIALOG_119,1,4,30,200, _("WHO BOUGHT THOSE\n\
STUPID BOMBS ANYWAY?\n\
I already told you guys\n\
this is a bad idea!\n\
But you didn't listen!\n\
Now I have to give\n\
Mario this golden key!\n\
YES, the GOLDEN key!\n\
The expensive one!\n\
And it's your fault!\n\
...And Mario's."))

DEFINE_DIALOG(DIALOG_120,1,4,30,200, _("Ouchie!\n\
You are mean :(\n\
Take the key and\n\
leave me alone."))

DEFINE_DIALOG(DIALOG_121,1,5,30,200, _("Argh! My back!\n\
That hurts.\n\
\n\
You are a very evil person.\n\
Do you know that?\n\
\n\
\n\
Oh man! I lost again.\n\
Like always. Where's\n\
my next plan?\n\
\n\
Hmmm... oh yeah,\n\
I remember.\n\
\n\
I will defeat you,\n\
 \n\
... in Super Mario Galaxy 3!\n\
\n\
\n\
Harhar, just kidding.\n\
I don't want to be in\n\
that series anymore.\n\
These guys made me\n\
so huge and I was so \n\
horribly easy to beat!\n\
Simply pathetic!\n\
If they ever make \n\
SMG3, they will have\n\
to ask my brother."))

DEFINE_DIALOG(DIALOG_122,1,4,30,200, _("You'll find some walls\n\
in this level that look\n\
a bit like ice...\n\
well, kind of.\n\
Don't try to touch them.\n\
They are kinda sticky.\n\
\n\
\n\
Use a vanish cap instead."))

DEFINE_DIALOG(DIALOG_123,1,1,30,200, _("Don't touch this wall."))

DEFINE_DIALOG(DIALOG_124,1,2,30,200, _("The way back to the\n\
'Tower of the East'."))

DEFINE_DIALOG(DIALOG_125,1,4,30,200, _("Psst! I know a\n\
dangerous secret!\n\
\n\
\n\
I've heard there are \n\
4 stars in a level\n\
called 'Bowser's\n\
Badlands-Battlefield'."))

DEFINE_DIALOG(DIALOG_126,2,5,30,200, _("Psst! I know a secret!\n\
\n\
I've heard there are\n\
5 stars in a level called\n\
'Bowser's Aquatic Castle'."))

DEFINE_DIALOG(DIALOG_127,3,5,30,200, _("Psst! I know a\n\
dark secret!\n\
\n\
I've heard there are \n\
6 stars in a level...\n\
I forgot its name \n\
though. I think it\n\
had something to do\n\
with colorful rocks."))

DEFINE_DIALOG(DIALOG_128,1,3,95,200, _("HA! That doesn't count!\n\
You have to throw me\n\
onto the platform!"))

DEFINE_DIALOG(DIALOG_129,1,5,30,200, _("Hello! You just entered...\n\
\n\
Hello?\n\
Mario?\n\
\n\
WHERE ARE YOU???\n\
I can't see you :("))

DEFINE_DIALOG(DIALOG_130,1,4,30,200, _("Waaaaaaah!\n\
Look at your skin!\n\
It's like... like METAL!\n\
That scares me o.O\n\
I don't want to touch\n\
you! And I believe\n\
your enemies don't\n\
want to either."))

DEFINE_DIALOG(DIALOG_131,1,5,30,200, _("That's not good for\n\
your eyes, Mario!\n\
\n\
Anyways, the red switch\n\
is somewhere around here.\n\
Press it and...\n\
\n\
well, I guess you already\n\
know what happens."))

DEFINE_DIALOG(DIALOG_132,1,4,30,200, _("132"))

DEFINE_DIALOG(DIALOG_133,1,4,30,200, _("Hey there!\n\
I'm Toad. Please\n\
don't run away.\n\
\n\
I know that we are\n\
pretty useless all\n\
the time, but know\n\
we're trying our best!\n\
It's not much but...\n\
err... I mean...\n\
\n\
\n\
you're our hero, please\n\
save the Princess.\n\
She won't pay us as long\n\
as she's kidnapped :(\n\
I have to pay the rent\n\
and the kids want these\n\
new gaming systems for\n\
Christmas and that's so\n\
expensive, you know.\n\
\n\
What I'm trying to say...\n\
I need MONEY. So if you\n\
find enough money in a \n\
level, I'll give you a star.\n\
Let's say 1★ per 100$.\n\
\n\
I have 15★s...\n\
Good luck."))

DEFINE_DIALOG(DIALOG_134,1,4,30,200, _("It is always useful to\n\
use the Mario perspective.\n\
You can switch between\n\
those two by pushing Ⓡ.\n\
If you enter a narrow \n\
tunnel or a small room,\n\
zoom in with Ⓒ▲.\n\
\n\
But often, it can\n\
help to switch back to\n\
Lakitu's perspective.\n\
Give it a try :)"))

DEFINE_DIALOG(DIALOG_135,1,6,30,200, _("The level right here\n\
can be pretty tricky.\n\
If you can't find\n\
a star, just use Ⓒ▲\n\
and look around.\n\
It should help."))

DEFINE_DIALOG(DIALOG_136,1,4,30,200, _("Molten Treasure Chest\n\
\n\
You need 75 stars\n\
to open this door."))

DEFINE_DIALOG(DIALOG_137,1,4,30,200, _("Luminium-Sphere\n\
\n\
You need 85 stars\n\
to open this door."))

DEFINE_DIALOG(DIALOG_138,1,4,30,200, _("Ombru-Sphere\n\
\n\
You need 95 stars\n\
to open this door."))

DEFINE_DIALOG(DIALOG_139,1,4,30,200, _("The Crystal Palace\n\
\n\
You need 110 stars\n\
to open this door."))

DEFINE_DIALOG(DIALOG_140,1,5,30,200, _("A bonus for people\n\
who can't stop\n\
playing this game.\n\
You need 125 stars\n\
to open this door."))

DEFINE_DIALOG(DIALOG_141,1,4,150,200, _("You found 1 star!\n\
\n\
O-N-E S-T-A-R!\n\
\n\
Now please don't feel\n\
special. You achieved\n\
pretty much nothing\n\
at all."))

DEFINE_DIALOG(DIALOG_142,1,5,150,200, _("You found 10 stars.\n\
Oh boy! You are really\n\
slow, do you know that?\n\
At least you can\n\
open a star door now."))

DEFINE_DIALOG(DIALOG_143,1,5,150,200, _("You've collected 60 stars!\n\
\n\
Oh wait, you didn't!\n\
You are still so \n\
damn slow!\n\
What? No, I'm NOT \n\
Cranky Kong. \n\
I just don't like you."))

DEFINE_DIALOG(DIALOG_144,1,5,150,200, _("Zzzzz...\n\
Zzzzzzzzz...\n\
\n\
W-what?\n\
What is going on?\n\
Oh, it's you again.\n\
So you got your\n\
70th star?\n\
Which year is it,\n\
by the way?\n\
Now press Ⓐ or Ⓑ\n\
and hurry up a bit.\n\
I'm getting really tired.\n\
\n\
\n\
Oh, and you still\n\
need 5 stars to open\n\
the next star door\n\
(and there are like\n\
one million left)."))

DEFINE_DIALOG(DIALOG_145,1,4,150,200, _("110 stars...\n\
Do you even want to\n\
finish this game?\n\
Well, now you can.\n\
Consider it a nice\n\
gesture of me, you\n\
didn't even get any\n\
hard star yet, did you?"))

DEFINE_DIALOG(DIALOG_146,1,3,150,200, _("Well if it isn't you.\n\
150 stars, huh?\n\
One to go.\n\
Have you found the\n\
hidden pipe in\n\
Bowser's Crystal Palace?\n\
If not, you can now\n\
search for a hidden\n\
star door in the level.\n\
It takes you to the same\n\
place, if you're not good\n\
enough to reach the pipe."))

DEFINE_DIALOG(DIALOG_147,1,5,30,200, _("The Secret Aquarium is\n\
gone. Instead, you can\n\
try a challenge.\n\
But only platforming\n\
masters can beat it."))

DEFINE_DIALOG(DIALOG_148,1,3,30,200, _("Warning!\n\
The water right here\n\
is so cold - it hurts!"))

DEFINE_DIALOG(DIALOG_149,1,5,30,200, _("Welcome to the\n\
Frozen Slide. Don't\n\
worry about a time \n\
limit. This time you'll\n\
face other problems.\n\
:P"))

DEFINE_DIALOG(DIALOG_150,1,5,30,200, _("-"))

DEFINE_DIALOG(DIALOG_151,1,4,30,200, _("-"))

DEFINE_DIALOG(DIALOG_152,1,3,30,200, _("-"))

DEFINE_DIALOG(DIALOG_153,1,4,30,200, _("-"))

DEFINE_DIALOG(DIALOG_154,1,4,30,200, _("I already gave\n\
you a star.\n\
Now please leave\n\
me alone."))

DEFINE_DIALOG(DIALOG_155,1,6,30,200, _("I'm sorry but there's\n\
nothing left I could\n\
give you except for\n\
my happiness.\n\
But I don't want \n\
to give it away :)"))

DEFINE_DIALOG(DIALOG_156,1,4,30,200, _("There are 4 stars\n\
in the first part\n\
of the overworld.\n\
('Valley of the Toads')\n\
There are 6 stars\n\
in the second part\n\
of the overworld.\n\
('Tower of the East')\n\
You already got the\n\
only star from here.\n\
('Magma Temple')"))

DEFINE_DIALOG(DIALOG_157,1,5,30,200, _("157"))

DEFINE_DIALOG(DIALOG_158,1,3,30,200, _("Remember to zoom\n\
in when you enter\n\
narrow tunnels."))

DEFINE_DIALOG(DIALOG_159,1,3,30,200, _("Over there is\n\
Thunder Mountain.\n\
\n\
Legends say the Pharao\n\
has hidden a treasure\n\
on that mountain."))

DEFINE_DIALOG(DIALOG_160,1,4,30,200, _("160"))

DEFINE_DIALOG(DIALOG_161,1,5,30,200, _("Mario!!!\n\
\n\
MARIO!!!!!\n\
\n\
It's me - Yoshi!\n\
What do you mean with\n\
'I don't remember you'?\n\
Don't be so mean to me.\n\
:(\n\
\n\
Well, okay, how about\n\
this? I've heard there\n\
are 151 stars in\n\
this game. You didn't\n\
expect that, did you?\n\
Well well, whatever...\n\
there's no time to waste!\n\
Go and find them!\n\
\n\
\n\
(May he never find\n\
these stars. I hate him\n\
so much. Gotta go now.)"))

DEFINE_DIALOG(DIALOG_162,1,4,30,200, _("-Stop assaulting this\n\
rabbit. He hasn't done\n\
anything to you!\n\
\n\
...You, you won't let\n\
him go? Well, okay...\n\
take this star.\n\
But please let him go.-"))

DEFINE_DIALOG(DIALOG_163,1,5,30,200, _("Noooo! You've really\n\
beaten me this time,\n\
Mario! I can't stand\n\
losing to you!\n\
...Again!\n\
...And again and again\n\
and again.\n\
\n\
...And again and again.\n\
Over and over again.\n\
You're determined,\n\
that much I need\n\
to admit. You've gotten\n\
all 151 stars. You liked\n\
this a lot, didn't you?\n\
If you want more,\n\
how about checking\n\
out the Medal\n\
Challenges! My\n\
ultimate task for you!"))

DEFINE_DIALOG(DIALOG_164,1,4,30,200, _("Mario! What's up, pal?\n\
I haven't been on the\n\
slide lately, so I'm out\n\
of shape.\n\
Still, I'm always up for a\n\
good race, especially\n\
against an old sleddin'\n\
buddy.\n\
Whaddya say?\n\
Ready...set...\n\
\n\
//Go//// Don't Go"))

DEFINE_DIALOG(DIALOG_165,1,5,30,200, _("165"))

DEFINE_DIALOG(DIALOG_166,1,4,30,200, _("166"))

DEFINE_DIALOG(DIALOG_167,1,2,30,200, _("Go back to where\n\
you came from."))

DEFINE_DIALOG(DIALOG_168,1,5,30,200, _("168"))

DEFINE_DIALOG(DIALOG_169,1,5,30,200, _("169"))

