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

// Function: sub_00166840
// Address: 0x166840 - 0x1668a0
void sub_00166840_0x166840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166840_0x166840");
#endif

    switch (ctx->pc) {
        case 0x166864u: goto label_166864;
        case 0x166890u: goto label_166890;
        default: break;
    }

    ctx->pc = 0x166840u;

    // 0x166840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x166840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x166844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166848: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x166848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x16684c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x16684cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x166850: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x166850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x166854: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x166854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x166858: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x166858u;
    {
        const bool branch_taken_0x166858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166858) {
            ctx->pc = 0x166880u;
            goto label_166880;
        }
    }
    ctx->pc = 0x166860u;
    // 0x166860: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x166860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_166864:
    // 0x166864: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x166864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x166868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x166868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16686c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x166870: 0x0  nop
    ctx->pc = 0x166870u;
    // NOP
    // 0x166874: 0x0  nop
    ctx->pc = 0x166874u;
    // NOP
    // 0x166878: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x166878u;
    {
        const bool branch_taken_0x166878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166878) {
            ctx->pc = 0x166864u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166864;
        }
    }
    ctx->pc = 0x166880u;
label_166880:
    // 0x166880: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x166880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166884: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x166884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166888: 0xc059a28  jal         func_1668A0
    ctx->pc = 0x166888u;
    SET_GPR_U32(ctx, 31, 0x166890u);
    ctx->pc = 0x1668A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1668A0u, 0x166888u, 0x166890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166890u;
label_166890:
    // 0x166890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x166890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166894: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x166894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x166898: 0x3e00008  jr          $ra
    ctx->pc = 0x166898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1668A0u;
}
