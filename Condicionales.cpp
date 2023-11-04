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
	
