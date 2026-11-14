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

// Function: sub_002DCAD0
// Address: 0x2dcad0 - 0x2dcb50
void sub_002DCAD0_0x2dcad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCAD0_0x2dcad0");
#endif

    switch (ctx->pc) {
        case 0x2dcaf8u: goto label_2dcaf8;
        case 0x2dcb08u: goto label_2dcb08;
        default: break;
    }

    ctx->pc = 0x2dcad0u;

    // 0x2dcad0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2dcad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2dcad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dcad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dcad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dcad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dcadc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dcadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dcae0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2dcae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2dcae4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2dcae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2dcae8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2dcae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2dcaec: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x2dcaecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dcaf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DCAF0u;
    {
        const bool branch_taken_0x2dcaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcaf0) {
            ctx->pc = 0x2DCB1Cu;
            goto label_2dcb1c;
        }
    }
    ctx->pc = 0x2DCAF8u;
label_2dcaf8:
    // 0x2dcaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcafc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2dcafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcb00: 0xc0b72e4  jal         func_2DCB90
    ctx->pc = 0x2DCB00u;
    SET_GPR_U32(ctx, 31, 0x2DCB08u);
    ctx->pc = 0x2DCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCB90u, 0x2DCB00u, 0x2DCB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB08u;
label_2dcb08:
    // 0x2dcb08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2dcb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcb0c: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x2dcb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2dcb10: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2dcb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2dcb14: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x2dcb14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x2dcb18: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2dcb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcb1c:
    // 0x2dcb1c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2dcb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dcb20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2dcb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dcb24: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DCB24u;
    {
        const bool branch_taken_0x2dcb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dcb24) {
            ctx->pc = 0x2DCAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcaf8;
        }
    }
    ctx->pc = 0x2DCB2Cu;
    // 0x2dcb2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dcb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dcb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcb34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dcb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcb38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcb3c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2dcb3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2dcb40: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCB48u;
    // 0x2dcb48: 0x0  nop
    ctx->pc = 0x2dcb48u;
    // NOP
    // 0x2dcb4c: 0x0  nop
    ctx->pc = 0x2dcb4cu;
    // NOP
    ctx->pc = 0x2dcb50u;
}
