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

// Function: sub_00106870
// Address: 0x106870 - 0x1068c0
void sub_00106870_0x106870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106870_0x106870");
#endif

    switch (ctx->pc) {
        case 0x106898u: goto label_106898;
        case 0x1068acu: goto label_1068ac;
        default: break;
    }

    ctx->pc = 0x106870u;

    // 0x106870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x106870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x106874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106878: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x106878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10687c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10687cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x106880: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x106880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x106884: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x106884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x106888: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x106888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10688c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x10688cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106890: 0xc0425d4  jal         func_109750
    ctx->pc = 0x106890u;
    SET_GPR_U32(ctx, 31, 0x106898u);
    ctx->pc = 0x109750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109750u, 0x106890u, 0x106898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106898u;
label_106898:
    // 0x106898: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x106898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10689c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x10689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1068a0: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1068a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1068a4: 0xc041a30  jal         func_1068C0
    ctx->pc = 0x1068A4u;
    SET_GPR_U32(ctx, 31, 0x1068ACu);
    ctx->pc = 0x1068C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1068C0u, 0x1068A4u, 0x1068ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1068ACu;
label_1068ac:
    // 0x1068ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1068acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1068b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1068b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1068b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1068B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1068B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1068BCu;
    // 0x1068bc: 0x0  nop
    ctx->pc = 0x1068bcu;
    // NOP
    ctx->pc = 0x1068c0u;
}
