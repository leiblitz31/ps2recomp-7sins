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

// Function: sub_00386680
// Address: 0x386680 - 0x3867f0
void sub_00386680_0x386680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386680_0x386680");
#endif

    switch (ctx->pc) {
        case 0x3866b4u: goto label_3866b4;
        case 0x3866d0u: goto label_3866d0;
        case 0x3866f0u: goto label_3866f0;
        case 0x38674cu: goto label_38674c;
        case 0x386770u: goto label_386770;
        case 0x386784u: goto label_386784;
        case 0x3867a8u: goto label_3867a8;
        case 0x3867c4u: goto label_3867c4;
        default: break;
    }

    ctx->pc = 0x386680u;

label_386680:
    // 0x386680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x386680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x386684: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x386684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x386688: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x386688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x38668c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38668cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386690: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x386690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x386694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x386694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x386698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x38669c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38669cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3866a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3866a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3866a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3866a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3866a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3866a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3866ac: 0xc0e193e  jal         func_3864F8
    ctx->pc = 0x3866ACu;
    SET_GPR_U32(ctx, 31, 0x3866B4u);
    ctx->pc = 0x3866B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866ACu;
    // 0x3866b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3864F8u, 0x3866ACu, 0x3866B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866B4u;
label_3866b4:
    // 0x3866b4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x3866b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x3866b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3866b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3866bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3866bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3866c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3866c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3866c4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3866c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x3866c8: 0xc103404  jal         func_40D010
    ctx->pc = 0x3866C8u;
    SET_GPR_U32(ctx, 31, 0x3866D0u);
    ctx->pc = 0x3866CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866C8u;
    // 0x3866cc: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3866C8u, 0x3866D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866D0u;
label_3866d0:
    // 0x3866d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3866D0u;
    {
        const bool branch_taken_0x3866d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3866D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866D0u;
        // 0x3866d4: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3866d0) {
            ctx->pc = 0x3866F8u;
            goto label_3866f8;
        }
    }
    ctx->pc = 0x3866D8u;
    // 0x3866d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3866d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3866dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3866dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3866e0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x3866e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3866e4: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3866e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x3866e8: 0xc103404  jal         func_40D010
    ctx->pc = 0x3866E8u;
    SET_GPR_U32(ctx, 31, 0x3866F0u);
    ctx->pc = 0x3866ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866E8u;
    // 0x3866ec: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3866E8u, 0x3866F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866F0u;
label_3866f0:
    // 0x3866f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3866F0u;
    {
        const bool branch_taken_0x3866f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3866f0) {
            ctx->pc = 0x3866F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3866F0u;
            // 0x3866f4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386700u;
            goto label_386700;
        }
    }
    ctx->pc = 0x3866F8u;
label_3866f8:
    // 0x3866f8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3866F8u;
    {
        const bool branch_taken_0x3866f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3866FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3866F8u;
        // 0x3866fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3866f8) {
            ctx->pc = 0x3867D4u;
            goto label_3867d4;
        }
    }
    ctx->pc = 0x386700u;
label_386700:
    // 0x386700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386704: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x386704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x386708: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x386708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38670c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38670cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x386710: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x386710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x386714: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x386714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x386718: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x386718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x38671c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x38671cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x386720: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x386720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x386724: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x386724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x386728: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x386728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38672c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x38672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x386730: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x386730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x386734: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x386734u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x386738: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x386738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x38673c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x38673cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x386740: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x386740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x386744: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x386744u;
    SET_GPR_U32(ctx, 31, 0x38674Cu);
    ctx->pc = 0x386748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386744u;
    // 0x386748: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x386744u, 0x38674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38674Cu;
label_38674c:
    // 0x38674c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x38674Cu;
    {
        const bool branch_taken_0x38674c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38674Cu;
        // 0x386750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38674c) {
            ctx->pc = 0x3867D4u;
            goto label_3867d4;
        }
    }
    ctx->pc = 0x386754u;
    // 0x386754: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x386754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x386758: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x386758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38675c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38675Cu;
    {
        const bool branch_taken_0x38675c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x386760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38675Cu;
        // 0x386760: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38675c) {
            ctx->pc = 0x386778u;
            goto label_386778;
        }
    }
    ctx->pc = 0x386764u;
    // 0x386764: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x386764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386768: 0xc0e1742  jal         func_385D08
    ctx->pc = 0x386768u;
    SET_GPR_U32(ctx, 31, 0x386770u);
    ctx->pc = 0x38676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386768u;
    // 0x38676c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385D08u, 0x386768u, 0x386770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386770u;
label_386770:
    // 0x386770: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x386770u;
    {
        const bool branch_taken_0x386770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x386770) {
            ctx->pc = 0x386784u;
            goto label_386784;
        }
    }
    ctx->pc = 0x386778u;
label_386778:
    // 0x386778: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x386778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38677c: 0xc0e19a0  jal         func_386680
    ctx->pc = 0x38677Cu;
    SET_GPR_U32(ctx, 31, 0x386784u);
    ctx->pc = 0x386780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38677Cu;
    // 0x386780: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386680u;
    goto label_386680;
    ctx->pc = 0x386784u;
label_386784:
    // 0x386784: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386784u;
    {
        const bool branch_taken_0x386784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386784u;
        // 0x386788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386784) {
            ctx->pc = 0x3867D4u;
            goto label_3867d4;
        }
    }
    ctx->pc = 0x38678Cu;
    // 0x38678c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x38678cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x386790: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x386790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x386794: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x386794u;
    {
        const bool branch_taken_0x386794 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x386798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386794u;
        // 0x386798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386794) {
            ctx->pc = 0x3867B8u;
            goto label_3867b8;
        }
    }
    ctx->pc = 0x38679Cu;
    // 0x38679c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x38679cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867a0: 0xc0e1742  jal         func_385D08
    ctx->pc = 0x3867A0u;
    SET_GPR_U32(ctx, 31, 0x3867A8u);
    ctx->pc = 0x3867A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867A0u;
    // 0x3867a4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385D08u, 0x3867A0u, 0x3867A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3867A8u;
label_3867a8:
    // 0x3867a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3867A8u;
    {
        const bool branch_taken_0x3867a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3867ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3867A8u;
        // 0x3867ac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3867a8) {
            ctx->pc = 0x3867D4u;
            goto label_3867d4;
        }
    }
    ctx->pc = 0x3867B0u;
    // 0x3867b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3867B0u;
    {
        const bool branch_taken_0x3867b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3867B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3867B0u;
        // 0x3867b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3867b0) {
            ctx->pc = 0x3867D4u;
            goto label_3867d4;
        }
    }
    ctx->pc = 0x3867B8u;
label_3867b8:
    // 0x3867b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3867b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867bc: 0xc0e19a0  jal         func_386680
    ctx->pc = 0x3867BCu;
    SET_GPR_U32(ctx, 31, 0x3867C4u);
    ctx->pc = 0x3867C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3867BCu;
    // 0x3867c0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386680u;
    goto label_386680;
    ctx->pc = 0x3867C4u;
label_3867c4:
    // 0x3867c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3867c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3867c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3867C8u;
    {
        const bool branch_taken_0x3867c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3867CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3867C8u;
        // 0x3867cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3867c8) {
            ctx->pc = 0x3867D4u;
            goto label_3867d4;
        }
    }
    ctx->pc = 0x3867D0u;
    // 0x3867d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3867d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3867d4:
    // 0x3867d4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3867d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3867d8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3867d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3867dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3867dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3867e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3867e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3867e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3867e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3867e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3867E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3867ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3867E8u;
        // 0x3867ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3867E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3867F0u;
}
