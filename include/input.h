#ifndef INPUT_H
#define INPUT_H

extern int keysPres, keysHold, keysReleased;
extern styluspos_t stylus, oldStylus;
void updateInput(void);
bool TouchinArea(int x, int y, int x2, int y2);
bool TouchedArea(int x, int y, int x2, int y2);

#endif
