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

// Function: sub_004ABD28
// Address: 0x4abd28 - 0x4abe10
void sub_004ABD28_0x4abd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ABD28_0x4abd28");
#endif

    switch (ctx->pc) {
        case 0x4abd4cu: goto label_4abd4c;
        case 0x4abe00u: goto label_4abe00;
        default: break;
    }

    ctx->pc = 0x4abd28u;

    // 0x4abd28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4abd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4abd2c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4abd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4abd30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4abd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4abd34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4abd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4abd38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4abd38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abd3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4abd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abd40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4abd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4abd44: 0xc10480a  jal         func_412028
    ctx->pc = 0x4ABD44u;
    SET_GPR_U32(ctx, 31, 0x4ABD4Cu);
    ctx->pc = 0x4ABD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABD44u;
    // 0x4abd48: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x4ABD44u, 0x4ABD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABD4Cu;
label_4abd4c:
    // 0x4abd4c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4abd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4abd50: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x4ABD50u;
    {
        const bool branch_taken_0x4abd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4ABD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD50u;
        // 0x4abd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd50) {
            ctx->pc = 0x4ABDC0u;
            goto label_4abdc0;
        }
    }
    ctx->pc = 0x4ABD58u;
    // 0x4abd58: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4abd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4abd5c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4abd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4abd60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4abd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4abd64: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4abd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4abd68: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x4abd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4abd6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4abd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4abd70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ABD70u;
    {
        const bool branch_taken_0x4abd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD70u;
        // 0x4abd74: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd70) {
            ctx->pc = 0x4ABD88u;
            goto label_4abd88;
        }
    }
    ctx->pc = 0x4ABD78u;
    // 0x4abd78: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x4abd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x4abd7c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4abd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x4abd80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4ABD80u;
    {
        const bool branch_taken_0x4abd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ABD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABD80u;
        // 0x4abd84: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4abd80) {
            ctx->pc = 0x4ABDB8u;
            goto label_4abdb8;
        }
    }
    ctx->pc = 0x4ABD88u;
label_4abd88:
    // 0x4abd88: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x4abd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x4abd8c: 0x61382  srl         $v0, $a2, 14
    ctx->pc = 0x4abd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x4abd90: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x4abd90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x4abd94: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4abd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4abd98: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4abd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4abd9c: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x4abd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x4abda0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4abda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4abda4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x4abda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x4abda8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4abda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4abdac: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x4abdacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4abdb0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4abdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x4abdb4: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x4abdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_4abdb8:
    // 0x4abdb8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x4abdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x4abdbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4abdbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4abdc0:
    // 0x4abdc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4abdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4abdc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4abdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4abdc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4abdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4abdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABDCCu;
        // 0x4abdd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABDD4u;
    // 0x4abdd4: 0x0  nop
    ctx->pc = 0x4abdd4u;
    // NOP
    // 0x4abdd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4abdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4abddc: 0x3c021c02  lui         $v0, 0x1C02
    ctx->pc = 0x4abddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7170 << 16));
    // 0x4abde0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4abde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4abde4: 0x34420037  ori         $v0, $v0, 0x37
    ctx->pc = 0x4abde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55);
    // 0x4abde8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4abde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4abdec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4abdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4abdf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4abdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4abdf4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4abdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4abdf8: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x4ABDF8u;
    SET_GPR_U32(ctx, 31, 0x4ABE00u);
    ctx->pc = 0x4ABDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ABDF8u;
    // 0x4abdfc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x4ABDF8u, 0x4ABE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ABE00u;
label_4abe00:
    // 0x4abe00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4abe00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4abe04: 0x3e00008  jr          $ra
    ctx->pc = 0x4ABE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ABE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ABE04u;
        // 0x4abe08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ABE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ABE0Cu;
    // 0x4abe0c: 0x0  nop
    ctx->pc = 0x4abe0cu;
    // NOP
    ctx->pc = 0x4abe10u;
}
