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

// Function: sub_004316A0
// Address: 0x4316a0 - 0x431988
void sub_004316A0_0x4316a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004316A0_0x4316a0");
#endif

    switch (ctx->pc) {
        case 0x4317ccu: goto label_4317cc;
        case 0x4317e0u: goto label_4317e0;
        case 0x431800u: goto label_431800;
        case 0x43184cu: goto label_43184c;
        case 0x431908u: goto label_431908;
        case 0x431954u: goto label_431954;
        default: break;
    }

    ctx->pc = 0x4316a0u;

    // 0x4316a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4316a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4316a4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4316a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4316a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4316a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4316ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4316acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4316b0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4316b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4316b4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4316b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4316b8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4316b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4316bc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4316bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4316c0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4316c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4316c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4316c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4316c8: 0x92820022  lbu         $v0, 0x22($s4)
    ctx->pc = 0x4316c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 34)));
    // 0x4316cc: 0x3042001e  andi        $v0, $v0, 0x1E
    ctx->pc = 0x4316ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30);
    // 0x4316d0: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4316D0u;
    {
        const bool branch_taken_0x4316d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4316D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4316D0u;
        // 0x4316d4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4316d0) {
            ctx->pc = 0x431808u;
            goto label_431808;
        }
    }
    ctx->pc = 0x4316D8u;
    // 0x4316d8: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x4316d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x4316dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4316dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4316e0: 0x92820023  lbu         $v0, 0x23($s4)
    ctx->pc = 0x4316e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
    // 0x4316e4: 0x2839821  addu        $s3, $s4, $v1
    ctx->pc = 0x4316e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x4316e8: 0x92840020  lbu         $a0, 0x20($s4)
    ctx->pc = 0x4316e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x4316ec: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x4316ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x4316f0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4316f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4316f4: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x4316f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x4316f8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4316f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4316fc: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x4316fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x431700: 0xa3b021  addu        $s6, $a1, $v1
    ctx->pc = 0x431700u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x431704: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x431704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x431708: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x431708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x43170c: 0x92630036  lbu         $v1, 0x36($s3)
    ctx->pc = 0x43170cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x431710: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x431710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x431714: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x431714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x431718: 0xa7a4000c  sh          $a0, 0xC($sp)
    ctx->pc = 0x431718u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x43171c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x43171cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x431720: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x431720u;
    {
        const bool branch_taken_0x431720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x431724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431720u;
        // 0x431724: 0xa7a0000e  sh          $zero, 0xE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431720) {
            ctx->pc = 0x43173Cu;
            goto label_43173c;
        }
    }
    ctx->pc = 0x431728u;
    // 0x431728: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x431728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x43172c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43172Cu;
    {
        const bool branch_taken_0x43172c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x43172c) {
            ctx->pc = 0x431730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43172Cu;
            // 0x431730: 0x92620036  lbu         $v0, 0x36($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431740u;
            goto label_431740;
        }
    }
    ctx->pc = 0x431734u;
    // 0x431734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x431734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431738: 0xa7a2000e  sh          $v0, 0xE($sp)
    ctx->pc = 0x431738u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
label_43173c:
    // 0x43173c: 0x92620036  lbu         $v0, 0x36($s3)
    ctx->pc = 0x43173cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_431740:
    // 0x431740: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x431740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x431744: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x431744u;
    {
        const bool branch_taken_0x431744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431744u;
        // 0x431748: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431744) {
            ctx->pc = 0x431750u;
            goto label_431750;
        }
    }
    ctx->pc = 0x43174Cu;
    // 0x43174c: 0xa7a2000e  sh          $v0, 0xE($sp)
    ctx->pc = 0x43174cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 2));
