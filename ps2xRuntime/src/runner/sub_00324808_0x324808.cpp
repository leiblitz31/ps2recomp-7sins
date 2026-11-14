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

// Function: sub_00324808
// Address: 0x324808 - 0x324aa0
void sub_00324808_0x324808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324808_0x324808");
#endif

    switch (ctx->pc) {
        case 0x324808u: goto label_324808;
        case 0x32480cu: goto label_32480c;
        case 0x324810u: goto label_324810;
        case 0x324814u: goto label_324814;
        case 0x324818u: goto label_324818;
        case 0x32481cu: goto label_32481c;
        case 0x324820u: goto label_324820;
        case 0x324824u: goto label_324824;
        case 0x324828u: goto label_324828;
        case 0x32482cu: goto label_32482c;
        case 0x324830u: goto label_324830;
        case 0x324834u: goto label_324834;
        case 0x324838u: goto label_324838;
        case 0x32483cu: goto label_32483c;
        case 0x324840u: goto label_324840;
        case 0x324844u: goto label_324844;
        case 0x324848u: goto label_324848;
        case 0x32484cu: goto label_32484c;
        case 0x324850u: goto label_324850;
        case 0x324854u: goto label_324854;
        case 0x324858u: goto label_324858;
        case 0x32485cu: goto label_32485c;
        case 0x324860u: goto label_324860;
        case 0x324864u: goto label_324864;
        case 0x324868u: goto label_324868;
        case 0x32486cu: goto label_32486c;
        case 0x324870u: goto label_324870;
        case 0x324874u: goto label_324874;
        case 0x324878u: goto label_324878;
        case 0x32487cu: goto label_32487c;
        case 0x324880u: goto label_324880;
        case 0x324884u: goto label_324884;
        case 0x324888u: goto label_324888;
        case 0x32488cu: goto label_32488c;
        case 0x324890u: goto label_324890;
        case 0x324894u: goto label_324894;
        case 0x324898u: goto label_324898;
        case 0x32489cu: goto label_32489c;
        case 0x3248a0u: goto label_3248a0;
        case 0x3248a4u: goto label_3248a4;
        case 0x3248a8u: goto label_3248a8;
        case 0x3248acu: goto label_3248ac;
        case 0x3248b0u: goto label_3248b0;
        case 0x3248b4u: goto label_3248b4;
        case 0x3248b8u: goto label_3248b8;
        case 0x3248bcu: goto label_3248bc;
        case 0x3248c0u: goto label_3248c0;
        case 0x3248c4u: goto label_3248c4;
        case 0x3248c8u: goto label_3248c8;
        case 0x3248ccu: goto label_3248cc;
        case 0x3248d0u: goto label_3248d0;
        case 0x3248d4u: goto label_3248d4;
        case 0x3248d8u: goto label_3248d8;
        case 0x3248dcu: goto label_3248dc;
        case 0x3248e0u: goto label_3248e0;
        case 0x3248e4u: goto label_3248e4;
        case 0x3248e8u: goto label_3248e8;
        case 0x3248ecu: goto label_3248ec;
        case 0x3248f0u: goto label_3248f0;
        case 0x3248f4u: goto label_3248f4;
        case 0x3248f8u: goto label_3248f8;
        case 0x3248fcu: goto label_3248fc;
        case 0x324900u: goto label_324900;
        case 0x324904u: goto label_324904;
        case 0x324908u: goto label_324908;
        case 0x32490cu: goto label_32490c;
        case 0x324910u: goto label_324910;
        case 0x324914u: goto label_324914;
        case 0x324918u: goto label_324918;
        case 0x32491cu: goto label_32491c;
        case 0x324920u: goto label_324920;
        case 0x324924u: goto label_324924;
        case 0x324928u: goto label_324928;
        case 0x32492cu: goto label_32492c;
        case 0x324930u: goto label_324930;
        case 0x324934u: goto label_324934;
        case 0x324938u: goto label_324938;
        case 0x32493cu: goto label_32493c;
        case 0x324940u: goto label_324940;
        case 0x324944u: goto label_324944;
        case 0x324948u: goto label_324948;
        case 0x32494cu: goto label_32494c;
        case 0x324950u: goto label_324950;
        case 0x324954u: goto label_324954;
        case 0x324958u: goto label_324958;
        case 0x32495cu: goto label_32495c;
        case 0x324960u: goto label_324960;
        case 0x324964u: goto label_324964;
        case 0x324968u: goto label_324968;
        case 0x32496cu: goto label_32496c;
        case 0x324970u: goto label_324970;
        case 0x324974u: goto label_324974;
        case 0x324978u: goto label_324978;
        case 0x32497cu: goto label_32497c;
        case 0x324980u: goto label_324980;
        case 0x324984u: goto label_324984;
        case 0x324988u: goto label_324988;
        case 0x32498cu: goto label_32498c;
        case 0x324990u: goto label_324990;
        case 0x324994u: goto label_324994;
        case 0x324998u: goto label_324998;
        case 0x32499cu: goto label_32499c;
        case 0x3249a0u: goto label_3249a0;
        case 0x3249a4u: goto label_3249a4;
        case 0x3249a8u: goto label_3249a8;
        case 0x3249acu: goto label_3249ac;
        case 0x3249b0u: goto label_3249b0;
        case 0x3249b4u: goto label_3249b4;
        case 0x3249b8u: goto label_3249b8;
        case 0x3249bcu: goto label_3249bc;
        case 0x3249c0u: goto label_3249c0;
        case 0x3249c4u: goto label_3249c4;
        case 0x3249c8u: goto label_3249c8;
        case 0x3249ccu: goto label_3249cc;
        case 0x3249d0u: goto label_3249d0;
        case 0x3249d4u: goto label_3249d4;
        case 0x3249d8u: goto label_3249d8;
        case 0x3249dcu: goto label_3249dc;
        case 0x3249e0u: goto label_3249e0;
        case 0x3249e4u: goto label_3249e4;
        case 0x3249e8u: goto label_3249e8;
        case 0x3249ecu: goto label_3249ec;
        case 0x3249f0u: goto label_3249f0;
        case 0x3249f4u: goto label_3249f4;
        case 0x3249f8u: goto label_3249f8;
        case 0x3249fcu: goto label_3249fc;
        case 0x324a00u: goto label_324a00;
        case 0x324a04u: goto label_324a04;
        case 0x324a08u: goto label_324a08;
        case 0x324a0cu: goto label_324a0c;
        case 0x324a10u: goto label_324a10;
        case 0x324a14u: goto label_324a14;
        case 0x324a18u: goto label_324a18;
        case 0x324a1cu: goto label_324a1c;
        case 0x324a20u: goto label_324a20;
        case 0x324a24u: goto label_324a24;
        case 0x324a28u: goto label_324a28;
        case 0x324a2cu: goto label_324a2c;
        case 0x324a30u: goto label_324a30;
        case 0x324a34u: goto label_324a34;
        case 0x324a38u: goto label_324a38;
        case 0x324a3cu: goto label_324a3c;
        case 0x324a40u: goto label_324a40;
        case 0x324a44u: goto label_324a44;
        case 0x324a48u: goto label_324a48;
        case 0x324a4cu: goto label_324a4c;
        case 0x324a50u: goto label_324a50;
        case 0x324a54u: goto label_324a54;
        case 0x324a58u: goto label_324a58;
        case 0x324a5cu: goto label_324a5c;
        case 0x324a60u: goto label_324a60;
        case 0x324a64u: goto label_324a64;
        case 0x324a68u: goto label_324a68;
        case 0x324a6cu: goto label_324a6c;
        case 0x324a70u: goto label_324a70;
        case 0x324a74u: goto label_324a74;
        case 0x324a78u: goto label_324a78;
        case 0x324a7cu: goto label_324a7c;
        case 0x324a80u: goto label_324a80;
        case 0x324a84u: goto label_324a84;
        case 0x324a88u: goto label_324a88;
        case 0x324a8cu: goto label_324a8c;
        case 0x324a90u: goto label_324a90;
        case 0x324a94u: goto label_324a94;
        case 0x324a98u: goto label_324a98;
        case 0x324a9cu: goto label_324a9c;
        default: break;
    }

    ctx->pc = 0x324808u;

