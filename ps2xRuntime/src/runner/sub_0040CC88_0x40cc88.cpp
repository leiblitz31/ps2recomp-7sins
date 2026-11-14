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

// Function: sub_0040CC88
// Address: 0x40cc88 - 0x40ce98
void sub_0040CC88_0x40cc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CC88_0x40cc88");
#endif

    switch (ctx->pc) {
        case 0x40ccf0u: goto label_40ccf0;
        case 0x40ccfcu: goto label_40ccfc;
        case 0x40cd18u: goto label_40cd18;
        case 0x40cd24u: goto label_40cd24;
        case 0x40cd88u: goto label_40cd88;
        case 0x40cde8u: goto label_40cde8;
        case 0x40cdf4u: goto label_40cdf4;
        case 0x40ce18u: goto label_40ce18;
        case 0x40ce24u: goto label_40ce24;
        case 0x40ce5cu: goto label_40ce5c;
        default: break;
    }

    ctx->pc = 0x40cc88u;

    // 0x40cc88: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x40cc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x40cc8c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x40cc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x40cc90: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x40cc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x40cc94: 0x3c150003  lui         $s5, 0x3
    ctx->pc = 0x40cc94u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)3 << 16));
    // 0x40cc98: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x40cc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x40cc9c: 0x3c160003  lui         $s6, 0x3
    ctx->pc = 0x40cc9cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)3 << 16));
    // 0x40cca0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x40cca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x40cca4: 0x3c170003  lui         $s7, 0x3
    ctx->pc = 0x40cca4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)3 << 16));
    // 0x40cca8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x40cca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x40ccac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x40ccacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40ccb0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x40ccb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x40ccb4: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x40ccb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x40ccb8: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x40ccb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x40ccbc: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x40ccbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x40ccc0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x40ccc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x40ccc4: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x40ccc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x40ccc8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x40ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x40cccc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40ccccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ccd0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x40ccd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x40ccd4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x40ccd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ccd8: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x40ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
    // 0x40ccdc: 0x36b5ff00  ori         $s5, $s5, 0xFF00
    ctx->pc = 0x40ccdcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65280);
    // 0x40cce0: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x40cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x40cce4: 0x36d64fff  ori         $s6, $s6, 0x4FFF
    ctx->pc = 0x40cce4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)20479);
    // 0x40cce8: 0x36f77002  ori         $s7, $s7, 0x7002
    ctx->pc = 0x40cce8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)28674);
    // 0x40ccec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x40ccecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40ccf0:
    // 0x40ccf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40ccf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40ccf4: 0xc10480a  jal         func_412028
    ctx->pc = 0x40CCF4u;
    SET_GPR_U32(ctx, 31, 0x40CCFCu);
    ctx->pc = 0x40CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CCF4u;
    // 0x40ccf8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x40CCF4u, 0x40CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CCFCu;
label_40ccfc:
    // 0x40ccfc: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x40ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x40cd00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x40CD00u;
    {
        const bool branch_taken_0x40cd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CD00u;
        // 0x40cd04: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cd00) {
            ctx->pc = 0x40CD30u;
            goto label_40cd30;
        }
    }
    ctx->pc = 0x40CD08u;
    // 0x40cd08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40cd0c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x40cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x40cd10: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40CD10u;
    SET_GPR_U32(ctx, 31, 0x40CD18u);
    ctx->pc = 0x40CD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CD10u;
    // 0x40cd14: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40CD10u, 0x40CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CD18u;
label_40cd18:
    // 0x40cd18: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x40cd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x40cd1c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40CD1Cu;
    SET_GPR_U32(ctx, 31, 0x40CD24u);
    ctx->pc = 0x40CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CD1Cu;
    // 0x40cd20: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40CD1Cu, 0x40CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CD24u;
label_40cd24:
    // 0x40cd24: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x40CD24u;
    {
        const bool branch_taken_0x40cd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CD24u;
        // 0x40cd28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cd24) {
            ctx->pc = 0x40CDB4u;
            goto label_40cdb4;
        }
    }
    ctx->pc = 0x40CD2Cu;
    // 0x40cd2c: 0x0  nop
    ctx->pc = 0x40cd2cu;
    // NOP
