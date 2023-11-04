vector<int> Torneo(vector<int> habilidades, int N, int K) {
	// se declara una cola para los jugadores restantes
	queue<int> cola;
	
	// la cola se llena con las habilidades
	for (size_t i = 2; i < habilidades.size(); ++i) {
		cola.push(habilidades[i]);
	}
  
// se inicializa las variables para tener un registro de gamesWon y de los jugadores
	int gamesWon = 0;
	int jugadorActual = habilidades[0];
	int jugadorRival = habilidades[1];
	
}
