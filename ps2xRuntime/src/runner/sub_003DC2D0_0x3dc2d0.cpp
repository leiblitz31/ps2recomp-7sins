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

// Function: sub_003DC2D0
// Address: 0x3dc2d0 - 0x3dc370
void sub_003DC2D0_0x3dc2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC2D0_0x3dc2d0");
#endif

    ctx->pc = 0x3dc2d0u;

    // 0x3dc2d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3dc2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc2d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3dc2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3dc2d8: 0x8cc316d4  lw          $v1, 0x16D4($a2)
    ctx->pc = 0x3dc2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5844)));
    // 0x3dc2dc: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3DC2DCu;
    {
        const bool branch_taken_0x3dc2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC2DCu;
        // 0x3dc2e0: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc2dc) {
            ctx->pc = 0x3DC328u;
            goto label_3dc328;
        }
    }
    ctx->pc = 0x3DC2E4u;
    // 0x3dc2e4: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x3dc2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3dc2e8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3dc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dc2ec: 0x90c316d0  lbu         $v1, 0x16D0($a2)
    ctx->pc = 0x3dc2ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5840)));
    // 0x3dc2f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dc2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dc2f4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dc2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dc2f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3dc2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc2fc: 0xacc4001c  sw          $a0, 0x1C($a2)
    ctx->pc = 0x3dc2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 4));
    // 0x3dc300: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3dc300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3dc304: 0x94c316d0  lhu         $v1, 0x16D0($a2)
    ctx->pc = 0x3dc304u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 5840)));
    // 0x3dc308: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3dc308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dc30c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x3dc30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x3dc310: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3dc310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3dc314: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3dc314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3dc318: 0xacc5001c  sw          $a1, 0x1C($a2)
    ctx->pc = 0x3dc318u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
    // 0x3dc31c: 0xacc016d4  sw          $zero, 0x16D4($a2)
    ctx->pc = 0x3dc31cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5844), GPR_U32(ctx, 0));
    // 0x3dc320: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC320u;
        // 0x3dc324: 0xa4c016d0  sh          $zero, 0x16D0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 5840), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC328u;
label_3dc328:
    // 0x3dc328: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3DC328u;
    {
        const bool branch_taken_0x3dc328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc328) {
            ctx->pc = 0x3DC364u;
            goto label_3dc364;
        }
    }
    ctx->pc = 0x3DC330u;
    // 0x3dc330: 0x8cc3001c  lw          $v1, 0x1C($a2)
    ctx->pc = 0x3dc330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x3dc334: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3dc334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3dc338: 0x90c416d0  lbu         $a0, 0x16D0($a2)
    ctx->pc = 0x3dc338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5840)));
    // 0x3dc33c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3dc33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3dc340: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x3dc340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dc344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dc344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dc348: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x3dc348u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
    // 0x3dc34c: 0x94c216d0  lhu         $v0, 0x16D0($a2)
    ctx->pc = 0x3dc34cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 5840)));
    // 0x3dc350: 0x8cc316d4  lw          $v1, 0x16D4($a2)
    ctx->pc = 0x3dc350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5844)));
    // 0x3dc354: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3dc354u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3dc358: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x3dc358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x3dc35c: 0xa4c216d0  sh          $v0, 0x16D0($a2)
    ctx->pc = 0x3dc35cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 5840), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dc360: 0xacc316d4  sw          $v1, 0x16D4($a2)
    ctx->pc = 0x3dc360u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5844), GPR_U32(ctx, 3));
label_3dc364:
    // 0x3dc364: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC36Cu;
    // 0x3dc36c: 0x0  nop
    ctx->pc = 0x3dc36cu;
    // NOP
    ctx->pc = 0x3dc370u;
}
