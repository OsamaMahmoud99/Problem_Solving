#include <stdio.h>
#include <stdlib.h>


typedef struct box
{
    int length;
    int width;
    int height;
}box;

int get_volume(box b) {
	
    int volume = (b.length)*(b.width)*(b.height);
    return volume;
	
}

int is_lower_than_max_height(box b) {
    int MAX_Height = 41;
    int status=0;
    if(b.height >= MAX_Height)
    {
      status = 0;
    }
	else {
      status = 1;
    }
    return status;
	
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}