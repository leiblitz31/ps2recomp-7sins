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

// Function: sub_0027E350
// Address: 0x27e350 - 0x27e3b0
void sub_0027E350_0x27e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E350_0x27e350");
#endif

    switch (ctx->pc) {
        case 0x27e370u: goto label_27e370;
        case 0x27e380u: goto label_27e380;
        case 0x27e398u: goto label_27e398;
        default: break;
    }

    ctx->pc = 0x27e350u;

    // 0x27e350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27e354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e358: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27e358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27e35c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x27e360: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x27e360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27e364: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x27e364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e368: 0xc09f8ec  jal         func_27E3B0
    ctx->pc = 0x27E368u;
    SET_GPR_U32(ctx, 31, 0x27E370u);
    ctx->pc = 0x27E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E3B0u, 0x27E368u, 0x27E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E370u;
label_27e370:
    // 0x27e370: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x27e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e374: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e378: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x27E378u;
    SET_GPR_U32(ctx, 31, 0x27E380u);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x27E378u, 0x27E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E380u;
label_27e380:
    // 0x27e380: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x27e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27e384: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27e384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27e388: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e38c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x27e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27e390: 0xc09f8ec  jal         func_27E3B0
    ctx->pc = 0x27E390u;
    SET_GPR_U32(ctx, 31, 0x27E398u);
    ctx->pc = 0x27E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E3B0u, 0x27E390u, 0x27E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E398u;
label_27e398:
    // 0x27e398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e39c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27e39cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27e3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x27E3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E3A8u;
    // 0x27e3a8: 0x0  nop
    ctx->pc = 0x27e3a8u;
    // NOP
    // 0x27e3ac: 0x0  nop
    ctx->pc = 0x27e3acu;
    // NOP
    ctx->pc = 0x27e3b0u;
}
