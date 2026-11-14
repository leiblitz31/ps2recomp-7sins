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

// Function: sub_00146450
// Address: 0x146450 - 0x1464d0
void sub_00146450_0x146450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146450_0x146450");
#endif

    switch (ctx->pc) {
        case 0x146478u: goto label_146478;
        case 0x146488u: goto label_146488;
        default: break;
    }

    ctx->pc = 0x146450u;

    // 0x146450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x146450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x146454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x146454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x146458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14645c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146460: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x146460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x146464: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x146464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x146468: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x146468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x14646c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x14646cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x146470: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x146470u;
    {
        const bool branch_taken_0x146470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146470) {
            ctx->pc = 0x14649Cu;
            goto label_14649c;
        }
    }
    ctx->pc = 0x146478u;
label_146478:
    // 0x146478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14647c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14647cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146480: 0xc051934  jal         func_1464D0
    ctx->pc = 0x146480u;
    SET_GPR_U32(ctx, 31, 0x146488u);
    ctx->pc = 0x1464D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1464D0u, 0x146480u, 0x146488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146488u;
label_146488:
    // 0x146488: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x146488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14648c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x14648cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x146490: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x146490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x146494: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x146494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x146498: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x146498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14649c:
    // 0x14649c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x14649cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1464a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1464a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1464a4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1464A4u;
    {
        const bool branch_taken_0x1464a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1464a4) {
            ctx->pc = 0x146478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146478;
        }
    }
    ctx->pc = 0x1464ACu;
    // 0x1464ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1464acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1464b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1464b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1464b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1464b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1464b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1464bc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1464bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1464c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1464C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1464C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1464C8u;
    // 0x1464c8: 0x0  nop
    ctx->pc = 0x1464c8u;
    // NOP
    // 0x1464cc: 0x0  nop
    ctx->pc = 0x1464ccu;
    // NOP
    ctx->pc = 0x1464d0u;
}
