# Generated by devtools/yamaker from nixpkgs 980c4c3c2f664ccc5002f7fd6e08059cf1f00e75.
 
LIBRARY() 
 
OWNER(
    orivej
    g:cpp-contrib
)
 
VERSION(0.10.23) 
 
ORIGINAL_SOURCE(https://github.com/awslabs/s2n/archive/v0.10.23.tar.gz)
 
LICENSE(
    Apache-2.0 AND
    MIT AND
    Public-Domain
)

LICENSE_TEXTS(.yandex_meta/licenses.list.txt)

PEERDIR( 
    contrib/libs/openssl 
) 
 
ADDINCL( 
    GLOBAL contrib/restricted/aws/s2n 
    GLOBAL contrib/restricted/aws/s2n/api 
) 
 
NO_COMPILER_WARNINGS() 
 
NO_RUNTIME() 
 
CFLAGS( 
    -DS2N_ADX 
    -D_POSIX_C_SOURCE=200809L 
) 
 
IF (NOT MUSL) 
    CFLAGS( 
        -DS2N_HAVE_EXECINFO 
    ) 
ENDIF() 
 
IF (OS_LINUX) 
    CFLAGS( 
        -DS2N_SIKEP434R2_ASM 
    ) 
    SRCS( 
        pq-crypto/sike_r2/sikep434r2_fp_x64_asm.S 
    ) 
ENDIF() 
 
IF (ARCH_X86_64)
    CFLAGS(
        -DS2N_CPUID_AVAILABLE
    )
ENDIF()

SRCS( 
    crypto/s2n_aead_cipher_aes_gcm.c 
    crypto/s2n_aead_cipher_chacha20_poly1305.c 
    crypto/s2n_cbc_cipher_3des.c 
    crypto/s2n_cbc_cipher_aes.c 
    crypto/s2n_certificate.c 
    crypto/s2n_cipher.c 
    crypto/s2n_composite_cipher_aes_sha.c 
    crypto/s2n_dhe.c 
    crypto/s2n_drbg.c 
    crypto/s2n_ecc_evp.c 
    crypto/s2n_ecdsa.c 
    crypto/s2n_evp.c 
    crypto/s2n_fips.c 
    crypto/s2n_hash.c 
    crypto/s2n_hkdf.c 
    crypto/s2n_hmac.c 
    crypto/s2n_pkey.c 
    crypto/s2n_rsa.c 
    crypto/s2n_rsa_pss.c 
    crypto/s2n_rsa_signing.c 
    crypto/s2n_sequence.c 
    crypto/s2n_stream_cipher_null.c 
    crypto/s2n_stream_cipher_rc4.c 
    crypto/s2n_tls13_keys.c 
    error/s2n_errno.c 
    pq-crypto/bike_r1/aes_ctr_prf.c 
    pq-crypto/bike_r1/bike_r1_kem.c 
    pq-crypto/bike_r1/converts_portable.c 
    pq-crypto/bike_r1/decode.c 
    pq-crypto/bike_r1/error.c 
    pq-crypto/bike_r1/gf2x_mul.c 
    pq-crypto/bike_r1/gf2x_portable.c 
    pq-crypto/bike_r1/openssl_utils.c 
    pq-crypto/bike_r1/parallel_hash.c 
    pq-crypto/bike_r1/sampling.c 
    pq-crypto/bike_r1/sampling_portable.c 
    pq-crypto/bike_r1/secure_decode_portable.c 
    pq-crypto/bike_r1/utilities.c 
    pq-crypto/bike_r2/aes_ctr_prf.c 
    pq-crypto/bike_r2/bike_r2_kem.c 
    pq-crypto/bike_r2/decode.c 
    pq-crypto/bike_r2/error.c 
    pq-crypto/bike_r2/gf2x_mul.c 
    pq-crypto/bike_r2/gf2x_portable.c 
    pq-crypto/bike_r2/openssl_utils.c 
    pq-crypto/bike_r2/sampling.c 
    pq-crypto/bike_r2/sampling_portable.c 
    pq-crypto/bike_r2/secure_decode_portable.c 
    pq-crypto/bike_r2/utilities.c 
    pq-crypto/kyber_90s_r2/aes256ctr.c 
    pq-crypto/kyber_90s_r2/aes_c.c 
    pq-crypto/kyber_90s_r2/cbd.c 
    pq-crypto/kyber_90s_r2/indcpa.c 
    pq-crypto/kyber_90s_r2/kyber_90s_r2_kem.c 
    pq-crypto/kyber_90s_r2/ntt.c 
    pq-crypto/kyber_90s_r2/poly.c 
    pq-crypto/kyber_90s_r2/polyvec.c 
    pq-crypto/kyber_90s_r2/reduce.c 
    pq-crypto/kyber_90s_r2/sha2_c.c 
    pq-crypto/kyber_90s_r2/verify.c 
    pq-crypto/kyber_r2/cbd.c 
    pq-crypto/kyber_r2/fips202_kyber_r2.c 
    pq-crypto/kyber_r2/indcpa.c 
    pq-crypto/kyber_r2/kyber_r2_kem.c 
    pq-crypto/kyber_r2/ntt.c 
    pq-crypto/kyber_r2/poly.c 
    pq-crypto/kyber_r2/polyvec.c 
    pq-crypto/kyber_r2/reduce.c 
    pq-crypto/kyber_r2/symmetric-fips202.c 
    pq-crypto/kyber_r2/verify.c 
    pq-crypto/s2n_pq.c 
    pq-crypto/s2n_pq_random.c 
    pq-crypto/sike_r1/P503_r1.c 
    pq-crypto/sike_r1/fips202_r1.c 
    pq-crypto/sike_r1/fp_generic_r1.c 
    pq-crypto/sike_r1/sike_r1_kem.c 
    pq-crypto/sike_r2/P434.c 
    pq-crypto/sike_r2/fips202.c 
    stuffer/s2n_stuffer.c 
    stuffer/s2n_stuffer_base64.c 
    stuffer/s2n_stuffer_file.c 
    stuffer/s2n_stuffer_network_order.c 
    stuffer/s2n_stuffer_pem.c 
    stuffer/s2n_stuffer_text.c 
    tls/extensions/s2n_client_alpn.c 
    tls/extensions/s2n_client_key_share.c 
    tls/extensions/s2n_client_max_frag_len.c 
    tls/extensions/s2n_client_pq_kem.c 
    tls/extensions/s2n_client_psk.c 
    tls/extensions/s2n_client_renegotiation_info.c 
    tls/extensions/s2n_client_sct_list.c 
    tls/extensions/s2n_client_server_name.c 
    tls/extensions/s2n_client_session_ticket.c 
    tls/extensions/s2n_client_signature_algorithms.c 
    tls/extensions/s2n_client_status_request.c 
    tls/extensions/s2n_client_supported_groups.c 
    tls/extensions/s2n_client_supported_versions.c 
    tls/extensions/s2n_cookie.c 
    tls/extensions/s2n_ec_point_format.c 
    tls/extensions/s2n_extension_list.c 
    tls/extensions/s2n_extension_type.c 
    tls/extensions/s2n_extension_type_lists.c 
    tls/extensions/s2n_key_share.c 
    tls/extensions/s2n_quic_transport_params.c 
    tls/extensions/s2n_server_alpn.c 
    tls/extensions/s2n_server_certificate_status.c 
    tls/extensions/s2n_server_key_share.c 
    tls/extensions/s2n_server_max_fragment_length.c 
    tls/extensions/s2n_server_renegotiation_info.c 
    tls/extensions/s2n_server_sct_list.c 
    tls/extensions/s2n_server_server_name.c 
    tls/extensions/s2n_server_session_ticket.c 
    tls/extensions/s2n_server_signature_algorithms.c 
    tls/extensions/s2n_server_status_request.c 
    tls/extensions/s2n_server_supported_versions.c 
    tls/extensions/s2n_supported_versions.c 
    tls/s2n_aead.c 
    tls/s2n_alerts.c 
    tls/s2n_async_pkey.c 
    tls/s2n_auth_selection.c 
    tls/s2n_cbc.c 
    tls/s2n_change_cipher_spec.c 
    tls/s2n_cipher_preferences.c 
    tls/s2n_cipher_suites.c 
    tls/s2n_client_cert.c 
    tls/s2n_client_cert_verify.c 
    tls/s2n_client_finished.c 
    tls/s2n_client_hello.c 
    tls/s2n_client_key_exchange.c 
    tls/s2n_config.c 
    tls/s2n_connection.c 
    tls/s2n_connection_evp_digests.c 
    tls/s2n_ecc_preferences.c 
    tls/s2n_encrypted_extensions.c 
    tls/s2n_establish_session.c 
    tls/s2n_handshake.c 
    tls/s2n_handshake_io.c 
    tls/s2n_handshake_transcript.c 
    tls/s2n_kem.c 
    tls/s2n_kem_preferences.c 
    tls/s2n_kex.c 
    tls/s2n_key_update.c 
    tls/s2n_ocsp_stapling.c 
    tls/s2n_post_handshake.c 
    tls/s2n_prf.c 
    tls/s2n_protocol_preferences.c 
    tls/s2n_psk.c 
    tls/s2n_quic_support.c 
    tls/s2n_record_read.c 
    tls/s2n_record_read_aead.c 
    tls/s2n_record_read_cbc.c 
    tls/s2n_record_read_composite.c 
    tls/s2n_record_read_stream.c 
    tls/s2n_record_write.c 
    tls/s2n_recv.c 
    tls/s2n_resume.c 
    tls/s2n_security_policies.c 
    tls/s2n_send.c 
    tls/s2n_server_cert.c 
    tls/s2n_server_cert_request.c 
    tls/s2n_server_done.c 
    tls/s2n_server_extensions.c 
    tls/s2n_server_finished.c 
    tls/s2n_server_hello.c 
    tls/s2n_server_hello_retry.c 
    tls/s2n_server_key_exchange.c 
    tls/s2n_server_new_session_ticket.c 
    tls/s2n_shutdown.c 
    tls/s2n_signature_algorithms.c 
    tls/s2n_signature_scheme.c 
    tls/s2n_tls.c 
    tls/s2n_tls13.c 
    tls/s2n_tls13_certificate_verify.c 
    tls/s2n_tls13_handshake.c 
    tls/s2n_x509_validator.c 
    utils/s2n_array.c 
    utils/s2n_asn1_time.c 
    utils/s2n_blob.c 
    utils/s2n_ensure.c 
    utils/s2n_init.c 
    utils/s2n_map.c 
    utils/s2n_mem.c 
    utils/s2n_random.c 
    utils/s2n_result.c 
    utils/s2n_rfc5952.c 
    utils/s2n_safety.c 
    utils/s2n_set.c 
    utils/s2n_socket.c 
    utils/s2n_str.c 
    utils/s2n_timer.c 
) 
 
END() 
