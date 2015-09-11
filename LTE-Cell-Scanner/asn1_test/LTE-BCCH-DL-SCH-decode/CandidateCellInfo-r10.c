/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "CandidateCellInfo-r10.h"

static asn_TYPE_member_t asn_MBR_CandidateCellInfo_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CandidateCellInfo_r10, physCellId_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physCellId-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CandidateCellInfo_r10, dl_CarrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CarrierFreq-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct CandidateCellInfo_r10, rsrpResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrpResult-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct CandidateCellInfo_r10, rsrqResult_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRQ_Range,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rsrqResult-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct CandidateCellInfo_r10, dl_CarrierFreq_v1090),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CarrierFreq-v1090"
		},
};
static int asn_MAP_CandidateCellInfo_r10_oms_1[] = { 2, 3, 4 };
static ber_tlv_tag_t asn_DEF_CandidateCellInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CandidateCellInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dl-CarrierFreq-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rsrpResult-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rsrqResult-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* dl-CarrierFreq-v1090 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CandidateCellInfo_r10_specs_1 = {
	sizeof(struct CandidateCellInfo_r10),
	offsetof(struct CandidateCellInfo_r10, _asn_ctx),
	asn_MAP_CandidateCellInfo_r10_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_CandidateCellInfo_r10_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	3,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CandidateCellInfo_r10 = {
	"CandidateCellInfo-r10",
	"CandidateCellInfo-r10",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CandidateCellInfo_r10_tags_1,
	sizeof(asn_DEF_CandidateCellInfo_r10_tags_1)
		/sizeof(asn_DEF_CandidateCellInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_CandidateCellInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CandidateCellInfo_r10_tags_1)
		/sizeof(asn_DEF_CandidateCellInfo_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CandidateCellInfo_r10_1,
	5,	/* Elements count */
	&asn_SPC_CandidateCellInfo_r10_specs_1	/* Additional specs */
};

