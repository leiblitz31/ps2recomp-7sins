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

// Function: sub_004617F0
// Address: 0x4617f0 - 0x461b40
void sub_004617F0_0x4617f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004617F0_0x4617f0");
#endif

    switch (ctx->pc) {
        case 0x4617f0u: goto label_4617f0;
        case 0x4617f4u: goto label_4617f4;
        case 0x4617f8u: goto label_4617f8;
        case 0x4617fcu: goto label_4617fc;
        case 0x461800u: goto label_461800;
        case 0x461804u: goto label_461804;
        case 0x461808u: goto label_461808;
        case 0x46180cu: goto label_46180c;
        case 0x461810u: goto label_461810;
        case 0x461814u: goto label_461814;
        case 0x461818u: goto label_461818;
        case 0x46181cu: goto label_46181c;
        case 0x461820u: goto label_461820;
        case 0x461824u: goto label_461824;
        case 0x461828u: goto label_461828;
        case 0x46182cu: goto label_46182c;
        case 0x461830u: goto label_461830;
        case 0x461834u: goto label_461834;
        case 0x461838u: goto label_461838;
        case 0x46183cu: goto label_46183c;
        case 0x461840u: goto label_461840;
        case 0x461844u: goto label_461844;
        case 0x461848u: goto label_461848;
        case 0x46184cu: goto label_46184c;
        case 0x461850u: goto label_461850;
        case 0x461854u: goto label_461854;
        case 0x461858u: goto label_461858;
        case 0x46185cu: goto label_46185c;
        case 0x461860u: goto label_461860;
        case 0x461864u: goto label_461864;
        case 0x461868u: goto label_461868;
        case 0x46186cu: goto label_46186c;
        case 0x461870u: goto label_461870;
        case 0x461874u: goto label_461874;
        case 0x461878u: goto label_461878;
        case 0x46187cu: goto label_46187c;
        case 0x461880u: goto label_461880;
        case 0x461884u: goto label_461884;
        case 0x461888u: goto label_461888;
        case 0x46188cu: goto label_46188c;
        case 0x461890u: goto label_461890;
        case 0x461894u: goto label_461894;
        case 0x461898u: goto label_461898;
        case 0x46189cu: goto label_46189c;
        case 0x4618a0u: goto label_4618a0;
        case 0x4618a4u: goto label_4618a4;
        case 0x4618a8u: goto label_4618a8;
        case 0x4618acu: goto label_4618ac;
        case 0x4618b0u: goto label_4618b0;
        case 0x4618b4u: goto label_4618b4;
        case 0x4618b8u: goto label_4618b8;
        case 0x4618bcu: goto label_4618bc;
        case 0x4618c0u: goto label_4618c0;
        case 0x4618c4u: goto label_4618c4;
        case 0x4618c8u: goto label_4618c8;
        case 0x4618ccu: goto label_4618cc;
        case 0x4618d0u: goto label_4618d0;
        case 0x4618d4u: goto label_4618d4;
        case 0x4618d8u: goto label_4618d8;
        case 0x4618dcu: goto label_4618dc;
        case 0x4618e0u: goto label_4618e0;
        case 0x4618e4u: goto label_4618e4;
        case 0x4618e8u: goto label_4618e8;
        case 0x4618ecu: goto label_4618ec;
        case 0x4618f0u: goto label_4618f0;
        case 0x4618f4u: goto label_4618f4;
        case 0x4618f8u: goto label_4618f8;
        case 0x4618fcu: goto label_4618fc;
        case 0x461900u: goto label_461900;
        case 0x461904u: goto label_461904;
        case 0x461908u: goto label_461908;
        case 0x46190cu: goto label_46190c;
        case 0x461910u: goto label_461910;
        case 0x461914u: goto label_461914;
        case 0x461918u: goto label_461918;
        case 0x46191cu: goto label_46191c;
        case 0x461920u: goto label_461920;
        case 0x461924u: goto label_461924;
        case 0x461928u: goto label_461928;
        case 0x46192cu: goto label_46192c;
        case 0x461930u: goto label_461930;
        case 0x461934u: goto label_461934;
        case 0x461938u: goto label_461938;
        case 0x46193cu: goto label_46193c;
        case 0x461940u: goto label_461940;
        case 0x461944u: goto label_461944;
        case 0x461948u: goto label_461948;
        case 0x46194cu: goto label_46194c;
        case 0x461950u: goto label_461950;
        case 0x461954u: goto label_461954;
        case 0x461958u: goto label_461958;
        case 0x46195cu: goto label_46195c;
        case 0x461960u: goto label_461960;
        case 0x461964u: goto label_461964;
        case 0x461968u: goto label_461968;
        case 0x46196cu: goto label_46196c;
        case 0x461970u: goto label_461970;
        case 0x461974u: goto label_461974;
        case 0x461978u: goto label_461978;
        case 0x46197cu: goto label_46197c;
        case 0x461980u: goto label_461980;
        case 0x461984u: goto label_461984;
        case 0x461988u: goto label_461988;
        case 0x46198cu: goto label_46198c;
        case 0x461990u: goto label_461990;
        case 0x461994u: goto label_461994;
        case 0x461998u: goto label_461998;
        case 0x46199cu: goto label_46199c;
        case 0x4619a0u: goto label_4619a0;
        case 0x4619a4u: goto label_4619a4;
        case 0x4619a8u: goto label_4619a8;
        case 0x4619acu: goto label_4619ac;
        case 0x4619b0u: goto label_4619b0;
        case 0x4619b4u: goto label_4619b4;
        case 0x4619b8u: goto label_4619b8;
        case 0x4619bcu: goto label_4619bc;
        case 0x4619c0u: goto label_4619c0;
        case 0x4619c4u: goto label_4619c4;
        case 0x4619c8u: goto label_4619c8;
        case 0x4619ccu: goto label_4619cc;
        case 0x4619d0u: goto label_4619d0;
        case 0x4619d4u: goto label_4619d4;
        case 0x4619d8u: goto label_4619d8;
        case 0x4619dcu: goto label_4619dc;
        case 0x4619e0u: goto label_4619e0;
        case 0x4619e4u: goto label_4619e4;
        case 0x4619e8u: goto label_4619e8;
        case 0x4619ecu: goto label_4619ec;
        case 0x4619f0u: goto label_4619f0;
        case 0x4619f4u: goto label_4619f4;
        case 0x4619f8u: goto label_4619f8;
        case 0x4619fcu: goto label_4619fc;
        case 0x461a00u: goto label_461a00;
        case 0x461a04u: goto label_461a04;
        case 0x461a08u: goto label_461a08;
        case 0x461a0cu: goto label_461a0c;
        case 0x461a10u: goto label_461a10;
        case 0x461a14u: goto label_461a14;
        case 0x461a18u: goto label_461a18;
        case 0x461a1cu: goto label_461a1c;
        case 0x461a20u: goto label_461a20;
        case 0x461a24u: goto label_461a24;
        case 0x461a28u: goto label_461a28;
        case 0x461a2cu: goto label_461a2c;
        case 0x461a30u: goto label_461a30;
        case 0x461a34u: goto label_461a34;
        case 0x461a38u: goto label_461a38;
        case 0x461a3cu: goto label_461a3c;
        case 0x461a40u: goto label_461a40;
        case 0x461a44u: goto label_461a44;
        case 0x461a48u: goto label_461a48;
        case 0x461a4cu: goto label_461a4c;
        case 0x461a50u: goto label_461a50;
        case 0x461a54u: goto label_461a54;
        case 0x461a58u: goto label_461a58;
        case 0x461a5cu: goto label_461a5c;
        case 0x461a60u: goto label_461a60;
        case 0x461a64u: goto label_461a64;
        case 0x461a68u: goto label_461a68;
        case 0x461a6cu: goto label_461a6c;
        case 0x461a70u: goto label_461a70;
        case 0x461a74u: goto label_461a74;
        case 0x461a78u: goto label_461a78;
        case 0x461a7cu: goto label_461a7c;
        case 0x461a80u: goto label_461a80;
        case 0x461a84u: goto label_461a84;
        case 0x461a88u: goto label_461a88;
        case 0x461a8cu: goto label_461a8c;
        case 0x461a90u: goto label_461a90;
        case 0x461a94u: goto label_461a94;
        case 0x461a98u: goto label_461a98;
        case 0x461a9cu: goto label_461a9c;
        case 0x461aa0u: goto label_461aa0;
        case 0x461aa4u: goto label_461aa4;
        case 0x461aa8u: goto label_461aa8;
        case 0x461aacu: goto label_461aac;
        case 0x461ab0u: goto label_461ab0;
        case 0x461ab4u: goto label_461ab4;
        case 0x461ab8u: goto label_461ab8;
        case 0x461abcu: goto label_461abc;
        case 0x461ac0u: goto label_461ac0;
        case 0x461ac4u: goto label_461ac4;
        case 0x461ac8u: goto label_461ac8;
        case 0x461accu: goto label_461acc;
        case 0x461ad0u: goto label_461ad0;
        case 0x461ad4u: goto label_461ad4;
        case 0x461ad8u: goto label_461ad8;
        case 0x461adcu: goto label_461adc;
        case 0x461ae0u: goto label_461ae0;
        case 0x461ae4u: goto label_461ae4;
        case 0x461ae8u: goto label_461ae8;
        case 0x461aecu: goto label_461aec;
        case 0x461af0u: goto label_461af0;
        case 0x461af4u: goto label_461af4;
        case 0x461af8u: goto label_461af8;
        case 0x461afcu: goto label_461afc;
        case 0x461b00u: goto label_461b00;
        case 0x461b04u: goto label_461b04;
        case 0x461b08u: goto label_461b08;
        case 0x461b0cu: goto label_461b0c;
        case 0x461b10u: goto label_461b10;
        case 0x461b14u: goto label_461b14;
        case 0x461b18u: goto label_461b18;
        case 0x461b1cu: goto label_461b1c;
        case 0x461b20u: goto label_461b20;
        case 0x461b24u: goto label_461b24;
        case 0x461b28u: goto label_461b28;
        case 0x461b2cu: goto label_461b2c;
        case 0x461b30u: goto label_461b30;
        case 0x461b34u: goto label_461b34;
        case 0x461b38u: goto label_461b38;
        case 0x461b3cu: goto label_461b3c;
        default: break;
    }

    ctx->pc = 0x4617f0u;

