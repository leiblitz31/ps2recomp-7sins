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

// Function: sub_001421A0
// Address: 0x1421a0 - 0x142200
void sub_001421A0_0x1421a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001421A0_0x1421a0");
#endif

    switch (ctx->pc) {
        case 0x1421a0u: goto label_1421a0;
        case 0x1421a4u: goto label_1421a4;
        case 0x1421a8u: goto label_1421a8;
        case 0x1421acu: goto label_1421ac;
        case 0x1421b0u: goto label_1421b0;
        case 0x1421b4u: goto label_1421b4;
        case 0x1421b8u: goto label_1421b8;
        case 0x1421bcu: goto label_1421bc;
        case 0x1421c0u: goto label_1421c0;
        case 0x1421c4u: goto label_1421c4;
        case 0x1421c8u: goto label_1421c8;
        case 0x1421ccu: goto label_1421cc;
        case 0x1421d0u: goto label_1421d0;
        case 0x1421d4u: goto label_1421d4;
        case 0x1421d8u: goto label_1421d8;
        case 0x1421dcu: goto label_1421dc;
        case 0x1421e0u: goto label_1421e0;
        case 0x1421e4u: goto label_1421e4;
        case 0x1421e8u: goto label_1421e8;
        case 0x1421ecu: goto label_1421ec;
        case 0x1421f0u: goto label_1421f0;
        case 0x1421f4u: goto label_1421f4;
        case 0x1421f8u: goto label_1421f8;
        case 0x1421fcu: goto label_1421fc;
        default: break;
    }

    ctx->pc = 0x1421a0u;

label_1421a0:
    // 0x1421a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1421a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1421a4:
    // 0x1421a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1421a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1421a8:
    // 0x1421a8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1421a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1421ac:
    // 0x1421ac: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x1421acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1421b0:
    // 0x1421b0: 0x1002000e  beq         $zero, $v0, . + 4 + (0xE << 2)
label_1421b4:
    if (ctx->pc == 0x1421B4u) {
        ctx->pc = 0x1421B8u;
        goto label_1421b8;
    }
    ctx->pc = 0x1421B0u;
    {
        const bool branch_taken_0x1421b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1421b0) {
            ctx->pc = 0x1421ECu;
            goto label_1421ec;
        }
    }
    ctx->pc = 0x1421B8u;
label_1421b8:
    // 0x1421b8: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x1421b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1421bc:
    // 0x1421bc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1421bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1421c0:
    // 0x1421c0: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_1421c4:
    if (ctx->pc == 0x1421C4u) {
        ctx->pc = 0x1421C8u;
        goto label_1421c8;
    }
    ctx->pc = 0x1421C0u;
    {
        const bool branch_taken_0x1421c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1421c0) {
            ctx->pc = 0x1421ECu;
            goto label_1421ec;
        }
    }
    ctx->pc = 0x1421C8u;
label_1421c8:
    // 0x1421c8: 0x8f83ba84  lw          $v1, -0x457C($gp)
    ctx->pc = 0x1421c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_1421cc:
    // 0x1421cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1421ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1421d0:
    // 0x1421d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1421d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1421d4:
    // 0x1421d4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1421d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1421d8:
    // 0x1421d8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1421d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1421dc:
    // 0x1421dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1421dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1421e0:
    // 0x1421e0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x1421e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_1421e4:
    // 0x1421e4: 0x320f809  jalr        $t9
label_1421e8:
    if (ctx->pc == 0x1421E8u) {
        ctx->pc = 0x1421ECu;
        goto label_1421ec;
    }
    ctx->pc = 0x1421E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1421ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1421E4u, 0x1421ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1421ECu;
label_1421ec:
    // 0x1421ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1421ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1421f0:
    // 0x1421f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1421f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1421f4:
    // 0x1421f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1421f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1421f8:
    // 0x1421f8: 0x3e00008  jr          $ra
label_1421fc:
    if (ctx->pc == 0x1421FCu) {
        ctx->pc = 0x142200u;
        goto label_fallthrough_0x1421f8;
    }
    ctx->pc = 0x1421F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1421F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1421f8:
    ctx->pc = 0x142200u;
}
