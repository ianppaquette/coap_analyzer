# Generated by binpac_quickstart

signature dpd_coap {
	
	ip-proto == udp
	
	# ## TODO: Define the payload. When Bro sees this regex, on
	# ## any port, it will enable your analyzer on that
	# ## connection.
	# ## payload /^COAP/

	enable "coap"
}