label_4617f0:
    // 0x4617f0: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x4617f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
label_4617f4:
    // 0x4617f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4617f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4617f8:
    // 0x4617f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4617f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4617fc:
    // 0x4617fc: 0xafa403f0  sw          $a0, 0x3F0($sp)
    ctx->pc = 0x4617fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 4));
label_461800:
    // 0x461800: 0xafa50400  sw          $a1, 0x400($sp)
    ctx->pc = 0x461800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 5));
label_461804:
    // 0x461804: 0xafa60410  sw          $a2, 0x410($sp)
    ctx->pc = 0x461804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 6));
label_461808:
    // 0x461808: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x461808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_46180c:
    // 0x46180c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461810:
    // 0x461810: 0x10830028  beq         $a0, $v1, . + 4 + (0x28 << 2)
label_461814:
    if (ctx->pc == 0x461814u) {
        ctx->pc = 0x461818u;
        goto label_461818;
    }
    ctx->pc = 0x461810u;
    {
        const bool branch_taken_0x461810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x461810) {
            ctx->pc = 0x4618B4u;
            goto label_4618b4;
        }
    }
    ctx->pc = 0x461818u;
label_461818:
    // 0x461818: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_46181c:
    if (ctx->pc == 0x46181Cu) {
        ctx->pc = 0x461820u;
        goto label_461820;
    }
    ctx->pc = 0x461818u;
    {
        const bool branch_taken_0x461818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x461818) {
            ctx->pc = 0x461828u;
            goto label_461828;
        }
    }
    ctx->pc = 0x461820u;