label_324808:
    // 0x324808: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x324808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_32480c:
    // 0x32480c: 0x8f83a634  lw          $v1, -0x59CC($gp)
    ctx->pc = 0x32480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_324810:
    // 0x324810: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x324810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_324814:
    // 0x324814: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x324814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_324818:
    // 0x324818: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x324818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32481c:
    // 0x32481c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x32481cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_324820:
    // 0x324820: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x324820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_324824:
    // 0x324824: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x324824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_324828:
    // 0x324828: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x324828u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32482c:
    // 0x32482c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x32482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_324830:
    // 0x324830: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x324830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_324834:
    // 0x324834: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x324834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_324838:
    // 0x324838: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x324838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_32483c:
    // 0x32483c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x32483cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_324840:
    // 0x324840: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x324840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_324844:
    // 0x324844: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x324844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_324848:
    // 0x324848: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x324848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_32484c:
    // 0x32484c: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x32484cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_324850:
    // 0x324850: 0x12c00086  beqz        $s6, . + 4 + (0x86 << 2)
label_324854:
    if (ctx->pc == 0x324854u) {
        ctx->pc = 0x324854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324850u;
        // 0x324854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324858u;
        goto label_324858;
    }
    ctx->pc = 0x324850u;
    {
        const bool branch_taken_0x324850 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x324854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324850u;
        // 0x324854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324850) {
            ctx->pc = 0x324A6Cu;
            goto label_324a6c;
        }
    }
    ctx->pc = 0x324858u;
