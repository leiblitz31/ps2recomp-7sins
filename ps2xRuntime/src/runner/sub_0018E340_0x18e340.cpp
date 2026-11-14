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

// Function: sub_0018E340
// Address: 0x18e340 - 0x18e3c0
void sub_0018E340_0x18e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E340_0x18e340");
#endif

    switch (ctx->pc) {
        case 0x18e368u: goto label_18e368;
        case 0x18e378u: goto label_18e378;
        default: break;
    }

    ctx->pc = 0x18e340u;

    // 0x18e340: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18e344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18e344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18e348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18e348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18e34c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e350: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18e350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18e354: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18e354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18e358: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x18e358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18e35c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x18e35cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e360: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18E360u;
    {
        const bool branch_taken_0x18e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e360) {
            ctx->pc = 0x18E38Cu;
            goto label_18e38c;
        }
    }
    ctx->pc = 0x18E368u;
label_18e368:
    // 0x18e368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e36c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x18e36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e370: 0xc063910  jal         func_18E440
    ctx->pc = 0x18E370u;
    SET_GPR_U32(ctx, 31, 0x18E378u);
    ctx->pc = 0x18E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E440u, 0x18E370u, 0x18E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E378u;
label_18e378:
    // 0x18e378: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e37c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e380: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18e380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x18e384: 0x26100054  addiu       $s0, $s0, 0x54
    ctx->pc = 0x18e384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x18e388: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x18e388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e38c:
    // 0x18e38c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e390: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18E390u;
    {
        const bool branch_taken_0x18e390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e390) {
            ctx->pc = 0x18E368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e368;
        }
    }
    ctx->pc = 0x18E398u;
    // 0x18e398: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18e398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e39c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18e39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e3a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18e3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e3a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e3a8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x18e3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18e3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x18E3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E3B4u;
    // 0x18e3b4: 0x0  nop
    ctx->pc = 0x18e3b4u;
    // NOP
    // 0x18e3b8: 0x0  nop
    ctx->pc = 0x18e3b8u;
    // NOP
    // 0x18e3bc: 0x0  nop
    ctx->pc = 0x18e3bcu;
    // NOP
    ctx->pc = 0x18e3c0u;
}
