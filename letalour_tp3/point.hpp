#ifndef POINT_H

#define POINT_H


// classe Point
class Point{
	
	public:
		Point(); //constructeur par défaut
		Point(int x, int y); // constructeur avec parametres
		Point(const Point &other); // constructeur par copie
		
		//methode publiques
		inline int getX(){
			return mX;
		}
		inline int getY(){
			return mY;
		}
		inline void setX(int x){
			mX = x;
		}
		inline void setY(int y){
			mY = y;
		}
		void affiche();

		bool testEgal(Point const& b) const;

		double norme();
	
	private:
		int mX;
		int mY; // le m sert a différencier les attributs d'une classe par rapport
				// à une variable classique.
	
};

inline bool operator==(Point const& a, Point const& b){
	return a.testEgal(b);
}



// classe NuagedePoints
class NuageDePoints{
	int taille;
	Point *nuage; //tableau
	public:
		NuageDePoints(int nbPoints); //constructeur

		//methodes publiques
		int getTaille();
		
		void affiche();

		Point barycentre();

};


#endif
