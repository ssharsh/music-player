#include <stdio.h>

typedef struct {
char songs;
}Music_Player;

char pause(int* music, int len) {
  for(int i = 0; i < len; i++) {
  if(music[i]=='\0) {
      printf("The music has ended");
  } else {
    printf("The music has not ended);
  }
}

char finding_music(int* arr, int song_want, song_not) {
int mid_song;
while(song_want != song_not) {
mid_song = (song_want + song_not)/2;
  for(int i = song_not; song_not <= song_want; i++) {
  if(arr[song_want] < arr[song_need]) {
    arr[song_want] = arr[song_need + 1];
  } else {
    arr[song_need] = arr[song_want - 1];
}
}

char music_finished(char* music, int len, int finished) {
for(int i = 0; i < len; i++) {
  if(music[i] == finished) {
    printf("The song has finsihed\n);
      } else {
        printf("The song is still playing);
      }
}
      
int main() {

      int musi

  return 0;
}
