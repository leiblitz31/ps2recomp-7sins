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

// Function: sub_00387820
// Address: 0x387820 - 0x387af0
void sub_00387820_0x387820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387820_0x387820");
#endif

    switch (ctx->pc) {
        case 0x387820u: goto label_387820;
        case 0x387824u: goto label_387824;
        case 0x387828u: goto label_387828;
        case 0x38782cu: goto label_38782c;
        case 0x387830u: goto label_387830;
        case 0x387834u: goto label_387834;
        case 0x387838u: goto label_387838;
        case 0x38783cu: goto label_38783c;
        case 0x387840u: goto label_387840;
        case 0x387844u: goto label_387844;
        case 0x387848u: goto label_387848;
        case 0x38784cu: goto label_38784c;
        case 0x387850u: goto label_387850;
        case 0x387854u: goto label_387854;
        case 0x387858u: goto label_387858;
        case 0x38785cu: goto label_38785c;
        case 0x387860u: goto label_387860;
        case 0x387864u: goto label_387864;
        case 0x387868u: goto label_387868;
        case 0x38786cu: goto label_38786c;
        case 0x387870u: goto label_387870;
        case 0x387874u: goto label_387874;
        case 0x387878u: goto label_387878;
        case 0x38787cu: goto label_38787c;
        case 0x387880u: goto label_387880;
        case 0x387884u: goto label_387884;
        case 0x387888u: goto label_387888;
        case 0x38788cu: goto label_38788c;
        case 0x387890u: goto label_387890;
        case 0x387894u: goto label_387894;
        case 0x387898u: goto label_387898;
        case 0x38789cu: goto label_38789c;
        case 0x3878a0u: goto label_3878a0;
        case 0x3878a4u: goto label_3878a4;
        case 0x3878a8u: goto label_3878a8;
        case 0x3878acu: goto label_3878ac;
        case 0x3878b0u: goto label_3878b0;
        case 0x3878b4u: goto label_3878b4;
        case 0x3878b8u: goto label_3878b8;
        case 0x3878bcu: goto label_3878bc;
        case 0x3878c0u: goto label_3878c0;
        case 0x3878c4u: goto label_3878c4;
        case 0x3878c8u: goto label_3878c8;
        case 0x3878ccu: goto label_3878cc;
        case 0x3878d0u: goto label_3878d0;
        case 0x3878d4u: goto label_3878d4;
        case 0x3878d8u: goto label_3878d8;
        case 0x3878dcu: goto label_3878dc;
        case 0x3878e0u: goto label_3878e0;
        case 0x3878e4u: goto label_3878e4;
        case 0x3878e8u: goto label_3878e8;
        case 0x3878ecu: goto label_3878ec;
        case 0x3878f0u: goto label_3878f0;
        case 0x3878f4u: goto label_3878f4;
        case 0x3878f8u: goto label_3878f8;
        case 0x3878fcu: goto label_3878fc;
        case 0x387900u: goto label_387900;
        case 0x387904u: goto label_387904;
        case 0x387908u: goto label_387908;
        case 0x38790cu: goto label_38790c;
        case 0x387910u: goto label_387910;
        case 0x387914u: goto label_387914;
        case 0x387918u: goto label_387918;
        case 0x38791cu: goto label_38791c;
        case 0x387920u: goto label_387920;
        case 0x387924u: goto label_387924;
        case 0x387928u: goto label_387928;
        case 0x38792cu: goto label_38792c;
        case 0x387930u: goto label_387930;
        case 0x387934u: goto label_387934;
        case 0x387938u: goto label_387938;
        case 0x38793cu: goto label_38793c;
        case 0x387940u: goto label_387940;
        case 0x387944u: goto label_387944;
        case 0x387948u: goto label_387948;
        case 0x38794cu: goto label_38794c;
        case 0x387950u: goto label_387950;
        case 0x387954u: goto label_387954;
        case 0x387958u: goto label_387958;
        case 0x38795cu: goto label_38795c;
        case 0x387960u: goto label_387960;
        case 0x387964u: goto label_387964;
        case 0x387968u: goto label_387968;
        case 0x38796cu: goto label_38796c;
        case 0x387970u: goto label_387970;
        case 0x387974u: goto label_387974;
        case 0x387978u: goto label_387978;
        case 0x38797cu: goto label_38797c;
        case 0x387980u: goto label_387980;
        case 0x387984u: goto label_387984;
        case 0x387988u: goto label_387988;
        case 0x38798cu: goto label_38798c;
        case 0x387990u: goto label_387990;
        case 0x387994u: goto label_387994;
        case 0x387998u: goto label_387998;
        case 0x38799cu: goto label_38799c;
        case 0x3879a0u: goto label_3879a0;
        case 0x3879a4u: goto label_3879a4;
        case 0x3879a8u: goto label_3879a8;
        case 0x3879acu: goto label_3879ac;
        case 0x3879b0u: goto label_3879b0;
        case 0x3879b4u: goto label_3879b4;
        case 0x3879b8u: goto label_3879b8;
        case 0x3879bcu: goto label_3879bc;
        case 0x3879c0u: goto label_3879c0;
        case 0x3879c4u: goto label_3879c4;
        case 0x3879c8u: goto label_3879c8;
        case 0x3879ccu: goto label_3879cc;
        case 0x3879d0u: goto label_3879d0;
        case 0x3879d4u: goto label_3879d4;
        case 0x3879d8u: goto label_3879d8;
        case 0x3879dcu: goto label_3879dc;
        case 0x3879e0u: goto label_3879e0;
        case 0x3879e4u: goto label_3879e4;
        case 0x3879e8u: goto label_3879e8;
        case 0x3879ecu: goto label_3879ec;
        case 0x3879f0u: goto label_3879f0;
        case 0x3879f4u: goto label_3879f4;
        case 0x3879f8u: goto label_3879f8;
        case 0x3879fcu: goto label_3879fc;
        case 0x387a00u: goto label_387a00;
        case 0x387a04u: goto label_387a04;
        case 0x387a08u: goto label_387a08;
        case 0x387a0cu: goto label_387a0c;
        case 0x387a10u: goto label_387a10;
        case 0x387a14u: goto label_387a14;
        case 0x387a18u: goto label_387a18;
        case 0x387a1cu: goto label_387a1c;
        case 0x387a20u: goto label_387a20;
        case 0x387a24u: goto label_387a24;
        case 0x387a28u: goto label_387a28;
        case 0x387a2cu: goto label_387a2c;
        case 0x387a30u: goto label_387a30;
        case 0x387a34u: goto label_387a34;
        case 0x387a38u: goto label_387a38;
        case 0x387a3cu: goto label_387a3c;
        case 0x387a40u: goto label_387a40;
        case 0x387a44u: goto label_387a44;
        case 0x387a48u: goto label_387a48;
        case 0x387a4cu: goto label_387a4c;
        case 0x387a50u: goto label_387a50;
        case 0x387a54u: goto label_387a54;
        case 0x387a58u: goto label_387a58;
        case 0x387a5cu: goto label_387a5c;
        case 0x387a60u: goto label_387a60;
        case 0x387a64u: goto label_387a64;
        case 0x387a68u: goto label_387a68;
        case 0x387a6cu: goto label_387a6c;
        case 0x387a70u: goto label_387a70;
        case 0x387a74u: goto label_387a74;
        case 0x387a78u: goto label_387a78;
        case 0x387a7cu: goto label_387a7c;
        case 0x387a80u: goto label_387a80;
        case 0x387a84u: goto label_387a84;
        case 0x387a88u: goto label_387a88;
        case 0x387a8cu: goto label_387a8c;
        case 0x387a90u: goto label_387a90;
        case 0x387a94u: goto label_387a94;
        case 0x387a98u: goto label_387a98;
        case 0x387a9cu: goto label_387a9c;
        case 0x387aa0u: goto label_387aa0;
        case 0x387aa4u: goto label_387aa4;
        case 0x387aa8u: goto label_387aa8;
        case 0x387aacu: goto label_387aac;
        case 0x387ab0u: goto label_387ab0;
        case 0x387ab4u: goto label_387ab4;
        case 0x387ab8u: goto label_387ab8;
        case 0x387abcu: goto label_387abc;
        case 0x387ac0u: goto label_387ac0;
        case 0x387ac4u: goto label_387ac4;
        case 0x387ac8u: goto label_387ac8;
        case 0x387accu: goto label_387acc;
        case 0x387ad0u: goto label_387ad0;
        case 0x387ad4u: goto label_387ad4;
        case 0x387ad8u: goto label_387ad8;
        case 0x387adcu: goto label_387adc;
        case 0x387ae0u: goto label_387ae0;
        case 0x387ae4u: goto label_387ae4;
        case 0x387ae8u: goto label_387ae8;
        case 0x387aecu: goto label_387aec;
        default: break;
    }

    ctx->pc = 0x387820u;

