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

// Function: sub_001C0450
// Address: 0x1c0450 - 0x1c04f0
void sub_001C0450_0x1c0450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0450_0x1c0450");
#endif

    switch (ctx->pc) {
        case 0x1c0478u: goto label_1c0478;
        case 0x1c0484u: goto label_1c0484;
        default: break;
    }

    ctx->pc = 0x1c0450u;

    // 0x1c0450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c0450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c0454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c045c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0460: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c0460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1c0464: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c046c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c046cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0470: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C0470u;
    {
        const bool branch_taken_0x1c0470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0470) {
            ctx->pc = 0x1C04C4u;
            goto label_1c04c4;
        }
    }
    ctx->pc = 0x1C0478u;
label_1c0478:
    // 0x1c0478: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c047c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C047Cu;
    {
        const bool branch_taken_0x1c047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c047c) {
            ctx->pc = 0x1C04B4u;
            goto label_1c04b4;
        }
    }
    ctx->pc = 0x1C0484u;
label_1c0484:
    // 0x1c0484: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c0484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c0488: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c048c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c0490: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c0490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c0494: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1c0494u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0498: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1c0498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c049c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1c049cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1c04a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c04a4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C04A4u;
    {
        const bool branch_taken_0x1c04a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c04a4) {
            ctx->pc = 0x1C04B0u;
            goto label_1c04b0;
        }
    }
    ctx->pc = 0x1C04ACu;
    // 0x1c04ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c04acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c04b0:
    // 0x1c04b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c04b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c04b4:
    // 0x1c04b4: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1c04b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c04b8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C04B8u;
    {
        const bool branch_taken_0x1c04b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c04b8) {
            ctx->pc = 0x1C0484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0484;
        }
    }
    ctx->pc = 0x1C04C0u;
    // 0x1c04c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c04c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c04c4:
    // 0x1c04c4: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1c04c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c04c8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C04C8u;
    {
        const bool branch_taken_0x1c04c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c04c8) {
            ctx->pc = 0x1C0478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0478;
        }
    }
    ctx->pc = 0x1C04D0u;
    // 0x1c04d0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c04d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c04d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c04d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c04d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c04d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c04dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c04dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c04e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c04e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C04E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C04E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C04ECu;
    // 0x1c04ec: 0x0  nop
    ctx->pc = 0x1c04ecu;
    // NOP
    ctx->pc = 0x1c04f0u;
}
