#include <stdio.h>

// ERRADA
void navegacao(int lat, int lon) {
    lat = lat - 1;
    lon = lon + 1;
}

// CERTA
void navegacao(int *lat, int *lon) {
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main() {
    int latitude, longitude;

    printf("Latitude: ");
    scanf("%d", &latitude);

    printf("Longitude: ");
    scanf("%d", &longitude);

    navegacao(&latitude, &longitude);

    printf("Novas coordenadas: \nLatitude: %d\nLongitude: %d", latitude, longitude);

    return 0;
}
