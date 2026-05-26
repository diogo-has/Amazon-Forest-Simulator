#pragma once

namespace Listas {
	
	template<class TL>
	class Lista 
	{
		public:
			Lista() : pPrim(NULL), pUlt(NULL), tam(0) {}
			~Lista() { limpar(); }
			template <class TE>
			class Elemento {

				private:
					Elemento<TE>* pProx;
					TE* pinfo;
				public:
					Elemento() :pProx(NULL), pinfo(NULL) {}
					~Elemento() { }
					void setProx(Elemento<TE>* pE)
					{
						if (pE)
						{
							pProx = pE;
						}
					}
					Elemento<TE>* getProx() const { return pProx; }
					void setInfo(TE* pi)
					{
						if (pi)
						{
							pinfo = pi;
						}

					}
					TE* getInfo() const { return pinfo; }
			};
            //template <class TE>
            class Iterator
            {
                private:
                    Elemento* atual;
                public:
                    Iterator(Elemento* pa = NULL) : atual(pa) {}
                    ~Iterator() {}
                    Iterator& operator++()
                    {
                        atual = atual->pProx;
                        return *this;
                    }
                    Iterator& operator++(int)
                    {
                        atual = atual->pProx;
                        return *this;
                    }
                    bool operator==(const Elemento* pe) const
                    {
                        return atual == pe;
                    }

                    bool operator!=(const Elemento* pe) const
                    {
                        return !(atual == pe);
                    }
                    void operator=(const Elemento* pe)
                    {
                        atual = pe;
                    }
                    const Elemento* getAtual() const { return atual; }
            };
			private:
				Elemento<TL>* pPrim;
				Elemento<TL>* pUlt;
				int tam;
			public:
				void incluir(Elemento<TL>* pElem)
				{
					if (pElem)
					{
						Elemento<TL>* aux = new Elemento<TL>();
						if (aux)
						{
							aux->setInfo(pElem);
							if (!pPrim)
							{
								pPrim = aux;
								pUlt = pPrim;
								tam++;
							}
							else
							{
								pUlt->setProx(aux);
								pUlt = aux;
								tam++;

							}

						}
					}
					else { return; }
				}
				void limpar()
				{
					Elemento<TL>* aux = NULL;
					while (pPrim)
					{
						aux = pPrim;
						pPrim = pPrim->getProx();
						delete aux;

					}
					tam = 0;
					pPrim = NULL;
					pUlt = NULL;
				}
				void inicializa() 
				{
					pPrim = NULL;
					pUlt = NULL;
					tam = 0;
				}
				Elemento<TL>* begin() {

					return pPrim;
				}
				Elemento<TL>* end() {

					return pUlt->getProx();
				}
	};

}