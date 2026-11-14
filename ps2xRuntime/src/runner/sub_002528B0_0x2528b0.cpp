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

// Function: sub_002528B0
// Address: 0x2528b0 - 0x252930
void sub_002528B0_0x2528b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002528B0_0x2528b0");
#endif

    switch (ctx->pc) {
        case 0x2528d8u: goto label_2528d8;
        case 0x2528e8u: goto label_2528e8;
        default: break;
    }

    ctx->pc = 0x2528b0u;

    // 0x2528b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2528b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2528b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2528b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2528b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2528b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2528bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2528bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2528c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2528c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2528c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2528c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2528c8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2528c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2528cc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2528ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2528d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2528D0u;
    {
        const bool branch_taken_0x2528d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2528d0) {
            ctx->pc = 0x2528FCu;
            goto label_2528fc;
        }
    }
    ctx->pc = 0x2528D8u;
label_2528d8:
    // 0x2528d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2528d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2528dc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2528dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2528e0: 0xc094a4c  jal         func_252930
    ctx->pc = 0x2528E0u;
    SET_GPR_U32(ctx, 31, 0x2528E8u);
    ctx->pc = 0x252930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252930u, 0x2528E0u, 0x2528E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528E8u;
label_2528e8:
    // 0x2528e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2528e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2528ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2528ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2528f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2528f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2528f4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2528f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2528f8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2528f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2528fc:
    // 0x2528fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2528fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252900: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x252900u;
    {
        const bool branch_taken_0x252900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252900) {
            ctx->pc = 0x2528D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2528d8;
        }
    }
    ctx->pc = 0x252908u;
    // 0x252908: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x252908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25290c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252918: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x252918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25291c: 0x3e00008  jr          $ra
    ctx->pc = 0x25291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25291Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252924u;
    // 0x252924: 0x0  nop
    ctx->pc = 0x252924u;
    // NOP
    // 0x252928: 0x0  nop
    ctx->pc = 0x252928u;
    // NOP
    // 0x25292c: 0x0  nop
    ctx->pc = 0x25292cu;
    // NOP
    ctx->pc = 0x252930u;
}
