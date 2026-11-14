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

// Function: sub_002E8720
// Address: 0x2e8720 - 0x2e87c0
void sub_002E8720_0x2e8720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8720_0x2e8720");
#endif

    ctx->pc = 0x2e8720u;

    // 0x2e8720: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e8720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8724: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2e8724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e8728: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E8728u;
    {
        const bool branch_taken_0x2e8728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8728) {
            ctx->pc = 0x2E8794u;
            goto label_2e8794;
        }
    }
    ctx->pc = 0x2E8730u;
    // 0x2e8730: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2e8730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2e8734: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E8734u;
    {
        const bool branch_taken_0x2e8734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8734u;
        // 0x2e8738: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8734) {
            ctx->pc = 0x2E87A4u;
            goto label_2e87a4;
        }
    }
    ctx->pc = 0x2E873Cu;
    // 0x2e873c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2e873cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2e8740: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8740u;
    {
        const bool branch_taken_0x2e8740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8740u;
        // 0x2e8744: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8740) {
            ctx->pc = 0x2E8768u;
            goto label_2e8768;
        }
    }
    ctx->pc = 0x2E8748u;
    // 0x2e8748: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x2e8748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x2e874c: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x2e874cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2e8750: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x2e8750u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e8754: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x2e8754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e8758: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x2e8758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2e875c: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x2e875cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2e8760: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E8760u;
    {
        const bool branch_taken_0x2e8760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8760u;
        // 0x2e8764: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8760) {
            ctx->pc = 0x2E87B8u;
            goto label_2e87b8;
        }
    }
    ctx->pc = 0x2E8768u;
label_2e8768:
    // 0x2e8768: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x2e8768u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x2e876c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x2e876cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2e8770: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x2e8770u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e8774: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2e8774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e8778: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x2e8778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2e877c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x2e877cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2e8780: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2e8780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e8784: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2e8784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2e8788: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2e8788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2e878c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E878Cu;
    {
        const bool branch_taken_0x2e878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E878Cu;
        // 0x2e8790: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e878c) {
            ctx->pc = 0x2E87B8u;
            goto label_2e87b8;
        }
    }
    ctx->pc = 0x2E8794u;
label_2e8794:
    // 0x2e8794: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2e8794u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2e8798: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2e8798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e879c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E879Cu;
    {
        const bool branch_taken_0x2e879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E879Cu;
        // 0x2e87a0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e879c) {
            ctx->pc = 0x2E87B8u;
            goto label_2e87b8;
        }
    }
    ctx->pc = 0x2E87A4u;
label_2e87a4:
    // 0x2e87a4: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2e87a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x2e87a8: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x2e87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e87ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e87acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e87b0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2e87b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2e87b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2e87b8:
    // 0x2e87b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E87B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E87B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E87C0u;
}
