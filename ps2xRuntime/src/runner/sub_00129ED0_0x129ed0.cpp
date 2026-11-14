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

// Function: sub_00129ED0
// Address: 0x129ed0 - 0x129f50
void sub_00129ED0_0x129ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129ED0_0x129ed0");
#endif

    switch (ctx->pc) {
        case 0x129ef8u: goto label_129ef8;
        case 0x129f08u: goto label_129f08;
        default: break;
    }

    ctx->pc = 0x129ed0u;

    // 0x129ed0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x129ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x129ed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129ed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x129ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x129edc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x129edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x129ee0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x129ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x129ee4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x129ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x129ee8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x129ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x129eec: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x129eecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129ef0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x129EF0u;
    {
        const bool branch_taken_0x129ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129ef0) {
            ctx->pc = 0x129F1Cu;
            goto label_129f1c;
        }
    }
    ctx->pc = 0x129EF8u;
label_129ef8:
    // 0x129ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129efc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x129efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129f00: 0xc04a7d4  jal         func_129F50
    ctx->pc = 0x129F00u;
    SET_GPR_U32(ctx, 31, 0x129F08u);
    ctx->pc = 0x129F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F50u, 0x129F00u, 0x129F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F08u;
label_129f08:
    // 0x129f08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x129f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129f0c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x129f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x129f10: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x129f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x129f14: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x129f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x129f18: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x129f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_129f1c:
    // 0x129f1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x129f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129f20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x129f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129f24: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x129F24u;
    {
        const bool branch_taken_0x129f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x129f24) {
            ctx->pc = 0x129EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129ef8;
        }
    }
    ctx->pc = 0x129F2Cu;
    // 0x129f2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x129f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x129f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x129f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x129f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129f3c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x129f3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x129f40: 0x3e00008  jr          $ra
    ctx->pc = 0x129F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129F48u;
    // 0x129f48: 0x0  nop
    ctx->pc = 0x129f48u;
    // NOP
    // 0x129f4c: 0x0  nop
    ctx->pc = 0x129f4cu;
    // NOP
    ctx->pc = 0x129f50u;
}