label_387820:
    // 0x387820: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x387820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_387824:
    // 0x387824: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x387824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_387828:
    // 0x387828: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x387828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_38782c:
    // 0x38782c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x38782cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_387830:
    // 0x387830: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x387830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_387834:
    // 0x387834: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x387834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387838:
    // 0x387838: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x387838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_38783c:
    // 0x38783c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x38783cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_387840:
    // 0x387840: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x387840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_387844:
    // 0x387844: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x387844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_387848:
    // 0x387848: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x387848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_38784c:
    // 0x38784c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x38784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_387850:
    // 0x387850: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x387850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_387854:
    // 0x387854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x387854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_387858:
    // 0x387858: 0xc103322  jal         func_40CC88
label_38785c:
    if (ctx->pc == 0x38785Cu) {
        ctx->pc = 0x38785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387858u;
        // 0x38785c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387860u;
        goto label_387860;
    }
    ctx->pc = 0x387858u;
    SET_GPR_U32(ctx, 31, 0x387860u);
    ctx->pc = 0x38785Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387858u;
    // 0x38785c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x387858u, 0x387860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387860u;
label_387860:
    // 0x387860: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_387864:
    if (ctx->pc == 0x387864u) {
        ctx->pc = 0x387864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387860u;
        // 0x387864: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387868u;
        goto label_387868;
    }
    ctx->pc = 0x387860u;
    {
        const bool branch_taken_0x387860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387860u;
        // 0x387864: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387860) {
            ctx->pc = 0x387AB8u;
            goto label_387ab8;
        }
    }
    ctx->pc = 0x387868u;
