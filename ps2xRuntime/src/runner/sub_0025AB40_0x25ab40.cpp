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

// Function: sub_0025AB40
// Address: 0x25ab40 - 0x25ab80
void sub_0025AB40_0x25ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AB40_0x25ab40");
#endif

    switch (ctx->pc) {
        case 0x25ab64u: goto label_25ab64;
        default: break;
    }

    ctx->pc = 0x25ab40u;

    // 0x25ab40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ab40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ab44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ab48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25ab4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ab50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ab54: 0x24640174  addiu       $a0, $v1, 0x174
    ctx->pc = 0x25ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 372));
    // 0x25ab58: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x25ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x25ab5c: 0xc096ae0  jal         func_25AB80
    ctx->pc = 0x25AB5Cu;
    SET_GPR_U32(ctx, 31, 0x25AB64u);
    ctx->pc = 0x25AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AB80u, 0x25AB5Cu, 0x25AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB64u;
label_25ab64:
    // 0x25ab64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25ab68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ab68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ab6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25ab6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25ab70: 0x3e00008  jr          $ra
    ctx->pc = 0x25AB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AB78u;
    // 0x25ab78: 0x0  nop
    ctx->pc = 0x25ab78u;
    // NOP
    // 0x25ab7c: 0x0  nop
    ctx->pc = 0x25ab7cu;
    // NOP
    ctx->pc = 0x25ab80u;
}
