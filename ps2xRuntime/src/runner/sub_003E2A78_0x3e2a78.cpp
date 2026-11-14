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

// Function: sub_003E2A78
// Address: 0x3e2a78 - 0x3e2b70
void sub_003E2A78_0x3e2a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2A78_0x3e2a78");
#endif

    ctx->pc = 0x3e2a78u;

    // 0x3e2a78: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E2A78u;
    {
        const bool branch_taken_0x3e2a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2A78u;
        // 0x3e2a7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2a78) {
            ctx->pc = 0x3E2AF4u;
            goto label_3e2af4;
        }
    }
    ctx->pc = 0x3E2A80u;
    // 0x3e2a80: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3E2A80u;
    {
        const bool branch_taken_0x3e2a80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2a80) {
            ctx->pc = 0x3E2AF4u;
            goto label_3e2af4;
        }
    }
    ctx->pc = 0x3E2A88u;
    // 0x3e2a88: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2a88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2a8c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3e2a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3e2a90: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E2A90u;
    {
        const bool branch_taken_0x3e2a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2A90u;
        // 0x3e2a94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2a90) {
            ctx->pc = 0x3E2AF4u;
            goto label_3e2af4;
        }
    }
    ctx->pc = 0x3E2A98u;
    // 0x3e2a98: 0x90a30029  lbu         $v1, 0x29($a1)
    ctx->pc = 0x3e2a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
    // 0x3e2a9c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E2A9Cu;
    {
        const bool branch_taken_0x3e2a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e2a9c) {
            ctx->pc = 0x3E2AC8u;
            goto label_3e2ac8;
        }
    }
    ctx->pc = 0x3E2AA4u;
    // 0x3e2aa4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2AA4u;
    {
        const bool branch_taken_0x3e2aa4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2aa4) {
            ctx->pc = 0x3E2AB8u;
            goto label_3e2ab8;
        }
    }
    ctx->pc = 0x3E2AACu;
    // 0x3e2aac: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x3e2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x3e2ab0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3e2ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e2ab4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3e2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3e2ab8:
    // 0x3e2ab8: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E2AB8u;
    {
        const bool branch_taken_0x3e2ab8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2AB8u;
        // 0x3e2abc: 0x24a20060  addiu       $v0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ab8) {
            ctx->pc = 0x3E2AE0u;
            goto label_3e2ae0;
        }
    }
    ctx->pc = 0x3E2AC0u;
    // 0x3e2ac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2AC0u;
    {
        const bool branch_taken_0x3e2ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2AC0u;
        // 0x3e2ac4: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ac0) {
            ctx->pc = 0x3E2AE0u;
            goto label_3e2ae0;
        }
    }
    ctx->pc = 0x3E2AC8u;
label_3e2ac8:
    // 0x3e2ac8: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2AC8u;
    {
        const bool branch_taken_0x3e2ac8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2AC8u;
        // 0x3e2acc: 0x24a20060  addiu       $v0, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ac8) {
            ctx->pc = 0x3E2AD8u;
            goto label_3e2ad8;
        }
    }
    ctx->pc = 0x3E2AD0u;
    // 0x3e2ad0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x3e2ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e2ad4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3e2ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3e2ad8:
    // 0x3e2ad8: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3E2AD8u;
    {
        const bool branch_taken_0x3e2ad8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2ad8) {
            ctx->pc = 0x3E2ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2AD8u;
            // 0x3e2adc: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2AE0u;
            goto label_3e2ae0;
        }
    }
    ctx->pc = 0x3E2AE0u;
label_3e2ae0:
    // 0x3e2ae0: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2AE0u;
    {
        const bool branch_taken_0x3e2ae0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2AE0u;
        // 0x3e2ae4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ae0) {
            ctx->pc = 0x3E2AF4u;
            goto label_3e2af4;
        }
    }
    ctx->pc = 0x3E2AE8u;
    // 0x3e2ae8: 0x94a30026  lhu         $v1, 0x26($a1)
    ctx->pc = 0x3e2ae8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x3e2aec: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x3e2aecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3e2af0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3e2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_3e2af4:
    // 0x3e2af4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2AF4u;
        // 0x3e2af8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2AFCu;
    // 0x3e2afc: 0x0  nop
    ctx->pc = 0x3e2afcu;
    // NOP
    // 0x3e2b00: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E2B00u;
    {
        const bool branch_taken_0x3e2b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2b00) {
            ctx->pc = 0x3E2B3Cu;
            goto label_3e2b3c;
        }
    }
    ctx->pc = 0x3E2B08u;
    // 0x3e2b08: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x3E2B08u;
    {
        const bool branch_taken_0x3e2b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2b08) {
            ctx->pc = 0x3E2B3Cu;
            goto label_3e2b3c;
        }
    }
    ctx->pc = 0x3E2B10u;
    // 0x3e2b10: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3e2b10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3e2b14: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3e2b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3e2b18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E2B18u;
    {
        const bool branch_taken_0x3e2b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B18u;
        // 0x3e2b1c: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2b18) {
            ctx->pc = 0x3E2B3Cu;
            goto label_3e2b3c;
        }
    }
    ctx->pc = 0x3E2B20u;
    // 0x3e2b20: 0xdca30128  ld          $v1, 0x128($a1)
    ctx->pc = 0x3e2b20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 296)));
    // 0x3e2b24: 0x90a40120  lbu         $a0, 0x120($a1)
    ctx->pc = 0x3e2b24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x3e2b28: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3e2b28u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3e2b2c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3e2b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3e2b30: 0xdca30130  ld          $v1, 0x130($a1)
    ctx->pc = 0x3e2b30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x3e2b34: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B34u;
        // 0x3e2b38: 0xfd030000  sd          $v1, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2B3Cu;
label_3e2b3c:
    // 0x3e2b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B3Cu;
        // 0x3e2b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2B44u;
    // 0x3e2b44: 0x0  nop
    ctx->pc = 0x3e2b44u;
    // NOP
    // 0x3e2b48: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2B48u;
    {
        const bool branch_taken_0x3e2b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2b48) {
            ctx->pc = 0x3E2B68u;
            goto label_3e2b68;
        }
    }
    ctx->pc = 0x3E2B50u;
    // 0x3e2b50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E2B50u;
    {
        const bool branch_taken_0x3e2b50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2b50) {
            ctx->pc = 0x3E2B68u;
            goto label_3e2b68;
        }
    }
    ctx->pc = 0x3E2B58u;
    // 0x3e2b58: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2B58u;
    {
        const bool branch_taken_0x3e2b58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2b58) {
            ctx->pc = 0x3E2B68u;
            goto label_3e2b68;
        }
    }
    ctx->pc = 0x3E2B60u;
    // 0x3e2b60: 0x8ca200f8  lw          $v0, 0xF8($a1)
    ctx->pc = 0x3e2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x3e2b64: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3e2b64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3e2b68:
    // 0x3e2b68: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B68u;
        // 0x3e2b6c: 0x9ca200fc  lwu         $v0, 0xFC($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2B70u;
}
