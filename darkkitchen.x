struct cuisine{
    int idCuisine;
    string nomCuisine<30>;
    string adresse<50>;
    string ville<20>;
    int prix;
};

struct formulaire{
    int idClient;
    string nomClient<20>;
    string mail<40>;
    string tel<10>;
	string villeRes<30>;
    string nomResto<30>;
    int nbResto;
    string villeDest<30>;
};

struct justificatif{
    string assurance<30>;
    string formations<30>;
};

struct client{
    struct formulaire formulaire;
    struct justificatif justificatif;
};

struct formule{
    int idFormule;
    string nomFormule<15>;
    int nbCommandeMax;
    int prix;
};

struct location{
    struct formule formule;
    date date;
    struct client client;
	struct cuisine cuisine;
};

struct livraison{
    int idLivraison;
    string nomTypeLivraison<20>;
};

typedef string chaine<10>;
typedef chaine listClients[5];
typedef chaine listCuisines[5];
typedef chaine listDemande[5];
typedef chaine listLocationEnCours[5];
typedef chaine listLivraison[5];

program V1{
    version cuisine_v1{
        void INIT()=1;
        void ajoutClient(formulaire) = 2;
        int modifierClient(client) = 3;
        int modifierJustificatif(justificatif) =4;
		void ajoutCuisine(cuisine)=5; 
		int modifierCuisine(cuisine)=6;
		void initFormule(formule)=7;
		int modifierFormule(formule)=8;
		int analyseDemande(formulaire)=9;
		string statusDemande()=10;
		int ajoutLocation(location)=11;
		int delLocation(location)=12;
		string infoCuisine(cuisine)=13;
        string infoFormule(formule)=14;
        void initTypeLivraison(livraison)=15;
        string infoLivraison(livraison)=16;
        int selectionTypeLivraison(livraison)=17;

    }=1;
}=0x23456789;