label_461820:
    // 0x461820: 0x10000098  b           . + 4 + (0x98 << 2)
label_461824:
    if (ctx->pc == 0x461824u) {
        ctx->pc = 0x461828u;
        goto label_461828;
    }
    ctx->pc = 0x461820u;
    {
        const bool branch_taken_0x461820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461820) {
            ctx->pc = 0x461A84u;
            goto label_461a84;
        }
    }
    ctx->pc = 0x461828u;
label_461828:
    // 0x461828: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x461828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_46182c:
    // 0x46182c: 0x2785b1d0  addiu       $a1, $gp, -0x4E30
    ctx->pc = 0x46182cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947280));
label_461830:
    // 0x461830: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x461830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_461834:
    // 0x461834: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x461834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_461838:
    // 0x461838: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x461838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_46183c:
    // 0x46183c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x46183cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_461840:
    // 0x461840: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x461840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_461844:
    // 0x461844: 0xc0bc3e2  jal         func_2F0F88
label_461848:
    if (ctx->pc == 0x461848u) {
        ctx->pc = 0x46184Cu;
        goto label_46184c;
    }
    ctx->pc = 0x461844u;
    SET_GPR_U32(ctx, 31, 0x46184Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x461844u, 0x46184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46184Cu;
label_46184c:
    // 0x46184c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x46184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461850:
    // 0x461850: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x461850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_461854:
    // 0x461854: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461858:
    // 0x461858: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x461858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_46185c:
    // 0x46185c: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x46185cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_461860:
    // 0x461860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x461860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461864:
    // 0x461864: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x461864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461868:
    // 0x461868: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x461868u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_46186c:
    // 0x46186c: 0x25294ec0  addiu       $t1, $t1, 0x4EC0
    ctx->pc = 0x46186cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20160));
label_461870:
    // 0x461870: 0xc0c3d52  jal         func_30F548
label_461874:
    if (ctx->pc == 0x461874u) {
        ctx->pc = 0x461878u;
        goto label_461878;
    }
    ctx->pc = 0x461870u;
    SET_GPR_U32(ctx, 31, 0x461878u);
    ctx->pc = 0x30F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F548u, 0x461870u, 0x461878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461878u;
