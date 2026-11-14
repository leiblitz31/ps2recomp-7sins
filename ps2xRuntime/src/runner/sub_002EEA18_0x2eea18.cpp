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

// Function: sub_002EEA18
// Address: 0x2eea18 - 0x2eea80
void sub_002EEA18_0x2eea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEA18_0x2eea18");
#endif

    switch (ctx->pc) {
        case 0x2eea48u: goto label_2eea48;
        default: break;
    }

    ctx->pc = 0x2eea18u;

    // 0x2eea18: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2eea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2eea1c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2eea1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2eea20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2eea20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eea24: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EEA24u;
    {
        const bool branch_taken_0x2eea24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eea24) {
            ctx->pc = 0x2EEA78u;
            goto label_2eea78;
        }
    }
    ctx->pc = 0x2EEA2Cu;
    // 0x2eea2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eea30: 0x248a0014  addiu       $t2, $a0, 0x14
    ctx->pc = 0x2eea30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2eea34: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x2eea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2eea38: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x2eea38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2eea3c: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x2eea3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eea40: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x2eea40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x2eea44: 0x0  nop
    ctx->pc = 0x2eea44u;
    // NOP
label_2eea48:
    // 0x2eea48: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x2eea48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x2eea4c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2eea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2eea50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2eea50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eea54: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x2eea54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2eea58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2eea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eea5c: 0x147402b  sltu        $t0, $t2, $a3
    ctx->pc = 0x2eea5cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2eea60: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x2eea60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2eea64: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEA64u;
    {
        const bool branch_taken_0x2eea64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EEA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA64u;
        // 0x2eea68: 0xc3100a  movz        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea64) {
            ctx->pc = 0x2EEA78u;
            goto label_2eea78;
        }
    }
    ctx->pc = 0x2EEA6Cu;
    // 0x2eea6c: 0x5500fff6  bnel        $t0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2EEA6Cu;
    {
        const bool branch_taken_0x2eea6c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eea6c) {
            ctx->pc = 0x2EEA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEA6Cu;
            // 0x2eea70: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eea48;
        }
    }
    ctx->pc = 0x2EEA74u;
    // 0x2eea74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eea74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eea78:
    // 0x2eea78: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEA80u;
}