label_324858:
    // 0x324858: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x324858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_32485c:
    // 0x32485c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x32485cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_324860:
    // 0x324860: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_324864:
    if (ctx->pc == 0x324864u) {
        ctx->pc = 0x324864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324860u;
        // 0x324864: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324868u;
        goto label_324868;
    }
    ctx->pc = 0x324860u;
    {
        const bool branch_taken_0x324860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x324864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324860u;
        // 0x324864: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324860) {
            ctx->pc = 0x3248B4u;
            goto label_3248b4;
        }
    }
    ctx->pc = 0x324868u;
label_324868:
    // 0x324868: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x324868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_32486c:
    // 0x32486c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x32486cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_324870:
    // 0x324870: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x324870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_324874:
    // 0x324874: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x324874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_324878:
    // 0x324878: 0x8cc422d0  lw          $a0, 0x22D0($a2)
    ctx->pc = 0x324878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8912)));
label_32487c:
    // 0x32487c: 0x40f809  jalr        $v0
label_324880:
    if (ctx->pc == 0x324880u) {
        ctx->pc = 0x324880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32487Cu;
        // 0x324880: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324884u;
        goto label_324884;
    }
    ctx->pc = 0x32487Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x324884u);
        ctx->pc = 0x324880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32487Cu;
        // 0x324880: 0x34a50120  ori         $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)288);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32487Cu, 0x324884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x324884u;
label_324884:
    // 0x324884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324888:
    // 0x324888: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_32488c:
    if (ctx->pc == 0x32488Cu) {
        ctx->pc = 0x32488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324888u;
        // 0x32488c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324890u;
        goto label_324890;
    }
    ctx->pc = 0x324888u;
    {
        const bool branch_taken_0x324888 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324888u;
        // 0x32488c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324888) {
            ctx->pc = 0x324898u;
            goto label_324898;
        }
    }
    ctx->pc = 0x324890u;
label_324890:
    // 0x324890: 0x10000008  b           . + 4 + (0x8 << 2)
label_324894:
    if (ctx->pc == 0x324894u) {
        ctx->pc = 0x324894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324890u;
        // 0x324894: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324898u;
        goto label_324898;
    }
    ctx->pc = 0x324890u;
    {
        const bool branch_taken_0x324890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324890u;
        // 0x324894: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324890) {
            ctx->pc = 0x3248B4u;
            goto label_3248b4;
        }
    }
    ctx->pc = 0x324898u;
label_324898:
    // 0x324898: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x324898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32489c:
    // 0x32489c: 0xc0bb7e6  jal         func_2EDF98
label_3248a0:
    if (ctx->pc == 0x3248A0u) {
        ctx->pc = 0x3248A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32489Cu;
        // 0x3248a0: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3248A4u;
        goto label_3248a4;
    }
    ctx->pc = 0x32489Cu;
    SET_GPR_U32(ctx, 31, 0x3248A4u);
    ctx->pc = 0x3248A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32489Cu;
    // 0x3248a0: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x32489Cu, 0x3248A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3248A4u;
