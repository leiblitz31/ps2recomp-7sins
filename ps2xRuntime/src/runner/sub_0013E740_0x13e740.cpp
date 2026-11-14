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

// Function: sub_0013E740
// Address: 0x13e740 - 0x13e7a0
void sub_0013E740_0x13e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E740_0x13e740");
#endif

    switch (ctx->pc) {
        case 0x13e758u: goto label_13e758;
        case 0x13e78cu: goto label_13e78c;
        default: break;
    }

    ctx->pc = 0x13e740u;

    // 0x13e740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13e748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13e74c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13e74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e750: 0xc085530  jal         func_2154C0
    ctx->pc = 0x13E750u;
    SET_GPR_U32(ctx, 31, 0x13E758u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x13E750u, 0x13E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E758u;
label_13e758:
    // 0x13e758: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13e758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13e75c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x13E75Cu;
    {
        const bool branch_taken_0x13e75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e75c) {
            ctx->pc = 0x13E78Cu;
            goto label_13e78c;
        }
    }
    ctx->pc = 0x13E764u;
    // 0x13e764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e768: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E768u;
    {
        const bool branch_taken_0x13e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e768) {
            ctx->pc = 0x13E778u;
            goto label_13e778;
        }
    }
    ctx->pc = 0x13E770u;
    // 0x13e770: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E770u;
    {
        const bool branch_taken_0x13e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e770) {
            ctx->pc = 0x13E78Cu;
            goto label_13e78c;
        }
    }
    ctx->pc = 0x13E778u;
label_13e778:
    // 0x13e778: 0x8f82ba7c  lw          $v0, -0x4584($gp)
    ctx->pc = 0x13e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x13e77c: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13e77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x13e780: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x13e780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e784: 0xc04fe28  jal         func_13F8A0
    ctx->pc = 0x13E784u;
    SET_GPR_U32(ctx, 31, 0x13E78Cu);
    ctx->pc = 0x13F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8A0u, 0x13E784u, 0x13E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E78Cu;
label_13e78c:
    // 0x13e78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e790: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13e794: 0x3e00008  jr          $ra
    ctx->pc = 0x13E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E79Cu;
    // 0x13e79c: 0x0  nop
    ctx->pc = 0x13e79cu;
    // NOP
    ctx->pc = 0x13e7a0u;
}
