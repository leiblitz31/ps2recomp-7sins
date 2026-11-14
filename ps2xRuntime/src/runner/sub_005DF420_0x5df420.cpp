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

// Function: sub_005DF420
// Address: 0x5df420 - 0x5df430
void sub_005DF420_0x5df420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF420_0x5df420");
#endif

    ctx->pc = 0x5df420u;

    // 0x5df420: 0x2573252f  addiu       $s3, $t3, 0x252F
    ctx->pc = 0x5df420u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 9519));
    // 0x5df424: 0x2f732573  sltiu       $s3, $k1, 0x2573
    ctx->pc = 0x5df424u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 27) < (uint64_t)(int64_t)(int32_t)9587) ? 1 : 0);
    // 0x5df428: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df428u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x5df42c: 0x0  nop
    ctx->pc = 0x5df42cu;
    // NOP
    ctx->pc = 0x5df430u;
}
