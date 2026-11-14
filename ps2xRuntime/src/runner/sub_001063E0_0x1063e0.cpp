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

// Function: sub_001063E0
// Address: 0x1063e0 - 0x106460
void sub_001063E0_0x1063e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001063E0_0x1063e0");
#endif

    switch (ctx->pc) {
        case 0x106404u: goto label_106404;
        case 0x106448u: goto label_106448;
        default: break;
    }

    ctx->pc = 0x1063e0u;

    // 0x1063e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1063e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1063e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1063e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1063e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1063e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1063ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1063ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1063f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1063f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1063f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1063f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1063f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1063f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1063fc: 0xc040b48  jal         func_102D20
    ctx->pc = 0x1063FCu;
    SET_GPR_U32(ctx, 31, 0x106404u);
    ctx->pc = 0x102D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102D20u, 0x1063FCu, 0x106404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106404u;
label_106404:
    // 0x106404: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106408: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x106408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10640c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106410: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x106410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x106414: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106418: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x106418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10641c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10641cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106420: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x106420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x106424: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x106424u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x106428: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106428u;
    {
        const bool branch_taken_0x106428 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x106428) {
            ctx->pc = 0x106438u;
            goto label_106438;
        }
    }
    ctx->pc = 0x106430u;
    // 0x106430: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x106430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x106434: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x106434u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_106438:
    // 0x106438: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x106438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x10643c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x10643cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x106440: 0xc042458  jal         func_109160
    ctx->pc = 0x106440u;
    SET_GPR_U32(ctx, 31, 0x106448u);
    ctx->pc = 0x109160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109160u, 0x106440u, 0x106448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106448u;
label_106448:
    // 0x106448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10644c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10644cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x106450: 0x3e00008  jr          $ra
    ctx->pc = 0x106450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106458u;
    // 0x106458: 0x0  nop
    ctx->pc = 0x106458u;
    // NOP
    // 0x10645c: 0x0  nop
    ctx->pc = 0x10645cu;
    // NOP
    ctx->pc = 0x106460u;
}