label_387868:
    // 0x387868: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x387868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_38786c:
    // 0x38786c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x38786cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_387870:
    // 0x387870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x387870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_387874:
    // 0x387874: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x387874u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_387878:
    // 0x387878: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
label_38787c:
    if (ctx->pc == 0x38787Cu) {
        ctx->pc = 0x38787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387878u;
        // 0x38787c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387880u;
        goto label_387880;
    }
    ctx->pc = 0x387878u;
    {
        const bool branch_taken_0x387878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387878u;
        // 0x38787c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387878) {
            ctx->pc = 0x387A90u;
            goto label_387a90;
        }
    }
    ctx->pc = 0x387880u;
label_387880:
    // 0x387880: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x387880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_387884:
    // 0x387884: 0xc10480a  jal         func_412028
label_387888:
    if (ctx->pc == 0x387888u) {
        ctx->pc = 0x387888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387884u;
        // 0x387888: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38788Cu;
        goto label_38788c;
    }
    ctx->pc = 0x387884u;
    SET_GPR_U32(ctx, 31, 0x38788Cu);
    ctx->pc = 0x387888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387884u;
    // 0x387888: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x387884u, 0x38788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38788Cu;
label_38788c:
    // 0x38788c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38788cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_387890:
    // 0x387890: 0x1443008c  bne         $v0, $v1, . + 4 + (0x8C << 2)
label_387894:
    if (ctx->pc == 0x387894u) {
        ctx->pc = 0x387894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387890u;
        // 0x387894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387898u;
        goto label_387898;
    }
    ctx->pc = 0x387890u;
    {
        const bool branch_taken_0x387890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x387894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387890u;
        // 0x387894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387890) {
            ctx->pc = 0x387AC4u;
            goto label_387ac4;
        }
    }
    ctx->pc = 0x387898u;
label_387898:
    // 0x387898: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x387898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_38789c:
    // 0x38789c: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
label_3878a0:
    if (ctx->pc == 0x3878A0u) {
        ctx->pc = 0x3878A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38789Cu;
        // 0x3878a0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878A4u;
        goto label_3878a4;
    }
    ctx->pc = 0x38789Cu;
    {
        const bool branch_taken_0x38789c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3878A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38789Cu;
        // 0x3878a0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38789c) {
            ctx->pc = 0x3878F0u;
            goto label_3878f0;
        }
    }
    ctx->pc = 0x3878A4u;
