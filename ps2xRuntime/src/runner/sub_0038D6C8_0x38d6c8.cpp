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

// Function: sub_0038D6C8
// Address: 0x38d6c8 - 0x38d748
void sub_0038D6C8_0x38d6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D6C8_0x38d6c8");
#endif

    switch (ctx->pc) {
        case 0x38d704u: goto label_38d704;
        default: break;
    }

    ctx->pc = 0x38d6c8u;

    // 0x38d6c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38d6cc: 0xaf85bd38  sw          $a1, -0x42C8($gp)
    ctx->pc = 0x38d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950200), GPR_U32(ctx, 5));
    // 0x38d6d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38d6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38d6d4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38d6d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d6dc: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x38d6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x38d6e0: 0x8c44ade8  lw          $a0, -0x5218($v0)
    ctx->pc = 0x38d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DADE8u));
    // 0x38d6e4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x38d6e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x38d6e8: 0x8f85a9a8  lw          $a1, -0x5658($gp)
    ctx->pc = 0x38d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945192)));
    // 0x38d6ec: 0x2508c528  addiu       $t0, $t0, -0x3AD8
    ctx->pc = 0x38d6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952232));
    // 0x38d6f0: 0x8f87a9ac  lw          $a3, -0x5654($gp)
    ctx->pc = 0x38d6f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945196)));
    // 0x38d6f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x38d6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38d6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d6fc: 0xc10408c  jal         func_410230
    ctx->pc = 0x38D6FCu;
    SET_GPR_U32(ctx, 31, 0x38D704u);
    ctx->pc = 0x38D700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6FCu;
    // 0x38d700: 0x35290012  ori         $t1, $t1, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x38D6FCu, 0x38D704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D704u;
label_38d704:
    // 0x38d704: 0x8f84bd38  lw          $a0, -0x42C8($gp)
    ctx->pc = 0x38d704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950200)));
    // 0x38d708: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38d708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x38d70c: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x38d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x38d710: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38d710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38d714: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38D714u;
    {
        const bool branch_taken_0x38d714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D714u;
        // 0x38d718: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d714) {
            ctx->pc = 0x38D724u;
            goto label_38d724;
        }
    }
    ctx->pc = 0x38D71Cu;
    // 0x38d71c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38D71Cu;
    {
        const bool branch_taken_0x38d71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D71Cu;
        // 0x38d720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d71c) {
            ctx->pc = 0x38D734u;
            goto label_38d734;
        }
    }
    ctx->pc = 0x38D724u;
label_38d724:
    // 0x38d724: 0x8f83bd3c  lw          $v1, -0x42C4($gp)
    ctx->pc = 0x38d724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950204)));
    // 0x38d728: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38d728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d72c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38d730: 0xaf83bd3c  sw          $v1, -0x42C4($gp)
    ctx->pc = 0x38d730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950204), GPR_U32(ctx, 3));
label_38d734:
    // 0x38d734: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38d734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d73c: 0x3e00008  jr          $ra
    ctx->pc = 0x38D73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D73Cu;
        // 0x38d740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D744u;
    // 0x38d744: 0x0  nop
    ctx->pc = 0x38d744u;
    // NOP
    ctx->pc = 0x38d748u;
}
