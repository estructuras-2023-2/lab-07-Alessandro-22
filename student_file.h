#include <vector>
#include <queue>

using namespace std;

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
	

	// Inicializar un vector para almacenar el resultado de los juegos.
	vector<int> resultado(2);
	
	for (int game = 1; game <= K; game++) {
		// se verifica si el jugador actua tiene menor habilidad que el rival
		if (jugadorActual < jugadorRival) {
			gamesWon = 1;
			resultado = {jugadorActual, jugadorRival};
			// se mueve el jugador actual a la cola y se actualiza el jugador actual
			cola.push(jugadorActual);
			jugadorActual = jugadorRival;
		} else {
			gamesWon++;
			// Se actualiza el resultado y se mueve al rival a la cola
			resultado = {jugadorRival, jugadorActual};
			cola.push(jugadorRival);
		}
		
		if (gamesWon == N) {
			cola.push(jugadorActual);
			jugadorActual = cola.front();
			cola.pop();
			gamesWon = 0;
		}
		
		// se actualiza el rival para otro juego
		jugadorRival = cola.front();
		cola.pop();
	}
	

	return resultado;
}
