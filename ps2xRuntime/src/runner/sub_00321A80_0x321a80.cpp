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

// Function: sub_00321A80
// Address: 0x321a80 - 0x321b50
void sub_00321A80_0x321a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321A80_0x321a80");
#endif

    switch (ctx->pc) {
        case 0x321adcu: goto label_321adc;
        case 0x321af8u: goto label_321af8;
        default: break;
    }

    ctx->pc = 0x321a80u;

    // 0x321a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321a84: 0x8f82bce0  lw          $v0, -0x4320($gp)
    ctx->pc = 0x321a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950112)));
    // 0x321a88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x321a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x321a8c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x321a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x321a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x321a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321a94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x321a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x321a98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x321a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x321a9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321aa0: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x321aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x321aa4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x321aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x321aa8: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x321aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x321aac: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x321AACu;
    {
        const bool branch_taken_0x321aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AACu;
        // 0x321ab0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321aac) {
            ctx->pc = 0x321B34u;
            goto label_321b34;
        }
    }
    ctx->pc = 0x321AB4u;
    // 0x321ab4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x321ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x321ab8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x321ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x321abc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x321ABCu;
    {
        const bool branch_taken_0x321abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321ABCu;
        // 0x321ac0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321abc) {
            ctx->pc = 0x321B38u;
            goto label_321b38;
        }
    }
    ctx->pc = 0x321AC4u;
    // 0x321ac4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x321ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x321ac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x321ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321acc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x321accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x321ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x321ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ad4: 0xc0c83c2  jal         func_320F08
    ctx->pc = 0x321AD4u;
    SET_GPR_U32(ctx, 31, 0x321ADCu);
    ctx->pc = 0x321AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321AD4u;
    // 0x321ad8: 0x8c480020  lw          $t0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F08u, 0x321AD4u, 0x321ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321ADCu;
label_321adc:
    // 0x321adc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x321adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ae0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x321ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x321ae4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x321AE4u;
    {
        const bool branch_taken_0x321ae4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x321AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AE4u;
        // 0x321ae8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321ae4) {
            ctx->pc = 0x321B2Cu;
            goto label_321b2c;
        }
    }
    ctx->pc = 0x321AECu;
    // 0x321aec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x321aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x321af0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x321af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x321af4: 0x0  nop
    ctx->pc = 0x321af4u;
    // NOP
label_321af8:
    // 0x321af8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x321af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x321afc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x321afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x321b00: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x321b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x321b04: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x321b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x321b08: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x321b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x321b0c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x321b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x321b10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x321b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x321b14: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x321b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x321b18: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x321b18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x321b1c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x321b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x321b20: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x321b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x321b24: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x321B24u;
    {
        const bool branch_taken_0x321b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B24u;
        // 0x321b28: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b24) {
            ctx->pc = 0x321AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321af8;
        }
    }
    ctx->pc = 0x321B2Cu;
label_321b2c:
    // 0x321b2c: 0xae470004  sw          $a3, 0x4($s2)
    ctx->pc = 0x321b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 7));
    // 0x321b30: 0xacf10014  sw          $s1, 0x14($a3)
    ctx->pc = 0x321b30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 17));
label_321b34:
    // 0x321b34: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x321b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321b38:
    // 0x321b38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x321b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321b3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x321b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321b40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x321b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321b48: 0x3e00008  jr          $ra
    ctx->pc = 0x321B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B48u;
        // 0x321b4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321B50u;
}
