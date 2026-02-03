// O(n)
for(int i = 0; i < n; i++) { ... }

// O(n^2)
for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) { ... }

// O(log n)
while(n > 0) { n = n / 2; }

// O(n log n)
merge_sort(array, n);
