/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "VarRLF-Report-r11.h"

static asn_TYPE_member_t asn_MBR_VarRLF_Report_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct VarRLF_Report_r11, rlf_Report_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLF_Report_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlf-Report-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct VarRLF_Report_r11, plmn_IdentityList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMN_IdentityList3_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"plmn-IdentityList-r11"
		},
};
static ber_tlv_tag_t asn_DEF_VarRLF_Report_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_VarRLF_Report_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlf-Report-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* plmn-IdentityList-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_VarRLF_Report_r11_specs_1 = {
	sizeof(struct VarRLF_Report_r11),
	offsetof(struct VarRLF_Report_r11, _asn_ctx),
	asn_MAP_VarRLF_Report_r11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_VarRLF_Report_r11 = {
	"VarRLF-Report-r11",
	"VarRLF-Report-r11",
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
	asn_DEF_VarRLF_Report_r11_tags_1,
	sizeof(asn_DEF_VarRLF_Report_r11_tags_1)
		/sizeof(asn_DEF_VarRLF_Report_r11_tags_1[0]), /* 1 */
	asn_DEF_VarRLF_Report_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_VarRLF_Report_r11_tags_1)
		/sizeof(asn_DEF_VarRLF_Report_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_VarRLF_Report_r11_1,
	2,	/* Elements count */
	&asn_SPC_VarRLF_Report_r11_specs_1	/* Additional specs */
};

