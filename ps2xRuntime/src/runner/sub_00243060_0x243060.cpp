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

// Function: sub_00243060
// Address: 0x243060 - 0x2430e0
void sub_00243060_0x243060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243060_0x243060");
#endif

    switch (ctx->pc) {
        case 0x243084u: goto label_243084;
        case 0x2430c8u: goto label_2430c8;
        default: break;
    }

    ctx->pc = 0x243060u;

    // 0x243060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x243068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24306c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243074: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x243074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243078: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x243078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24307c: 0xc090a28  jal         func_2428A0
    ctx->pc = 0x24307Cu;
    SET_GPR_U32(ctx, 31, 0x243084u);
    ctx->pc = 0x2428A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2428A0u, 0x24307Cu, 0x243084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243084u;
label_243084:
    // 0x243084: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x243084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243088: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x243088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24308c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243090: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x243090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x243094: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243098: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x243098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24309c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x24309cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2430a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2430a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2430a4: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x2430a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2430a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2430A8u;
    {
        const bool branch_taken_0x2430a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2430a8) {
            ctx->pc = 0x2430B8u;
            goto label_2430b8;
        }
    }
    ctx->pc = 0x2430B0u;
    // 0x2430b0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x2430b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2430b4: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x2430b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_2430b8:
    // 0x2430b8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2430b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2430bc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2430bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2430c0: 0xc090e3c  jal         func_2438F0
    ctx->pc = 0x2430C0u;
    SET_GPR_U32(ctx, 31, 0x2430C8u);
    ctx->pc = 0x2438F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2438F0u, 0x2430C0u, 0x2430C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2430C8u;
label_2430c8:
    // 0x2430c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2430c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2430cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2430ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2430d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2430D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2430D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2430D8u;
    // 0x2430d8: 0x0  nop
    ctx->pc = 0x2430d8u;
    // NOP
    // 0x2430dc: 0x0  nop
    ctx->pc = 0x2430dcu;
    // NOP
    ctx->pc = 0x2430e0u;
}