label_3248a4:
    // 0x3248a4: 0x8f83a634  lw          $v1, -0x59CC($gp)
    ctx->pc = 0x3248a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
label_3248a8:
    // 0x3248a8: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x3248a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_3248ac:
    // 0x3248ac: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3248acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_3248b0:
    // 0x3248b0: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x3248b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3248b4:
    // 0x3248b4: 0x57c00003  bnel        $fp, $zero, . + 4 + (0x3 << 2)
label_3248b8:
    if (ctx->pc == 0x3248B8u) {
        ctx->pc = 0x3248B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248B4u;
        // 0x3248b8: 0x8ec50080  lw          $a1, 0x80($s6) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3248BCu;
        goto label_3248bc;
    }
    ctx->pc = 0x3248B4u;
    {
        const bool branch_taken_0x3248b4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x3248b4) {
            ctx->pc = 0x3248B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3248B4u;
            // 0x3248b8: 0x8ec50080  lw          $a1, 0x80($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3248C4u;
            goto label_3248c4;
        }
    }
    ctx->pc = 0x3248BCu;
label_3248bc:
    // 0x3248bc: 0x1000006b  b           . + 4 + (0x6B << 2)
label_3248c0:
    if (ctx->pc == 0x3248C0u) {
        ctx->pc = 0x3248C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248BCu;
        // 0x3248c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3248C4u;
        goto label_3248c4;
    }
    ctx->pc = 0x3248BCu;
    {
        const bool branch_taken_0x3248bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3248C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248BCu;
        // 0x3248c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3248bc) {
            ctx->pc = 0x324A6Cu;
            goto label_324a6c;
        }
    }
    ctx->pc = 0x3248C4u;
label_3248c4:
    // 0x3248c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3248c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3248c8:
    // 0x3248c8: 0xc0c962e  jal         func_3258B8
label_3248cc:
    if (ctx->pc == 0x3248CCu) {
        ctx->pc = 0x3248CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248C8u;
        // 0x3248cc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3248D0u;
        goto label_3248d0;
    }
    ctx->pc = 0x3248C8u;
    SET_GPR_U32(ctx, 31, 0x3248D0u);
    ctx->pc = 0x3248CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3248C8u;
    // 0x3248cc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3258B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258B8u, 0x3248C8u, 0x3248D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3248D0u;
label_3248d0:
    // 0x3248d0: 0x151180  sll         $v0, $s5, 6
    ctx->pc = 0x3248d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_3248d4:
    // 0x3248d4: 0x0  nop
    ctx->pc = 0x3248d4u;
    // NOP
label_3248d8:
    // 0x3248d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3248d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3248dc:
    // 0x3248dc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x3248dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3248e0:
    // 0x3248e0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x3248e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3248e4:
    // 0x3248e4: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x3248e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3248e8:
    // 0x3248e8: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
label_3248ec:
    if (ctx->pc == 0x3248ECu) {
        ctx->pc = 0x3248ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248E8u;
        // 0x3248ec: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3248F0u;
        goto label_3248f0;
    }
    ctx->pc = 0x3248E8u;
    {
        const bool branch_taken_0x3248e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3248ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248E8u;
        // 0x3248ec: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3248e8) {
            ctx->pc = 0x324A54u;
            goto label_324a54;
        }
    }
    ctx->pc = 0x3248F0u;
label_3248f0:
    // 0x3248f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3248f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3248f4:
    // 0x3248f4: 0x2442b710  addiu       $v0, $v0, -0x48F0
    ctx->pc = 0x3248f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948624));
label_3248f8:
    // 0x3248f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3248f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3248fc:
    // 0x3248fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3248fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_324900:
    // 0x324900: 0x800008  jr          $a0
label_324904:
    if (ctx->pc == 0x324904u) {
        ctx->pc = 0x324908u;
        goto label_324908;
    }
    ctx->pc = 0x324900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x324908u: goto label_324908;
            case 0x32497Cu: goto label_32497c;
            case 0x3249E8u: goto label_3249e8;
            case 0x324A2Cu: goto label_324a2c;
            case 0x324A54u: goto label_324a54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324900u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x324908u;
