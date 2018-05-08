#ifndef _PRODUTO_HPP_
#define _PRODUTO_HPP_
#include <string>

class Produto{
	public:
		std::string nome;
		float preco;
		std::string marca;
		std::string descricao;
		std::string dataFabricacao;
	
		void setNome(std::string nome);
		void setPreco(float preco);
		void setMarca(std::string marca);
		void setDescricao(std::string descricao);
		void setDataFabricacao(std::string dataFabricacao);
};

#endif