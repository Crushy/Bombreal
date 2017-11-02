# Bombreal

A small Bomberman clone built using unreal. Took around 12 hours to make. All assets are either provided by unity or created by me except for the custom InputKey used to get keyboard input on the second player sourced from https://wiki.unrealengine.com/Local_Multiplayer_Tips 

# Future work
Missing win/lose screens, reseting the level and remote mine powerup.

Some time in the future I would like to figure out how the first player is spawned in unreal so I don't have to spawn the second player separately. Ideally this would also make the win/lose screens and keeping track of the currently live players a lot easier. 

The PlayerControllers could perhaps benefit from being implemented in C++ so implementing more players won't result in the current (rather messy) branching and geting a player index.
