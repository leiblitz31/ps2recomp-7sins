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

// Function: sub_0041BEA8
// Address: 0x41bea8 - 0x41c0d0
void sub_0041BEA8_0x41bea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041BEA8_0x41bea8");
#endif

    switch (ctx->pc) {
        case 0x41bf14u: goto label_41bf14;
        case 0x41bf48u: goto label_41bf48;
        case 0x41bfc0u: goto label_41bfc0;
        case 0x41bfe0u: goto label_41bfe0;
        case 0x41c000u: goto label_41c000;
        case 0x41c078u: goto label_41c078;
        case 0x41c088u: goto label_41c088;
        default: break;
    }

    ctx->pc = 0x41bea8u;

    // 0x41bea8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41bea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41beac: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x41beacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41beb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41beb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x41beb4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x41beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x41beb8: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x41beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x41bebc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x41BEBCu;
    {
        const bool branch_taken_0x41bebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BEBCu;
        // 0x41bec0: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bebc) {
            ctx->pc = 0x41BEF0u;
            goto label_41bef0;
        }
    }
    ctx->pc = 0x41BEC4u;
    // 0x41bec4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41BEC4u;
    {
        const bool branch_taken_0x41bec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BEC4u;
        // 0x41bec8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bec4) {
            ctx->pc = 0x41BEDCu;
            goto label_41bedc;
        }
    }
    ctx->pc = 0x41BECCu;
    // 0x41becc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x41BECCu;
    {
        const bool branch_taken_0x41becc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BECCu;
        // 0x41bed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41becc) {
            ctx->pc = 0x41BEF0u;
            goto label_41bef0;
        }
    }
    ctx->pc = 0x41BED4u;
    // 0x41bed4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x41BED4u;
    {
        const bool branch_taken_0x41bed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41bed4) {
            ctx->pc = 0x41C068u;
            goto label_41c068;
        }
    }
    ctx->pc = 0x41BEDCu;
label_41bedc:
    // 0x41bedc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x41bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x41bee0: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x41BEE0u;
    {
        const bool branch_taken_0x41bee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BEE0u;
        // 0x41bee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bee0) {
            ctx->pc = 0x41BF9Cu;
            goto label_41bf9c;
        }
    }
    ctx->pc = 0x41BEE8u;
    // 0x41bee8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x41BEE8u;
    {
        const bool branch_taken_0x41bee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41bee8) {
            ctx->pc = 0x41C068u;
            goto label_41c068;
        }
    }
    ctx->pc = 0x41BEF0u;
label_41bef0:
    // 0x41bef0: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x41bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x41bef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41bef8: 0x8d440018  lw          $a0, 0x18($t2)
    ctx->pc = 0x41bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x41befc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x41BEFCu;
    {
        const bool branch_taken_0x41befc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BEFCu;
        // 0x41bf00: 0x433004  sllv        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41befc) {
            ctx->pc = 0x41BF20u;
            goto label_41bf20;
        }
    }
    ctx->pc = 0x41BF04u;
    // 0x41bf04: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x41bf08: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x41bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x41bf0c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x41BF0Cu;
    SET_GPR_U32(ctx, 31, 0x41BF14u);
    ctx->pc = 0x41BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BF0Cu;
    // 0x41bf10: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41BF0Cu, 0x41BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BF14u;
label_41bf14:
    // 0x41bf14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41bf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bf18: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x41BF18u;
    {
        const bool branch_taken_0x41bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF18u;
        // 0x41bf1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bf18) {
            ctx->pc = 0x41C080u;
            goto label_41c080;
        }
    }
    ctx->pc = 0x41BF20u;
