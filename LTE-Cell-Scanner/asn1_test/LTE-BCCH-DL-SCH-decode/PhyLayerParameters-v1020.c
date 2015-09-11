/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "PhyLayerParameters-v1020.h"

static int
twoAntennaPortsForPUCCH_r10_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
twoAntennaPortsForPUCCH_r10_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
twoAntennaPortsForPUCCH_r10_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	twoAntennaPortsForPUCCH_r10_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
twoAntennaPortsForPUCCH_r10_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	twoAntennaPortsForPUCCH_r10_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
twoAntennaPortsForPUCCH_r10_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	twoAntennaPortsForPUCCH_r10_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
twoAntennaPortsForPUCCH_r10_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	twoAntennaPortsForPUCCH_r10_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
twoAntennaPortsForPUCCH_r10_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	twoAntennaPortsForPUCCH_r10_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
twoAntennaPortsForPUCCH_r10_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	twoAntennaPortsForPUCCH_r10_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
twoAntennaPortsForPUCCH_r10_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	twoAntennaPortsForPUCCH_r10_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
twoAntennaPortsForPUCCH_r10_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	twoAntennaPortsForPUCCH_r10_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
tm9_With_8Tx_FDD_r10_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
tm9_With_8Tx_FDD_r10_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
tm9_With_8Tx_FDD_r10_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	tm9_With_8Tx_FDD_r10_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
tm9_With_8Tx_FDD_r10_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	tm9_With_8Tx_FDD_r10_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
tm9_With_8Tx_FDD_r10_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	tm9_With_8Tx_FDD_r10_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
tm9_With_8Tx_FDD_r10_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tm9_With_8Tx_FDD_r10_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
tm9_With_8Tx_FDD_r10_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	tm9_With_8Tx_FDD_r10_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
tm9_With_8Tx_FDD_r10_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	tm9_With_8Tx_FDD_r10_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
tm9_With_8Tx_FDD_r10_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	tm9_With_8Tx_FDD_r10_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
tm9_With_8Tx_FDD_r10_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	tm9_With_8Tx_FDD_r10_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
pmi_Disabling_r10_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
pmi_Disabling_r10_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
pmi_Disabling_r10_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	pmi_Disabling_r10_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
pmi_Disabling_r10_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	pmi_Disabling_r10_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
pmi_Disabling_r10_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	pmi_Disabling_r10_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
pmi_Disabling_r10_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	pmi_Disabling_r10_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
pmi_Disabling_r10_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	pmi_Disabling_r10_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
pmi_Disabling_r10_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	pmi_Disabling_r10_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
pmi_Disabling_r10_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	pmi_Disabling_r10_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
pmi_Disabling_r10_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	pmi_Disabling_r10_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
crossCarrierScheduling_r10_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
crossCarrierScheduling_r10_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
crossCarrierScheduling_r10_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	crossCarrierScheduling_r10_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
crossCarrierScheduling_r10_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	crossCarrierScheduling_r10_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
crossCarrierScheduling_r10_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	crossCarrierScheduling_r10_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
crossCarrierScheduling_r10_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	crossCarrierScheduling_r10_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
crossCarrierScheduling_r10_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	crossCarrierScheduling_r10_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
crossCarrierScheduling_r10_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	crossCarrierScheduling_r10_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
crossCarrierScheduling_r10_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	crossCarrierScheduling_r10_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
crossCarrierScheduling_r10_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	crossCarrierScheduling_r10_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
simultaneousPUCCH_PUSCH_r10_10_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
simultaneousPUCCH_PUSCH_r10_10_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
simultaneousPUCCH_PUSCH_r10_10_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	simultaneousPUCCH_PUSCH_r10_10_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
simultaneousPUCCH_PUSCH_r10_10_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	simultaneousPUCCH_PUSCH_r10_10_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
simultaneousPUCCH_PUSCH_r10_10_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	simultaneousPUCCH_PUSCH_r10_10_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
simultaneousPUCCH_PUSCH_r10_10_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	simultaneousPUCCH_PUSCH_r10_10_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
simultaneousPUCCH_PUSCH_r10_10_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	simultaneousPUCCH_PUSCH_r10_10_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
simultaneousPUCCH_PUSCH_r10_10_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	simultaneousPUCCH_PUSCH_r10_10_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
simultaneousPUCCH_PUSCH_r10_10_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	simultaneousPUCCH_PUSCH_r10_10_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
simultaneousPUCCH_PUSCH_r10_10_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	simultaneousPUCCH_PUSCH_r10_10_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
multiClusterPUSCH_WithinCC_r10_12_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
multiClusterPUSCH_WithinCC_r10_12_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
multiClusterPUSCH_WithinCC_r10_12_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	multiClusterPUSCH_WithinCC_r10_12_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
multiClusterPUSCH_WithinCC_r10_12_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	multiClusterPUSCH_WithinCC_r10_12_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
multiClusterPUSCH_WithinCC_r10_12_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	multiClusterPUSCH_WithinCC_r10_12_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
multiClusterPUSCH_WithinCC_r10_12_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	multiClusterPUSCH_WithinCC_r10_12_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
multiClusterPUSCH_WithinCC_r10_12_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	multiClusterPUSCH_WithinCC_r10_12_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
multiClusterPUSCH_WithinCC_r10_12_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	multiClusterPUSCH_WithinCC_r10_12_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
multiClusterPUSCH_WithinCC_r10_12_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	multiClusterPUSCH_WithinCC_r10_12_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
multiClusterPUSCH_WithinCC_r10_12_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	multiClusterPUSCH_WithinCC_r10_12_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_twoAntennaPortsForPUCCH_r10_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_tm9_With_8Tx_FDD_r10_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_pmi_Disabling_r10_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_crossCarrierScheduling_r10_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_simultaneousPUCCH_PUSCH_r10_constr_10 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_multiClusterPUSCH_WithinCC_r10_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_twoAntennaPortsForPUCCH_r10_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_twoAntennaPortsForPUCCH_r10_enum2value_2[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_twoAntennaPortsForPUCCH_r10_specs_2 = {
	asn_MAP_twoAntennaPortsForPUCCH_r10_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_twoAntennaPortsForPUCCH_r10_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoAntennaPortsForPUCCH_r10_2 = {
	"twoAntennaPortsForPUCCH-r10",
	"twoAntennaPortsForPUCCH-r10",
	twoAntennaPortsForPUCCH_r10_2_free,
	twoAntennaPortsForPUCCH_r10_2_print,
	twoAntennaPortsForPUCCH_r10_2_constraint,
	twoAntennaPortsForPUCCH_r10_2_decode_ber,
	twoAntennaPortsForPUCCH_r10_2_encode_der,
	twoAntennaPortsForPUCCH_r10_2_decode_xer,
	twoAntennaPortsForPUCCH_r10_2_encode_xer,
	twoAntennaPortsForPUCCH_r10_2_decode_uper,
	twoAntennaPortsForPUCCH_r10_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2,
	sizeof(asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2)
		/sizeof(asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2)
		/sizeof(asn_DEF_twoAntennaPortsForPUCCH_r10_tags_2[0]), /* 2 */
	&asn_PER_type_twoAntennaPortsForPUCCH_r10_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoAntennaPortsForPUCCH_r10_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_tm9_With_8Tx_FDD_r10_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_tm9_With_8Tx_FDD_r10_enum2value_4[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_tm9_With_8Tx_FDD_r10_specs_4 = {
	asn_MAP_tm9_With_8Tx_FDD_r10_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_tm9_With_8Tx_FDD_r10_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_tm9_With_8Tx_FDD_r10_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tm9_With_8Tx_FDD_r10_4 = {
	"tm9-With-8Tx-FDD-r10",
	"tm9-With-8Tx-FDD-r10",
	tm9_With_8Tx_FDD_r10_4_free,
	tm9_With_8Tx_FDD_r10_4_print,
	tm9_With_8Tx_FDD_r10_4_constraint,
	tm9_With_8Tx_FDD_r10_4_decode_ber,
	tm9_With_8Tx_FDD_r10_4_encode_der,
	tm9_With_8Tx_FDD_r10_4_decode_xer,
	tm9_With_8Tx_FDD_r10_4_encode_xer,
	tm9_With_8Tx_FDD_r10_4_decode_uper,
	tm9_With_8Tx_FDD_r10_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_tm9_With_8Tx_FDD_r10_tags_4,
	sizeof(asn_DEF_tm9_With_8Tx_FDD_r10_tags_4)
		/sizeof(asn_DEF_tm9_With_8Tx_FDD_r10_tags_4[0]) - 1, /* 1 */
	asn_DEF_tm9_With_8Tx_FDD_r10_tags_4,	/* Same as above */
	sizeof(asn_DEF_tm9_With_8Tx_FDD_r10_tags_4)
		/sizeof(asn_DEF_tm9_With_8Tx_FDD_r10_tags_4[0]), /* 2 */
	&asn_PER_type_tm9_With_8Tx_FDD_r10_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tm9_With_8Tx_FDD_r10_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_pmi_Disabling_r10_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_pmi_Disabling_r10_enum2value_6[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_pmi_Disabling_r10_specs_6 = {
	asn_MAP_pmi_Disabling_r10_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_pmi_Disabling_r10_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_pmi_Disabling_r10_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pmi_Disabling_r10_6 = {
	"pmi-Disabling-r10",
	"pmi-Disabling-r10",
	pmi_Disabling_r10_6_free,
	pmi_Disabling_r10_6_print,
	pmi_Disabling_r10_6_constraint,
	pmi_Disabling_r10_6_decode_ber,
	pmi_Disabling_r10_6_encode_der,
	pmi_Disabling_r10_6_decode_xer,
	pmi_Disabling_r10_6_encode_xer,
	pmi_Disabling_r10_6_decode_uper,
	pmi_Disabling_r10_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_pmi_Disabling_r10_tags_6,
	sizeof(asn_DEF_pmi_Disabling_r10_tags_6)
		/sizeof(asn_DEF_pmi_Disabling_r10_tags_6[0]) - 1, /* 1 */
	asn_DEF_pmi_Disabling_r10_tags_6,	/* Same as above */
	sizeof(asn_DEF_pmi_Disabling_r10_tags_6)
		/sizeof(asn_DEF_pmi_Disabling_r10_tags_6[0]), /* 2 */
	&asn_PER_type_pmi_Disabling_r10_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_pmi_Disabling_r10_specs_6	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_crossCarrierScheduling_r10_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_crossCarrierScheduling_r10_enum2value_8[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_crossCarrierScheduling_r10_specs_8 = {
	asn_MAP_crossCarrierScheduling_r10_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_crossCarrierScheduling_r10_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_crossCarrierScheduling_r10_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_crossCarrierScheduling_r10_8 = {
	"crossCarrierScheduling-r10",
	"crossCarrierScheduling-r10",
	crossCarrierScheduling_r10_8_free,
	crossCarrierScheduling_r10_8_print,
	crossCarrierScheduling_r10_8_constraint,
	crossCarrierScheduling_r10_8_decode_ber,
	crossCarrierScheduling_r10_8_encode_der,
	crossCarrierScheduling_r10_8_decode_xer,
	crossCarrierScheduling_r10_8_encode_xer,
	crossCarrierScheduling_r10_8_decode_uper,
	crossCarrierScheduling_r10_8_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_crossCarrierScheduling_r10_tags_8,
	sizeof(asn_DEF_crossCarrierScheduling_r10_tags_8)
		/sizeof(asn_DEF_crossCarrierScheduling_r10_tags_8[0]) - 1, /* 1 */
	asn_DEF_crossCarrierScheduling_r10_tags_8,	/* Same as above */
	sizeof(asn_DEF_crossCarrierScheduling_r10_tags_8)
		/sizeof(asn_DEF_crossCarrierScheduling_r10_tags_8[0]), /* 2 */
	&asn_PER_type_crossCarrierScheduling_r10_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_crossCarrierScheduling_r10_specs_8	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_simultaneousPUCCH_PUSCH_r10_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_simultaneousPUCCH_PUSCH_r10_enum2value_10[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_simultaneousPUCCH_PUSCH_r10_specs_10 = {
	asn_MAP_simultaneousPUCCH_PUSCH_r10_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_simultaneousPUCCH_PUSCH_r10_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_simultaneousPUCCH_PUSCH_r10_10 = {
	"simultaneousPUCCH-PUSCH-r10",
	"simultaneousPUCCH-PUSCH-r10",
	simultaneousPUCCH_PUSCH_r10_10_free,
	simultaneousPUCCH_PUSCH_r10_10_print,
	simultaneousPUCCH_PUSCH_r10_10_constraint,
	simultaneousPUCCH_PUSCH_r10_10_decode_ber,
	simultaneousPUCCH_PUSCH_r10_10_encode_der,
	simultaneousPUCCH_PUSCH_r10_10_decode_xer,
	simultaneousPUCCH_PUSCH_r10_10_encode_xer,
	simultaneousPUCCH_PUSCH_r10_10_decode_uper,
	simultaneousPUCCH_PUSCH_r10_10_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10,
	sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10)
		/sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10[0]) - 1, /* 1 */
	asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10,	/* Same as above */
	sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10)
		/sizeof(asn_DEF_simultaneousPUCCH_PUSCH_r10_tags_10[0]), /* 2 */
	&asn_PER_type_simultaneousPUCCH_PUSCH_r10_constr_10,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_simultaneousPUCCH_PUSCH_r10_specs_10	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_multiClusterPUSCH_WithinCC_r10_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static unsigned int asn_MAP_multiClusterPUSCH_WithinCC_r10_enum2value_12[] = {
	0	/* supported(0) */
};
static asn_INTEGER_specifics_t asn_SPC_multiClusterPUSCH_WithinCC_r10_specs_12 = {
	asn_MAP_multiClusterPUSCH_WithinCC_r10_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_multiClusterPUSCH_WithinCC_r10_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multiClusterPUSCH_WithinCC_r10_12 = {
	"multiClusterPUSCH-WithinCC-r10",
	"multiClusterPUSCH-WithinCC-r10",
	multiClusterPUSCH_WithinCC_r10_12_free,
	multiClusterPUSCH_WithinCC_r10_12_print,
	multiClusterPUSCH_WithinCC_r10_12_constraint,
	multiClusterPUSCH_WithinCC_r10_12_decode_ber,
	multiClusterPUSCH_WithinCC_r10_12_encode_der,
	multiClusterPUSCH_WithinCC_r10_12_decode_xer,
	multiClusterPUSCH_WithinCC_r10_12_encode_xer,
	multiClusterPUSCH_WithinCC_r10_12_decode_uper,
	multiClusterPUSCH_WithinCC_r10_12_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12,
	sizeof(asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12)
		/sizeof(asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12[0]) - 1, /* 1 */
	asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12,	/* Same as above */
	sizeof(asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12)
		/sizeof(asn_DEF_multiClusterPUSCH_WithinCC_r10_tags_12[0]), /* 2 */
	&asn_PER_type_multiClusterPUSCH_WithinCC_r10_constr_12,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multiClusterPUSCH_WithinCC_r10_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1020_1[] = {
	{ ATF_POINTER, 7, offsetof(struct PhyLayerParameters_v1020, twoAntennaPortsForPUCCH_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoAntennaPortsForPUCCH_r10_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"twoAntennaPortsForPUCCH-r10"
		},
	{ ATF_POINTER, 6, offsetof(struct PhyLayerParameters_v1020, tm9_With_8Tx_FDD_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tm9_With_8Tx_FDD_r10_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tm9-With-8Tx-FDD-r10"
		},
	{ ATF_POINTER, 5, offsetof(struct PhyLayerParameters_v1020, pmi_Disabling_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_pmi_Disabling_r10_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pmi-Disabling-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct PhyLayerParameters_v1020, crossCarrierScheduling_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_crossCarrierScheduling_r10_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"crossCarrierScheduling-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct PhyLayerParameters_v1020, simultaneousPUCCH_PUSCH_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_simultaneousPUCCH_PUSCH_r10_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"simultaneousPUCCH-PUSCH-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PhyLayerParameters_v1020, multiClusterPUSCH_WithinCC_r10),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multiClusterPUSCH_WithinCC_r10_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"multiClusterPUSCH-WithinCC-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct PhyLayerParameters_v1020, nonContiguousUL_RA_WithinCC_List_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NonContiguousUL_RA_WithinCC_List_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonContiguousUL-RA-WithinCC-List-r10"
		},
};
static int asn_MAP_PhyLayerParameters_v1020_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static ber_tlv_tag_t asn_DEF_PhyLayerParameters_v1020_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PhyLayerParameters_v1020_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* twoAntennaPortsForPUCCH-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tm9-With-8Tx-FDD-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pmi-Disabling-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* crossCarrierScheduling-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* simultaneousPUCCH-PUSCH-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* multiClusterPUSCH-WithinCC-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* nonContiguousUL-RA-WithinCC-List-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1020_specs_1 = {
	sizeof(struct PhyLayerParameters_v1020),
	offsetof(struct PhyLayerParameters_v1020, _asn_ctx),
	asn_MAP_PhyLayerParameters_v1020_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_PhyLayerParameters_v1020_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1020 = {
	"PhyLayerParameters-v1020",
	"PhyLayerParameters-v1020",
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
	asn_DEF_PhyLayerParameters_v1020_tags_1,
	sizeof(asn_DEF_PhyLayerParameters_v1020_tags_1)
		/sizeof(asn_DEF_PhyLayerParameters_v1020_tags_1[0]), /* 1 */
	asn_DEF_PhyLayerParameters_v1020_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhyLayerParameters_v1020_tags_1)
		/sizeof(asn_DEF_PhyLayerParameters_v1020_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhyLayerParameters_v1020_1,
	7,	/* Elements count */
	&asn_SPC_PhyLayerParameters_v1020_specs_1	/* Additional specs */
};

