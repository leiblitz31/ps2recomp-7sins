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

// Function: sub_004E2F70
// Address: 0x4e2f70 - 0x4e2fb0
void sub_004E2F70_0x4e2f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2F70_0x4e2f70");
#endif

    ctx->pc = 0x4e2f70u;

    // 0x4e2f70: 0x312d  .word       0x0000312D                   # daddu       $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e2f74: 0x0  nop
    ctx->pc = 0x4e2f74u;
    // NOP
    // 0x4e2f78: 0x0  nop
    ctx->pc = 0x4e2f78u;
    // NOP
    // 0x4e2f7c: 0x0  nop
    ctx->pc = 0x4e2f7cu;
    // NOP
    // 0x4e2f80: 0x0  nop
    ctx->pc = 0x4e2f80u;
    // NOP
    // 0x4e2f84: 0x0  nop
    ctx->pc = 0x4e2f84u;
    // NOP
    // 0x4e2f88: 0x0  nop
    ctx->pc = 0x4e2f88u;
    // NOP
    // 0x4e2f8c: 0x0  nop
    ctx->pc = 0x4e2f8cu;
    // NOP
    // 0x4e2f90: 0x0  nop
    ctx->pc = 0x4e2f90u;
    // NOP
    // 0x4e2f94: 0x0  nop
    ctx->pc = 0x4e2f94u;
    // NOP
    // 0x4e2f98: 0x0  nop
    ctx->pc = 0x4e2f98u;
    // NOP
    // 0x4e2f9c: 0x0  nop
    ctx->pc = 0x4e2f9cu;
    // NOP
    // 0x4e2fa0: 0x0  nop
    ctx->pc = 0x4e2fa0u;
    // NOP
    // 0x4e2fa4: 0x0  nop
    ctx->pc = 0x4e2fa4u;
    // NOP
    // 0x4e2fa8: 0x0  nop
    ctx->pc = 0x4e2fa8u;
    // NOP
    // 0x4e2fac: 0x0  nop
    ctx->pc = 0x4e2facu;
    // NOP
    ctx->pc = 0x4e2fb0u;
}