label_431750:
    // 0x431750: 0x8e720008  lw          $s2, 0x8($s3)
    ctx->pc = 0x431750u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x431754: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x431754u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x431758: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x431758u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x43175c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43175cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431760: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x431760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x431764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x431764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x431768: 0x926f0016  lbu         $t7, 0x16($s3)
    ctx->pc = 0x431768u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x43176c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x43176cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x431770: 0x8e6e0018  lw          $t6, 0x18($s3)
    ctx->pc = 0x431770u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x431774: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x431774u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x431778: 0x8e6d001c  lw          $t5, 0x1C($s3)
    ctx->pc = 0x431778u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x43177c: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x43177cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x431780: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x431780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x431784: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x431784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x431788: 0x8e690028  lw          $t1, 0x28($s3)
    ctx->pc = 0x431788u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x43178c: 0x8e6a002c  lw          $t2, 0x2C($s3)
    ctx->pc = 0x43178cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x431790: 0x8e6b0030  lw          $t3, 0x30($s3)
    ctx->pc = 0x431790u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x431794: 0x966c0014  lhu         $t4, 0x14($s3)
    ctx->pc = 0x431794u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x431798: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x431798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x43179c: 0xafb10014  sw          $s1, 0x14($sp)
    ctx->pc = 0x43179cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 17));
    // 0x4317a0: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x4317a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x4317a4: 0xafaf001c  sw          $t7, 0x1C($sp)
    ctx->pc = 0x4317a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 15));
    // 0x4317a8: 0xafae0020  sw          $t6, 0x20($sp)
    ctx->pc = 0x4317a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 14));
    // 0x4317ac: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x4317acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x4317b0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4317b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4317b4: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x4317b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x4317b8: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x4317b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
    // 0x4317bc: 0xafaa0034  sw          $t2, 0x34($sp)
    ctx->pc = 0x4317bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 10));
    // 0x4317c0: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x4317c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
    // 0x4317c4: 0xc103404  jal         func_40D010
    ctx->pc = 0x4317C4u;
    SET_GPR_U32(ctx, 31, 0x4317CCu);
    ctx->pc = 0x4317C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4317C4u;
    // 0x4317c8: 0xafac003c  sw          $t4, 0x3C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x4317C4u, 0x4317CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4317CCu;
label_4317cc:
    // 0x4317cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4317CCu;
    {
        const bool branch_taken_0x4317cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4317D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4317CCu;
        // 0x4317d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4317cc) {
            ctx->pc = 0x431808u;
            goto label_431808;
        }
    }
    ctx->pc = 0x4317D4u;
    // 0x4317d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4317d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4317d8: 0xc103440  jal         func_40D100
    ctx->pc = 0x4317D8u;
    SET_GPR_U32(ctx, 31, 0x4317E0u);
    ctx->pc = 0x4317DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4317D8u;
    // 0x4317dc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x4317D8u, 0x4317E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4317E0u;
label_4317e0:
    // 0x4317e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4317E0u;
    {
        const bool branch_taken_0x4317e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4317E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4317E0u;
        // 0x4317e4: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4317e0) {
            ctx->pc = 0x431808u;
            goto label_431808;
        }
    }
    ctx->pc = 0x4317E8u;
    // 0x4317e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4317e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4317ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4317ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4317f0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4317f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4317f4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x4317f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x4317f8: 0xc103404  jal         func_40D010
    ctx->pc = 0x4317F8u;
    SET_GPR_U32(ctx, 31, 0x431800u);
    ctx->pc = 0x4317FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4317F8u;
    // 0x4317fc: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x4317F8u, 0x431800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431800u;
label_431800:
    // 0x431800: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x431800u;
    {
        const bool branch_taken_0x431800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x431804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431800u;
        // 0x431804: 0x97a2000e  lhu         $v0, 0xE($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431800) {
            ctx->pc = 0x431810u;
            goto label_431810;
        }
    }
    ctx->pc = 0x431808u;
label_431808:
    // 0x431808: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x431808u;
    {
        const bool branch_taken_0x431808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431808u;
        // 0x43180c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431808) {
            ctx->pc = 0x431960u;
            goto label_431960;
        }
    }
    ctx->pc = 0x431810u;
