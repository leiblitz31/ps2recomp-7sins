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

// Function: sub_003B79A0
// Address: 0x3b79a0 - 0x3b7a30
void sub_003B79A0_0x3b79a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B79A0_0x3b79a0");
#endif

    switch (ctx->pc) {
        case 0x3b79ccu: goto label_3b79cc;
        case 0x3b79e8u: goto label_3b79e8;
        case 0x3b79f0u: goto label_3b79f0;
        case 0x3b7a00u: goto label_3b7a00;
        default: break;
    }

    ctx->pc = 0x3b79a0u;

    // 0x3b79a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b79a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b79a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b79a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b79a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b79a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b79ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b79acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b79b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b79b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b79b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b79b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b79b8: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x3b79b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
    // 0x3b79bc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b79bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3b79c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b79c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b79c4: 0xc103642  jal         func_40D908
    ctx->pc = 0x3B79C4u;
    SET_GPR_U32(ctx, 31, 0x3B79CCu);
    ctx->pc = 0x3B79C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B79C4u;
    // 0x3b79c8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B79C4u, 0x3B79CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B79CCu;
label_3b79cc:
    // 0x3b79cc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3B79CCu;
    {
        const bool branch_taken_0x3b79cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B79CCu;
        // 0x3b79d0: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b79cc) {
            ctx->pc = 0x3B7A00u;
            goto label_3b7a00;
        }
    }
    ctx->pc = 0x3B79D4u;
    // 0x3b79d4: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3b79d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x3b79d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b79d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b79dc: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x3b79dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    // 0x3b79e0: 0xc103722  jal         func_40DC88
    ctx->pc = 0x3B79E0u;
    SET_GPR_U32(ctx, 31, 0x3B79E8u);
    ctx->pc = 0x3B79E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B79E0u;
    // 0x3b79e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B79E0u, 0x3B79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B79E8u;
label_3b79e8:
    // 0x3b79e8: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B79E8u;
    SET_GPR_U32(ctx, 31, 0x3B79F0u);
    ctx->pc = 0x3B79ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B79E8u;
    // 0x3b79ec: 0x8e0400b0  lw          $a0, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B79E8u, 0x3B79F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B79F0u;
label_3b79f0:
    // 0x3b79f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b79f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b79f4: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x3b79f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3b79f8: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3B79F8u;
    SET_GPR_U32(ctx, 31, 0x3B7A00u);
    ctx->pc = 0x3B79FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B79F8u;
    // 0x3b79fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3B79F8u, 0x3B7A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7A00u;
label_3b7a00:
    // 0x3b7a00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b7a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b7a04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b7a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7a08: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x3b7a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x3b7a0c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3b7a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3b7a10: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3b7a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x3b7a14: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b7a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b7a18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b7a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b7a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b7a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7a24: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7A24u;
        // 0x3b7a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7A2Cu;
    // 0x3b7a2c: 0x0  nop
    ctx->pc = 0x3b7a2cu;
    // NOP
    ctx->pc = 0x3b7a30u;
}
