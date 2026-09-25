LEVEL=$1

HACKER=/Users/Denis.Kopyrin/own/HackerSM64-NX
HACKER_LEVEL=$HACKER/levels/$LEVEL
HACKER_LEVEL_CUSTOM_C=$HACKER_LEVEL/custom_c
RM2C=/Users/Denis.Kopyrin/own/rom-manger-2-c/levels/$LEVEL

mkdir -p $HACKER_LEVEL/custom_c
cp -r $RM2C/*.png $HACKER_LEVEL
cp -r $RM2C/custom* $HACKER_LEVEL_CUSTOM_C
cp -r $RM2C/header.h $HACKER_LEVEL_CUSTOM_C
cp -r $RM2C/textureNew.inc.c $HACKER_LEVEL_CUSTOM_C
cp -r $RM2C/areas/1/custom* $HACKER_LEVEL_CUSTOM_C
cp -r $RM2C/areas/1/movtextNew.inc.c $HACKER_LEVEL_CUSTOM_C

sed s/castle_courtyard/$LEVEL/g $HACKER/levels/castle_courtyard/leveldata.c > $HACKER_LEVEL/leveldata.c
sed s/castle_courtyard/$LEVEL/g $HACKER/levels/castle_courtyard/geo.c > $HACKER_LEVEL/geo.c