label_431810:
    // 0x431810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x431810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431814: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x431814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x431818: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x431818u;
    {
        const bool branch_taken_0x431818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x43181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431818u;
        // 0x43181c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431818) {
            ctx->pc = 0x43182Cu;
            goto label_43182c;
        }
    }
    ctx->pc = 0x431820u;
    // 0x431820: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x431820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x431824: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x431824u;
    {
        const bool branch_taken_0x431824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x431828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431824u;
        // 0x431828: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431824) {
            ctx->pc = 0x43194Cu;
            goto label_43194c;
        }
    }
    ctx->pc = 0x43182Cu;
label_43182c:
    // 0x43182c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x43182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x431830: 0x1482004b  bne         $a0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x431830u;
    {
        const bool branch_taken_0x431830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x431834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431830u;
        // 0x431834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431830) {
            ctx->pc = 0x431960u;
            goto label_431960;
        }
    }
    ctx->pc = 0x431838u;
    // 0x431838: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x431838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x43183c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43183cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431840: 0x8e660028  lw          $a2, 0x28($s3)
    ctx->pc = 0x431840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x431844: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x431844u;
    SET_GPR_U32(ctx, 31, 0x43184Cu);
    ctx->pc = 0x431848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x431844u;
    // 0x431848: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x431844u, 0x43184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43184Cu;
label_43184c:
    // 0x43184c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x43184Cu;
    {
        const bool branch_taken_0x43184c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43184Cu;
        // 0x431850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43184c) {
            ctx->pc = 0x431960u;
            goto label_431960;
        }
    }
    ctx->pc = 0x431854u;
    // 0x431854: 0x92820021  lbu         $v0, 0x21($s4)
    ctx->pc = 0x431854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 33)));
    // 0x431858: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x431858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x43185c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x43185Cu;
    {
        const bool branch_taken_0x43185c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43185c) {
            ctx->pc = 0x431860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43185Cu;
            // 0x431860: 0x8e66002c  lw          $a2, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43193Cu;
            goto label_43193c;
        }
    }
    ctx->pc = 0x431864u;
    // 0x431864: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x431864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x431868: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x431868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x43186c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x431870: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x431870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x431874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x431874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x431878: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x431878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x43187c: 0x50e8002f  beql        $a3, $t0, . + 4 + (0x2F << 2)
    ctx->pc = 0x43187Cu;
    {
        const bool branch_taken_0x43187c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x43187c) {
            ctx->pc = 0x431880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43187Cu;
            // 0x431880: 0x8e66002c  lw          $a2, 0x2C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43193Cu;
            goto label_43193c;
        }
    }
    ctx->pc = 0x431884u;
    // 0x431884: 0x8e69002c  lw          $t1, 0x2C($s3)
    ctx->pc = 0x431884u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x431888: 0x2526ffb0  addiu       $a2, $t1, -0x50
    ctx->pc = 0x431888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967216));
    // 0x43188c: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x43188Cu;
    {
        const bool branch_taken_0x43188c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x431890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43188Cu;
        // 0x431890: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43188c) {
            ctx->pc = 0x431938u;
            goto label_431938;
        }
    }
    ctx->pc = 0x431894u;
    // 0x431894: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x431894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431898: 0x3044003f  andi        $a0, $v0, 0x3F
    ctx->pc = 0x431898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x43189c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x43189Cu;
    {
        const bool branch_taken_0x43189c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4318A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43189Cu;
        // 0x4318a0: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43189c) {
            ctx->pc = 0x431900u;
            goto label_431900;
        }
    }
    ctx->pc = 0x4318A4u;
    // 0x4318a4: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x4318a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x4318a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4318A8u;
    {
        const bool branch_taken_0x4318a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4318ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4318A8u;
        // 0x4318ac: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4318a8) {
            ctx->pc = 0x4318E8u;
            goto label_4318e8;
        }
    }
    ctx->pc = 0x4318B0u;
    // 0x4318b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4318B0u;
    {
        const bool branch_taken_0x4318b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4318B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4318B0u;
        // 0x4318b4: 0x28820010  slti        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4318b0) {
            ctx->pc = 0x4318D4u;
            goto label_4318d4;
        }
    }
    ctx->pc = 0x4318B8u;
    // 0x4318b8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4318B8u;
    {
        const bool branch_taken_0x4318b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4318b8) {
            ctx->pc = 0x4318BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4318B8u;
            // 0x4318bc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x431908u;
            goto label_431908;
        }
    }
    ctx->pc = 0x4318C0u;
    // 0x4318c0: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x4318c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4318c4: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x4318c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x4318c8: 0x24e50010  addiu       $a1, $a3, 0x10
    ctx->pc = 0x4318c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x4318cc: 0x2526ffa0  addiu       $a2, $t1, -0x60
    ctx->pc = 0x4318ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967200));
    // 0x4318d0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x4318d0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_4318d4:
    // 0x4318d4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4318d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4318d8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x4318d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x4318dc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4318dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4318e0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4318e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4318e4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x4318e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_4318e8:
    // 0x4318e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4318e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4318ec: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x4318ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x4318f0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4318f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4318f4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x4318f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x4318f8: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x4318F8u;
    {
        const bool branch_taken_0x4318f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4318FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4318F8u;
        // 0x4318fc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4318f8) {
            ctx->pc = 0x431938u;
            goto label_431938;
        }
    }
    ctx->pc = 0x431900u;