label_461878:
    // 0x461878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x461878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46187c:
    // 0x46187c: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
label_461880:
    if (ctx->pc == 0x461880u) {
        ctx->pc = 0x461884u;
        goto label_461884;
    }
    ctx->pc = 0x46187Cu;
    {
        const bool branch_taken_0x46187c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x46187c) {
            ctx->pc = 0x4618A0u;
            goto label_4618a0;
        }
    }
    ctx->pc = 0x461884u;
label_461884:
    // 0x461884: 0xaf90bfb4  sw          $s0, -0x404C($gp)
    ctx->pc = 0x461884u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 16));
label_461888:
    // 0x461888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x461888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46188c:
    // 0x46188c: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x46188cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_461890:
    // 0x461890: 0xc1181ac  jal         func_4606B0
label_461894:
    if (ctx->pc == 0x461894u) {
        ctx->pc = 0x461898u;
        goto label_461898;
    }
    ctx->pc = 0x461890u;
    SET_GPR_U32(ctx, 31, 0x461898u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x461890u, 0x461898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461898u;
label_461898:
    // 0x461898: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_46189c:
    if (ctx->pc == 0x46189Cu) {
        ctx->pc = 0x4618A0u;
        goto label_4618a0;
    }
    ctx->pc = 0x461898u;
    {
        const bool branch_taken_0x461898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461898) {
            ctx->pc = 0x461B28u;
            goto label_461b28;
        }
    }
    ctx->pc = 0x4618A0u;
label_4618a0:
    // 0x4618a0: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x4618a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_4618a4:
    // 0x4618a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4618a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4618a8:
    // 0x4618a8: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x4618a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_4618ac:
    // 0x4618ac: 0x1000009e  b           . + 4 + (0x9E << 2)
label_4618b0:
    if (ctx->pc == 0x4618B0u) {
        ctx->pc = 0x4618B4u;
        goto label_4618b4;
    }
    ctx->pc = 0x4618ACu;
    {
        const bool branch_taken_0x4618ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4618ac) {
            ctx->pc = 0x461B28u;
            goto label_461b28;
        }
    }
    ctx->pc = 0x4618B4u;
label_4618b4:
    // 0x4618b4: 0x8fa40410  lw          $a0, 0x410($sp)
    ctx->pc = 0x4618b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_4618b8:
    // 0x4618b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4618b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4618bc:
    // 0x4618bc: 0x1483009a  bne         $a0, $v1, . + 4 + (0x9A << 2)
label_4618c0:
    if (ctx->pc == 0x4618C0u) {
        ctx->pc = 0x4618C4u;
        goto label_4618c4;
    }
    ctx->pc = 0x4618BCu;
    {
        const bool branch_taken_0x4618bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4618bc) {
            ctx->pc = 0x461B28u;
            goto label_461b28;
        }
    }
    ctx->pc = 0x4618C4u;
label_4618c4:
    // 0x4618c4: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x4618c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_4618c8:
    // 0x4618c8: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x4618c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
label_4618cc:
    // 0x4618cc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4618ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4618d0:
    // 0x4618d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4618d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4618d4:
    // 0x4618d4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4618d8:
    if (ctx->pc == 0x4618D8u) {
        ctx->pc = 0x4618DCu;
        goto label_4618dc;
    }
    ctx->pc = 0x4618D4u;
    {
        const bool branch_taken_0x4618d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4618d4) {
            ctx->pc = 0x461984u;
            goto label_461984;
        }
    }
    ctx->pc = 0x4618DCu;
label_4618dc:
    // 0x4618dc: 0x8f82b224  lw          $v0, -0x4DDC($gp)
    ctx->pc = 0x4618dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947364)));
label_4618e0:
    // 0x4618e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4618e4:
    if (ctx->pc == 0x4618E4u) {
        ctx->pc = 0x4618E8u;
        goto label_4618e8;
    }
    ctx->pc = 0x4618E0u;
    {
        const bool branch_taken_0x4618e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4618e0) {
            ctx->pc = 0x461984u;
            goto label_461984;
        }
    }
    ctx->pc = 0x4618E8u;
label_4618e8:
    // 0x4618e8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4618e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4618ec:
    // 0x4618ec: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4618ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4618f0:
    // 0x4618f0: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x4618f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_4618f4:
    // 0x4618f4: 0xc115ee8  jal         func_457BA0