label_3878a4:
    // 0x3878a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3878a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3878a8:
    // 0x3878a8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3878a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3878ac:
    // 0x3878ac: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3878acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3878b0:
    // 0x3878b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3878b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3878b4:
    // 0x3878b4: 0x40f809  jalr        $v0
label_3878b8:
    if (ctx->pc == 0x3878B8u) {
        ctx->pc = 0x3878B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878B4u;
        // 0x3878b8: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878BCu;
        goto label_3878bc;
    }
    ctx->pc = 0x3878B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3878BCu);
        ctx->pc = 0x3878B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878B4u;
        // 0x3878b8: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3878B4u, 0x3878BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3878BCu;
label_3878bc:
    // 0x3878bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3878c0:
    if (ctx->pc == 0x3878C0u) {
        ctx->pc = 0x3878C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878BCu;
        // 0x3878c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878C4u;
        goto label_3878c4;
    }
    ctx->pc = 0x3878BCu;
    {
        const bool branch_taken_0x3878bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3878C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878BCu;
        // 0x3878c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878bc) {
            ctx->pc = 0x3878F4u;
            goto label_3878f4;
        }
    }
    ctx->pc = 0x3878C4u;
label_3878c4:
    // 0x3878c4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x3878c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3878c8:
    // 0x3878c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3878c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3878cc:
    // 0x3878cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3878ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3878d0:
    // 0x3878d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3878d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3878d4:
    // 0x3878d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3878d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3878d8:
    // 0x3878d8: 0xc1035f6  jal         func_40D7D8
label_3878dc:
    if (ctx->pc == 0x3878DCu) {
        ctx->pc = 0x3878DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878D8u;
        // 0x3878dc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878E0u;
        goto label_3878e0;
    }
    ctx->pc = 0x3878D8u;
    SET_GPR_U32(ctx, 31, 0x3878E0u);
    ctx->pc = 0x3878DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3878D8u;
    // 0x3878dc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3878D8u, 0x3878E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3878E0u;
label_3878e0:
    // 0x3878e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3878e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3878e4:
    // 0x3878e4: 0x10000072  b           . + 4 + (0x72 << 2)
label_3878e8:
    if (ctx->pc == 0x3878E8u) {
        ctx->pc = 0x3878E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878E4u;
        // 0x3878e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878ECu;
        goto label_3878ec;
    }
    ctx->pc = 0x3878E4u;
    {
        const bool branch_taken_0x3878e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3878E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878E4u;
        // 0x3878e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878e4) {
            ctx->pc = 0x387AB0u;
            goto label_387ab0;
        }
    }
    ctx->pc = 0x3878ECu;
label_3878ec:
    // 0x3878ec: 0x0  nop
    ctx->pc = 0x3878ecu;
    // NOP
label_3878f0:
    // 0x3878f0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3878f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3878f4:
    // 0x3878f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3878f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3878f8:
    // 0x3878f8: 0x18400071  blez        $v0, . + 4 + (0x71 << 2)
label_3878fc:
    if (ctx->pc == 0x3878FCu) {
        ctx->pc = 0x3878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878F8u;
        // 0x3878fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387900u;
        goto label_387900;
    }
    ctx->pc = 0x3878F8u;
    {
        const bool branch_taken_0x3878f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3878FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878F8u;
        // 0x3878fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878f8) {
            ctx->pc = 0x387AC0u;
            goto label_387ac0;
        }
    }
    ctx->pc = 0x387900u;
label_387900:
    // 0x387900: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x387900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_387904:
    // 0x387904: 0x3c12fffc  lui         $s2, 0xFFFC
    ctx->pc = 0x387904u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65532 << 16));
label_387908:
    // 0x387908: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x387908u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_38790c:
    // 0x38790c: 0x3652b000  ori         $s2, $s2, 0xB000
    ctx->pc = 0x38790cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45056);
label_387910:
    // 0x387910: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x387910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387914:
    // 0x387914: 0x0  nop
    ctx->pc = 0x387914u;
    // NOP
label_387918:
    // 0x387918: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x387918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38791c:
    // 0x38791c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x38791cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_387920:
    // 0x387920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x387920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387924:
    // 0x387924: 0xc103322  jal         func_40CC88
label_387928:
    if (ctx->pc == 0x387928u) {
        ctx->pc = 0x387928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387924u;
        // 0x387928: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38792Cu;
        goto label_38792c;
    }
    ctx->pc = 0x387924u;
    SET_GPR_U32(ctx, 31, 0x38792Cu);
    ctx->pc = 0x387928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387924u;
    // 0x387928: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x387924u, 0x38792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38792Cu;
