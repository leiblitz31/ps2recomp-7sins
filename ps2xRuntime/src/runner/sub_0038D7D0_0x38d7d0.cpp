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

// Function: sub_0038D7D0
// Address: 0x38d7d0 - 0x38d8b8
void sub_0038D7D0_0x38d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D7D0_0x38d7d0");
#endif

    switch (ctx->pc) {
        case 0x38d7d0u: goto label_38d7d0;
        case 0x38d7d4u: goto label_38d7d4;
        case 0x38d7d8u: goto label_38d7d8;
        case 0x38d7dcu: goto label_38d7dc;
        case 0x38d7e0u: goto label_38d7e0;
        case 0x38d7e4u: goto label_38d7e4;
        case 0x38d7e8u: goto label_38d7e8;
        case 0x38d7ecu: goto label_38d7ec;
        case 0x38d7f0u: goto label_38d7f0;
        case 0x38d7f4u: goto label_38d7f4;
        case 0x38d7f8u: goto label_38d7f8;
        case 0x38d7fcu: goto label_38d7fc;
        case 0x38d800u: goto label_38d800;
        case 0x38d804u: goto label_38d804;
        case 0x38d808u: goto label_38d808;
        case 0x38d80cu: goto label_38d80c;
        case 0x38d810u: goto label_38d810;
        case 0x38d814u: goto label_38d814;
        case 0x38d818u: goto label_38d818;
        case 0x38d81cu: goto label_38d81c;
        case 0x38d820u: goto label_38d820;
        case 0x38d824u: goto label_38d824;
        case 0x38d828u: goto label_38d828;
        case 0x38d82cu: goto label_38d82c;
        case 0x38d830u: goto label_38d830;
        case 0x38d834u: goto label_38d834;
        case 0x38d838u: goto label_38d838;
        case 0x38d83cu: goto label_38d83c;
        case 0x38d840u: goto label_38d840;
        case 0x38d844u: goto label_38d844;
        case 0x38d848u: goto label_38d848;
        case 0x38d84cu: goto label_38d84c;
        case 0x38d850u: goto label_38d850;
        case 0x38d854u: goto label_38d854;
        case 0x38d858u: goto label_38d858;
        case 0x38d85cu: goto label_38d85c;
        case 0x38d860u: goto label_38d860;
        case 0x38d864u: goto label_38d864;
        case 0x38d868u: goto label_38d868;
        case 0x38d86cu: goto label_38d86c;
        case 0x38d870u: goto label_38d870;
        case 0x38d874u: goto label_38d874;
        case 0x38d878u: goto label_38d878;
        case 0x38d87cu: goto label_38d87c;
        case 0x38d880u: goto label_38d880;
        case 0x38d884u: goto label_38d884;
        case 0x38d888u: goto label_38d888;
        case 0x38d88cu: goto label_38d88c;
        case 0x38d890u: goto label_38d890;
        case 0x38d894u: goto label_38d894;
        case 0x38d898u: goto label_38d898;
        case 0x38d89cu: goto label_38d89c;
        case 0x38d8a0u: goto label_38d8a0;
        case 0x38d8a4u: goto label_38d8a4;
        case 0x38d8a8u: goto label_38d8a8;
        case 0x38d8acu: goto label_38d8ac;
        case 0x38d8b0u: goto label_38d8b0;
        case 0x38d8b4u: goto label_38d8b4;
        default: break;
    }

    ctx->pc = 0x38d7d0u;

label_38d7d0:
    // 0x38d7d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38d7d4:
    // 0x38d7d4: 0x8f83bd38  lw          $v1, -0x42C8($gp)
    ctx->pc = 0x38d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950200)));
label_38d7d8:
    // 0x38d7d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38d7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38d7dc:
    // 0x38d7dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x38d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_38d7e0:
    // 0x38d7e0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38d7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_38d7e4:
    // 0x38d7e4: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x38d7e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38d7e8:
    // 0x38d7e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_38d7ec:
    // 0x38d7ec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x38d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_38d7f0:
    // 0x38d7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38d7f4:
    // 0x38d7f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38d7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d7f8:
    // 0x38d7f8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38d7fc:
    // 0x38d7fc: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x38d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_38d800:
    // 0x38d800: 0x34a50012  ori         $a1, $a1, 0x12
    ctx->pc = 0x38d800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18);
label_38d804:
    // 0x38d804: 0x40f809  jalr        $v0
label_38d808:
    if (ctx->pc == 0x38D808u) {
        ctx->pc = 0x38D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D804u;
        // 0x38d808: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D80Cu;
        goto label_38d80c;
    }
    ctx->pc = 0x38D804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38D80Cu);
        ctx->pc = 0x38D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D804u;
        // 0x38d808: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D804u, 0x38D80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D80Cu;
