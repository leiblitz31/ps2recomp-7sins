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

// Function: sub_002EEE78
// Address: 0x2eee78 - 0x2ef000
void sub_002EEE78_0x2eee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEE78_0x2eee78");
#endif

    switch (ctx->pc) {
        case 0x2eeeacu: goto label_2eeeac;
        case 0x2eef14u: goto label_2eef14;
        case 0x2eef7cu: goto label_2eef7c;
        case 0x2eefc8u: goto label_2eefc8;
        default: break;
    }

    ctx->pc = 0x2eee78u;

    // 0x2eee78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2eee78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2eee7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2eee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2eee80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2eee80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eee84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eee88: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2eee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2eee8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2eee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2eee90: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2eee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2eee94: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2eee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2eee98: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2eee98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eee9c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2eee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2eeea0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2eeea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2eeea4: 0xc0bb84a  jal         func_2EE128
    ctx->pc = 0x2EEEA4u;
    SET_GPR_U32(ctx, 31, 0x2EEEACu);
    ctx->pc = 0x2EEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEEA4u;
    // 0x2eeea8: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE128u, 0x2EEEA4u, 0x2EEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEEACu;
label_2eeeac:
    // 0x2eeeac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2eeeacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eeeb0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2eeeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2eeeb4: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x2eeeb4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2eeeb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eeeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eeebc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2eeebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2eeec0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2eeec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2eeec4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2eeec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2eeec8: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x2eeec8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2eeecc: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2eeeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x2eeed0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eeed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eeed4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2eeed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2eeed8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2eeed8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2eeedc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2eeedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2eeee0: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x2eeee0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x2eeee4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2eeee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2eeee8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEEE8u;
    {
        const bool branch_taken_0x2eeee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEEE8u;
        // 0x2eeeec: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeee8) {
            ctx->pc = 0x2EEEFCu;
            goto label_2eeefc;
        }
    }
    ctx->pc = 0x2EEEF0u;
    // 0x2eeef0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2eeef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2eeef4: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2eeef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2eeef8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2eeef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2eeefc:
    // 0x2eeefc: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x2eeefcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2eef00: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2eef00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2eef04: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EEF04u;
    {
        const bool branch_taken_0x2eef04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF04u;
        // 0x2eef08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef04) {
            ctx->pc = 0x2EEF70u;
            goto label_2eef70;
        }
    }
    ctx->pc = 0x2EEF0Cu;
    // 0x2eef0c: 0xc0bb92e  jal         func_2EE4B8
    ctx->pc = 0x2EEF0Cu;
    SET_GPR_U32(ctx, 31, 0x2EEF14u);
    ctx->pc = 0x2EEF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEF0Cu;
    // 0x2eef10: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4B8u, 0x2EEF0Cu, 0x2EEF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEF14u;
label_2eef14:
    // 0x2eef14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef18: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2EEF18u;
    {
        const bool branch_taken_0x2eef18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF18u;
        // 0x2eef1c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef18) {
            ctx->pc = 0x2EEF48u;
            goto label_2eef48;
        }
    }
    ctx->pc = 0x2EEF20u;
    // 0x2eef20: 0x52023  negu        $a0, $a1
    ctx->pc = 0x2eef20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2eef24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2eef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eef28: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2eef28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2eef2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eef30: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2eef30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2eef34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2eef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eef38: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x2eef38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x2eef3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEF3Cu;
    {
        const bool branch_taken_0x2eef3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF3Cu;
        // 0x2eef40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef3c) {
            ctx->pc = 0x2EEF50u;
            goto label_2eef50;
        }
    }
    ctx->pc = 0x2EEF44u;
    // 0x2eef44: 0x0  nop
    ctx->pc = 0x2eef44u;
    // NOP
label_2eef48:
    // 0x2eef48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2eef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eef4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2eef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2eef50:
    // 0x2eef50: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2eef50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eef54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eef58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2eef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eef5c: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x2eef5cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2eef60: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2eef60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2eef64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2eef64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eef68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EEF68u;
    {
        const bool branch_taken_0x2eef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF68u;
        // 0x2eef6c: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef68) {
            ctx->pc = 0x2EEF90u;
            goto label_2eef90;
        }
    }
    ctx->pc = 0x2EEF70u;
label_2eef70:
    // 0x2eef70: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x2eef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2eef74: 0xc0bb92e  jal         func_2EE4B8
    ctx->pc = 0x2EEF74u;
    SET_GPR_U32(ctx, 31, 0x2EEF7Cu);
    ctx->pc = 0x2EEF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEF74u;
    // 0x2eef78: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4B8u, 0x2EEF74u, 0x2EEF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEF7Cu;
label_2eef7c:
    // 0x2eef7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2eef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eef80: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2eef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2eef84: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x2eef84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2eef88: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2eef88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2eef8c: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x2eef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_2eef90:
    // 0x2eef90: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EEF90u;
    {
        const bool branch_taken_0x2eef90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEF90u;
        // 0x2eef94: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eef90) {
            ctx->pc = 0x2EEFB0u;
            goto label_2eefb0;
        }
    }
    ctx->pc = 0x2EEF98u;
    // 0x2eef98: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x2eef98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x2eef9c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2eef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eefa0: 0x2442fbcd  addiu       $v0, $v0, -0x433
    ctx->pc = 0x2eefa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966221));
    // 0x2eefa4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EEFA4u;
    {
        const bool branch_taken_0x2eefa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFA4u;
        // 0x2eefa8: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eefa4) {
            ctx->pc = 0x2EEFD0u;
            goto label_2eefd0;
        }
    }
    ctx->pc = 0x2EEFACu;
    // 0x2eefac: 0x0  nop
    ctx->pc = 0x2eefacu;
    // NOP
label_2eefb0:
    // 0x2eefb0: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x2eefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x2eefb4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2eefb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2eefb8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2eefb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x2eefbc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2eefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2eefc0: 0xc0bb90e  jal         func_2EE438
    ctx->pc = 0x2EEFC0u;
    SET_GPR_U32(ctx, 31, 0x2EEFC8u);
    ctx->pc = 0x2EEFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEFC0u;
    // 0x2eefc4: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE438u, 0x2EEFC0u, 0x2EEFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEFC8u;
label_2eefc8:
    // 0x2eefc8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x2eefc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2eefcc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2eefccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2eefd0:
    // 0x2eefd0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2eefd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2eefd4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2eefd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eefd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2eefd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eefdc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2eefdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2eefe0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2eefe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eefe4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2eefe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2eefe8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2eefe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eefec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2eefecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2eeff0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2eeff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eeff4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEFF4u;
        // 0x2eeff8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEFFCu;
    // 0x2eeffc: 0x0  nop
    ctx->pc = 0x2eeffcu;
    // NOP
    ctx->pc = 0x2ef000u;
}