label_38792c:
    // 0x38792c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_387930:
    if (ctx->pc == 0x387930u) {
        ctx->pc = 0x387930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38792Cu;
        // 0x387930: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387934u;
        goto label_387934;
    }
    ctx->pc = 0x38792Cu;
    {
        const bool branch_taken_0x38792c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38792Cu;
        // 0x387930: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38792c) {
            ctx->pc = 0x38798Cu;
            goto label_38798c;
        }
    }
    ctx->pc = 0x387934u;
label_387934:
    // 0x387934: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x387934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_387938:
    // 0x387938: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_38793c:
    if (ctx->pc == 0x38793Cu) {
        ctx->pc = 0x38793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387938u;
        // 0x38793c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387940u;
        goto label_387940;
    }
    ctx->pc = 0x387938u;
    {
        const bool branch_taken_0x387938 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387938u;
        // 0x38793c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387938) {
            ctx->pc = 0x38796Cu;
            goto label_38796c;
        }
    }
    ctx->pc = 0x387940u;
label_387940:
    // 0x387940: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x387940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387944:
    // 0x387944: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x387944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_387948:
    // 0x387948: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x387948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_38794c:
    // 0x38794c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x38794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_387950:
    // 0x387950: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x387950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_387954:
    // 0x387954: 0xc0e3414  jal         func_38D050
label_387958:
    if (ctx->pc == 0x387958u) {
        ctx->pc = 0x387958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387954u;
        // 0x387958: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38795Cu;
        goto label_38795c;
    }
    ctx->pc = 0x387954u;
    SET_GPR_U32(ctx, 31, 0x38795Cu);
    ctx->pc = 0x387958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387954u;
    // 0x387958: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x387954u, 0x38795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38795Cu;
label_38795c:
    // 0x38795c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x38795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_387960:
    // 0x387960: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x387960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_387964:
    // 0x387964: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_387968:
    if (ctx->pc == 0x387968u) {
        ctx->pc = 0x387968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387964u;
        // 0x387968: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38796Cu;
        goto label_38796c;
    }
    ctx->pc = 0x387964u;
    {
        const bool branch_taken_0x387964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x387964) {
            ctx->pc = 0x387968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387964u;
            // 0x387968: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387948;
        }
    }
    ctx->pc = 0x38796Cu;
label_38796c:
    // 0x38796c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38796cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_387970:
    // 0x387970: 0x10800054  beqz        $a0, . + 4 + (0x54 << 2)
label_387974:
    if (ctx->pc == 0x387974u) {
        ctx->pc = 0x387974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387970u;
        // 0x387974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387978u;
        goto label_387978;
    }
    ctx->pc = 0x387970u;
    {
        const bool branch_taken_0x387970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387970u;
        // 0x387974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387970) {
            ctx->pc = 0x387AC4u;
            goto label_387ac4;
        }
    }
    ctx->pc = 0x387978u;
label_387978:
    // 0x387978: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x387978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_38797c:
    // 0x38797c: 0x40f809  jalr        $v0
label_387980:
    if (ctx->pc == 0x387980u) {
        ctx->pc = 0x387984u;
        goto label_387984;
    }
    ctx->pc = 0x38797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38797Cu, 0x387984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387984u;
label_387984:
    // 0x387984: 0x1000004c  b           . + 4 + (0x4C << 2)
label_387988:
    if (ctx->pc == 0x387988u) {
        ctx->pc = 0x387988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387984u;
        // 0x387988: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38798Cu;
        goto label_38798c;
    }
    ctx->pc = 0x387984u;
    {
        const bool branch_taken_0x387984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387984u;
        // 0x387988: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387984) {
            ctx->pc = 0x387AB8u;
            goto label_387ab8;
        }
    }
    ctx->pc = 0x38798Cu;
label_38798c:
    // 0x38798c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x38798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_387990:
    // 0x387990: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x387990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_387994:
    // 0x387994: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_387998:
    if (ctx->pc == 0x387998u) {
        ctx->pc = 0x387998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387994u;
        // 0x387998: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38799Cu;
        goto label_38799c;
    }
    ctx->pc = 0x387994u;
    {
        const bool branch_taken_0x387994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387994) {
            ctx->pc = 0x387998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387994u;
            // 0x387998: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387A1Cu;
            goto label_387a1c;
        }
    }
    ctx->pc = 0x38799Cu;
