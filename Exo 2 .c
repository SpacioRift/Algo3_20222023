void ajouteClientFichier(Client c, char *nomFichier) {
    FILE *f = fopen(nomFichier, "a");
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier %s", nomFichier);
        exit(1);
    }
    fprintf(f, "%d %s ", c.id, c.nom);
    fclose(f);
}