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

// Function: sub_00477AC0
// Address: 0x477ac0 - 0x477b40
void sub_00477AC0_0x477ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477AC0_0x477ac0");
#endif

    switch (ctx->pc) {
        case 0x477ae8u: goto label_477ae8;
        case 0x477af8u: goto label_477af8;
        default: break;
    }

    ctx->pc = 0x477ac0u;

    // 0x477ac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x477ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x477ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x477ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x477ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x477ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x477acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x477accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x477ad0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x477ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x477ad4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x477ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x477ad8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x477ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x477adc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x477adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477ae0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x477AE0u;
    {
        const bool branch_taken_0x477ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x477ae0) {
            ctx->pc = 0x477B0Cu;
            goto label_477b0c;
        }
    }
    ctx->pc = 0x477AE8u;
label_477ae8:
    // 0x477ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x477ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477aec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x477aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x477af0: 0xc11df00  jal         func_477C00
    ctx->pc = 0x477AF0u;
    SET_GPR_U32(ctx, 31, 0x477AF8u);
    ctx->pc = 0x477C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477C00u, 0x477AF0u, 0x477AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477AF8u;
label_477af8:
    // 0x477af8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x477af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x477afc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x477afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x477b00: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x477b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x477b04: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x477b04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x477b08: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x477b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_477b0c:
    // 0x477b0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x477b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x477b10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x477B10u;
    {
        const bool branch_taken_0x477b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x477b10) {
            ctx->pc = 0x477AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477ae8;
        }
    }
    ctx->pc = 0x477B18u;
    // 0x477b18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x477b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477b1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x477b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x477b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x477b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477b28: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x477b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x477b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x477B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477B34u;
    // 0x477b34: 0x0  nop
    ctx->pc = 0x477b34u;
    // NOP
    // 0x477b38: 0x0  nop
    ctx->pc = 0x477b38u;
    // NOP
    // 0x477b3c: 0x0  nop
    ctx->pc = 0x477b3cu;
    // NOP
    ctx->pc = 0x477b40u;
}
