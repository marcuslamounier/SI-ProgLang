const IMC = Peso / (Altura * Altura)

if (IMC >= 30) {
	console.log('Obesidade')
} else if (IMC >= 25) {
	console.log('Sobrepeso')
} else if (IMC >= 18.5) {
	console.log('Peso Normal')
} else {
	console.log('Baixo peso')
}