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

// Function: sub_00326B38
// Address: 0x326b38 - 0x326c48
void sub_00326B38_0x326b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326B38_0x326b38");
#endif

    ctx->pc = 0x326b38u;

    // 0x326b38: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x326b3c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x326b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326b40: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x326b40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326b44: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x326b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x326b48: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x326b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x326b4c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x326b4cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x326b50: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x326b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x326b54: 0x1033821  addu        $a3, $t0, $v1
    ctx->pc = 0x326b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x326b58: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x326b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x326b5c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x326b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326b60: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x326b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x326b64: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x326B64u;
    {
        const bool branch_taken_0x326b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B64u;
        // 0x326b68: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b64) {
            ctx->pc = 0x326BB0u;
            goto label_326bb0;
        }
    }
    ctx->pc = 0x326B6Cu;
    // 0x326b6c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x326b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x326b70: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x326b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
    // 0x326b74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x326b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x326b78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x326b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326b7c: 0x800008  jr          $a0
    ctx->pc = 0x326B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x326B88u: goto label_326b88;
            case 0x326B90u: goto label_326b90;
            case 0x326B98u: goto label_326b98;
            case 0x326BA0u: goto label_326ba0;
            case 0x326BA8u: goto label_326ba8;
            case 0x326BB0u: goto label_326bb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x326B84u;
    // 0x326b84: 0x0  nop
    ctx->pc = 0x326b84u;
    // NOP
label_326b88:
    // 0x326b88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x326B88u;
    {
        const bool branch_taken_0x326b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B88u;
        // 0x326b8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b88) {
            ctx->pc = 0x326BB4u;
            goto label_326bb4;
        }
    }
    ctx->pc = 0x326B90u;
label_326b90:
    // 0x326b90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x326B90u;
    {
        const bool branch_taken_0x326b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B90u;
        // 0x326b94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b90) {
            ctx->pc = 0x326BB4u;
            goto label_326bb4;
        }
    }
    ctx->pc = 0x326B98u;
label_326b98:
    // 0x326b98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326B98u;
    {
        const bool branch_taken_0x326b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B98u;
        // 0x326b9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b98) {
            ctx->pc = 0x326BB4u;
            goto label_326bb4;
        }
    }
    ctx->pc = 0x326BA0u;
label_326ba0:
    // 0x326ba0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x326BA0u;
    {
        const bool branch_taken_0x326ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BA0u;
        // 0x326ba4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ba0) {
            ctx->pc = 0x326BB4u;
            goto label_326bb4;
        }
    }
    ctx->pc = 0x326BA8u;
label_326ba8:
    // 0x326ba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x326BA8u;
    {
        const bool branch_taken_0x326ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BA8u;
        // 0x326bac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ba8) {
            ctx->pc = 0x326BB4u;
            goto label_326bb4;
        }
    }
    ctx->pc = 0x326BB0u;
label_326bb0:
    // 0x326bb0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x326bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_326bb4:
    // 0x326bb4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x326bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x326bb8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x326bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326bbc: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x326bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x326bc0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x326BC0u;
    {
        const bool branch_taken_0x326bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BC0u;
        // 0x326bc4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bc0) {
            ctx->pc = 0x326C08u;
            goto label_326c08;
        }
    }
    ctx->pc = 0x326BC8u;
    // 0x326bc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x326bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x326bcc: 0x2442b7d0  addiu       $v0, $v0, -0x4830
    ctx->pc = 0x326bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948816));
    // 0x326bd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x326bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x326bd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x326bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326bd8: 0x800008  jr          $a0
    ctx->pc = 0x326BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x326BE0u: goto label_326be0;
            case 0x326BE8u: goto label_326be8;
            case 0x326BF0u: goto label_326bf0;
            case 0x326BF8u: goto label_326bf8;
            case 0x326C00u: goto label_326c00;
            case 0x326C08u: goto label_326c08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326BD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x326BE0u;
label_326be0:
    // 0x326be0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x326BE0u;
    {
        const bool branch_taken_0x326be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BE0u;
        // 0x326be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326be0) {
            ctx->pc = 0x326C0Cu;
            goto label_326c0c;
        }
    }
    ctx->pc = 0x326BE8u;
label_326be8:
    // 0x326be8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x326BE8u;
    {
        const bool branch_taken_0x326be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BE8u;
        // 0x326bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326be8) {
            ctx->pc = 0x326C0Cu;
            goto label_326c0c;
        }
    }
    ctx->pc = 0x326BF0u;
label_326bf0:
    // 0x326bf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326BF0u;
    {
        const bool branch_taken_0x326bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BF0u;
        // 0x326bf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bf0) {
            ctx->pc = 0x326C0Cu;
            goto label_326c0c;
        }
    }
    ctx->pc = 0x326BF8u;
label_326bf8:
    // 0x326bf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x326BF8u;
    {
        const bool branch_taken_0x326bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BF8u;
        // 0x326bfc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bf8) {
            ctx->pc = 0x326C0Cu;
            goto label_326c0c;
        }
    }
    ctx->pc = 0x326C00u;
label_326c00:
    // 0x326c00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x326C00u;
    {
        const bool branch_taken_0x326c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C00u;
        // 0x326c04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c00) {
            ctx->pc = 0x326C0Cu;
            goto label_326c0c;
        }
    }
    ctx->pc = 0x326C08u;
label_326c08:
    // 0x326c08: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x326c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_326c0c:
    // 0x326c0c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x326c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x326c10: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x326c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x326c14: 0x433818  mult        $a3, $v0, $v1
    ctx->pc = 0x326c14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x326c18: 0x248422d8  addiu       $a0, $a0, 0x22D8
    ctx->pc = 0x326c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8920));
    // 0x326c1c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x326c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x326c20: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x326c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x326c24: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x326c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x326c28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326c2c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x326c2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x326c30: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x326c30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x326c34: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x326c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326c38: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x326c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x326c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x326C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C3Cu;
        // 0x326c40: 0xfca20028  sd          $v0, 0x28($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326C44u;
    // 0x326c44: 0x0  nop
    ctx->pc = 0x326c44u;
    // NOP
    ctx->pc = 0x326c48u;
}
