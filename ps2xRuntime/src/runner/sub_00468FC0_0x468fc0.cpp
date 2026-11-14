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

// Function: sub_00468FC0
// Address: 0x468fc0 - 0x469040
void sub_00468FC0_0x468fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468FC0_0x468fc0");
#endif

    switch (ctx->pc) {
        case 0x468fe4u: goto label_468fe4;
        case 0x468ff8u: goto label_468ff8;
        default: break;
    }

    ctx->pc = 0x468fc0u;

    // 0x468fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x468fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x468fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x468fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x468fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x468fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x468fcc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x468fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x468fd0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x468fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x468fd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x468fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468fd8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x468fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x468fdc: 0xc11b3d8  jal         func_46CF60
    ctx->pc = 0x468FDCu;
    SET_GPR_U32(ctx, 31, 0x468FE4u);
    ctx->pc = 0x46CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF60u, 0x468FDCu, 0x468FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468FE4u;
label_468fe4:
    // 0x468fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x468fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468fe8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x468fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468fec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x468fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x468ff0: 0xc11b3c4  jal         func_46CF10
    ctx->pc = 0x468FF0u;
    SET_GPR_U32(ctx, 31, 0x468FF8u);
    ctx->pc = 0x46CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF10u, 0x468FF0u, 0x468FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x468FF8u;
label_468ff8:
    // 0x468ff8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x468ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468ffc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x468ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x469000: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x469000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469004: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x469004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x469008: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x469008u;
    {
        const bool branch_taken_0x469008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x469008) {
            ctx->pc = 0x46901Cu;
            goto label_46901c;
        }
    }
    ctx->pc = 0x469010u;
    // 0x469010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x469010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x469014: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x469014u;
    {
        const bool branch_taken_0x469014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x469014) {
            ctx->pc = 0x469020u;
            goto label_469020;
        }
    }
    ctx->pc = 0x46901Cu;
label_46901c:
    // 0x46901c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46901cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469020:
    // 0x469020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x469020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x469024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469028: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x469028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46902c: 0x3e00008  jr          $ra
    ctx->pc = 0x46902Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46902Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469034u;
    // 0x469034: 0x0  nop
    ctx->pc = 0x469034u;
    // NOP
    // 0x469038: 0x0  nop
    ctx->pc = 0x469038u;
    // NOP
    // 0x46903c: 0x0  nop
    ctx->pc = 0x46903cu;
    // NOP
    ctx->pc = 0x469040u;
}
