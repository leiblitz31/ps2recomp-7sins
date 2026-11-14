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

// Function: sub_001A1720
// Address: 0x1a1720 - 0x1a17a0
void sub_001A1720_0x1a1720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1720_0x1a1720");
#endif

    switch (ctx->pc) {
        case 0x1a1744u: goto label_1a1744;
        case 0x1a1788u: goto label_1a1788;
        default: break;
    }

    ctx->pc = 0x1a1720u;

    // 0x1a1720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a172c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1730: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1734: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a1734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1738: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a1738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a173c: 0xc048068  jal         func_1201A0
    ctx->pc = 0x1A173Cu;
    SET_GPR_U32(ctx, 31, 0x1A1744u);
    ctx->pc = 0x1201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1201A0u, 0x1A173Cu, 0x1A1744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1744u;
label_1a1744:
    // 0x1a1744: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1748: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a1748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a174c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1750: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a1750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a175c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a175cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a1760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1764: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1a1764u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a1768: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1768u;
    {
        const bool branch_taken_0x1a1768 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a1768) {
            ctx->pc = 0x1A1778u;
            goto label_1a1778;
        }
    }
    ctx->pc = 0x1A1770u;
    // 0x1a1770: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a1770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a1774: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1a1774u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1a1778:
    // 0x1a1778: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a1778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a177c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a177cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1780: 0xc048104  jal         func_120410
    ctx->pc = 0x1A1780u;
    SET_GPR_U32(ctx, 31, 0x1A1788u);
    ctx->pc = 0x120410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120410u, 0x1A1780u, 0x1A1788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1788u;
label_1a1788:
    // 0x1a1788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a178c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a178cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1790: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1798u;
    // 0x1a1798: 0x0  nop
    ctx->pc = 0x1a1798u;
    // NOP
    // 0x1a179c: 0x0  nop
    ctx->pc = 0x1a179cu;
    // NOP
    ctx->pc = 0x1a17a0u;
}
