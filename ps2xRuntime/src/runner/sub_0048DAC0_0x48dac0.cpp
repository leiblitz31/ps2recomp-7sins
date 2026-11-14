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

// Function: sub_0048DAC0
// Address: 0x48dac0 - 0x48db40
void sub_0048DAC0_0x48dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DAC0_0x48dac0");
#endif

    switch (ctx->pc) {
        case 0x48dae8u: goto label_48dae8;
        case 0x48daf8u: goto label_48daf8;
        default: break;
    }

    ctx->pc = 0x48dac0u;

    // 0x48dac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x48dac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48dac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48dacc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48dad0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x48dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x48dad4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x48dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x48dad8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x48dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x48dadc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x48dadcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48dae0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x48DAE0u;
    {
        const bool branch_taken_0x48dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dae0) {
            ctx->pc = 0x48DB0Cu;
            goto label_48db0c;
        }
    }
    ctx->pc = 0x48DAE8u;
label_48dae8:
    // 0x48dae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48dae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48daec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x48daecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48daf0: 0xc1236f0  jal         func_48DBC0
    ctx->pc = 0x48DAF0u;
    SET_GPR_U32(ctx, 31, 0x48DAF8u);
    ctx->pc = 0x48DBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DBC0u, 0x48DAF0u, 0x48DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DAF8u;
label_48daf8:
    // 0x48daf8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48dafc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48db00: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x48db00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x48db04: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x48db04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x48db08: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x48db08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48db0c:
    // 0x48db0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48db10: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x48DB10u;
    {
        const bool branch_taken_0x48db10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48db10) {
            ctx->pc = 0x48DAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dae8;
        }
    }
    ctx->pc = 0x48DB18u;
    // 0x48db18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48db18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48db1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48db1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48db20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48db20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48db24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48db24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48db28: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x48db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x48db2c: 0x3e00008  jr          $ra
    ctx->pc = 0x48DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DB34u;
    // 0x48db34: 0x0  nop
    ctx->pc = 0x48db34u;
    // NOP
    // 0x48db38: 0x0  nop
    ctx->pc = 0x48db38u;
    // NOP
    // 0x48db3c: 0x0  nop
    ctx->pc = 0x48db3cu;
    // NOP
    ctx->pc = 0x48db40u;
}
