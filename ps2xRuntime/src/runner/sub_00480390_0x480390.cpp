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

// Function: sub_00480390
// Address: 0x480390 - 0x4803d0
void sub_00480390_0x480390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480390_0x480390");
#endif

    switch (ctx->pc) {
        case 0x4803b8u: goto label_4803b8;
        default: break;
    }

    ctx->pc = 0x480390u;

    // 0x480390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x480390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x480394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x480394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x480398: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x480398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48039c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48039cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4803a0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x4803a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x4803a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4803a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4803a8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4803a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4803ac: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x4803acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4803b0: 0xc1200f4  jal         func_4803D0
    ctx->pc = 0x4803B0u;
    SET_GPR_U32(ctx, 31, 0x4803B8u);
    ctx->pc = 0x4803D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4803D0u, 0x4803B0u, 0x4803B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4803B8u;
label_4803b8:
    // 0x4803b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4803b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4803bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4803bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4803c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4803C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4803C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4803C8u;
    // 0x4803c8: 0x0  nop
    ctx->pc = 0x4803c8u;
    // NOP
    // 0x4803cc: 0x0  nop
    ctx->pc = 0x4803ccu;
    // NOP
    ctx->pc = 0x4803d0u;
}
