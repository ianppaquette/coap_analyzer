// Generated by binpac_quickstart

#pragma once

#include "events.bif.h"


#include "analyzer/protocol/udp/UDP.h"

#include "coap_pac.h"

namespace analyzer { namespace Local_coap {

class coap_Analyzer: public analyzer::Analyzer
{
public:
	coap_Analyzer(Connection* conn);
	virtual ~coap_Analyzer();

	// Overriden from Analyzer.
	virtual void Done();
	
	virtual void DeliverPacket(int len, const u_char* data, bool orig,
					uint64_t seq, const IP_Hdr* ip, int caplen);
	

	static analyzer::Analyzer* InstantiateAnalyzer(Connection* conn)
		{ return new coap_Analyzer(conn); }

protected:
	binpac::coap::coap_Conn* interp;
	};

} } // namespace analyzer::*