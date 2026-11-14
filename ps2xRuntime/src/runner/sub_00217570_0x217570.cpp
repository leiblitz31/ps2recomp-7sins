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

// Function: sub_00217570
// Address: 0x217570 - 0x2175f0
void sub_00217570_0x217570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217570_0x217570");
#endif

    switch (ctx->pc) {
        case 0x217598u: goto label_217598;
        case 0x2175a8u: goto label_2175a8;
        default: break;
    }

    ctx->pc = 0x217570u;

    // 0x217570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x217570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x217574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x217574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x217578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x217578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21757c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217580: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x217580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x217584: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x217584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x217588: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x217588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x21758c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x21758cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217590: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x217590u;
    {
        const bool branch_taken_0x217590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217590) {
            ctx->pc = 0x2175BCu;
            goto label_2175bc;
        }
    }
    ctx->pc = 0x217598u;
label_217598:
    // 0x217598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21759c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x21759cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2175a0: 0xc085ce8  jal         func_2173A0
    ctx->pc = 0x2175A0u;
    SET_GPR_U32(ctx, 31, 0x2175A8u);
    ctx->pc = 0x2173A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2173A0u, 0x2175A0u, 0x2175A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2175A8u;
label_2175a8:
    // 0x2175a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2175a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2175ac: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2175acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2175b0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2175b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2175b4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2175b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2175b8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2175b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2175bc:
    // 0x2175bc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2175bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2175c0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2175c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2175c4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2175C4u;
    {
        const bool branch_taken_0x2175c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2175c4) {
            ctx->pc = 0x217598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217598;
        }
    }
    ctx->pc = 0x2175CCu;
    // 0x2175cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2175ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2175d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2175d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2175d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2175d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2175d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2175dc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2175dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2175e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2175E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2175E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2175E8u;
    // 0x2175e8: 0x0  nop
    ctx->pc = 0x2175e8u;
    // NOP
    // 0x2175ec: 0x0  nop
    ctx->pc = 0x2175ecu;
    // NOP
    ctx->pc = 0x2175f0u;
}
