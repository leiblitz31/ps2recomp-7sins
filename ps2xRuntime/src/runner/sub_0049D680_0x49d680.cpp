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

// Function: sub_0049D680
// Address: 0x49d680 - 0x49d6e8
void sub_0049D680_0x49d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049D680_0x49d680");
#endif

    switch (ctx->pc) {
        case 0x49d6d4u: goto label_49d6d4;
        default: break;
    }

    ctx->pc = 0x49d680u;

    // 0x49d680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49d684: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49d684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49d68c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x49d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x49d690: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x49D690u;
    {
        const bool branch_taken_0x49d690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D690u;
        // 0x49d694: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d690) {
            ctx->pc = 0x49D6A4u;
            goto label_49d6a4;
        }
    }
    ctx->pc = 0x49D698u;
    // 0x49d698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49d698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d69c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x49D69Cu;
    {
        const bool branch_taken_0x49d69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D69Cu;
        // 0x49d6a0: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d69c) {
            ctx->pc = 0x49D6D8u;
            goto label_49d6d8;
        }
    }
    ctx->pc = 0x49D6A4u;
label_49d6a4:
    // 0x49d6a4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x49d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x49d6a8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x49d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x49d6ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x49d6b0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x49d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x49d6b4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x49d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x49d6b8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x49d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x49d6bc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x49d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x49d6c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49d6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49d6c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49D6C4u;
    {
        const bool branch_taken_0x49d6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D6C4u;
        // 0x49d6c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d6c4) {
            ctx->pc = 0x49D6D8u;
            goto label_49d6d8;
        }
    }
    ctx->pc = 0x49D6CCu;
    // 0x49d6cc: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x49D6CCu;
    SET_GPR_U32(ctx, 31, 0x49D6D4u);
    ctx->pc = 0x49D6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D6CCu;
    // 0x49d6d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49D6CCu, 0x49D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D6D4u;
label_49d6d4:
    // 0x49d6d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49d6d8:
    // 0x49d6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49d6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x49D6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D6DCu;
        // 0x49d6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D6E4u;
    // 0x49d6e4: 0x0  nop
    ctx->pc = 0x49d6e4u;
    // NOP
    ctx->pc = 0x49d6e8u;
}
