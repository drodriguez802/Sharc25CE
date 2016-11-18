#ifndef _CE_TUTORIAL_3_
#define _CE_TUTORIAL_3_
#include "timer.h"
class CE_Tutorial_3: public Cognitive_Engine {

private:
// internal members used by this CE const
	float print_stats_period_s = 1.0;
	timer print_stats_timer;
	const float tx_gain_period_s = 1.0;
	const float tx_gain_increment = 1.0;
	timer tx_gain_timer;
	int frame_counter;
	int frame_errs;
	float sum_evm;
	float sum_rssi;
public:
	CE_Tutorial_3();
	~CE_Tutorial_3();
	virtual void execute(ExtensibleCognitiveRadio *ECR);
};
#endif

