void appartientClientFichier(char *nomClient, char *nomFichier) {
    FILE *f = fopen(nomFichier, "r");
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier %s", nomFichier);
        exit(1);
    }
    Client c;
    int trouve = 0;
    while (fscanf(f, "%d %s ", &c.id, c.nom) != EOF) {
        if (strcmp(c.nom, nomClient) == 0) {
            printf("%d %s ", c.id, c.nom);
            trouve = 1;
        }
    }
    if (trouve == 0) {
        printf("Client non répertorié");
    }
    fclose(f);
}