void insertionsort(int vetor[], int size){
  int chave, y, x;

  for(x = 1; x < size; x++){
    chave = vetor[x];

    for(y = x - 1; y >= 0 && vetor[y] > chave; y--){
      vetor[y+1] = vetor[y];
    }
    vetor[y+1] = chave;
  }
}

void bubblesort(int vet[], int size){
  int aux, i, j;

  for(i = size - 1; i > 0; i--){
    for(j = 0; j < size; j++){
      if(vet[j] > vet[j+1]){
        aux = vet[j];
        vet[j] = vet[j+1];
        vet[j+1] = aux;
      }
    }
  }
}
void selectionsort(int vet[], int tam){
  int aux, m, i, j;

  for(i = 0; i < tam; i++){
    m = i;
    for(j = i+1; j < tam; j++){
      if(vet[m] > vet[j]){
        m = j;
      }
    }
    aux = vet[i];
    vet[i] = vet[m];
    vet[m] = aux;
  }
}

void merge(int vetor[], int aux[], int inicio_1, int inicio_2, int fim2){
  int inc_1 = inicio_1;
  int inc_2 = inicio_2;
  int fim1 = inc_2-1;
  int aur = 0;
  int i;

  while(inc_1 <= fim1 && inc_2 <= fim2){
    if (vetor[inc_1] < vetor[inc_2]){
      aux[aur++] = vetor[inc_1++];
    } else {
      aux[aur++] = vetor[inc_2++];
    }
  }

  while(inc_1 <= fim1){
    aux[aur++] = vetor[inc_1++];
  }

  while(inc_2 <= fim2){
    aux[aur++] = vetor[inc_2++];
  }

  for(i = 0; i < aur; i++){
    vetor[i + inicio_1] = aux[i];
  }
}

void merge_sort (int vetor[], int aux[], int left, int right){
  int meio, i;
  if(left < right){
    meio = (left+right)/2;

    merge_sort(vetor, aux, left, meio);
    merge_sort(vetor, aux, meio +1, right);
    merge(vetor, aux, left, meio +1, right);
  }
}

// Faz a "troca" dos elementos
void swap(int* a, int* b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int arr[], int inicio, int fim)
{
  int pivo = arr[fim], j;
  int i = (inicio - 1);

  for (j = inicio; j <= fim- 1; j++)
  {
    if (arr[j] <= pivo)
    {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[fim]);
  return (i + 1);
}

void quickSort(int arr[], int inicio, int fim)
{
  if (inicio < fim) {
    int p = partition(arr, inicio, fim);

    quickSort(arr, inicio, p - 1);
    quickSort(arr, p + 1, fim);
  }
}