label_41bf20:
    // 0x41bf20: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41bf24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x41bf28: 0x2442e88c  addiu       $v0, $v0, -0x1774
    ctx->pc = 0x41bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961292));
    // 0x41bf2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41bf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bf30: 0x624021  addu        $t0, $v1, $v0
    ctx->pc = 0x41bf30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x41bf34: 0x10c00056  beqz        $a2, . + 4 + (0x56 << 2)
    ctx->pc = 0x41BF34u;
    {
        const bool branch_taken_0x41bf34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF34u;
        // 0x41bf38: 0x24c4ffff  addiu       $a0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bf34) {
            ctx->pc = 0x41C090u;
            goto label_41c090;
        }
    }
    ctx->pc = 0x41BF3Cu;
    // 0x41bf3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41bf3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bf40: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41bf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bf44: 0x0  nop
    ctx->pc = 0x41bf44u;
    // NOP
label_41bf48:
    // 0x41bf48: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x41bf48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x41bf4c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x41bf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bf50: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x41bf50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x41bf54: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41bf58: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41bf58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41bf5c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x41bf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x41bf60: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x41bf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x41bf64: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41bf68: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41bf68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41bf6c: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x41bf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x41bf70: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x41bf70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x41bf74: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41bf78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41bf78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41bf7c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x41bf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x41bf80: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x41bf80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x41bf84: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x41bf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x41bf88: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x41bf88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41bf8c: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x41BF8Cu;
    {
        const bool branch_taken_0x41bf8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF8Cu;
        // 0x41bf90: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bf8c) {
            ctx->pc = 0x41BF48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41bf48;
        }
    }
    ctx->pc = 0x41BF94u;
    // 0x41bf94: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x41BF94u;
    {
        const bool branch_taken_0x41bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BF94u;
        // 0x41bf98: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bf94) {
            ctx->pc = 0x41C094u;
            goto label_41c094;
        }
    }
    ctx->pc = 0x41BF9Cu;
label_41bf9c:
    // 0x41bf9c: 0x8d490014  lw          $t1, 0x14($t2)
    ctx->pc = 0x41bf9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x41bfa0: 0x8d4c0004  lw          $t4, 0x4($t2)
    ctx->pc = 0x41bfa0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x41bfa4: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x41BFA4u;
    {
        const bool branch_taken_0x41bfa4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BFA4u;
        // 0x41bfa8: 0x8d4d0008  lw          $t5, 0x8($t2) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bfa4) {
            ctx->pc = 0x41BFD0u;
            goto label_41bfd0;
        }
    }
    ctx->pc = 0x41BFACu;
    // 0x41bfac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41bfb0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41bfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x41bfb4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x41bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x41bfb8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x41BFB8u;
    SET_GPR_U32(ctx, 31, 0x41BFC0u);
    ctx->pc = 0x41BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BFB8u;
    // 0x41bfbc: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41BFB8u, 0x41BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BFC0u;
label_41bfc0:
    // 0x41bfc0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x41bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x41bfc4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x41BFC4u;
    {
        const bool branch_taken_0x41bfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BFC4u;
        // 0x41bfc8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bfc4) {
            ctx->pc = 0x41C080u;
            goto label_41c080;
        }
    }
    ctx->pc = 0x41BFCCu;
    // 0x41bfcc: 0x0  nop
    ctx->pc = 0x41bfccu;
    // NOP
label_41bfd0:
    // 0x41bfd0: 0x19a0002f  blez        $t5, . + 4 + (0x2F << 2)
    ctx->pc = 0x41BFD0u;
    {
        const bool branch_taken_0x41bfd0 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x41BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BFD0u;
        // 0x41bfd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bfd0) {
            ctx->pc = 0x41C090u;
            goto label_41c090;
        }
    }
    ctx->pc = 0x41BFD8u;
    // 0x41bfd8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x41bfdc: 0x244ee88c  addiu       $t6, $v0, -0x1774
    ctx->pc = 0x41bfdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961292));