label_324908:
    // 0x324908: 0x3c59021  addu        $s2, $fp, $a1
    ctx->pc = 0x324908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_32490c:
    // 0x32490c: 0x2c58821  addu        $s1, $s6, $a1
    ctx->pc = 0x32490cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_324910:
    // 0x324910: 0xc0c9806  jal         func_326018
label_324914:
    if (ctx->pc == 0x324914u) {
        ctx->pc = 0x324914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324910u;
        // 0x324914: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324918u;
        goto label_324918;
    }
    ctx->pc = 0x324910u;
    SET_GPR_U32(ctx, 31, 0x324918u);
    ctx->pc = 0x324914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324910u;
    // 0x324914: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326018u, 0x324910u, 0x324918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324918u;
label_324918:
    // 0x324918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32491c:
    // 0x32491c: 0xc0c9818  jal         func_326060
label_324920:
    if (ctx->pc == 0x324920u) {
        ctx->pc = 0x324920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32491Cu;
        // 0x324920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324924u;
        goto label_324924;
    }
    ctx->pc = 0x32491Cu;
    SET_GPR_U32(ctx, 31, 0x324924u);
    ctx->pc = 0x324920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32491Cu;
    // 0x324920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326060u, 0x32491Cu, 0x324924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324924u;
label_324924:
    // 0x324924: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x324924u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_324928:
    // 0x324928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x324928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32492c:
    // 0x32492c: 0xc0c97b8  jal         func_325EE0
label_324930:
    if (ctx->pc == 0x324930u) {
        ctx->pc = 0x324930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32492Cu;
        // 0x324930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324934u;
        goto label_324934;
    }
    ctx->pc = 0x32492Cu;
    SET_GPR_U32(ctx, 31, 0x324934u);
    ctx->pc = 0x324930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32492Cu;
    // 0x324930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325EE0u, 0x32492Cu, 0x324934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324934u;
label_324934:
    // 0x324934: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x324934u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_324938:
    // 0x324938: 0xc0c97cc  jal         func_325F30
label_32493c:
    if (ctx->pc == 0x32493Cu) {
        ctx->pc = 0x32493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324938u;
        // 0x32493c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324940u;
        goto label_324940;
    }
    ctx->pc = 0x324938u;
    SET_GPR_U32(ctx, 31, 0x324940u);
    ctx->pc = 0x32493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324938u;
    // 0x32493c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325F30u, 0x324938u, 0x324940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324940u;
label_324940:
    // 0x324940: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x324940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_324944:
    // 0x324944: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x324944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_324948:
    // 0x324948: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x324948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32494c:
    // 0x32494c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_324950:
    if (ctx->pc == 0x324950u) {
        ctx->pc = 0x324950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32494Cu;
        // 0x324950: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324954u;
        goto label_324954;
    }
    ctx->pc = 0x32494Cu;
    {
        const bool branch_taken_0x32494c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32494Cu;
        // 0x324950: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32494c) {
            ctx->pc = 0x324960u;
            goto label_324960;
        }
    }
    ctx->pc = 0x324954u;
label_324954:
    // 0x324954: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x324954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_324958:
    // 0x324958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_32495c:
    // 0x32495c: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x32495cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_324960:
    // 0x324960: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x324960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_324964:
    // 0x324964: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_324968:
    if (ctx->pc == 0x324968u) {
        ctx->pc = 0x324968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324964u;
        // 0x324968: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32496Cu;
        goto label_32496c;
    }
    ctx->pc = 0x324964u;
    {
        const bool branch_taken_0x324964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x324968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324964u;
        // 0x324968: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324964) {
            ctx->pc = 0x324A58u;
            goto label_324a58;
        }
    }
    ctx->pc = 0x32496Cu;
label_32496c:
    // 0x32496c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x32496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_324970:
    // 0x324970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_324974:
    // 0x324974: 0x10000037  b           . + 4 + (0x37 << 2)