label_40cd30:
    // 0x40cd30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x40cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40cd34: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x40cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x40cd38: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x40cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x40cd3c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x40cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x40cd40: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x40cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x40cd44: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x40cd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x40cd48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40CD48u;
    {
        const bool branch_taken_0x40cd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CD48u;
        // 0x40cd4c: 0x41382  srl         $v0, $a0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cd48) {
            ctx->pc = 0x40CD5Cu;
            goto label_40cd5c;
        }
    }
    ctx->pc = 0x40CD50u;
    // 0x40cd50: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x40cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x40cd54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x40CD54u;
    {
        const bool branch_taken_0x40cd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CD54u;
        // 0x40cd58: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cd54) {
            ctx->pc = 0x40CD7Cu;
            goto label_40cd7c;
        }
    }
    ctx->pc = 0x40CD5Cu;
label_40cd5c:
    // 0x40cd5c: 0x41c02  srl         $v1, $a0, 16
    ctx->pc = 0x40cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x40cd60: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x40cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x40cd64: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x40cd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x40cd68: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x40cd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x40cd6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x40cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x40cd70: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x40cd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x40cd74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x40cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x40cd78: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x40cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_40cd7c:
    // 0x40cd7c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x40cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x40cd80: 0xc103310  jal         func_40CC40
    ctx->pc = 0x40CD80u;
    SET_GPR_U32(ctx, 31, 0x40CD88u);
    ctx->pc = 0x40CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CD80u;
    // 0x40cd84: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC40u, 0x40CD80u, 0x40CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CD88u;
label_40cd88:
    // 0x40cd88: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x40CD88u;
    {
        const bool branch_taken_0x40cd88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CD88u;
        // 0x40cd8c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cd88) {
            ctx->pc = 0x40CD98u;
            goto label_40cd98;
        }
    }
    ctx->pc = 0x40CD90u;
    // 0x40cd90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x40cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40cd94: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x40cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_40cd98:
    // 0x40cd98: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x40CD98u;
    {
        const bool branch_taken_0x40cd98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CD98u;
        // 0x40cd9c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cd98) {
            ctx->pc = 0x40CDA4u;
            goto label_40cda4;
        }
    }
    ctx->pc = 0x40CDA0u;
    // 0x40cda0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x40cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_40cda4:
    // 0x40cda4: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x40CDA4u;
    {
        const bool branch_taken_0x40cda4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CDA4u;
        // 0x40cda8: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cda4) {
            ctx->pc = 0x40CDB0u;
            goto label_40cdb0;
        }
    }
    ctx->pc = 0x40CDACu;
    // 0x40cdac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40cdacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40cdb0:
    // 0x40cdb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40cdb4:
    // 0x40cdb4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x40CDB4u;
    {
        const bool branch_taken_0x40cdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CDB4u;
        // 0x40cdb8: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cdb4) {
            ctx->pc = 0x40CE64u;
            goto label_40ce64;
        }
    }
    ctx->pc = 0x40CDBCu;
    // 0x40cdbc: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x40cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x40cdc0: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x40CDC0u;
    {
        const bool branch_taken_0x40cdc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CDC0u;
        // 0x40cdc4: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cdc0) {
            ctx->pc = 0x40CE54u;
            goto label_40ce54;
        }
    }
    ctx->pc = 0x40CDC8u;
    // 0x40cdc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x40cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x40cdcc: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x40cdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x40cdd0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x40CDD0u;
    {
        const bool branch_taken_0x40cdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CDD0u;
        // 0x40cdd4: 0x2e3102b  sltu        $v0, $s7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cdd0) {
            ctx->pc = 0x40CE00u;
            goto label_40ce00;
        }
    }
    ctx->pc = 0x40CDD8u;
    // 0x40cdd8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40cdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40cddc: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x40cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x40cde0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40CDE0u;
    SET_GPR_U32(ctx, 31, 0x40CDE8u);
    ctx->pc = 0x40CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CDE0u;
    // 0x40cde4: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40CDE0u, 0x40CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CDE8u;
label_40cde8:
    // 0x40cde8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x40cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x40cdec: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40CDECu;
    SET_GPR_U32(ctx, 31, 0x40CDF4u);
    ctx->pc = 0x40CDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CDECu;
    // 0x40cdf0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40CDECu, 0x40CDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CDF4u;