label_4618f8:
    if (ctx->pc == 0x4618F8u) {
        ctx->pc = 0x4618FCu;
        goto label_4618fc;
    }
    ctx->pc = 0x4618F4u;
    SET_GPR_U32(ctx, 31, 0x4618FCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4618F4u, 0x4618FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4618FCu;
label_4618fc:
    // 0x4618fc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_461900:
    if (ctx->pc == 0x461900u) {
        ctx->pc = 0x461904u;
        goto label_461904;
    }
    ctx->pc = 0x4618FCu;
    {
        const bool branch_taken_0x4618fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4618fc) {
            ctx->pc = 0x461984u;
            goto label_461984;
        }
    }
    ctx->pc = 0x461904u;
label_461904:
    // 0x461904: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x461904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_461908:
    // 0x461908: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_46190c:
    if (ctx->pc == 0x46190Cu) {
        ctx->pc = 0x461910u;
        goto label_461910;
    }
    ctx->pc = 0x461908u;
    {
        const bool branch_taken_0x461908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461908) {
            ctx->pc = 0x461984u;
            goto label_461984;
        }
    }
    ctx->pc = 0x461910u;
label_461910:
    // 0x461910: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x461910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_461914:
    // 0x461914: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461918:
    // 0x461918: 0x8fa603e4  lw          $a2, 0x3E4($sp)
    ctx->pc = 0x461918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
label_46191c:
    // 0x46191c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x46191cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_461920:
    // 0x461920: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x461920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_461924:
    // 0x461924: 0x24080694  addiu       $t0, $zero, 0x694
    ctx->pc = 0x461924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1684));
label_461928:
    // 0x461928: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x461928u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_46192c:
    // 0x46192c: 0x2529f150  addiu       $t1, $t1, -0xEB0
    ctx->pc = 0x46192cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963536));
label_461930:
    // 0x461930: 0xc113940  jal         func_44E500
label_461934:
    if (ctx->pc == 0x461934u) {
        ctx->pc = 0x461938u;
        goto label_461938;
    }
    ctx->pc = 0x461930u;
    SET_GPR_U32(ctx, 31, 0x461938u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x461930u, 0x461938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461938u;
label_461938:
    // 0x461938: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x461938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_46193c:
    // 0x46193c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x46193cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461940:
    // 0x461940: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x461940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_461944:
    // 0x461944: 0xc115c24  jal         func_457090
label_461948:
    if (ctx->pc == 0x461948u) {
        ctx->pc = 0x46194Cu;
        goto label_46194c;
    }
    ctx->pc = 0x461944u;
    SET_GPR_U32(ctx, 31, 0x46194Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x461944u, 0x46194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46194Cu;
label_46194c:
    // 0x46194c: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x46194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_461950:
    // 0x461950: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x461950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_461954:
    // 0x461954: 0x40f809  jalr        $v0
label_461958:
    if (ctx->pc == 0x461958u) {
        ctx->pc = 0x46195Cu;
        goto label_46195c;
    }
    ctx->pc = 0x461954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46195Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461954u, 0x46195Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46195Cu;
label_46195c:
    // 0x46195c: 0xaf82b224  sw          $v0, -0x4DDC($gp)
    ctx->pc = 0x46195cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947364), GPR_U32(ctx, 2));
label_461960:
    // 0x461960: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x461960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_461964:
    // 0x461964: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_461968:
    if (ctx->pc == 0x461968u) {
        ctx->pc = 0x46196Cu;
        goto label_46196c;
    }
    ctx->pc = 0x461964u;
    {
        const bool branch_taken_0x461964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461964) {
            ctx->pc = 0x461974u;
            goto label_461974;
        }
    }
    ctx->pc = 0x46196Cu;
label_46196c:
    // 0x46196c: 0xd  break       0
    ctx->pc = 0x46196cu;
    runtime->handleBreak(rdram, ctx);
label_461970:
    // 0x461970: 0x0  nop
    ctx->pc = 0x461970u;
    // NOP
label_461974:
    // 0x461974: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x461974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_461978:
    // 0x461978: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x461978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46197c:
    // 0x46197c: 0xc11392c  jal         func_44E4B0
label_461980:
    if (ctx->pc == 0x461980u) {
        ctx->pc = 0x461984u;
        goto label_461984;
    }
    ctx->pc = 0x46197Cu;
    SET_GPR_U32(ctx, 31, 0x461984u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46197Cu, 0x461984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461984u;
label_461984:
    // 0x461984: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461988:
    // 0x461988: 0x8c424e14  lw          $v0, 0x4E14($v0)
    ctx->pc = 0x461988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19988)));
label_46198c:
    // 0x46198c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_461990:
    if (ctx->pc == 0x461990u) {
        ctx->pc = 0x461994u;
        goto label_461994;
    }
    ctx->pc = 0x46198Cu;
    {
        const bool branch_taken_0x46198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46198c) {
            ctx->pc = 0x461A3Cu;
            goto label_461a3c;
        }
    }
    ctx->pc = 0x461994u;