label_431900:
    // 0x431900: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x431900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x431904: 0x0  nop
    ctx->pc = 0x431904u;
    // NOP
label_431908:
    // 0x431908: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x431908u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x43190c: 0x24c6ffc0  addiu       $a2, $a2, -0x40
    ctx->pc = 0x43190cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x431910: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x431910u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x431914: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x431914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x431918: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x431918u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x43191c: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x43191cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x431920: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x431920u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x431924: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x431924u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x431928: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x431928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x43192c: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x43192cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x431930: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x431930u;
    {
        const bool branch_taken_0x431930 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x431934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431930u;
        // 0x431934: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431930) {
            ctx->pc = 0x431908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_431908;
        }
    }
    ctx->pc = 0x431938u;
label_431938:
    // 0x431938: 0x8e66002c  lw          $a2, 0x2C($s3)
    ctx->pc = 0x431938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_43193c:
    // 0x43193c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x43193Cu;
    {
        const bool branch_taken_0x43193c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x431940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43193Cu;
        // 0x431940: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43193c) {
            ctx->pc = 0x43195Cu;
            goto label_43195c;
        }
    }
    ctx->pc = 0x431944u;
    // 0x431944: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x431944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x431948: 0x24a5ffb0  addiu       $a1, $a1, -0x50
    ctx->pc = 0x431948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
label_43194c:
    // 0x43194c: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x43194Cu;
    SET_GPR_U32(ctx, 31, 0x431954u);
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x43194Cu, 0x431954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x431954u;
label_431954:
    // 0x431954: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x431954u;
    {
        const bool branch_taken_0x431954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x431958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431954u;
        // 0x431958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x431954) {
            ctx->pc = 0x431960u;
            goto label_431960;
        }
    }
    ctx->pc = 0x43195Cu;
label_43195c:
    // 0x43195c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x43195cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_431960:
    // 0x431960: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x431960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x431964: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x431964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x431968: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x431968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x43196c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x43196cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x431970: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x431970u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x431974: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x431974u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x431978: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x431978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43197c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43197cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x431980: 0x3e00008  jr          $ra
    ctx->pc = 0x431980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x431980u;
        // 0x431984: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x431980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431988u;
}
