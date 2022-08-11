#include<stdio.h>

//CODE 9.1
int left(int i)
{
    return 2 * i;
}

int right(int i)
{
    return 2 * i + 1;
}

int parent(int i)
{
    return i / 2;
}

//CODE 9.2
int is_max_heap(int H[], int heap_size)
{
    int i, p;

    for(i = heap_size; i > 1; i--)
    {
        p = parent(i);
        //printf("i = %d, p = %d\tH[i] = %d, H[p] = %d\n", i, p, H[i], H[p]);

        if(H[p] < H[i])
        {
            return 0;
        }
    }
    return 1;
}

//CODE 9.3
void max_heapify(int heap[], int heap_size, int i)
{
    int l, r, largest, t;

    l = left(i);
    r= right(i);

    if(l <= heap_size && heap[l] > heap[i])
    {
        largest = l;
    } else
    {
        largest = i;
    }

    if(r <= heap_size && heap[r] > heap[largest])
    {
        largest = r;
    }

    if(largest != i)
    {
        t = heap[i];
        heap[i] = heap[largest];
        heap[largest] = t;

        max_heapify(heap, heap_size, largest);
    }
}

//CODE 9.5
void build_max_heap (int heap[], int heap_size)
{
    int i;
    for(i = heap_size / 2; i >= 1; i--)
    {
        max_heapify(heap, heap_size, i);
    }
}

//CODE 9.6
void heap_sort(int heap[], int heap_size)
{
    int i, t;

    for(i = heap_size; i > 1; i--)
    {
        t = heap[1];
        heap[1] = heap[i];
        heap[i] = t;
        heap_size -= 1;
        max_heapify(heap, heap_size, 1);
    }
}

//CODE 9.4
void print_heap(int heap[], int heap_size)
{
    int i;

    for(i = 1; i <= heap_size; i++)
    {
        printf("%d ", heap[i]);
    }
    printf("\n\n");
}

int main()
{
    int heap_size = 9;
    int heap[] = {0, 19, 7, 17, 3, 5, 12, 10, 1, 2};

    printf("Printing Heap: ");
    is_max_heap(heap, heap_size);
    print_heap(heap, heap_size);

    printf("Check Heap: ");
    max_heapify(heap, heap_size, 3);
    print_heap(heap, heap_size);

    printf("Build Max Heap: ");
    build_max_heap(heap, heap_size);
    print_heap(heap, heap_size);

    printf("Sorting Heap: ");
    heap_sort(heap, heap_size);
    print_heap(heap, heap_size);

    return 0;
}