label_40cdf4:
    // 0x40cdf4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x40CDF4u;
    {
        const bool branch_taken_0x40cdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CDF4u;
        // 0x40cdf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cdf4) {
            ctx->pc = 0x40CE68u;
            goto label_40ce68;
        }
    }
    ctx->pc = 0x40CDFCu;
    // 0x40cdfc: 0x0  nop
    ctx->pc = 0x40cdfcu;
    // NOP
label_40ce00:
    // 0x40ce00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x40CE00u;
    {
        const bool branch_taken_0x40ce00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ce00) {
            ctx->pc = 0x40CE30u;
            goto label_40ce30;
        }
    }
    ctx->pc = 0x40CE08u;
    // 0x40ce08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40ce0c: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x40ce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
    // 0x40ce10: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40CE10u;
    SET_GPR_U32(ctx, 31, 0x40CE18u);
    ctx->pc = 0x40CE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE10u;
    // 0x40ce14: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40CE10u, 0x40CE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE18u;
label_40ce18:
    // 0x40ce18: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x40ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x40ce1c: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40CE1Cu;
    SET_GPR_U32(ctx, 31, 0x40CE24u);
    ctx->pc = 0x40CE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE1Cu;
    // 0x40ce20: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40CE1Cu, 0x40CE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE24u;
label_40ce24:
    // 0x40ce24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x40CE24u;
    {
        const bool branch_taken_0x40ce24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CE24u;
        // 0x40ce28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ce24) {
            ctx->pc = 0x40CE68u;
            goto label_40ce68;
        }
    }
    ctx->pc = 0x40CE2Cu;
    // 0x40ce2c: 0x0  nop
    ctx->pc = 0x40ce2cu;
    // NOP
label_40ce30:
    // 0x40ce30: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
    ctx->pc = 0x40CE30u;
    {
        const bool branch_taken_0x40ce30 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CE30u;
        // 0x40ce34: 0x8fa20064  lw          $v0, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ce30) {
            ctx->pc = 0x40CE3Cu;
            goto label_40ce3c;
        }
    }
    ctx->pc = 0x40CE38u;
    // 0x40ce38: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x40ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_40ce3c:
    // 0x40ce3c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x40ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40ce40: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x40CE40u;
    {
        const bool branch_taken_0x40ce40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CE40u;
        // 0x40ce44: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ce40) {
            ctx->pc = 0x40CE4Cu;
            goto label_40ce4c;
        }
    }
    ctx->pc = 0x40CE48u;
    // 0x40ce48: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x40ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_40ce4c:
    // 0x40ce4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x40CE4Cu;
    {
        const bool branch_taken_0x40ce4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CE4Cu;
        // 0x40ce50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ce4c) {
            ctx->pc = 0x40CE68u;
            goto label_40ce68;
        }
    }
    ctx->pc = 0x40CE54u;
label_40ce54:
    // 0x40ce54: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x40CE54u;
    SET_GPR_U32(ctx, 31, 0x40CE5Cu);
    ctx->pc = 0x40CE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CE54u;
    // 0x40ce58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x40CE54u, 0x40CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CE5Cu;
label_40ce5c:
    // 0x40ce5c: 0x5440ffa4  bnel        $v0, $zero, . + 4 + (-0x5C << 2)
    ctx->pc = 0x40CE5Cu;
    {
        const bool branch_taken_0x40ce5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40ce5c) {
            ctx->pc = 0x40CE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40CE5Cu;
            // 0x40ce60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40CCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ccf0;
        }
    }
    ctx->pc = 0x40CE64u;
label_40ce64:
    // 0x40ce64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40ce64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40ce68:
    // 0x40ce68: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x40ce68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x40ce6c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x40ce6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x40ce70: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x40ce70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x40ce74: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x40ce74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x40ce78: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x40ce78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x40ce7c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x40ce7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x40ce80: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x40ce80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x40ce84: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x40ce84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x40ce88: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x40ce88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x40ce8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x40ce8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x40ce90: 0x3e00008  jr          $ra
    ctx->pc = 0x40CE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CE90u;
        // 0x40ce94: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CE98u;
}
