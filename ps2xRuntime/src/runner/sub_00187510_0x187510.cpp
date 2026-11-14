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

// Function: sub_00187510
// Address: 0x187510 - 0x187590
void sub_00187510_0x187510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187510_0x187510");
#endif

    switch (ctx->pc) {
        case 0x187544u: goto label_187544;
        case 0x187574u: goto label_187574;
        default: break;
    }

    ctx->pc = 0x187510u;

    // 0x187510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x187510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x187514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187518: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x187518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18751c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18751cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x187520: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x187520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x187524: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187528: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x187528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18752c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x18752cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x187530: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x187530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187534: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x187534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x187538: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x187538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18753c: 0xc061e20  jal         func_187880
    ctx->pc = 0x18753Cu;
    SET_GPR_U32(ctx, 31, 0x187544u);
    ctx->pc = 0x187880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187880u, 0x18753Cu, 0x187544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187544u;
label_187544:
    // 0x187544: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187544u;
    {
        const bool branch_taken_0x187544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187544) {
            ctx->pc = 0x187558u;
            goto label_187558;
        }
    }
    ctx->pc = 0x18754Cu;
    // 0x18754c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18754cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187550: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x187550u;
    {
        const bool branch_taken_0x187550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187550) {
            ctx->pc = 0x187578u;
            goto label_187578;
        }
    }
    ctx->pc = 0x187558u;
label_187558:
    // 0x187558: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18755c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18755cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187560: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x187560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187564: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x187564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x187568: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x187568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18756c: 0xc043764  jal         func_10DD90
    ctx->pc = 0x18756Cu;
    SET_GPR_U32(ctx, 31, 0x187574u);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x18756Cu, 0x187574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187574u;
label_187574:
    // 0x187574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187578:
    // 0x187578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18757c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18757cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x187580: 0x3e00008  jr          $ra
    ctx->pc = 0x187580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187588u;
    // 0x187588: 0x0  nop
    ctx->pc = 0x187588u;
    // NOP
    // 0x18758c: 0x0  nop
    ctx->pc = 0x18758cu;
    // NOP
    ctx->pc = 0x187590u;
}
