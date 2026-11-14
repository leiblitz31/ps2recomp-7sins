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

// Function: sub_002D1710
// Address: 0x2d1710 - 0x2d1790
void sub_002D1710_0x2d1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1710_0x2d1710");
#endif

    switch (ctx->pc) {
        case 0x2d1734u: goto label_2d1734;
        case 0x2d1778u: goto label_2d1778;
        default: break;
    }

    ctx->pc = 0x2d1710u;

    // 0x2d1710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d1710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d1714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d1718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d171c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d171cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1724: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d1724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1728: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d1728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d172c: 0xc0b4128  jal         func_2D04A0
    ctx->pc = 0x2D172Cu;
    SET_GPR_U32(ctx, 31, 0x2D1734u);
    ctx->pc = 0x2D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04A0u, 0x2D172Cu, 0x2D1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1734u;
label_2d1734:
    // 0x2d1734: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d1734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1738: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2d1738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d173c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1740: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d1740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d1744: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d1748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d174c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d174cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d1750: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1754: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2d1754u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d1758: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1758u;
    {
        const bool branch_taken_0x2d1758 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d1758) {
            ctx->pc = 0x2D1768u;
            goto label_2d1768;
        }
    }
    ctx->pc = 0x2D1760u;
    // 0x2d1760: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2d1760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d1764: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2d1764u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2d1768:
    // 0x2d1768: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d1768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d176c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d176cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d1770: 0xc0b6350  jal         func_2D8D40
    ctx->pc = 0x2D1770u;
    SET_GPR_U32(ctx, 31, 0x2D1778u);
    ctx->pc = 0x2D8D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D40u, 0x2D1770u, 0x2D1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1778u;
label_2d1778:
    // 0x2d1778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d177c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d177cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1780: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1788u;
    // 0x2d1788: 0x0  nop
    ctx->pc = 0x2d1788u;
    // NOP
    // 0x2d178c: 0x0  nop
    ctx->pc = 0x2d178cu;
    // NOP
    ctx->pc = 0x2d1790u;
}