label_461994:
    // 0x461994: 0x8f82b228  lw          $v0, -0x4DD8($gp)
    ctx->pc = 0x461994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947368)));
label_461998:
    // 0x461998: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46199c:
    if (ctx->pc == 0x46199Cu) {
        ctx->pc = 0x4619A0u;
        goto label_4619a0;
    }
    ctx->pc = 0x461998u;
    {
        const bool branch_taken_0x461998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461998) {
            ctx->pc = 0x461A3Cu;
            goto label_461a3c;
        }
    }
    ctx->pc = 0x4619A0u;
label_4619a0:
    // 0x4619a0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4619a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4619a4:
    // 0x4619a4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4619a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4619a8:
    // 0x4619a8: 0x27a603d0  addiu       $a2, $sp, 0x3D0
    ctx->pc = 0x4619a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_4619ac:
    // 0x4619ac: 0xc115ee8  jal         func_457BA0
label_4619b0:
    if (ctx->pc == 0x4619B0u) {
        ctx->pc = 0x4619B4u;
        goto label_4619b4;
    }
    ctx->pc = 0x4619ACu;
    SET_GPR_U32(ctx, 31, 0x4619B4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4619ACu, 0x4619B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4619B4u;
label_4619b4:
    // 0x4619b4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4619b8:
    if (ctx->pc == 0x4619B8u) {
        ctx->pc = 0x4619BCu;
        goto label_4619bc;
    }
    ctx->pc = 0x4619B4u;
    {
        const bool branch_taken_0x4619b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4619b4) {
            ctx->pc = 0x461A3Cu;
            goto label_461a3c;
        }
    }
    ctx->pc = 0x4619BCu;
label_4619bc:
    // 0x4619bc: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x4619bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_4619c0:
    // 0x4619c0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4619c4:
    if (ctx->pc == 0x4619C4u) {
        ctx->pc = 0x4619C8u;
        goto label_4619c8;
    }
    ctx->pc = 0x4619C0u;
    {
        const bool branch_taken_0x4619c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4619c0) {
            ctx->pc = 0x461A3Cu;
            goto label_461a3c;
        }
    }
    ctx->pc = 0x4619C8u;
label_4619c8:
    // 0x4619c8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4619c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4619cc:
    // 0x4619cc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4619ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4619d0:
    // 0x4619d0: 0x8fa603d4  lw          $a2, 0x3D4($sp)
    ctx->pc = 0x4619d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_4619d4:
    // 0x4619d4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4619d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4619d8:
    // 0x4619d8: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4619d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4619dc:
    // 0x4619dc: 0x2408069c  addiu       $t0, $zero, 0x69C
    ctx->pc = 0x4619dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1692));
label_4619e0:
    // 0x4619e0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4619e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4619e4:
    // 0x4619e4: 0x2529f1d0  addiu       $t1, $t1, -0xE30
    ctx->pc = 0x4619e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963664));
label_4619e8:
    // 0x4619e8: 0xc113940  jal         func_44E500
label_4619ec:
    if (ctx->pc == 0x4619ECu) {
        ctx->pc = 0x4619F0u;
        goto label_4619f0;
    }
    ctx->pc = 0x4619E8u;
    SET_GPR_U32(ctx, 31, 0x4619F0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4619E8u, 0x4619F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4619F0u;
label_4619f0:
    // 0x4619f0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x4619f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4619f4:
    // 0x4619f4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4619f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4619f8:
    // 0x4619f8: 0x24a5ee40  addiu       $a1, $a1, -0x11C0
    ctx->pc = 0x4619f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
label_4619fc:
    // 0x4619fc: 0xc115c24  jal         func_457090
label_461a00:
    if (ctx->pc == 0x461A00u) {
        ctx->pc = 0x461A04u;
        goto label_461a04;
    }
    ctx->pc = 0x4619FCu;
    SET_GPR_U32(ctx, 31, 0x461A04u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4619FCu, 0x461A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461A04u;
label_461a04:
    // 0x461a04: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x461a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_461a08:
    // 0x461a08: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x461a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_461a0c:
    // 0x461a0c: 0x40f809  jalr        $v0
label_461a10:
    if (ctx->pc == 0x461A10u) {
        ctx->pc = 0x461A14u;
        goto label_461a14;
    }
    ctx->pc = 0x461A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461A14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461A0Cu, 0x461A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461A14u;
label_461a14:
    // 0x461a14: 0xaf82b228  sw          $v0, -0x4DD8($gp)
    ctx->pc = 0x461a14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947368), GPR_U32(ctx, 2));
label_461a18:
    // 0x461a18: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x461a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_461a1c:
    // 0x461a1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_461a20:
    if (ctx->pc == 0x461A20u) {
        ctx->pc = 0x461A24u;
        goto label_461a24;
    }
    ctx->pc = 0x461A1Cu;
    {
        const bool branch_taken_0x461a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461a1c) {
            ctx->pc = 0x461A2Cu;
            goto label_461a2c;
        }
    }
    ctx->pc = 0x461A24u;
