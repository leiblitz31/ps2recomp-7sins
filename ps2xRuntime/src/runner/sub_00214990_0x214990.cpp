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

// Function: sub_00214990
// Address: 0x214990 - 0x2149c0
void sub_00214990_0x214990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214990_0x214990");
#endif

    ctx->pc = 0x214990u;

    // 0x214990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214994: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x214994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x214998: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x214998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21499c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2149a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2149a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2149a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2149a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2149a8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2149a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2149ac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2149acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2149b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2149b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2149b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2149B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2149B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2149BCu;
    // 0x2149bc: 0x0  nop
    ctx->pc = 0x2149bcu;
    // NOP
    ctx->pc = 0x2149c0u;
}