label_38799c:
    // 0x38799c: 0xc0e303e  jal         func_38C0F8
label_3879a0:
    if (ctx->pc == 0x3879A0u) {
        ctx->pc = 0x3879A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38799Cu;
        // 0x3879a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879A4u;
        goto label_3879a4;
    }
    ctx->pc = 0x38799Cu;
    SET_GPR_U32(ctx, 31, 0x3879A4u);
    ctx->pc = 0x3879A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38799Cu;
    // 0x3879a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C0F8u, 0x38799Cu, 0x3879A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3879A4u;
label_3879a4:
    // 0x3879a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3879a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3879a8:
    // 0x3879a8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3879a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_3879ac:
    // 0x3879ac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_3879b0:
    if (ctx->pc == 0x3879B0u) {
        ctx->pc = 0x3879B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879ACu;
        // 0x3879b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879B4u;
        goto label_3879b4;
    }
    ctx->pc = 0x3879ACu;
    {
        const bool branch_taken_0x3879ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3879B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879ACu;
        // 0x3879b0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3879ac) {
            ctx->pc = 0x387A0Cu;
            goto label_387a0c;
        }
    }
    ctx->pc = 0x3879B4u;
label_3879b4:
    // 0x3879b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3879b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3879b8:
    // 0x3879b8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_3879bc:
    if (ctx->pc == 0x3879BCu) {
        ctx->pc = 0x3879BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879B8u;
        // 0x3879bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879C0u;
        goto label_3879c0;
    }
    ctx->pc = 0x3879B8u;
    {
        const bool branch_taken_0x3879b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3879BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879B8u;
        // 0x3879bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3879b8) {
            ctx->pc = 0x3879ECu;
            goto label_3879ec;
        }
    }
    ctx->pc = 0x3879C0u;
label_3879c0:
    // 0x3879c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3879c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3879c4:
    // 0x3879c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3879c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3879c8:
    // 0x3879c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3879c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3879cc:
    // 0x3879cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3879ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3879d0:
    // 0x3879d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3879d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3879d4:
    // 0x3879d4: 0xc0e3414  jal         func_38D050
label_3879d8:
    if (ctx->pc == 0x3879D8u) {
        ctx->pc = 0x3879D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879D4u;
        // 0x3879d8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879DCu;
        goto label_3879dc;
    }
    ctx->pc = 0x3879D4u;
    SET_GPR_U32(ctx, 31, 0x3879DCu);
    ctx->pc = 0x3879D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3879D4u;
    // 0x3879d8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x3879D4u, 0x3879DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3879DCu;
label_3879dc:
    // 0x3879dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3879dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3879e0:
    // 0x3879e0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3879e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3879e4:
    // 0x3879e4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_3879e8:
    if (ctx->pc == 0x3879E8u) {
        ctx->pc = 0x3879E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879E4u;
        // 0x3879e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879ECu;
        goto label_3879ec;
    }
    ctx->pc = 0x3879E4u;
    {
        const bool branch_taken_0x3879e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3879e4) {
            ctx->pc = 0x3879E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3879E4u;
            // 0x3879e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3879C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3879c8;
        }
    }
    ctx->pc = 0x3879ECu;
label_3879ec:
    // 0x3879ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3879ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3879f0:
    // 0x3879f0: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_3879f4:
    if (ctx->pc == 0x3879F4u) {
        ctx->pc = 0x3879F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879F0u;
        // 0x3879f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879F8u;
        goto label_3879f8;
    }
    ctx->pc = 0x3879F0u;
    {
        const bool branch_taken_0x3879f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3879F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879F0u;
        // 0x3879f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3879f0) {
            ctx->pc = 0x387AC4u;
            goto label_387ac4;
        }
    }
    ctx->pc = 0x3879F8u;
label_3879f8:
    // 0x3879f8: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x3879f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_3879fc:
    // 0x3879fc: 0x40f809  jalr        $v0
label_387a00:
    if (ctx->pc == 0x387A00u) {
        ctx->pc = 0x387A04u;
        goto label_387a04;
    }
    ctx->pc = 0x3879FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3879FCu, 0x387A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387A04u;
label_387a04:
    // 0x387a04: 0x1000002c  b           . + 4 + (0x2C << 2)