label_461a24:
    // 0x461a24: 0xd  break       0
    ctx->pc = 0x461a24u;
    runtime->handleBreak(rdram, ctx);
label_461a28:
    // 0x461a28: 0x0  nop
    ctx->pc = 0x461a28u;
    // NOP
label_461a2c:
    // 0x461a2c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x461a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_461a30:
    // 0x461a30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x461a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461a34:
    // 0x461a34: 0xc11392c  jal         func_44E4B0
label_461a38:
    if (ctx->pc == 0x461A38u) {
        ctx->pc = 0x461A3Cu;
        goto label_461a3c;
    }
    ctx->pc = 0x461A34u;
    SET_GPR_U32(ctx, 31, 0x461A3Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x461A34u, 0x461A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461A3Cu;
label_461a3c:
    // 0x461a3c: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x461a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_461a40:
    // 0x461a40: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_461a44:
    if (ctx->pc == 0x461A44u) {
        ctx->pc = 0x461A48u;
        goto label_461a48;
    }
    ctx->pc = 0x461A40u;
    {
        const bool branch_taken_0x461a40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x461a40) {
            ctx->pc = 0x461A60u;
            goto label_461a60;
        }
    }
    ctx->pc = 0x461A48u;
label_461a48:
    // 0x461a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x461a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461a4c:
    // 0x461a4c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461a50:
    // 0x461a50: 0x8c424e14  lw          $v0, 0x4E14($v0)
    ctx->pc = 0x461a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19988)));
label_461a54:
    // 0x461a54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x461a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_461a58:
    // 0x461a58: 0x10000004  b           . + 4 + (0x4 << 2)
label_461a5c:
    if (ctx->pc == 0x461A5Cu) {
        ctx->pc = 0x461A60u;
        goto label_461a60;
    }
    ctx->pc = 0x461A58u;
    {
        const bool branch_taken_0x461a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461a58) {
            ctx->pc = 0x461A6Cu;
            goto label_461a6c;
        }
    }
    ctx->pc = 0x461A60u;
label_461a60:
    // 0x461a60: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461a64:
    // 0x461a64: 0x8c424e14  lw          $v0, 0x4E14($v0)
    ctx->pc = 0x461a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19988)));
label_461a68:
    // 0x461a68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x461a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_461a6c:
    // 0x461a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x461a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461a70:
    // 0x461a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461a74:
    // 0x461a74: 0xc1181ac  jal         func_4606B0
label_461a78:
    if (ctx->pc == 0x461A78u) {
        ctx->pc = 0x461A7Cu;
        goto label_461a7c;
    }
    ctx->pc = 0x461A74u;
    SET_GPR_U32(ctx, 31, 0x461A7Cu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x461A74u, 0x461A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461A7Cu;
label_461a7c:
    // 0x461a7c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_461a80:
    if (ctx->pc == 0x461A80u) {
        ctx->pc = 0x461A84u;
        goto label_461a84;
    }
    ctx->pc = 0x461A7Cu;
    {
        const bool branch_taken_0x461a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461a7c) {
            ctx->pc = 0x461B28u;
            goto label_461b28;
        }
    }
    ctx->pc = 0x461A84u;
label_461a84:
    // 0x461a84: 0x8f83b22c  lw          $v1, -0x4DD4($gp)
    ctx->pc = 0x461a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947372)));
label_461a88:
    // 0x461a88: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_461a8c:
    if (ctx->pc == 0x461A8Cu) {
        ctx->pc = 0x461A90u;
        goto label_461a90;
    }
    ctx->pc = 0x461A88u;
    {
        const bool branch_taken_0x461a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461a88) {
            ctx->pc = 0x461B28u;
            goto label_461b28;
        }
    }
    ctx->pc = 0x461A90u;
label_461a90:
    // 0x461a90: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x461a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_461a94:
    // 0x461a94: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461a98:
    // 0x461a98: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x461a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_461a9c:
    // 0x461a9c: 0xc115ee8  jal         func_457BA0
label_461aa0:
    if (ctx->pc == 0x461AA0u) {
        ctx->pc = 0x461AA4u;
        goto label_461aa4;
    }
    ctx->pc = 0x461A9Cu;
    SET_GPR_U32(ctx, 31, 0x461AA4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x461A9Cu, 0x461AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461AA4u;
label_461aa4:
    // 0x461aa4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_461aa8:
    if (ctx->pc == 0x461AA8u) {
        ctx->pc = 0x461AACu;
        goto label_461aac;
    }
    ctx->pc = 0x461AA4u;
    {
        const bool branch_taken_0x461aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461aa4) {
            ctx->pc = 0x461B28u;
            goto label_461b28;
        }
    }
    ctx->pc = 0x461AACu;
