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

// Function: sub_004E4780
// Address: 0x4e4780 - 0x4e4790
void sub_004E4780_0x4e4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4780_0x4e4780");
#endif

    ctx->pc = 0x4e4780u;

    // 0x4e4780: 0x25287325  addiu       $t0, $t1, 0x7325
    ctx->pc = 0x4e4780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 29477));
    // 0x4e4784: 0x29643230  slti        $a0, $t3, 0x3230
    ctx->pc = 0x4e4784u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)12848) ? 1 : 0);
    // 0x4e4788: 0x0  nop
    ctx->pc = 0x4e4788u;
    // NOP
    // 0x4e478c: 0x0  nop
    ctx->pc = 0x4e478cu;
    // NOP
    ctx->pc = 0x4e4790u;
}