label_387a08:
    if (ctx->pc == 0x387A08u) {
        ctx->pc = 0x387A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A04u;
        // 0x387a08: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A0Cu;
        goto label_387a0c;
    }
    ctx->pc = 0x387A04u;
    {
        const bool branch_taken_0x387a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A04u;
        // 0x387a08: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a04) {
            ctx->pc = 0x387AB8u;
            goto label_387ab8;
        }
    }
    ctx->pc = 0x387A0Cu;
label_387a0c:
    // 0x387a0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x387a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_387a10:
    // 0x387a10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x387a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_387a14:
    // 0x387a14: 0x10000017  b           . + 4 + (0x17 << 2)
label_387a18:
    if (ctx->pc == 0x387A18u) {
        ctx->pc = 0x387A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A14u;
        // 0x387a18: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A1Cu;
        goto label_387a1c;
    }
    ctx->pc = 0x387A14u;
    {
        const bool branch_taken_0x387a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A14u;
        // 0x387a18: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a14) {
            ctx->pc = 0x387A74u;
            goto label_387a74;
        }
    }
    ctx->pc = 0x387A1Cu;
label_387a1c:
    // 0x387a1c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_387a20:
    if (ctx->pc == 0x387A20u) {
        ctx->pc = 0x387A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A1Cu;
        // 0x387a20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A24u;
        goto label_387a24;
    }
    ctx->pc = 0x387A1Cu;
    {
        const bool branch_taken_0x387a1c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x387A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A1Cu;
        // 0x387a20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a1c) {
            ctx->pc = 0x387A54u;
            goto label_387a54;
        }
    }
    ctx->pc = 0x387A24u;
label_387a24:
    // 0x387a24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x387a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387a28:
    // 0x387a28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x387a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_387a2c:
    // 0x387a2c: 0x0  nop
    ctx->pc = 0x387a2cu;
    // NOP
label_387a30:
    // 0x387a30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x387a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_387a34:
    // 0x387a34: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x387a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_387a38:
    // 0x387a38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x387a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_387a3c:
    // 0x387a3c: 0xc0e3414  jal         func_38D050
label_387a40:
    if (ctx->pc == 0x387A40u) {
        ctx->pc = 0x387A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A3Cu;
        // 0x387a40: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A44u;
        goto label_387a44;
    }
    ctx->pc = 0x387A3Cu;
    SET_GPR_U32(ctx, 31, 0x387A44u);
    ctx->pc = 0x387A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A3Cu;
    // 0x387a40: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x387A3Cu, 0x387A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A44u;
label_387a44:
    // 0x387a44: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x387a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_387a48:
    // 0x387a48: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x387a48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_387a4c:
    // 0x387a4c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_387a50:
    if (ctx->pc == 0x387A50u) {
        ctx->pc = 0x387A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A4Cu;
        // 0x387a50: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A54u;
        goto label_387a54;
    }
    ctx->pc = 0x387A4Cu;
    {
        const bool branch_taken_0x387a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x387a4c) {
            ctx->pc = 0x387A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387A4Cu;
            // 0x387a50: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387a30;
        }
    }
    ctx->pc = 0x387A54u;
label_387a54:
    // 0x387a54: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x387a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_387a58:
    // 0x387a58: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_387a5c:
    if (ctx->pc == 0x387A5Cu) {
        ctx->pc = 0x387A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A58u;
        // 0x387a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A60u;
        goto label_387a60;
    }
    ctx->pc = 0x387A58u;
    {
        const bool branch_taken_0x387a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x387A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A58u;
        // 0x387a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a58) {
            ctx->pc = 0x387AC4u;
            goto label_387ac4;
        }
    }
    ctx->pc = 0x387A60u;
label_387a60:
    // 0x387a60: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x387a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_387a64:
    // 0x387a64: 0x40f809  jalr        $v0
label_387a68:
    if (ctx->pc == 0x387A68u) {
        ctx->pc = 0x387A6Cu;
        goto label_387a6c;
    }
    ctx->pc = 0x387A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387A6Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387A64u, 0x387A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387A6Cu;
label_387a6c:
    // 0x387a6c: 0x10000012  b           . + 4 + (0x12 << 2)
