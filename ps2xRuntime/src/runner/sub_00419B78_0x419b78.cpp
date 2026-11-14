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

// Function: sub_00419B78
// Address: 0x419b78 - 0x419c70
void sub_00419B78_0x419b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419B78_0x419b78");
#endif

    switch (ctx->pc) {
        case 0x419bb8u: goto label_419bb8;
        case 0x419bf0u: goto label_419bf0;
        case 0x419bf8u: goto label_419bf8;
        default: break;
    }

    ctx->pc = 0x419b78u;

    // 0x419b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x419b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x419b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x419b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x419b80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x419b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x419b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x419b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419b8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x419b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x419b90: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x419b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x419b94: 0x54710004  bnel        $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x419B94u;
    {
        const bool branch_taken_0x419b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x419b94) {
            ctx->pc = 0x419B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419B94u;
            // 0x419b98: 0x8c62009c  lw          $v0, 0x9C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419BA8u;
            goto label_419ba8;
        }
    }
    ctx->pc = 0x419B9Cu;
    // 0x419b9c: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x419b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x419ba0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x419BA0u;
    {
        const bool branch_taken_0x419ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419BA0u;
        // 0x419ba4: 0xac820098  sw          $v0, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419ba0) {
            ctx->pc = 0x419BD8u;
            goto label_419bd8;
        }
    }
    ctx->pc = 0x419BA8u;
label_419ba8:
    // 0x419ba8: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x419BA8u;
    {
        const bool branch_taken_0x419ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x419BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419BA8u;
        // 0x419bac: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419ba8) {
            ctx->pc = 0x419BD4u;
            goto label_419bd4;
        }
    }
    ctx->pc = 0x419BB0u;
    // 0x419bb0: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x419bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x419bb4: 0x0  nop
    ctx->pc = 0x419bb4u;
    // NOP
label_419bb8:
    // 0x419bb8: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x419bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x419bbc: 0x0  nop
    ctx->pc = 0x419bbcu;
    // NOP
    // 0x419bc0: 0x0  nop
    ctx->pc = 0x419bc0u;
    // NOP
    // 0x419bc4: 0x0  nop
    ctx->pc = 0x419bc4u;
    // NOP
    // 0x419bc8: 0x0  nop
    ctx->pc = 0x419bc8u;
    // NOP
    // 0x419bcc: 0x5451fffa  bnel        $v0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x419BCCu;
    {
        const bool branch_taken_0x419bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x419bcc) {
            ctx->pc = 0x419BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419BCCu;
            // 0x419bd0: 0x8c63009c  lw          $v1, 0x9C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419bb8;
        }
    }
    ctx->pc = 0x419BD4u;
label_419bd4:
    // 0x419bd4: 0xac64009c  sw          $a0, 0x9C($v1)
    ctx->pc = 0x419bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 4));
label_419bd8:
    // 0x419bd8: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x419bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x419bdc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x419bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x419be0: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x419be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x419be4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x419BE4u;
    {
        const bool branch_taken_0x419be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x419BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419BE4u;
        // 0x419be8: 0xae3100a0  sw          $s1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419be4) {
            ctx->pc = 0x419C04u;
            goto label_419c04;
        }
    }
    ctx->pc = 0x419BECu;
    // 0x419bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419bf0:
    // 0x419bf0: 0xc1068e0  jal         func_41A380
    ctx->pc = 0x419BF0u;
    SET_GPR_U32(ctx, 31, 0x419BF8u);
    ctx->pc = 0x419BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419BF0u;
    // 0x419bf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A380u, 0x419BF0u, 0x419BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419BF8u;
label_419bf8:
    // 0x419bf8: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x419bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x419bfc: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x419BFCu;
    {
        const bool branch_taken_0x419bfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x419C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419BFCu;
        // 0x419c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419bfc) {
            ctx->pc = 0x419BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419bf0;
        }
    }
    ctx->pc = 0x419C04u;
label_419c04:
    // 0x419c04: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x419c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x419c08: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x419c08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x419c0c: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x419c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x419c10: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x419C10u;
    {
        const bool branch_taken_0x419c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x419c10) {
            ctx->pc = 0x419C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419C10u;
            // 0x419c14: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419C40u;
            goto label_419c40;
        }
    }
    ctx->pc = 0x419C18u;
    // 0x419c18: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x419c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x419c1c: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x419c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x419c20: 0x8c64e93c  lw          $a0, -0x16C4($v1)
    ctx->pc = 0x419c20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419c24: 0x2462e93c  addiu       $v0, $v1, -0x16C4
    ctx->pc = 0x419c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961468));
    // 0x419c28: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x419c28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x419c2c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x419c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x419c30: 0x8c62e93c  lw          $v0, -0x16C4($v1)
    ctx->pc = 0x419c30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E93Cu));
    // 0x419c34: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x419c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x419c38: 0xac65e93c  sw          $a1, -0x16C4($v1)
    ctx->pc = 0x419c38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E93Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E93Cu, _value); } while (0);
    // 0x419c3c: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x419c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_419c40:
    // 0x419c40: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x419c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x419c44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x419c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419c48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x419c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x419c4c: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x419c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x419c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419c54: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x419c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x419c58: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x419c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x419c5c: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x419c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x419c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x419c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419c64: 0x3e00008  jr          $ra
    ctx->pc = 0x419C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419C64u;
        // 0x419c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x419C6Cu;
    // 0x419c6c: 0x0  nop
    ctx->pc = 0x419c6cu;
    // NOP
    ctx->pc = 0x419c70u;
}
