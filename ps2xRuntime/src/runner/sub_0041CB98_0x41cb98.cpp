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

// Function: sub_0041CB98
// Address: 0x41cb98 - 0x41cc18
void sub_0041CB98_0x41cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CB98_0x41cb98");
#endif

    switch (ctx->pc) {
        case 0x41cbc0u: goto label_41cbc0;
        default: break;
    }

    ctx->pc = 0x41cb98u;

    // 0x41cb98: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x41cb98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cb9c: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41cba0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x41cba4: 0x2463e98c  addiu       $v1, $v1, -0x1674
    ctx->pc = 0x41cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961548));
    // 0x41cba8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x41cba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x41cbac: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x41CBACu;
    {
        const bool branch_taken_0x41cbac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CBACu;
        // 0x41cbb0: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cbac) {
            ctx->pc = 0x41CC0Cu;
            goto label_41cc0c;
        }
    }
    ctx->pc = 0x41CBB4u;
    // 0x41cbb4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x41cbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cbb8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41cbb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cbbc: 0x0  nop
    ctx->pc = 0x41cbbcu;
    // NOP
label_41cbc0:
    // 0x41cbc0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x41cbc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x41cbc4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x41cbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cbc8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x41cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x41cbcc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41cbd0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41cbd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41cbd4: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x41cbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x41cbd8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x41cbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x41cbdc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41cbe0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41cbe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41cbe4: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x41cbe4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x41cbe8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x41cbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x41cbec: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41cbf0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41cbf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41cbf4: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x41cbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x41cbf8: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x41cbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x41cbfc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x41cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x41cc00: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x41cc00u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41cc04: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x41CC04u;
    {
        const bool branch_taken_0x41cc04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC04u;
        // 0x41cc08: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cc04) {
            ctx->pc = 0x41CBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41cbc0;
        }
    }
    ctx->pc = 0x41CC0Cu;
label_41cc0c:
    // 0x41cc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x41CC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CC14u;
    // 0x41cc14: 0x0  nop
    ctx->pc = 0x41cc14u;
    // NOP
    ctx->pc = 0x41cc18u;
}