label_324978:
    if (ctx->pc == 0x324978u) {
        ctx->pc = 0x324978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324974u;
        // 0x324978: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32497Cu;
        goto label_32497c;
    }
    ctx->pc = 0x324974u;
    {
        const bool branch_taken_0x324974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324974u;
        // 0x324978: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324974) {
            ctx->pc = 0x324A54u;
            goto label_324a54;
        }
    }
    ctx->pc = 0x32497Cu;
label_32497c:
    // 0x32497c: 0xc0c989a  jal         func_326268
label_324980:
    if (ctx->pc == 0x324980u) {
        ctx->pc = 0x324980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32497Cu;
        // 0x324980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324984u;
        goto label_324984;
    }
    ctx->pc = 0x32497Cu;
    SET_GPR_U32(ctx, 31, 0x324984u);
    ctx->pc = 0x324980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32497Cu;
    // 0x324980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326268u, 0x32497Cu, 0x324984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324984u;
label_324984:
    // 0x324984: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x324984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_324988:
    // 0x324988: 0xc0c98ac  jal         func_3262B0
label_32498c:
    if (ctx->pc == 0x32498Cu) {
        ctx->pc = 0x32498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324988u;
        // 0x32498c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324990u;
        goto label_324990;
    }
    ctx->pc = 0x324988u;
    SET_GPR_U32(ctx, 31, 0x324990u);
    ctx->pc = 0x32498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324988u;
    // 0x32498c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3262B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3262B0u, 0x324988u, 0x324990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324990u;
label_324990:
    // 0x324990: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x324990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324994:
    // 0x324994: 0xc0c98d0  jal         func_326340
label_324998:
    if (ctx->pc == 0x324998u) {
        ctx->pc = 0x324998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324994u;
        // 0x324998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32499Cu;
        goto label_32499c;
    }
    ctx->pc = 0x324994u;
    SET_GPR_U32(ctx, 31, 0x32499Cu);
    ctx->pc = 0x324998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324994u;
    // 0x324998: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326340u, 0x324994u, 0x32499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32499Cu;
label_32499c:
    // 0x32499c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x32499cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3249a0:
    // 0x3249a0: 0xc0c98be  jal         func_3262F8
label_3249a4:
    if (ctx->pc == 0x3249A4u) {
        ctx->pc = 0x3249A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249A0u;
        // 0x3249a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249A8u;
        goto label_3249a8;
    }
    ctx->pc = 0x3249A0u;
    SET_GPR_U32(ctx, 31, 0x3249A8u);
    ctx->pc = 0x3249A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249A0u;
    // 0x3249a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3262F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3262F8u, 0x3249A0u, 0x3249A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3249A8u;
label_3249a8:
    // 0x3249a8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3249ac:
    if (ctx->pc == 0x3249ACu) {
        ctx->pc = 0x3249ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249A8u;
        // 0x3249ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249B0u;
        goto label_3249b0;
    }
    ctx->pc = 0x3249A8u;
    {
        const bool branch_taken_0x3249a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3249ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249A8u;
        // 0x3249ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3249a8) {
            ctx->pc = 0x3249BCu;
            goto label_3249bc;
        }
    }
    ctx->pc = 0x3249B0u;
label_3249b0:
    // 0x3249b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3249b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3249b4:
    // 0x3249b4: 0xc0c982c  jal         func_3260B0
label_3249b8:
    if (ctx->pc == 0x3249B8u) {
        ctx->pc = 0x3249B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249B4u;
        // 0x3249b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249BCu;
        goto label_3249bc;
    }
    ctx->pc = 0x3249B4u;
    SET_GPR_U32(ctx, 31, 0x3249BCu);
    ctx->pc = 0x3249B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249B4u;
    // 0x3249b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260B0u, 0x3249B4u, 0x3249BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3249BCu;
label_3249bc:
    // 0x3249bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3249bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3249c0:
    // 0x3249c0: 0xc0c9856  jal         func_326158
label_3249c4:
    if (ctx->pc == 0x3249C4u) {
        ctx->pc = 0x3249C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249C0u;
        // 0x3249c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249C8u;
        goto label_3249c8;
    }
    ctx->pc = 0x3249C0u;
    SET_GPR_U32(ctx, 31, 0x3249C8u);
    ctx->pc = 0x3249C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249C0u;
    // 0x3249c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326158u, 0x3249C0u, 0x3249C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3249C8u;
