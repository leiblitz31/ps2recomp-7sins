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

// Function: sub_00231DD0
// Address: 0x231dd0 - 0x231e50
void sub_00231DD0_0x231dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231DD0_0x231dd0");
#endif

    switch (ctx->pc) {
        case 0x231df4u: goto label_231df4;
        case 0x231e20u: goto label_231e20;
        case 0x231e34u: goto label_231e34;
        default: break;
    }

    ctx->pc = 0x231dd0u;

    // 0x231dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x231dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x231dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x231dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x231dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x231dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x231ddc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x231ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x231de0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x231de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x231de4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x231de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231de8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x231de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231dec: 0xc08c200  jal         func_230800
    ctx->pc = 0x231DECu;
    SET_GPR_U32(ctx, 31, 0x231DF4u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x231DECu, 0x231DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DF4u;
label_231df4:
    // 0x231df4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231DF4u;
    {
        const bool branch_taken_0x231df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231df4) {
            ctx->pc = 0x231E08u;
            goto label_231e08;
        }
    }
    ctx->pc = 0x231DFCu;
    // 0x231dfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x231dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x231E00u;
    {
        const bool branch_taken_0x231e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231e00) {
            ctx->pc = 0x231E34u;
            goto label_231e34;
        }
    }
    ctx->pc = 0x231E08u;
label_231e08:
    // 0x231e08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x231e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231e0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x231e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231e10: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x231e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x231e14: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x231e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x231e18: 0xc08c1f0  jal         func_2307C0
    ctx->pc = 0x231E18u;
    SET_GPR_U32(ctx, 31, 0x231E20u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x231E18u, 0x231E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E20u;
label_231e20:
    // 0x231e20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x231e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231e24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x231e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231e28: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x231e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x231e2c: 0xc0ecf9e  jal         func_3B3E78
    ctx->pc = 0x231E2Cu;
    SET_GPR_U32(ctx, 31, 0x231E34u);
    ctx->pc = 0x3B3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3E78u, 0x231E2Cu, 0x231E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E34u;
label_231e34:
    // 0x231e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x231e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x231e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231e3c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x231e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x231e40: 0x3e00008  jr          $ra
    ctx->pc = 0x231E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231E48u;
    // 0x231e48: 0x0  nop
    ctx->pc = 0x231e48u;
    // NOP
    // 0x231e4c: 0x0  nop
    ctx->pc = 0x231e4cu;
    // NOP
    ctx->pc = 0x231e50u;
}
