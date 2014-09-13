///*
//Copyright (c) 2014 NicoHood
//See the readme for credit to other people.
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in
//all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//THE SOFTWARE.
//*/
//
//#ifndef IRLPROTOCOLNEC_H
//#define IRLPROTOCOLNEC_H
//
//#include <CIRLremote.h>
//
//class IRLprotocolNEC : public CIRLprotocol{
//public:
//	IRLprotocolNEC(void){ }
//
//	// virtual functions that needs to be implemented:
//	inline bool decodeIR(unsigned long duration){
//		uint8_t * data = decodeSpace <NEC_TIMEOUT, NEC_MARK_LEAD, NEC_SPACE_LEAD, NEC_SPACE_HOLDING,
//			NEC_SPACE_ZERO, NEC_SPACE_ONE, NEC_LENGTH, NEC_BLOCKS >
//			(duration);
//		if (data){
//
//			// In some other Nec Protocols the Address has an inverse or not, so we only check the command
//			if (uint8_t((data[2] ^ (~data[3]))) == 0){
//				// Errorcorrection for the Command is the inverse
//				memcpy(IRData.whole, data, NEC_BLOCKS);
//				IRData.whole[4] = 0;
//				IRData.whole[5] = 0;
//
//				if (uint8_t((data[0] ^ (~data[1]))) == 0){
//					// normal NEC with mirrored address
//				} // else extended NEC
//
//				return true;
//			}
//			//else if (IRData.command == -1L)
//			//	return true;
//		}
//		return false;
//
//
//	}
//	//void reset(void);
//	
//private:
//
//};
//
//#endif
