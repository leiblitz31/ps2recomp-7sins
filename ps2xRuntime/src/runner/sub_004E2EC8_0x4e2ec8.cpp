#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E2EC8
// Address: 0x4e2ec8 - 0x4e2ee0
void sub_004E2EC8_0x4e2ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2EC8_0x4e2ec8");
#endif

    ctx->pc = 0x4e2ec8u;

    // 0x4e2ec8: 0x49444441  .word       0x49444441                   # INVALID     $t2, $a0, 0x4441 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x4e2ec8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E2EC8 raw=0x49444441");
    // 0x4e2ecc: 0x45564954  .word       0x45564954                   # INVALID     $t2, $s6, 0x4954 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e2eccu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x14 at 0x4E2ECC raw=0x45564954");
    // 0x4e2ed0: 0x0  nop
    ctx->pc = 0x4e2ed0u;
    // NOP
    // 0x4e2ed4: 0x0  nop
    ctx->pc = 0x4e2ed4u;
    // NOP
    // 0x4e2ed8: 0x0  nop
    ctx->pc = 0x4e2ed8u;
    // NOP
    // 0x4e2edc: 0x0  nop
    ctx->pc = 0x4e2edcu;
    // NOP
    ctx->pc = 0x4e2ee0u;
}
