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

// Function: sub_005DC898
// Address: 0x5dc898 - 0x5dc8b0
void sub_005DC898_0x5dc898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DC898_0x5dc898");
#endif

    ctx->pc = 0x5dc898u;

    // 0x5dc898: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dc898u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x5dc89c: 0x190  .word       0x00000190                   # mfhi        $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dc89cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x5dc8a0: 0x0  nop
    ctx->pc = 0x5dc8a0u;
    // NOP
    // 0x5dc8a4: 0x0  nop
    ctx->pc = 0x5dc8a4u;
    // NOP
    // 0x5dc8a8: 0x0  nop
    ctx->pc = 0x5dc8a8u;
    // NOP
    // 0x5dc8ac: 0x0  nop
    ctx->pc = 0x5dc8acu;
    // NOP
    ctx->pc = 0x5dc8b0u;
}