label_3249c8:
    // 0x3249c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3249c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3249cc:
    // 0x3249cc: 0xc0c986a  jal         func_3261A8
label_3249d0:
    if (ctx->pc == 0x3249D0u) {
        ctx->pc = 0x3249D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249CCu;
        // 0x3249d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249D4u;
        goto label_3249d4;
    }
    ctx->pc = 0x3249CCu;
    SET_GPR_U32(ctx, 31, 0x3249D4u);
    ctx->pc = 0x3249D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249CCu;
    // 0x3249d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3261A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3261A8u, 0x3249CCu, 0x3249D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3249D4u;
label_3249d4:
    // 0x3249d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3249d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3249d8:
    // 0x3249d8: 0xc0c9886  jal         func_326218
label_3249dc:
    if (ctx->pc == 0x3249DCu) {
        ctx->pc = 0x3249DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249D8u;
        // 0x3249dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249E0u;
        goto label_3249e0;
    }
    ctx->pc = 0x3249D8u;
    SET_GPR_U32(ctx, 31, 0x3249E0u);
    ctx->pc = 0x3249DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249D8u;
    // 0x3249dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326218u, 0x3249D8u, 0x3249E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3249E0u;
label_3249e0:
    // 0x3249e0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3249e4:
    if (ctx->pc == 0x3249E4u) {
        ctx->pc = 0x3249E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249E0u;
        // 0x3249e4: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249E8u;
        goto label_3249e8;
    }
    ctx->pc = 0x3249E0u;
    {
        const bool branch_taken_0x3249e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3249E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249E0u;
        // 0x3249e4: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3249e0) {
            ctx->pc = 0x324A58u;
            goto label_324a58;
        }
    }
    ctx->pc = 0x3249E8u;
label_3249e8:
    // 0x3249e8: 0xc0c993a  jal         func_3264E8
label_3249ec:
    if (ctx->pc == 0x3249ECu) {
        ctx->pc = 0x3249ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249E8u;
        // 0x3249ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3249F0u;
        goto label_3249f0;
    }
    ctx->pc = 0x3249E8u;
    SET_GPR_U32(ctx, 31, 0x3249F0u);
    ctx->pc = 0x3249ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249E8u;
    // 0x3249ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3264E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3264E8u, 0x3249E8u, 0x3249F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3249F0u;
label_3249f0:
    // 0x3249f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3249f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3249f4:
    // 0x3249f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3249f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3249f8:
    // 0x3249f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3249f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3249fc:
    // 0x3249fc: 0xc0c994c  jal         func_326530
label_324a00:
    if (ctx->pc == 0x324A00u) {
        ctx->pc = 0x324A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249FCu;
        // 0x324a00: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A04u;
        goto label_324a04;
    }
    ctx->pc = 0x3249FCu;
    SET_GPR_U32(ctx, 31, 0x324A04u);
    ctx->pc = 0x324A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249FCu;
    // 0x324a00: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x326530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326530u, 0x3249FCu, 0x324A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A04u;
label_324a04:
    // 0x324a04: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_324a08:
    if (ctx->pc == 0x324A08u) {
        ctx->pc = 0x324A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A04u;
        // 0x324a08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A0Cu;
        goto label_324a0c;
    }
    ctx->pc = 0x324A04u;
    {
        const bool branch_taken_0x324a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x324A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A04u;
        // 0x324a08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a04) {
            ctx->pc = 0x324A14u;
            goto label_324a14;
        }
    }
    ctx->pc = 0x324A0Cu;
label_324a0c:
    // 0x324a0c: 0xc0c98e2  jal         func_326388
label_324a10:
    if (ctx->pc == 0x324A10u) {
        ctx->pc = 0x324A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A0Cu;
        // 0x324a10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A14u;
        goto label_324a14;
    }
    ctx->pc = 0x324A0Cu;
    SET_GPR_U32(ctx, 31, 0x324A14u);
    ctx->pc = 0x324A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A0Cu;
    // 0x324a10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326388u, 0x324A0Cu, 0x324A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A14u;
label_324a14:
    // 0x324a14: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x324a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_324a18:
    // 0x324a18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_324a1c:
    // 0x324a1c: 0xc0c9912  jal         func_326448
