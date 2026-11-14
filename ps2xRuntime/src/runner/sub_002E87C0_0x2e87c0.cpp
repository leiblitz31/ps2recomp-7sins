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

// Function: sub_002E87C0
// Address: 0x2e87c0 - 0x2e8860
void sub_002E87C0_0x2e87c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E87C0_0x2e87c0");
#endif

    ctx->pc = 0x2e87c0u;

    // 0x2e87c0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2e87c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e87c4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2e87c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e87c8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E87C8u;
    {
        const bool branch_taken_0x2e87c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e87c8) {
            ctx->pc = 0x2E8834u;
            goto label_2e8834;
        }
    }
    ctx->pc = 0x2E87D0u;
    // 0x2e87d0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2e87d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2e87d4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E87D4u;
    {
        const bool branch_taken_0x2e87d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87D4u;
        // 0x2e87d8: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87d4) {
            ctx->pc = 0x2E8844u;
            goto label_2e8844;
        }
    }
    ctx->pc = 0x2E87DCu;
    // 0x2e87dc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2e87dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2e87e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E87E0u;
    {
        const bool branch_taken_0x2e87e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E87E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E87E0u;
        // 0x2e87e4: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e87e0) {
            ctx->pc = 0x2E8808u;
            goto label_2e8808;
        }
    }
    ctx->pc = 0x2E87E8u;
    // 0x2e87e8: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x2e87e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2e87ec: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x2e87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2e87f0: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x2e87f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e87f4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x2e87f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e87f8: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x2e87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2e87fc: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x2e87fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2e8800: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E8800u;
    {
        const bool branch_taken_0x2e8800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8800u;
        // 0x2e8804: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8800) {
            ctx->pc = 0x2E8858u;
            goto label_2e8858;
        }
    }
    ctx->pc = 0x2E8808u;
label_2e8808:
    // 0x2e8808: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x2e8808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2e880c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x2e880cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2e8810: 0x23600  sll         $a2, $v0, 24
    ctx->pc = 0x2e8810u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e8814: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2e8814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2e8818: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x2e8818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2e881c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x2e881cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2e8820: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2e8820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e8824: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2e8824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2e8828: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2e8828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2e882c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E882Cu;
    {
        const bool branch_taken_0x2e882c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E882Cu;
        // 0x2e8830: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e882c) {
            ctx->pc = 0x2E8858u;
            goto label_2e8858;
        }
    }
    ctx->pc = 0x2E8834u;
label_2e8834:
    // 0x2e8834: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e8834u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e8838: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2e8838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e883c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E883Cu;
    {
        const bool branch_taken_0x2e883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E883Cu;
        // 0x2e8840: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e883c) {
            ctx->pc = 0x2E8858u;
            goto label_2e8858;
        }
    }
    ctx->pc = 0x2E8844u;
label_2e8844:
    // 0x2e8844: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2e8844u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2e8848: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x2e8848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2e884c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e884cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e8850: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2e8850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2e8854: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2e8854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2e8858:
    // 0x2e8858: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8860u;
}
