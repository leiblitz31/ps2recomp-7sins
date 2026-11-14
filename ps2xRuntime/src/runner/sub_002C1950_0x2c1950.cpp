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

// Function: sub_002C1950
// Address: 0x2c1950 - 0x2c1970
void sub_002C1950_0x2c1950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1950_0x2c1950");
#endif

    ctx->pc = 0x2c1950u;

    // 0x2c1950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1954: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c1954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c1958: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c1958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c195c: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x2c195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x2c1960: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c1960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c1964: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C196Cu;
    // 0x2c196c: 0x0  nop
    ctx->pc = 0x2c196cu;
    // NOP
    ctx->pc = 0x2c1970u;
}