label_324a20:
    if (ctx->pc == 0x324A20u) {
        ctx->pc = 0x324A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A1Cu;
        // 0x324a20: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A24u;
        goto label_324a24;
    }
    ctx->pc = 0x324A1Cu;
    SET_GPR_U32(ctx, 31, 0x324A24u);
    ctx->pc = 0x324A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A1Cu;
    // 0x324a20: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326448u, 0x324A1Cu, 0x324A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A24u;
label_324a24:
    // 0x324a24: 0x1000000c  b           . + 4 + (0xC << 2)
label_324a28:
    if (ctx->pc == 0x324A28u) {
        ctx->pc = 0x324A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A24u;
        // 0x324a28: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A2Cu;
        goto label_324a2c;
    }
    ctx->pc = 0x324A24u;
    {
        const bool branch_taken_0x324a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A24u;
        // 0x324a28: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a24) {
            ctx->pc = 0x324A58u;
            goto label_324a58;
        }
    }
    ctx->pc = 0x324A2Cu;
label_324a2c:
    // 0x324a2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x324a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_324a30:
    // 0x324a30: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x324a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_324a34:
    // 0x324a34: 0xc0c997c  jal         func_3265F0
label_324a38:
    if (ctx->pc == 0x324A38u) {
        ctx->pc = 0x324A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A34u;
        // 0x324a38: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A3Cu;
        goto label_324a3c;
    }
    ctx->pc = 0x324A34u;
    SET_GPR_U32(ctx, 31, 0x324A3Cu);
    ctx->pc = 0x324A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A34u;
    // 0x324a38: 0x37a6000c  ori         $a2, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265F0u, 0x324A34u, 0x324A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A3Cu;
label_324a3c:
    // 0x324a3c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x324a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_324a40:
    // 0x324a40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x324a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_324a44:
    // 0x324a44: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x324a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_324a48:
    // 0x324a48: 0xc0c9966  jal         func_326598
label_324a4c:
    if (ctx->pc == 0x324A4Cu) {
        ctx->pc = 0x324A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A48u;
        // 0x324a4c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A50u;
        goto label_324a50;
    }
    ctx->pc = 0x324A48u;
    SET_GPR_U32(ctx, 31, 0x324A50u);
    ctx->pc = 0x324A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324A48u;
    // 0x324a4c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326598u, 0x324A48u, 0x324A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324A50u;
label_324a50:
    // 0x324a50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x324a50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324a54:
    // 0x324a54: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x324a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_324a58:
    // 0x324a58: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x324a58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_324a5c:
    // 0x324a5c: 0x2ea30002  sltiu       $v1, $s5, 0x2
    ctx->pc = 0x324a5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_324a60:
    // 0x324a60: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
label_324a64:
    if (ctx->pc == 0x324A64u) {
        ctx->pc = 0x324A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A60u;
        // 0x324a64: 0x151180  sll         $v0, $s5, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324A68u;
        goto label_324a68;
    }
    ctx->pc = 0x324A60u;
    {
        const bool branch_taken_0x324a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A60u;
        // 0x324a64: 0x151180  sll         $v0, $s5, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324a60) {
            ctx->pc = 0x3248D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3248d8;
        }
    }
    ctx->pc = 0x324A68u;
label_324a68:
    // 0x324a68: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x324a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_324a6c:
    // 0x324a6c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x324a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_324a70:
    // 0x324a70: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x324a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_324a74:
    // 0x324a74: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x324a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_324a78:
    // 0x324a78: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x324a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_324a7c:
    // 0x324a7c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x324a7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_324a80:
    // 0x324a80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x324a80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_324a84:
    // 0x324a84: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x324a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_324a88:
    // 0x324a88: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x324a88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_324a8c:
    // 0x324a8c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x324a8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_324a90:
    // 0x324a90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x324a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_324a94:
    // 0x324a94: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x324a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_324a98:
    // 0x324a98: 0x3e00008  jr          $ra
label_324a9c:
    if (ctx->pc == 0x324A9Cu) {
        ctx->pc = 0x324A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A98u;
        // 0x324a9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324AA0u;
        goto label_fallthrough_0x324a98;
    }
    ctx->pc = 0x324A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A98u;
        // 0x324a9c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x324a98:
    ctx->pc = 0x324AA0u;
}
