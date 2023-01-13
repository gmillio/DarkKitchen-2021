darkkitchen_svc.c
/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "darkkitchen.h"
#include <stdio.h>
#include <stdlib.h>
#include <rpc/pmap_clnt.h>
#include <string.h>
#include <memory.h>
#include <sys/socket.h>
#include <netinet/in.h>

#ifndef SIG_PF
#define SIG_PF void(*)(int)
#endif

static void
v1_1(struct svc_req *rqstp, register SVCXPRT *transp)
{
	union {
		formulaire ajoutclient_1_arg;
		client modifierclient_1_arg;
		justificatif modifierjustificatif_1_arg;
		cuisine ajoutcuisine_1_arg;
		cuisine modifiercuisine_1_arg;
		formule initformule_1_arg;
		formule modifierformule_1_arg;
		formulaire analysedemande_1_arg;
		location ajoutlocation_1_arg;
		location dellocation_1_arg;
		cuisine infocuisine_1_arg;
		formule infoformule_1_arg;
		livraison inittypelivraison_1_arg;
		livraison infolivraison_1_arg;
		livraison selectiontypelivraison_1_arg;
	} argument;
	char *result;
	xdrproc_t _xdr_argument, _xdr_result;
	char *(*local)(char *, struct svc_req *);

	switch (rqstp->rq_proc) {
	case NULLPROC:
		(void) svc_sendreply (transp, (xdrproc_t) xdr_void, (char *)NULL);
		return;

	case INIT:
		_xdr_argument = (xdrproc_t) xdr_void;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) init_1_svc;
		break;

	case ajoutClient:
		_xdr_argument = (xdrproc_t) xdr_formulaire;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) ajoutclient_1_svc;
		break;

	case modifierClient:
		_xdr_argument = (xdrproc_t) xdr_client;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) modifierclient_1_svc;
		break;

	case modifierJustificatif:
		_xdr_argument = (xdrproc_t) xdr_justificatif;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) modifierjustificatif_1_svc;
		break;

	case ajoutCuisine:
		_xdr_argument = (xdrproc_t) xdr_cuisine;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) ajoutcuisine_1_svc;
		break;

	case modifierCuisine:
		_xdr_argument = (xdrproc_t) xdr_cuisine;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) modifiercuisine_1_svc;
		break;

	case initFormule:
		_xdr_argument = (xdrproc_t) xdr_formule;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) initformule_1_svc;
		break;

	case modifierFormule:
		_xdr_argument = (xdrproc_t) xdr_formule;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) modifierformule_1_svc;
		break;

	case analyseDemande:
		_xdr_argument = (xdrproc_t) xdr_formulaire;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) analysedemande_1_svc;
		break;

	case statusDemande:
		_xdr_argument = (xdrproc_t) xdr_void;
		_xdr_result = (xdrproc_t) xdr_wrapstring;
		local = (char *(*)(char *, struct svc_req *)) statusdemande_1_svc;
		break;

	case ajoutLocation:
		_xdr_argument = (xdrproc_t) xdr_location;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) ajoutlocation_1_svc;
		break;

	case delLocation:
		_xdr_argument = (xdrproc_t) xdr_location;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) dellocation_1_svc;
		break;

	case infoCuisine:
		_xdr_argument = (xdrproc_t) xdr_cuisine;
		_xdr_result = (xdrproc_t) xdr_wrapstring;
		local = (char *(*)(char *, struct svc_req *)) infocuisine_1_svc;
		break;

	case infoFormule:
		_xdr_argument = (xdrproc_t) xdr_formule;
		_xdr_result = (xdrproc_t) xdr_wrapstring;
		local = (char *(*)(char *, struct svc_req *)) infoformule_1_svc;
		break;

	case initTypeLivraison:
		_xdr_argument = (xdrproc_t) xdr_livraison;
		_xdr_result = (xdrproc_t) xdr_void;
		local = (char *(*)(char *, struct svc_req *)) inittypelivraison_1_svc;
		break;

	case infoLivraison:
		_xdr_argument = (xdrproc_t) xdr_livraison;
		_xdr_result = (xdrproc_t) xdr_wrapstring;
		local = (char *(*)(char *, struct svc_req *)) infolivraison_1_svc;
		break;

	case selectionTypeLivraison:
		_xdr_argument = (xdrproc_t) xdr_livraison;
		_xdr_result = (xdrproc_t) xdr_int;
		local = (char *(*)(char *, struct svc_req *)) selectiontypelivraison_1_svc;
		break;

	default:
		svcerr_noproc (transp);
		return;
	}
	memset ((char *)&argument, 0, sizeof (argument));
	if (!svc_getargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		svcerr_decode (transp);
		return;
	}
	result = (*local)((char *)&argument, rqstp);
	if (result != NULL && !svc_sendreply(transp, (xdrproc_t) _xdr_result, result)) {
		svcerr_systemerr (transp);
	}
	if (!svc_freeargs (transp, (xdrproc_t) _xdr_argument, (caddr_t) &argument)) {
		fprintf (stderr, "%s", "unable to free arguments");
		exit (1);
	}
	return;
}

int
main (int argc, char **argv)
{
	register SVCXPRT *transp;

	pmap_unset (V1, cuisine_v1);

	transp = svcudp_create(RPC_ANYSOCK);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create udp service.");
		exit(1);
	}
	if (!svc_register(transp, V1, cuisine_v1, v1_1, IPPROTO_UDP)) {
		fprintf (stderr, "%s", "unable to register (V1, cuisine_v1, udp).");
		exit(1);
	}

	transp = svctcp_create(RPC_ANYSOCK, 0, 0);
	if (transp == NULL) {
		fprintf (stderr, "%s", "cannot create tcp service.");
		exit(1);
	}
	if (!svc_register(transp, V1, cuisine_v1, v1_1, IPPROTO_TCP)) {
		fprintf (stderr, "%s", "unable to register (V1, cuisine_v1, tcp).");
		exit(1);
	}

	svc_run ();
	fprintf (stderr, "%s", "svc_run returned");
	exit (1);
	/* NOTREACHED */
}