label_38d80c:
    // 0x38d80c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38d80cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38d810:
    // 0x38d810: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_38d814:
    if (ctx->pc == 0x38D814u) {
        ctx->pc = 0x38D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D810u;
        // 0x38d814: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D818u;
        goto label_38d818;
    }
    ctx->pc = 0x38D810u;
    {
        const bool branch_taken_0x38d810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D810u;
        // 0x38d814: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d810) {
            ctx->pc = 0x38D898u;
            goto label_38d898;
        }
    }
    ctx->pc = 0x38D818u;
label_38d818:
    // 0x38d818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d81c:
    // 0x38d81c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x38d81cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_38d820:
    // 0x38d820: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x38d820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_38d824:
    // 0x38d824: 0xa2120001  sb          $s2, 0x1($s0)
    ctx->pc = 0x38d824u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 18));
label_38d828:
    // 0x38d828: 0x2606002c  addiu       $a2, $s0, 0x2C
    ctx->pc = 0x38d828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_38d82c:
    // 0x38d82c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x38d82cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_38d830:
    // 0x38d830: 0x2463dcd0  addiu       $v1, $v1, -0x2330
    ctx->pc = 0x38d830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958288));
label_38d834:
    // 0x38d834: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x38d834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
label_38d838:
    // 0x38d838: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38d838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38d83c:
    // 0x38d83c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38d83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38d840:
    // 0x38d840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38d840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d844:
    // 0x38d844: 0x2484ade8  addiu       $a0, $a0, -0x5218
    ctx->pc = 0x38d844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946280));
label_38d848:
    // 0x38d848: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x38d848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_38d84c:
    // 0x38d84c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38d84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d850:
    // 0x38d850: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x38d850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_38d854:
    // 0x38d854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_38d858:
    // 0x38d858: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x38d858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_38d85c:
    // 0x38d85c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x38d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_38d860:
    // 0x38d860: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x38d860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_38d864:
    // 0x38d864: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x38d864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_38d868:
    // 0x38d868: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x38d868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_38d86c:
    // 0x38d86c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x38d86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_38d870:
    // 0x38d870: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x38d870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
label_38d874:
    // 0x38d874: 0xa602003c  sh          $v0, 0x3C($s0)
    ctx->pc = 0x38d874u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 2));
label_38d878:
    // 0x38d878: 0xa2070002  sb          $a3, 0x2($s0)
    ctx->pc = 0x38d878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 7));
label_38d87c:
    // 0x38d87c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x38d87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_38d880:
    // 0x38d880: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x38d880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_38d884:
    // 0x38d884: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x38d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_38d888:
    // 0x38d888: 0xc104c80  jal         func_413200
label_38d88c:
    if (ctx->pc == 0x38D88Cu) {
        ctx->pc = 0x38D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D888u;
        // 0x38d88c: 0xae06002c  sw          $a2, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D890u;
        goto label_38d890;
    }
    ctx->pc = 0x38D888u;
    SET_GPR_U32(ctx, 31, 0x38D890u);
    ctx->pc = 0x38D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D888u;
    // 0x38d88c: 0xae06002c  sw          $a2, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x38D888u, 0x38D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D890u;
label_38d890:
    // 0x38d890: 0x10000003  b           . + 4 + (0x3 << 2)
label_38d894:
    if (ctx->pc == 0x38D894u) {
        ctx->pc = 0x38D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D890u;
        // 0x38d894: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D898u;
        goto label_38d898;
    }
    ctx->pc = 0x38D890u;
    {
        const bool branch_taken_0x38d890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D890u;
        // 0x38d894: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d890) {
            ctx->pc = 0x38D8A0u;
            goto label_38d8a0;
        }
    }
    ctx->pc = 0x38D898u;
label_38d898:
    // 0x38d898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38d898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d89c:
    // 0x38d89c: 0x0  nop
    ctx->pc = 0x38d89cu;
    // NOP
label_38d8a0:
    // 0x38d8a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38d8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38d8a4:
    // 0x38d8a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38d8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38d8a8:
    // 0x38d8a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38d8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38d8ac:
    // 0x38d8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38d8b0:
    // 0x38d8b0: 0x3e00008  jr          $ra
label_38d8b4:
    if (ctx->pc == 0x38D8B4u) {
        ctx->pc = 0x38D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8B0u;
        // 0x38d8b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D8B8u;
        goto label_fallthrough_0x38d8b0;
    }
    ctx->pc = 0x38D8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8B0u;
        // 0x38d8b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38d8b0:
    ctx->pc = 0x38D8B8u;
}
