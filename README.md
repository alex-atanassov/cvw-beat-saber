# Aalto University
# Coding Virtual Worlds - Assignment 2


This short document aims at presenting the features implemented for the second assignment of Coding Virtual Worlds. The assignment consists in a remake of the popular VR game "Beat Saber".

My implementation covers the following working functionalities:

 - Cubes are spawning (1 point): 
The scene uses one single spawner of cubes, that is able to spawn more types of cubes across more spawn points.
The spawner has a script that memorizes 4 types of cube prefabs (red/blue, directional/adirectional) and 4 different spawn points, and selects one prefab, one spawn point and the spawn orientation of the cube; the spawner has an 80% of probability to spawn one cube every two beats.

 - Sabers collide with Cubes (1 point):
Each saber can only slice a cube of the same color, and only if sliced in the right direction indicated by the arrow of the cube (unless the cube has a circle in the middle, in that case any direction is counted).

 - Cubes are moving musically (1 point):
The cubes spawn at a rate of one every 2*60/105 seconds (every two beats, not including the 80% probability of spawn).

## Extra features

 - Make cubes sometimes swap colors and destroy missed cubes (0.5 points):
Each cube color can spawn both on the left and on the right side; this feature is a consequence of how the spawner was programmed, as explained above in the first feature.
Missed cubes are instead destroyed programmatically after reaching a certain Z value, using the same technique as in Assignment 1.

 - Add lighting effects with glow, fog and postprocessing. (0.5 points):
The glow effect was implemented using the Post Processing Unity package: one GameObject has a Post-process Volume, used to set the Bloom effect, while the main camera has the Post-process Layer to make the effect visible.
The fog was instead created by playing around with the lighting settings of the scene.

 - Add cutting direction (1 point):
As mentioned before, there are both directional cubes (the ones with an arrow) and adirectional cubes (with a circle); the directional cubes can spawn in any of the 4 orientations possible. 
The slicing direction is calculated using the angle between the direction of movement of the saber and the Y axis of the cube's collider; if the angle is more than 130, the cube is sliced (see minute 8:42 of the tutorial at https://www.youtube.com/watch?v=gh4k0Q1Pl7E for reference drawing).
In the case of adirectional cubes, there are 4 child colliders that act the same way, each having a different Z rotation (multiple of 90 degrees), so that the cube can be sliced in any direction.

 - Add slicing in half animation (1 point):
This feature was implemented by following the scripts from the "Veggie Saber" tutorial provided by the professor (https://www.raywenderlich.com/4912095-veggie-saber-introduction-to-unity-development-with-the-oculus-quest).

 - Extra: Add slicing sound and haptics:
The sabers have an audio source with the original Beat Saber slicing sound, which get triggered at the same moment as the slicing animation; the code was also inspired by Veggie Saber.
Haptics were introduced by calling the method SendHapticImpulse of XRController (amplitude = 0.5, duration = 0.15), in the same code fragment where the slicing animation and sound are played.
