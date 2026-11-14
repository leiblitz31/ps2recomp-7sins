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

// Function: sub_00158720
// Address: 0x158720 - 0x1587a0
void sub_00158720_0x158720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158720_0x158720");
#endif

    switch (ctx->pc) {
        case 0x158744u: goto label_158744;
        case 0x158788u: goto label_158788;
        default: break;
    }

    ctx->pc = 0x158720u;

    // 0x158720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x158724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x158728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15872c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158730: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x158730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158734: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x158734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158738: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x158738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15873c: 0xc0560f8  jal         func_1583E0
    ctx->pc = 0x15873Cu;
    SET_GPR_U32(ctx, 31, 0x158744u);
    ctx->pc = 0x1583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1583E0u, 0x15873Cu, 0x158744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158744u;
label_158744:
    // 0x158744: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x158744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158748: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x158748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15874c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158750: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x158750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x158754: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x158754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158758: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x158758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15875c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x158760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158764: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x158764u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x158768: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158768u;
    {
        const bool branch_taken_0x158768 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x158768) {
            ctx->pc = 0x158778u;
            goto label_158778;
        }
    }
    ctx->pc = 0x158770u;
    // 0x158770: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x158770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x158774: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x158774u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_158778:
    // 0x158778: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x158778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x15877c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15877cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x158780: 0xc0562e0  jal         func_158B80
    ctx->pc = 0x158780u;
    SET_GPR_U32(ctx, 31, 0x158788u);
    ctx->pc = 0x158B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158B80u, 0x158780u, 0x158788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158788u;
label_158788:
    // 0x158788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15878c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15878cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x158790: 0x3e00008  jr          $ra
    ctx->pc = 0x158790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158798u;
    // 0x158798: 0x0  nop
    ctx->pc = 0x158798u;
    // NOP
    // 0x15879c: 0x0  nop
    ctx->pc = 0x15879cu;
    // NOP
    ctx->pc = 0x1587a0u;
}