label_41bfe0:
    // 0x41bfe0: 0x8f82be08  lw          $v0, -0x41F8($gp)
    ctx->pc = 0x41bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
    // 0x41bfe4: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x41bfe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x41bfe8: 0x2584ffff  addiu       $a0, $t4, -0x1
    ctx->pc = 0x41bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x41bfec: 0x11800017  beqz        $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x41BFECu;
    {
        const bool branch_taken_0x41bfec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BFECu;
        // 0x41bff0: 0x4e4021  addu        $t0, $v0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bfec) {
            ctx->pc = 0x41C04Cu;
            goto label_41c04c;
        }
    }
    ctx->pc = 0x41BFF4u;
    // 0x41bff4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x41bff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bff8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x41bff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41bffc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x41bffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_41c000:
    // 0x41c000: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x41c000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x41c004: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x41c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c008: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x41c008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x41c00c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41c00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41c010: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41c010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41c014: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x41c014u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x41c018: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x41c018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x41c01c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41c020: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41c020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41c024: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x41c024u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x41c028: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x41c028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x41c02c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x41c02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x41c030: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x41c030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41c034: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x41c034u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x41c038: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x41c038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x41c03c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x41c03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x41c040: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x41c040u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41c044: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x41C044u;
    {
        const bool branch_taken_0x41c044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C044u;
        // 0x41c048: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c044) {
            ctx->pc = 0x41C000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41c000;
        }
    }
    ctx->pc = 0x41C04Cu;
label_41c04c:
    // 0x41c04c: 0x8d430010  lw          $v1, 0x10($t2)
    ctx->pc = 0x41c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x41c050: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x41c050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c054: 0x8d102a  slt         $v0, $a0, $t5
    ctx->pc = 0x41c054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x41c058: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x41C058u;
    {
        const bool branch_taken_0x41c058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C058u;
        // 0x41c05c: 0x1234821  addu        $t1, $t1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c058) {
            ctx->pc = 0x41BFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41bfe0;
        }
    }
    ctx->pc = 0x41C060u;
    // 0x41c060: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x41C060u;
    {
        const bool branch_taken_0x41c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C060u;
        // 0x41c064: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c060) {
            ctx->pc = 0x41C094u;
            goto label_41c094;
        }
    }
    ctx->pc = 0x41C068u;
label_41c068:
    // 0x41c068: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41c068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x41c06c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x41c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x41c070: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x41C070u;
    SET_GPR_U32(ctx, 31, 0x41C078u);
    ctx->pc = 0x41C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41C070u;
    // 0x41c074: 0x34840008  ori         $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41C070u, 0x41C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C078u;
label_41c078:
    // 0x41c078: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x41c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x41c07c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x41c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_41c080:
    // 0x41c080: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x41C080u;
    SET_GPR_U32(ctx, 31, 0x41C088u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41C080u, 0x41C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41C088u;
label_41c088:
    // 0x41c088: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x41C088u;
    {
        const bool branch_taken_0x41c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C088u;
        // 0x41c08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41c088) {
            ctx->pc = 0x41C0A0u;
            goto label_41c0a0;
        }
    }
    ctx->pc = 0x41C090u;
label_41c090:
    // 0x41c090: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x41c090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_41c094:
    // 0x41c094: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x41c094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41c098: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x41c098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x41c09c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x41c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_41c0a0:
    // 0x41c0a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41c0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41c0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x41C0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0A4u;
        // 0x41c0a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C0ACu;
    // 0x41c0ac: 0x0  nop
    ctx->pc = 0x41c0acu;
    // NOP
    // 0x41c0b0: 0xaf84ad8c  sw          $a0, -0x5274($gp)
    ctx->pc = 0x41c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946188), GPR_U32(ctx, 4));
    // 0x41c0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x41C0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0B4u;
        // 0x41c0b8: 0xaf85ad90  sw          $a1, -0x5270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946192), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C0BCu;
    // 0x41c0bc: 0x0  nop
    ctx->pc = 0x41c0bcu;
    // NOP
    // 0x41c0c0: 0xaf84ad94  sw          $a0, -0x526C($gp)
    ctx->pc = 0x41c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946196), GPR_U32(ctx, 4));
    // 0x41c0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x41C0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41C0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41C0C4u;
        // 0x41c0c8: 0xaf85ad98  sw          $a1, -0x5268($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41C0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41C0CCu;
    // 0x41c0cc: 0x0  nop
    ctx->pc = 0x41c0ccu;
    // NOP
    ctx->pc = 0x41c0d0u;
}
