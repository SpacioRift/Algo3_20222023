void afficheClientsFichier(char *nomFichier) {
    FILE *f = fopen(nomFichier, "r");
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier %s", nomFichier);
        exit(1);
    }
    Client c;
    while (fscanf(f, "%d %s ", &c.id, c.nom) != EOF) {
        printf("%d %s ", c.id, c.nom);
    }

    fclose(f);
}