label_387a70:
    if (ctx->pc == 0x387A70u) {
        ctx->pc = 0x387A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A6Cu;
        // 0x387a70: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A74u;
        goto label_387a74;
    }
    ctx->pc = 0x387A6Cu;
    {
        const bool branch_taken_0x387a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A6Cu;
        // 0x387a70: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a6c) {
            ctx->pc = 0x387AB8u;
            goto label_387ab8;
        }
    }
    ctx->pc = 0x387A74u;
label_387a74:
    // 0x387a74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x387a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_387a78:
    // 0x387a78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x387a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_387a7c:
    // 0x387a7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x387a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_387a80:
    // 0x387a80: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
label_387a84:
    if (ctx->pc == 0x387A84u) {
        ctx->pc = 0x387A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A80u;
        // 0x387a84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A88u;
        goto label_387a88;
    }
    ctx->pc = 0x387A80u;
    {
        const bool branch_taken_0x387a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A80u;
        // 0x387a84: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a80) {
            ctx->pc = 0x387918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387918;
        }
    }
    ctx->pc = 0x387A88u;
label_387a88:
    // 0x387a88: 0x1000000e  b           . + 4 + (0xE << 2)
label_387a8c:
    if (ctx->pc == 0x387A8Cu) {
        ctx->pc = 0x387A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A88u;
        // 0x387a8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A90u;
        goto label_387a90;
    }
    ctx->pc = 0x387A88u;
    {
        const bool branch_taken_0x387a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A88u;
        // 0x387a8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a88) {
            ctx->pc = 0x387AC4u;
            goto label_387ac4;
        }
    }
    ctx->pc = 0x387A90u;
label_387a90:
    // 0x387a90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x387a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_387a94:
    // 0x387a94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_387a98:
    // 0x387a98: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x387a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_387a9c:
    // 0x387a9c: 0xc1035f6  jal         func_40D7D8
label_387aa0:
    if (ctx->pc == 0x387AA0u) {
        ctx->pc = 0x387AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A9Cu;
        // 0x387aa0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x387AA4u;
        goto label_387aa4;
    }
    ctx->pc = 0x387A9Cu;
    SET_GPR_U32(ctx, 31, 0x387AA4u);
    ctx->pc = 0x387AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A9Cu;
    // 0x387aa0: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387A9Cu, 0x387AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387AA4u;
label_387aa4:
    // 0x387aa4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x387aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_387aa8:
    // 0x387aa8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x387aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_387aac:
    // 0x387aac: 0x0  nop
    ctx->pc = 0x387aacu;
    // NOP
label_387ab0:
    // 0x387ab0: 0xc103628  jal         func_40D8A0
label_387ab4:
    if (ctx->pc == 0x387AB4u) {
        ctx->pc = 0x387AB8u;
        goto label_387ab8;
    }
    ctx->pc = 0x387AB0u;
    SET_GPR_U32(ctx, 31, 0x387AB8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x387AB0u, 0x387AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387AB8u;
label_387ab8:
    // 0x387ab8: 0x10000002  b           . + 4 + (0x2 << 2)
label_387abc:
    if (ctx->pc == 0x387ABCu) {
        ctx->pc = 0x387ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AB8u;
        // 0x387abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387AC0u;
        goto label_387ac0;
    }
    ctx->pc = 0x387AB8u;
    {
        const bool branch_taken_0x387ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AB8u;
        // 0x387abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ab8) {
            ctx->pc = 0x387AC4u;
            goto label_387ac4;
        }
    }
    ctx->pc = 0x387AC0u;
label_387ac0:
    // 0x387ac0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x387ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387ac4:
    // 0x387ac4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x387ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_387ac8:
    // 0x387ac8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x387ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_387acc:
    // 0x387acc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x387accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_387ad0:
    // 0x387ad0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x387ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_387ad4:
    // 0x387ad4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x387ad4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_387ad8:
    // 0x387ad8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x387ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_387adc:
    // 0x387adc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x387adcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_387ae0:
    // 0x387ae0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x387ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_387ae4:
    // 0x387ae4: 0x3e00008  jr          $ra
label_387ae8:
    if (ctx->pc == 0x387AE8u) {
        ctx->pc = 0x387AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AE4u;
        // 0x387ae8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387AECu;
        goto label_387aec;
    }
    ctx->pc = 0x387AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387AE4u;
        // 0x387ae8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387AECu;
label_387aec:
    // 0x387aec: 0x0  nop
    ctx->pc = 0x387aecu;
    // NOP
    ctx->pc = 0x387af0u;
}
