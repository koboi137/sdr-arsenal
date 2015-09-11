/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "VarLogMeasConfig-r10.h"

static asn_TYPE_member_t asn_MBR_VarLogMeasConfig_r10_1[] = {
	{ ATF_POINTER, 1, offsetof(struct VarLogMeasConfig_r10, areaConfiguration_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AreaConfiguration_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"areaConfiguration-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarLogMeasConfig_r10, loggingDuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggingDuration_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggingDuration-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarLogMeasConfig_r10, loggingInterval_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggingInterval_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggingInterval-r10"
		},
};
static int asn_MAP_VarLogMeasConfig_r10_oms_1[] = { 0 };
static ber_tlv_tag_t asn_DEF_VarLogMeasConfig_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VarLogMeasConfig_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* areaConfiguration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggingDuration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* loggingInterval-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VarLogMeasConfig_r10_specs_1 = {
	sizeof(struct VarLogMeasConfig_r10),
	offsetof(struct VarLogMeasConfig_r10, _asn_ctx),
	asn_MAP_VarLogMeasConfig_r10_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_VarLogMeasConfig_r10_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VarLogMeasConfig_r10 = {
	"VarLogMeasConfig-r10",
	"VarLogMeasConfig-r10",
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
	asn_DEF_VarLogMeasConfig_r10_tags_1,
	sizeof(asn_DEF_VarLogMeasConfig_r10_tags_1)
		/sizeof(asn_DEF_VarLogMeasConfig_r10_tags_1[0]), /* 1 */
	asn_DEF_VarLogMeasConfig_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarLogMeasConfig_r10_tags_1)
		/sizeof(asn_DEF_VarLogMeasConfig_r10_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VarLogMeasConfig_r10_1,
	3,	/* Elements count */
	&asn_SPC_VarLogMeasConfig_r10_specs_1	/* Additional specs */
};