label_461aac:
    // 0x461aac: 0x8fa303c8  lw          $v1, 0x3C8($sp)
    ctx->pc = 0x461aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_461ab0:
    // 0x461ab0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_461ab4:
    if (ctx->pc == 0x461AB4u) {
        ctx->pc = 0x461AB8u;
        goto label_461ab8;
    }
    ctx->pc = 0x461AB0u;
    {
        const bool branch_taken_0x461ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461ab0) {
            ctx->pc = 0x461B28u;
            goto label_461b28;
        }
    }
    ctx->pc = 0x461AB8u;
label_461ab8:
    // 0x461ab8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x461ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_461abc:
    // 0x461abc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461ac0:
    // 0x461ac0: 0x8fa603c4  lw          $a2, 0x3C4($sp)
    ctx->pc = 0x461ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_461ac4:
    // 0x461ac4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x461ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_461ac8:
    // 0x461ac8: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x461ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_461acc:
    // 0x461acc: 0x240806ac  addiu       $t0, $zero, 0x6AC
    ctx->pc = 0x461accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1708));
label_461ad0:
    // 0x461ad0: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x461ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_461ad4:
    // 0x461ad4: 0xc113940  jal         func_44E500
label_461ad8:
    if (ctx->pc == 0x461AD8u) {
        ctx->pc = 0x461ADCu;
        goto label_461adc;
    }
    ctx->pc = 0x461AD4u;
    SET_GPR_U32(ctx, 31, 0x461ADCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x461AD4u, 0x461ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461ADCu;
label_461adc:
    // 0x461adc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x461adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_461ae0:
    // 0x461ae0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x461ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461ae4:
    // 0x461ae4: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x461ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_461ae8:
    // 0x461ae8: 0xc115c24  jal         func_457090
label_461aec:
    if (ctx->pc == 0x461AECu) {
        ctx->pc = 0x461AF0u;
        goto label_461af0;
    }
    ctx->pc = 0x461AE8u;
    SET_GPR_U32(ctx, 31, 0x461AF0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x461AE8u, 0x461AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461AF0u;
label_461af0:
    // 0x461af0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x461af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_461af4:
    // 0x461af4: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x461af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_461af8:
    // 0x461af8: 0x40f809  jalr        $v0
label_461afc:
    if (ctx->pc == 0x461AFCu) {
        ctx->pc = 0x461B00u;
        goto label_461b00;
    }
    ctx->pc = 0x461AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461B00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461AF8u, 0x461B00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461B00u;
label_461b00:
    // 0x461b00: 0xaf82b22c  sw          $v0, -0x4DD4($gp)
    ctx->pc = 0x461b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947372), GPR_U32(ctx, 2));
label_461b04:
    // 0x461b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x461b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_461b08:
    // 0x461b08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_461b0c:
    if (ctx->pc == 0x461B0Cu) {
        ctx->pc = 0x461B10u;
        goto label_461b10;
    }
    ctx->pc = 0x461B08u;
    {
        const bool branch_taken_0x461b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461b08) {
            ctx->pc = 0x461B18u;
            goto label_461b18;
        }
    }
    ctx->pc = 0x461B10u;
label_461b10:
    // 0x461b10: 0xd  break       0
    ctx->pc = 0x461b10u;
    runtime->handleBreak(rdram, ctx);
label_461b14:
    // 0x461b14: 0x0  nop
    ctx->pc = 0x461b14u;
    // NOP
label_461b18:
    // 0x461b18: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x461b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_461b1c:
    // 0x461b1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x461b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461b20:
    // 0x461b20: 0xc11392c  jal         func_44E4B0
label_461b24:
    if (ctx->pc == 0x461B24u) {
        ctx->pc = 0x461B28u;
        goto label_461b28;
    }
    ctx->pc = 0x461B20u;
    SET_GPR_U32(ctx, 31, 0x461B28u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x461B20u, 0x461B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461B28u;
label_461b28:
    // 0x461b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x461b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_461b2c:
    // 0x461b2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461b30:
    // 0x461b30: 0x27bd0420  addiu       $sp, $sp, 0x420
    ctx->pc = 0x461b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_461b34:
    // 0x461b34: 0x3e00008  jr          $ra
label_461b38:
    if (ctx->pc == 0x461B38u) {
        ctx->pc = 0x461B3Cu;
        goto label_461b3c;
    }
    ctx->pc = 0x461B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461B3Cu;
label_461b3c:
    // 0x461b3c: 0x0  nop
    ctx->pc = 0x461b3cu;
    // NOP
    ctx->pc = 0x461b40u;
}
