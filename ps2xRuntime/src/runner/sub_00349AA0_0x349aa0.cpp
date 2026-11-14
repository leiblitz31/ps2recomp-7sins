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

// Function: sub_00349AA0
// Address: 0x349aa0 - 0x349b40
void sub_00349AA0_0x349aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349AA0_0x349aa0");
#endif

    switch (ctx->pc) {
        case 0x349aa0u: goto label_349aa0;
        case 0x349aa4u: goto label_349aa4;
        case 0x349aa8u: goto label_349aa8;
        case 0x349aacu: goto label_349aac;
        case 0x349ab0u: goto label_349ab0;
        case 0x349ab4u: goto label_349ab4;
        case 0x349ab8u: goto label_349ab8;
        case 0x349abcu: goto label_349abc;
        case 0x349ac0u: goto label_349ac0;
        case 0x349ac4u: goto label_349ac4;
        case 0x349ac8u: goto label_349ac8;
        case 0x349accu: goto label_349acc;
        case 0x349ad0u: goto label_349ad0;
        case 0x349ad4u: goto label_349ad4;
        case 0x349ad8u: goto label_349ad8;
        case 0x349adcu: goto label_349adc;
        case 0x349ae0u: goto label_349ae0;
        case 0x349ae4u: goto label_349ae4;
        case 0x349ae8u: goto label_349ae8;
        case 0x349aecu: goto label_349aec;
        case 0x349af0u: goto label_349af0;
        case 0x349af4u: goto label_349af4;
        case 0x349af8u: goto label_349af8;
        case 0x349afcu: goto label_349afc;
        case 0x349b00u: goto label_349b00;
        case 0x349b04u: goto label_349b04;
        case 0x349b08u: goto label_349b08;
        case 0x349b0cu: goto label_349b0c;
        case 0x349b10u: goto label_349b10;
        case 0x349b14u: goto label_349b14;
        case 0x349b18u: goto label_349b18;
        case 0x349b1cu: goto label_349b1c;
        case 0x349b20u: goto label_349b20;
        case 0x349b24u: goto label_349b24;
        case 0x349b28u: goto label_349b28;
        case 0x349b2cu: goto label_349b2c;
        case 0x349b30u: goto label_349b30;
        case 0x349b34u: goto label_349b34;
        case 0x349b38u: goto label_349b38;
        case 0x349b3cu: goto label_349b3c;
        default: break;
    }

    ctx->pc = 0x349aa0u;

label_349aa0:
    // 0x349aa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x349aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_349aa4:
    // 0x349aa4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x349aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_349aa8:
    // 0x349aa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x349aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_349aac:
    // 0x349aac: 0x8c62c2cc  lw          $v0, -0x3D34($v1)
    ctx->pc = 0x349aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951628)));
label_349ab0:
    // 0x349ab0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x349ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_349ab4:
    // 0x349ab4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x349ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_349ab8:
    // 0x349ab8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x349ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_349abc:
    // 0x349abc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x349abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_349ac0:
    // 0x349ac0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x349ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_349ac4:
    // 0x349ac4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x349ac4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_349ac8:
    // 0x349ac8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x349ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_349acc:
    // 0x349acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_349ad0:
    // 0x349ad0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x349ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_349ad4:
    // 0x349ad4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x349ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_349ad8:
    // 0x349ad8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_349adc:
    if (ctx->pc == 0x349ADCu) {
        ctx->pc = 0x349ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AD8u;
        // 0x349adc: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349AE0u;
        goto label_349ae0;
    }
    ctx->pc = 0x349AD8u;
    {
        const bool branch_taken_0x349ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AD8u;
        // 0x349adc: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349ad8) {
            ctx->pc = 0x349B14u;
            goto label_349b14;
        }
    }
    ctx->pc = 0x349AE0u;
label_349ae0:
    // 0x349ae0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x349ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_349ae4:
    // 0x349ae4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x349ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_349ae8:
    // 0x349ae8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x349ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_349aec:
    // 0x349aec: 0x0  nop
    ctx->pc = 0x349aecu;
    // NOP
label_349af0:
    // 0x349af0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x349af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_349af4:
    // 0x349af4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x349af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_349af8:
    // 0x349af8: 0x2a0f809  jalr        $s5
label_349afc:
    if (ctx->pc == 0x349AFCu) {
        ctx->pc = 0x349AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AF8u;
        // 0x349afc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349B00u;
        goto label_349b00;
    }
    ctx->pc = 0x349AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x349B00u);
        ctx->pc = 0x349AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349AF8u;
        // 0x349afc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349AF8u, 0x349B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x349B00u;
label_349b00:
    // 0x349b00: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_349b04:
    if (ctx->pc == 0x349B04u) {
        ctx->pc = 0x349B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B00u;
        // 0x349b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349B08u;
        goto label_349b08;
    }
    ctx->pc = 0x349B00u;
    {
        const bool branch_taken_0x349b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x349B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B00u;
        // 0x349b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349b00) {
            ctx->pc = 0x349B18u;
            goto label_349b18;
        }
    }
    ctx->pc = 0x349B08u;
label_349b08:
    // 0x349b08: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x349b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_349b0c:
    // 0x349b0c: 0x5612fff8  bnel        $s0, $s2, . + 4 + (-0x8 << 2)
label_349b10:
    if (ctx->pc == 0x349B10u) {
        ctx->pc = 0x349B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B0Cu;
        // 0x349b10: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349B14u;
        goto label_349b14;
    }
    ctx->pc = 0x349B0Cu;
    {
        const bool branch_taken_0x349b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x349b0c) {
            ctx->pc = 0x349B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349B0Cu;
            // 0x349b10: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349af0;
        }
    }
    ctx->pc = 0x349B14u;
label_349b14:
    // 0x349b14: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x349b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_349b18:
    // 0x349b18: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x349b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_349b1c:
    // 0x349b1c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x349b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_349b20:
    // 0x349b20: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x349b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_349b24:
    // 0x349b24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x349b24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_349b28:
    // 0x349b28: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x349b28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_349b2c:
    // 0x349b2c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x349b2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_349b30:
    // 0x349b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349b34:
    // 0x349b34: 0x3e00008  jr          $ra
label_349b38:
    if (ctx->pc == 0x349B38u) {
        ctx->pc = 0x349B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B34u;
        // 0x349b38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x349B3Cu;
        goto label_349b3c;
    }
    ctx->pc = 0x349B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349B34u;
        // 0x349b38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349B3Cu;
label_349b3c:
    // 0x349b3c: 0x0  nop
    ctx->pc = 0x349b3cu;
    // NOP
    ctx->pc = 0x349b40u;
}
