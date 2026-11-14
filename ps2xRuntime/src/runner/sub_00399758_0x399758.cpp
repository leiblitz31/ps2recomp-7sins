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

// Function: sub_00399758
// Address: 0x399758 - 0x399b00
void sub_00399758_0x399758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399758_0x399758");
#endif

    switch (ctx->pc) {
        case 0x399758u: goto label_399758;
        case 0x39975cu: goto label_39975c;
        case 0x399760u: goto label_399760;
        case 0x399764u: goto label_399764;
        case 0x399768u: goto label_399768;
        case 0x39976cu: goto label_39976c;
        case 0x399770u: goto label_399770;
        case 0x399774u: goto label_399774;
        case 0x399778u: goto label_399778;
        case 0x39977cu: goto label_39977c;
        case 0x399780u: goto label_399780;
        case 0x399784u: goto label_399784;
        case 0x399788u: goto label_399788;
        case 0x39978cu: goto label_39978c;
        case 0x399790u: goto label_399790;
        case 0x399794u: goto label_399794;
        case 0x399798u: goto label_399798;
        case 0x39979cu: goto label_39979c;
        case 0x3997a0u: goto label_3997a0;
        case 0x3997a4u: goto label_3997a4;
        case 0x3997a8u: goto label_3997a8;
        case 0x3997acu: goto label_3997ac;
        case 0x3997b0u: goto label_3997b0;
        case 0x3997b4u: goto label_3997b4;
        case 0x3997b8u: goto label_3997b8;
        case 0x3997bcu: goto label_3997bc;
        case 0x3997c0u: goto label_3997c0;
        case 0x3997c4u: goto label_3997c4;
        case 0x3997c8u: goto label_3997c8;
        case 0x3997ccu: goto label_3997cc;
        case 0x3997d0u: goto label_3997d0;
        case 0x3997d4u: goto label_3997d4;
        case 0x3997d8u: goto label_3997d8;
        case 0x3997dcu: goto label_3997dc;
        case 0x3997e0u: goto label_3997e0;
        case 0x3997e4u: goto label_3997e4;
        case 0x3997e8u: goto label_3997e8;
        case 0x3997ecu: goto label_3997ec;
        case 0x3997f0u: goto label_3997f0;
        case 0x3997f4u: goto label_3997f4;
        case 0x3997f8u: goto label_3997f8;
        case 0x3997fcu: goto label_3997fc;
        case 0x399800u: goto label_399800;
        case 0x399804u: goto label_399804;
        case 0x399808u: goto label_399808;
        case 0x39980cu: goto label_39980c;
        case 0x399810u: goto label_399810;
        case 0x399814u: goto label_399814;
        case 0x399818u: goto label_399818;
        case 0x39981cu: goto label_39981c;
        case 0x399820u: goto label_399820;
        case 0x399824u: goto label_399824;
        case 0x399828u: goto label_399828;
        case 0x39982cu: goto label_39982c;
        case 0x399830u: goto label_399830;
        case 0x399834u: goto label_399834;
        case 0x399838u: goto label_399838;
        case 0x39983cu: goto label_39983c;
        case 0x399840u: goto label_399840;
        case 0x399844u: goto label_399844;
        case 0x399848u: goto label_399848;
        case 0x39984cu: goto label_39984c;
        case 0x399850u: goto label_399850;
        case 0x399854u: goto label_399854;
        case 0x399858u: goto label_399858;
        case 0x39985cu: goto label_39985c;
        case 0x399860u: goto label_399860;
        case 0x399864u: goto label_399864;
        case 0x399868u: goto label_399868;
        case 0x39986cu: goto label_39986c;
        case 0x399870u: goto label_399870;
        case 0x399874u: goto label_399874;
        case 0x399878u: goto label_399878;
        case 0x39987cu: goto label_39987c;
        case 0x399880u: goto label_399880;
        case 0x399884u: goto label_399884;
        case 0x399888u: goto label_399888;
        case 0x39988cu: goto label_39988c;
        case 0x399890u: goto label_399890;
        case 0x399894u: goto label_399894;
        case 0x399898u: goto label_399898;
        case 0x39989cu: goto label_39989c;
        case 0x3998a0u: goto label_3998a0;
        case 0x3998a4u: goto label_3998a4;
        case 0x3998a8u: goto label_3998a8;
        case 0x3998acu: goto label_3998ac;
        case 0x3998b0u: goto label_3998b0;
        case 0x3998b4u: goto label_3998b4;
        case 0x3998b8u: goto label_3998b8;
        case 0x3998bcu: goto label_3998bc;
        case 0x3998c0u: goto label_3998c0;
        case 0x3998c4u: goto label_3998c4;
        case 0x3998c8u: goto label_3998c8;
        case 0x3998ccu: goto label_3998cc;
        case 0x3998d0u: goto label_3998d0;
        case 0x3998d4u: goto label_3998d4;
        case 0x3998d8u: goto label_3998d8;
        case 0x3998dcu: goto label_3998dc;
        case 0x3998e0u: goto label_3998e0;
        case 0x3998e4u: goto label_3998e4;
        case 0x3998e8u: goto label_3998e8;
        case 0x3998ecu: goto label_3998ec;
        case 0x3998f0u: goto label_3998f0;
        case 0x3998f4u: goto label_3998f4;
        case 0x3998f8u: goto label_3998f8;
        case 0x3998fcu: goto label_3998fc;
        case 0x399900u: goto label_399900;
        case 0x399904u: goto label_399904;
        case 0x399908u: goto label_399908;
        case 0x39990cu: goto label_39990c;
        case 0x399910u: goto label_399910;
        case 0x399914u: goto label_399914;
        case 0x399918u: goto label_399918;
        case 0x39991cu: goto label_39991c;
        case 0x399920u: goto label_399920;
        case 0x399924u: goto label_399924;
        case 0x399928u: goto label_399928;
        case 0x39992cu: goto label_39992c;
        case 0x399930u: goto label_399930;
        case 0x399934u: goto label_399934;
        case 0x399938u: goto label_399938;
        case 0x39993cu: goto label_39993c;
        case 0x399940u: goto label_399940;
        case 0x399944u: goto label_399944;
        case 0x399948u: goto label_399948;
        case 0x39994cu: goto label_39994c;
        case 0x399950u: goto label_399950;
        case 0x399954u: goto label_399954;
        case 0x399958u: goto label_399958;
        case 0x39995cu: goto label_39995c;
        case 0x399960u: goto label_399960;
        case 0x399964u: goto label_399964;
        case 0x399968u: goto label_399968;
        case 0x39996cu: goto label_39996c;
        case 0x399970u: goto label_399970;
        case 0x399974u: goto label_399974;
        case 0x399978u: goto label_399978;
        case 0x39997cu: goto label_39997c;
        case 0x399980u: goto label_399980;
        case 0x399984u: goto label_399984;
        case 0x399988u: goto label_399988;
        case 0x39998cu: goto label_39998c;
        case 0x399990u: goto label_399990;
        case 0x399994u: goto label_399994;
        case 0x399998u: goto label_399998;
        case 0x39999cu: goto label_39999c;
        case 0x3999a0u: goto label_3999a0;
        case 0x3999a4u: goto label_3999a4;
        case 0x3999a8u: goto label_3999a8;
        case 0x3999acu: goto label_3999ac;
        case 0x3999b0u: goto label_3999b0;
        case 0x3999b4u: goto label_3999b4;
        case 0x3999b8u: goto label_3999b8;
        case 0x3999bcu: goto label_3999bc;
        case 0x3999c0u: goto label_3999c0;
        case 0x3999c4u: goto label_3999c4;
        case 0x3999c8u: goto label_3999c8;
        case 0x3999ccu: goto label_3999cc;
        case 0x3999d0u: goto label_3999d0;
        case 0x3999d4u: goto label_3999d4;
        case 0x3999d8u: goto label_3999d8;
        case 0x3999dcu: goto label_3999dc;
        case 0x3999e0u: goto label_3999e0;
        case 0x3999e4u: goto label_3999e4;
        case 0x3999e8u: goto label_3999e8;
        case 0x3999ecu: goto label_3999ec;
        case 0x3999f0u: goto label_3999f0;
        case 0x3999f4u: goto label_3999f4;
        case 0x3999f8u: goto label_3999f8;
        case 0x3999fcu: goto label_3999fc;
        case 0x399a00u: goto label_399a00;
        case 0x399a04u: goto label_399a04;
        case 0x399a08u: goto label_399a08;
        case 0x399a0cu: goto label_399a0c;
        case 0x399a10u: goto label_399a10;
        case 0x399a14u: goto label_399a14;
        case 0x399a18u: goto label_399a18;
        case 0x399a1cu: goto label_399a1c;
        case 0x399a20u: goto label_399a20;
        case 0x399a24u: goto label_399a24;
        case 0x399a28u: goto label_399a28;
        case 0x399a2cu: goto label_399a2c;
        case 0x399a30u: goto label_399a30;
        case 0x399a34u: goto label_399a34;
        case 0x399a38u: goto label_399a38;
        case 0x399a3cu: goto label_399a3c;
        case 0x399a40u: goto label_399a40;
        case 0x399a44u: goto label_399a44;
        case 0x399a48u: goto label_399a48;
        case 0x399a4cu: goto label_399a4c;
        case 0x399a50u: goto label_399a50;
        case 0x399a54u: goto label_399a54;
        case 0x399a58u: goto label_399a58;
        case 0x399a5cu: goto label_399a5c;
        case 0x399a60u: goto label_399a60;
        case 0x399a64u: goto label_399a64;
        case 0x399a68u: goto label_399a68;
        case 0x399a6cu: goto label_399a6c;
        case 0x399a70u: goto label_399a70;
        case 0x399a74u: goto label_399a74;
        case 0x399a78u: goto label_399a78;
        case 0x399a7cu: goto label_399a7c;
        case 0x399a80u: goto label_399a80;
        case 0x399a84u: goto label_399a84;
        case 0x399a88u: goto label_399a88;
        case 0x399a8cu: goto label_399a8c;
        case 0x399a90u: goto label_399a90;
        case 0x399a94u: goto label_399a94;
        case 0x399a98u: goto label_399a98;
        case 0x399a9cu: goto label_399a9c;
        case 0x399aa0u: goto label_399aa0;
        case 0x399aa4u: goto label_399aa4;
        case 0x399aa8u: goto label_399aa8;
        case 0x399aacu: goto label_399aac;
        case 0x399ab0u: goto label_399ab0;
        case 0x399ab4u: goto label_399ab4;
        case 0x399ab8u: goto label_399ab8;
        case 0x399abcu: goto label_399abc;
        case 0x399ac0u: goto label_399ac0;
        case 0x399ac4u: goto label_399ac4;
        case 0x399ac8u: goto label_399ac8;
        case 0x399accu: goto label_399acc;
        case 0x399ad0u: goto label_399ad0;
        case 0x399ad4u: goto label_399ad4;
        case 0x399ad8u: goto label_399ad8;
        case 0x399adcu: goto label_399adc;
        case 0x399ae0u: goto label_399ae0;
        case 0x399ae4u: goto label_399ae4;
        case 0x399ae8u: goto label_399ae8;
        case 0x399aecu: goto label_399aec;
        case 0x399af0u: goto label_399af0;
        case 0x399af4u: goto label_399af4;
        case 0x399af8u: goto label_399af8;
        case 0x399afcu: goto label_399afc;
        default: break;
    }

    ctx->pc = 0x399758u;

label_399758:
    // 0x399758: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x399758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_39975c:
    // 0x39975c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_399760:
    // 0x399760: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x399760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_399764:
    // 0x399764: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x399764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_399768:
    // 0x399768: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x399768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_39976c:
    // 0x39976c: 0x34a5000b  ori         $a1, $a1, 0xB
    ctx->pc = 0x39976cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
label_399770:
    // 0x399770: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x399770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_399774:
    // 0x399774: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x399774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399778:
    // 0x399778: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x399778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_39977c:
    // 0x39977c: 0x3c15005e  lui         $s5, 0x5E
    ctx->pc = 0x39977cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
label_399780:
    // 0x399780: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x399780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_399784:
    // 0x399784: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x399784u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_399788:
    // 0x399788: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x399788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_39978c:
    // 0x39978c: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x39978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_399790:
    // 0x399790: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x399790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_399794:
    // 0x399794: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x399794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_399798:
    // 0x399798: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x399798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_39979c:
    // 0x39979c: 0x40f809  jalr        $v0
label_3997a0:
    if (ctx->pc == 0x3997A0u) {
        ctx->pc = 0x3997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39979Cu;
        // 0x3997a0: 0x8ea4ae58  lw          $a0, -0x51A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997A4u;
        goto label_3997a4;
    }
    ctx->pc = 0x39979Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3997A4u);
        ctx->pc = 0x3997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39979Cu;
        // 0x3997a0: 0x8ea4ae58  lw          $a0, -0x51A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946392)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39979Cu, 0x3997A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3997A4u;
label_3997a4:
    // 0x3997a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3997a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3997a8:
    // 0x3997a8: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_3997ac:
    if (ctx->pc == 0x3997ACu) {
        ctx->pc = 0x3997ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997A8u;
        // 0x3997ac: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997B0u;
        goto label_3997b0;
    }
    ctx->pc = 0x3997A8u;
    {
        const bool branch_taken_0x3997a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3997ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997A8u;
        // 0x3997ac: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3997a8) {
            ctx->pc = 0x3997E0u;
            goto label_3997e0;
        }
    }
    ctx->pc = 0x3997B0u;
label_3997b0:
    // 0x3997b0: 0x8c45ae58  lw          $a1, -0x51A8($v0)
    ctx->pc = 0x3997b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946392)));
label_3997b4:
    // 0x3997b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3997b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3997b8:
    // 0x3997b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3997b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3997bc:
    // 0x3997bc: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x3997bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_3997c0:
    // 0x3997c0: 0xc1035f6  jal         func_40D7D8
label_3997c4:
    if (ctx->pc == 0x3997C4u) {
        ctx->pc = 0x3997C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997C0u;
        // 0x3997c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997C8u;
        goto label_3997c8;
    }
    ctx->pc = 0x3997C0u;
    SET_GPR_U32(ctx, 31, 0x3997C8u);
    ctx->pc = 0x3997C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3997C0u;
    // 0x3997c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3997C0u, 0x3997C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3997C8u;
label_3997c8:
    // 0x3997c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3997c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3997cc:
    // 0x3997cc: 0xc103628  jal         func_40D8A0
label_3997d0:
    if (ctx->pc == 0x3997D0u) {
        ctx->pc = 0x3997D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997CCu;
        // 0x3997d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997D4u;
        goto label_3997d4;
    }
    ctx->pc = 0x3997CCu;
    SET_GPR_U32(ctx, 31, 0x3997D4u);
    ctx->pc = 0x3997D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3997CCu;
    // 0x3997d0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3997CCu, 0x3997D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3997D4u;
label_3997d4:
    // 0x3997d4: 0x100000be  b           . + 4 + (0xBE << 2)
label_3997d8:
    if (ctx->pc == 0x3997D8u) {
        ctx->pc = 0x3997D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997D4u;
        // 0x3997d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3997DCu;
        goto label_3997dc;
    }
    ctx->pc = 0x3997D4u;
    {
        const bool branch_taken_0x3997d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3997D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997D4u;
        // 0x3997d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3997d4) {
            ctx->pc = 0x399AD0u;
            goto label_399ad0;
        }
    }
    ctx->pc = 0x3997DCu;
label_3997dc:
    // 0x3997dc: 0x0  nop
    ctx->pc = 0x3997dcu;
    // NOP
label_3997e0:
    // 0x3997e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3997e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3997e4:
    // 0x3997e4: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x3997e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_3997e8:
    // 0x3997e8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3997e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3997ec:
    // 0x3997ec: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x3997ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_3997f0:
    // 0x3997f0: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x3997f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_3997f4:
    // 0x3997f4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3997f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3997f8:
    // 0x3997f8: 0xc0e3d9a  jal         func_38F668
label_3997fc:
    if (ctx->pc == 0x3997FCu) {
        ctx->pc = 0x3997FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997F8u;
        // 0x3997fc: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399800u;
        goto label_399800;
    }
    ctx->pc = 0x3997F8u;
    SET_GPR_U32(ctx, 31, 0x399800u);
    ctx->pc = 0x3997FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3997F8u;
    // 0x3997fc: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F668u, 0x3997F8u, 0x399800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399800u;
label_399800:
    // 0x399800: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x399800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_399804:
    // 0x399804: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x399804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_399808:
    // 0x399808: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x399808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_39980c:
    // 0x39980c: 0x2457ae40  addiu       $s7, $v0, -0x51C0
    ctx->pc = 0x39980cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946368));
label_399810:
    // 0x399810: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x399810u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_399814:
    // 0x399814: 0x8c44ae40  lw          $a0, -0x51C0($v0)
    ctx->pc = 0x399814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946368)));
label_399818:
    // 0x399818: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x399818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_39981c:
    // 0x39981c: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x39981cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_399820:
    // 0x399820: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x399820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_399824:
    // 0x399824: 0x40f809  jalr        $v0
label_399828:
    if (ctx->pc == 0x399828u) {
        ctx->pc = 0x399828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399824u;
        // 0x399828: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39982Cu;
        goto label_39982c;
    }
    ctx->pc = 0x399824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39982Cu);
        ctx->pc = 0x399828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399824u;
        // 0x399828: 0x34a5000b  ori         $a1, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399824u, 0x39982Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39982Cu;
label_39982c:
    // 0x39982c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39982cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399830:
    // 0x399830: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_399834:
    if (ctx->pc == 0x399834u) {
        ctx->pc = 0x399834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399830u;
        // 0x399834: 0x26030040  addiu       $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399838u;
        goto label_399838;
    }
    ctx->pc = 0x399830u;
    {
        const bool branch_taken_0x399830 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x399834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399830u;
        // 0x399834: 0x26030040  addiu       $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399830) {
            ctx->pc = 0x399870u;
            goto label_399870;
        }
    }
    ctx->pc = 0x399838u;
label_399838:
    // 0x399838: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x399838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_39983c:
    // 0x39983c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x39983cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_399840:
    // 0x399840: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x399840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_399844:
    // 0x399844: 0xc1035f6  jal         func_40D7D8
label_399848:
    if (ctx->pc == 0x399848u) {
        ctx->pc = 0x399848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399844u;
        // 0x399848: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39984Cu;
        goto label_39984c;
    }
    ctx->pc = 0x399844u;
    SET_GPR_U32(ctx, 31, 0x39984Cu);
    ctx->pc = 0x399848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399844u;
    // 0x399848: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x399844u, 0x39984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39984Cu;
label_39984c:
    // 0x39984c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x39984cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_399850:
    // 0x399850: 0xc103628  jal         func_40D8A0
label_399854:
    if (ctx->pc == 0x399854u) {
        ctx->pc = 0x399854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399850u;
        // 0x399854: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399858u;
        goto label_399858;
    }
    ctx->pc = 0x399850u;
    SET_GPR_U32(ctx, 31, 0x399858u);
    ctx->pc = 0x399854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399850u;
    // 0x399854: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x399850u, 0x399858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399858u;
label_399858:
    // 0x399858: 0x8e83010c  lw          $v1, 0x10C($s4)
    ctx->pc = 0x399858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_39985c:
    // 0x39985c: 0x60f809  jalr        $v1
label_399860:
    if (ctx->pc == 0x399860u) {
        ctx->pc = 0x399860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39985Cu;
        // 0x399860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399864u;
        goto label_399864;
    }
    ctx->pc = 0x39985Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x399864u);
        ctx->pc = 0x399860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39985Cu;
        // 0x399860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39985Cu, 0x399864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399864u;
label_399864:
    // 0x399864: 0x1000009a  b           . + 4 + (0x9A << 2)
label_399868:
    if (ctx->pc == 0x399868u) {
        ctx->pc = 0x399868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399864u;
        // 0x399868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39986Cu;
        goto label_39986c;
    }
    ctx->pc = 0x399864u;
    {
        const bool branch_taken_0x399864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399864u;
        // 0x399868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399864) {
            ctx->pc = 0x399AD0u;
            goto label_399ad0;
        }
    }
    ctx->pc = 0x39986Cu;
label_39986c:
    // 0x39986c: 0x0  nop
    ctx->pc = 0x39986cu;
    // NOP
label_399870:
    // 0x399870: 0x26020038  addiu       $v0, $s0, 0x38
    ctx->pc = 0x399870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_399874:
    // 0x399874: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x399874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_399878:
    // 0x399878: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x399878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_39987c:
    // 0x39987c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x39987cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_399880:
    // 0x399880: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x399880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_399884:
    // 0x399884: 0xa6000082  sh          $zero, 0x82($s0)
    ctx->pc = 0x399884u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 0));
label_399888:
    // 0x399888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x399888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39988c:
    // 0x39988c: 0xa6000084  sh          $zero, 0x84($s0)
    ctx->pc = 0x39988cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 0));
label_399890:
    // 0x399890: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x399890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_399894:
    // 0x399894: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x399894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_399898:
    // 0x399898: 0x26b4ae58  addiu       $s4, $s5, -0x51A8
    ctx->pc = 0x399898u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946392));
label_39989c:
    // 0x39989c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x39989cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3998a0:
    // 0x3998a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3998a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3998a4:
    // 0x3998a4: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x3998a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_3998a8:
    // 0x3998a8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x3998a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_3998ac:
    // 0x3998ac: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x3998acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_3998b0:
    // 0x3998b0: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x3998b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_3998b4:
    // 0x3998b4: 0xc0bb7e6  jal         func_2EDF98
label_3998b8:
    if (ctx->pc == 0x3998B8u) {
        ctx->pc = 0x3998B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998B4u;
        // 0x3998b8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3998BCu;
        goto label_3998bc;
    }
    ctx->pc = 0x3998B4u;
    SET_GPR_U32(ctx, 31, 0x3998BCu);
    ctx->pc = 0x3998B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3998B4u;
    // 0x3998b8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3998B4u, 0x3998BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3998BCu;
label_3998bc:
    // 0x3998bc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3998bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3998c0:
    // 0x3998c0: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x3998c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_3998c4:
    // 0x3998c4: 0x6a620013  ldl         $v0, 0x13($s3)
    ctx->pc = 0x3998c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3998c8:
    // 0x3998c8: 0x6e62000c  ldr         $v0, 0xC($s3)
    ctx->pc = 0x3998c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3998cc:
    // 0x3998cc: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x3998ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3998d0:
    // 0x3998d0: 0xb202005b  sdl         $v0, 0x5B($s0)
    ctx->pc = 0x3998d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3998d4:
    // 0x3998d4: 0xb6020054  sdr         $v0, 0x54($s0)
    ctx->pc = 0x3998d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3998d8:
    // 0x3998d8: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x3998d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_3998dc:
    // 0x3998dc: 0x2626002c  addiu       $a2, $s1, 0x2C
    ctx->pc = 0x3998dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_3998e0:
    // 0x3998e0: 0x6a6a0007  ldl         $t2, 0x7($s3)
    ctx->pc = 0x3998e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3998e4:
    // 0x3998e4: 0x6e6a0000  ldr         $t2, 0x0($s3)
    ctx->pc = 0x3998e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3998e8:
    // 0x3998e8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3998e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3998ec:
    // 0x3998ec: 0xb20a004f  sdl         $t2, 0x4F($s0)
    ctx->pc = 0x3998ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3998f0:
    // 0x3998f0: 0xb60a0048  sdr         $t2, 0x48($s0)
    ctx->pc = 0x3998f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3998f4:
    // 0x3998f4: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x3998f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_3998f8:
    // 0x3998f8: 0x26290034  addiu       $t1, $s1, 0x34
    ctx->pc = 0x3998f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_3998fc:
    // 0x3998fc: 0x6a650013  ldl         $a1, 0x13($s3)
    ctx->pc = 0x3998fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_399900:
    // 0x399900: 0x6e65000c  ldr         $a1, 0xC($s3)
    ctx->pc = 0x399900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_399904:
    // 0x399904: 0x8e6a0014  lw          $t2, 0x14($s3)
    ctx->pc = 0x399904u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_399908:
    // 0x399908: 0xb2050073  sdl         $a1, 0x73($s0)
    ctx->pc = 0x399908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_39990c:
    // 0x39990c: 0xb605006c  sdr         $a1, 0x6C($s0)
    ctx->pc = 0x39990cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_399910:
    // 0x399910: 0xae0a0074  sw          $t2, 0x74($s0)
    ctx->pc = 0x399910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 10));
label_399914:
    // 0x399914: 0x2628003c  addiu       $t0, $s1, 0x3C
    ctx->pc = 0x399914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_399918:
    // 0x399918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x399918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39991c:
    // 0x39991c: 0x24e7a058  addiu       $a3, $a3, -0x5FA8
    ctx->pc = 0x39991cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942808));
label_399920:
    // 0x399920: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x399920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_399924:
    // 0x399924: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x399924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_399928:
    // 0x399928: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x399928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_39992c:
    // 0x39992c: 0xb2040067  sdl         $a0, 0x67($s0)
    ctx->pc = 0x39992cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_399930:
    // 0x399930: 0xb6040060  sdr         $a0, 0x60($s0)
    ctx->pc = 0x399930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_399934:
    // 0x399934: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x399934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
label_399938:
    // 0x399938: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x399938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_39993c:
    // 0x39993c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x39993cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_399940:
    // 0x399940: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x399940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_399944:
    // 0x399944: 0x34a50507  ori         $a1, $a1, 0x507
    ctx->pc = 0x399944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
label_399948:
    // 0x399948: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x399948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_39994c:
    // 0x39994c: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x39994cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
label_399950:
    // 0x399950: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x399950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_399954:
    // 0x399954: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x399954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_399958:
    // 0x399958: 0x6a630013  ldl         $v1, 0x13($s3)
    ctx->pc = 0x399958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_39995c:
    // 0x39995c: 0x6e63000c  ldr         $v1, 0xC($s3)
    ctx->pc = 0x39995cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_399960:
    // 0x399960: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x399960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_399964:
    // 0x399964: 0xb2230063  sdl         $v1, 0x63($s1)
    ctx->pc = 0x399964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_399968:
    // 0x399968: 0xb623005c  sdr         $v1, 0x5C($s1)
    ctx->pc = 0x399968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_39996c:
    // 0x39996c: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x39996cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_399970:
    // 0x399970: 0x6a630007  ldl         $v1, 0x7($s3)
    ctx->pc = 0x399970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_399974:
    // 0x399974: 0x6e630000  ldr         $v1, 0x0($s3)
    ctx->pc = 0x399974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_399978:
    // 0x399978: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x399978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_39997c:
    // 0x39997c: 0xb2230057  sdl         $v1, 0x57($s1)
    ctx->pc = 0x39997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_399980:
    // 0x399980: 0xb6230050  sdr         $v1, 0x50($s1)
    ctx->pc = 0x399980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_399984:
    // 0x399984: 0xae240058  sw          $a0, 0x58($s1)
    ctx->pc = 0x399984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 4));
label_399988:
    // 0x399988: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x399988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_39998c:
    // 0x39998c: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x39998cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
label_399990:
    // 0x399990: 0x8f83bd60  lw          $v1, -0x42A0($gp)
    ctx->pc = 0x399990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
label_399994:
    // 0x399994: 0x8ec20118  lw          $v0, 0x118($s6)
    ctx->pc = 0x399994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 280)));
label_399998:
    // 0x399998: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x399998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_39999c:
    // 0x39999c: 0xae260028  sw          $a2, 0x28($s1)
    ctx->pc = 0x39999cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 6));
label_3999a0:
    // 0x3999a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3999a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3999a4:
    // 0x3999a4: 0xae26002c  sw          $a2, 0x2C($s1)
    ctx->pc = 0x3999a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 6));
label_3999a8:
    // 0x3999a8: 0xae260030  sw          $a2, 0x30($s1)
    ctx->pc = 0x3999a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 6));
label_3999ac:
    // 0x3999ac: 0x8eb2ae58  lw          $s2, -0x51A8($s5)
    ctx->pc = 0x3999acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946392)));
label_3999b0:
    // 0x3999b0: 0xae290038  sw          $t1, 0x38($s1)
    ctx->pc = 0x3999b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 9));
label_3999b4:
    // 0x3999b4: 0xae280040  sw          $t0, 0x40($s1)
    ctx->pc = 0x3999b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 8));
label_3999b8:
    // 0x3999b8: 0xae270068  sw          $a3, 0x68($s1)
    ctx->pc = 0x3999b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 7));
label_3999bc:
    // 0x3999bc: 0xae290034  sw          $t1, 0x34($s1)
    ctx->pc = 0x3999bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 9));
label_3999c0:
    // 0x3999c0: 0x40f809  jalr        $v0
label_3999c4:
    if (ctx->pc == 0x3999C4u) {
        ctx->pc = 0x3999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999C0u;
        // 0x3999c4: 0xae28003c  sw          $t0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3999C8u;
        goto label_3999c8;
    }
    ctx->pc = 0x3999C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3999C8u);
        ctx->pc = 0x3999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999C0u;
        // 0x3999c4: 0xae28003c  sw          $t0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3999C0u, 0x3999C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3999C8u;
label_3999c8:
    // 0x3999c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3999c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3999cc:
    // 0x3999cc: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_3999d0:
    if (ctx->pc == 0x3999D0u) {
        ctx->pc = 0x3999D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999CCu;
        // 0x3999d0: 0x26c30004  addiu       $v1, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3999D4u;
        goto label_3999d4;
    }
    ctx->pc = 0x3999CCu;
    {
        const bool branch_taken_0x3999cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3999D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3999CCu;
        // 0x3999d0: 0x26c30004  addiu       $v1, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3999cc) {
            ctx->pc = 0x399A00u;
            goto label_399a00;
        }
    }
    ctx->pc = 0x3999D4u;
label_3999d4:
    // 0x3999d4: 0xacd20004  sw          $s2, 0x4($a2)
    ctx->pc = 0x3999d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 18));
label_3999d8:
    // 0x3999d8: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x3999d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_3999dc:
    // 0x3999dc: 0xacd10000  sw          $s1, 0x0($a2)
    ctx->pc = 0x3999dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 17));
label_3999e0:
    // 0x3999e0: 0x8f82bd60  lw          $v0, -0x42A0($gp)
    ctx->pc = 0x3999e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
label_3999e4:
    // 0x3999e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3999e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3999e8:
    // 0x3999e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3999e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3999ec:
    // 0x3999ec: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x3999ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_3999f0:
    // 0x3999f0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x3999f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_3999f4:
    // 0x3999f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3999f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3999f8:
    // 0x3999f8: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x3999f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_3999fc:
    // 0x3999fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3999fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_399a00:
    // 0x399a00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x399a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_399a04:
    // 0x399a04: 0xc104c80  jal         func_413200
label_399a08:
    if (ctx->pc == 0x399A08u) {
        ctx->pc = 0x399A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A04u;
        // 0x399a08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A0Cu;
        goto label_399a0c;
    }
    ctx->pc = 0x399A04u;
    SET_GPR_U32(ctx, 31, 0x399A0Cu);
    ctx->pc = 0x399A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A04u;
    // 0x399a08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x399A04u, 0x399A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A0Cu;
label_399a0c:
    // 0x399a0c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x399a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_399a10:
    // 0x399a10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x399a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399a14:
    // 0x399a14: 0xc104c80  jal         func_413200
label_399a18:
    if (ctx->pc == 0x399A18u) {
        ctx->pc = 0x399A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A14u;
        // 0x399a18: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A1Cu;
        goto label_399a1c;
    }
    ctx->pc = 0x399A14u;
    SET_GPR_U32(ctx, 31, 0x399A1Cu);
    ctx->pc = 0x399A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A14u;
    // 0x399a18: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x399A14u, 0x399A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A1Cu;
label_399a1c:
    // 0x399a1c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x399a1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399a20:
    // 0x399a20: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x399a20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_399a24:
    // 0x399a24: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_399a28:
    if (ctx->pc == 0x399A28u) {
        ctx->pc = 0x399A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A24u;
        // 0x399a28: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A2Cu;
        goto label_399a2c;
    }
    ctx->pc = 0x399A24u;
    {
        const bool branch_taken_0x399a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x399A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A24u;
        // 0x399a28: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a24) {
            ctx->pc = 0x399A84u;
            goto label_399a84;
        }
    }
    ctx->pc = 0x399A2Cu;
label_399a2c:
    // 0x399a2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x399a2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399a30:
    // 0x399a30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x399a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_399a34:
    // 0x399a34: 0x0  nop
    ctx->pc = 0x399a34u;
    // NOP
label_399a38:
    // 0x399a38: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
label_399a3c:
    if (ctx->pc == 0x399A3Cu) {
        ctx->pc = 0x399A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A38u;
        // 0x399a3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A40u;
        goto label_399a40;
    }
    ctx->pc = 0x399A38u;
    {
        const bool branch_taken_0x399a38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x399A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A38u;
        // 0x399a3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a38) {
            ctx->pc = 0x399A9Cu;
            goto label_399a9c;
        }
    }
    ctx->pc = 0x399A40u;
label_399a40:
    // 0x399a40: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x399a40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
label_399a44:
    // 0x399a44: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x399a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_399a48:
    // 0x399a48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x399a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_399a4c:
    // 0x399a4c: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x399a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_399a50:
    // 0x399a50: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_399a54:
    if (ctx->pc == 0x399A54u) {
        ctx->pc = 0x399A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A50u;
        // 0x399a54: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A58u;
        goto label_399a58;
    }
    ctx->pc = 0x399A50u;
    {
        const bool branch_taken_0x399a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x399A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A50u;
        // 0x399a54: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a50) {
            ctx->pc = 0x399A8Cu;
            goto label_399a8c;
        }
    }
    ctx->pc = 0x399A58u;
label_399a58:
    // 0x399a58: 0xc0e3ff8  jal         func_38FFE0
label_399a5c:
    if (ctx->pc == 0x399A5Cu) {
        ctx->pc = 0x399A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A58u;
        // 0x399a5c: 0x96040084  lhu         $a0, 0x84($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A60u;
        goto label_399a60;
    }
    ctx->pc = 0x399A58u;
    SET_GPR_U32(ctx, 31, 0x399A60u);
    ctx->pc = 0x399A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A58u;
    // 0x399a5c: 0x96040084  lhu         $a0, 0x84($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFE0u, 0x399A58u, 0x399A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A60u;
label_399a60:
    // 0x399a60: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_399a64:
    if (ctx->pc == 0x399A64u) {
        ctx->pc = 0x399A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A60u;
        // 0x399a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A68u;
        goto label_399a68;
    }
    ctx->pc = 0x399A60u;
    {
        const bool branch_taken_0x399a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A60u;
        // 0x399a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a60) {
            ctx->pc = 0x399A84u;
            goto label_399a84;
        }
    }
    ctx->pc = 0x399A68u;
label_399a68:
    // 0x399a68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x399a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399a6c:
    // 0x399a6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x399a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399a70:
    // 0x399a70: 0xc0e63e2  jal         func_398F88
label_399a74:
    if (ctx->pc == 0x399A74u) {
        ctx->pc = 0x399A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A70u;
        // 0x399a74: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A78u;
        goto label_399a78;
    }
    ctx->pc = 0x399A70u;
    SET_GPR_U32(ctx, 31, 0x399A78u);
    ctx->pc = 0x399A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399A70u;
    // 0x399a74: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398F88u, 0x399A70u, 0x399A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399A78u;
label_399a78:
    // 0x399a78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x399a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399a7c:
    // 0x399a7c: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
label_399a80:
    if (ctx->pc == 0x399A80u) {
        ctx->pc = 0x399A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A7Cu;
        // 0x399a80: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A84u;
        goto label_399a84;
    }
    ctx->pc = 0x399A7Cu;
    {
        const bool branch_taken_0x399a7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x399a7c) {
            ctx->pc = 0x399A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399A7Cu;
            // 0x399a80: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399A90u;
            goto label_399a90;
        }
    }
    ctx->pc = 0x399A84u;
label_399a84:
    // 0x399a84: 0x1000000d  b           . + 4 + (0xD << 2)
label_399a88:
    if (ctx->pc == 0x399A88u) {
        ctx->pc = 0x399A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A84u;
        // 0x399a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A8Cu;
        goto label_399a8c;
    }
    ctx->pc = 0x399A84u;
    {
        const bool branch_taken_0x399a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A84u;
        // 0x399a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a84) {
            ctx->pc = 0x399ABCu;
            goto label_399abc;
        }
    }
    ctx->pc = 0x399A8Cu;
label_399a8c:
    // 0x399a8c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x399a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_399a90:
    // 0x399a90: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x399a90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_399a94:
    // 0x399a94: 0x10000006  b           . + 4 + (0x6 << 2)
label_399a98:
    if (ctx->pc == 0x399A98u) {
        ctx->pc = 0x399A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A94u;
        // 0x399a98: 0x2694fffc  addiu       $s4, $s4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399A9Cu;
        goto label_399a9c;
    }
    ctx->pc = 0x399A94u;
    {
        const bool branch_taken_0x399a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399A94u;
        // 0x399a98: 0x2694fffc  addiu       $s4, $s4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399a94) {
            ctx->pc = 0x399AB0u;
            goto label_399ab0;
        }
    }
    ctx->pc = 0x399A9Cu;
label_399a9c:
    // 0x399a9c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x399a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_399aa0:
    // 0x399aa0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x399aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_399aa4:
    // 0x399aa4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x399aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_399aa8:
    // 0x399aa8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x399aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_399aac:
    // 0x399aac: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x399aacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_399ab0:
    // 0x399ab0: 0x6a3ffe1  bgezl       $s5, . + 4 + (-0x1F << 2)
label_399ab4:
    if (ctx->pc == 0x399AB4u) {
        ctx->pc = 0x399AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AB0u;
        // 0x399ab4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399AB8u;
        goto label_399ab8;
    }
    ctx->pc = 0x399AB0u;
    {
        const bool branch_taken_0x399ab0 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x399ab0) {
            ctx->pc = 0x399AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399AB0u;
            // 0x399ab4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399a38;
        }
    }
    ctx->pc = 0x399AB8u;
label_399ab8:
    // 0x399ab8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x399ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_399abc:
    // 0x399abc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_399ac0:
    if (ctx->pc == 0x399AC0u) {
        ctx->pc = 0x399AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399ABCu;
        // 0x399ac0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399AC4u;
        goto label_399ac4;
    }
    ctx->pc = 0x399ABCu;
    {
        const bool branch_taken_0x399abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399ABCu;
        // 0x399ac0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399abc) {
            ctx->pc = 0x399AD0u;
            goto label_399ad0;
        }
    }
    ctx->pc = 0x399AC4u;
label_399ac4:
    // 0x399ac4: 0xc0e653c  jal         func_3994F0
label_399ac8:
    if (ctx->pc == 0x399AC8u) {
        ctx->pc = 0x399AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AC4u;
        // 0x399ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399ACCu;
        goto label_399acc;
    }
    ctx->pc = 0x399AC4u;
    SET_GPR_U32(ctx, 31, 0x399ACCu);
    ctx->pc = 0x399AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399AC4u;
    // 0x399ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3994F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3994F0u, 0x399AC4u, 0x399ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399ACCu;
label_399acc:
    // 0x399acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x399accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399ad0:
    // 0x399ad0: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x399ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_399ad4:
    // 0x399ad4: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x399ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_399ad8:
    // 0x399ad8: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x399ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_399adc:
    // 0x399adc: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x399adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_399ae0:
    // 0x399ae0: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x399ae0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_399ae4:
    // 0x399ae4: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x399ae4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_399ae8:
    // 0x399ae8: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x399ae8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_399aec:
    // 0x399aec: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x399aecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_399af0:
    // 0x399af0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x399af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_399af4:
    // 0x399af4: 0x3e00008  jr          $ra
label_399af8:
    if (ctx->pc == 0x399AF8u) {
        ctx->pc = 0x399AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AF4u;
        // 0x399af8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399AFCu;
        goto label_399afc;
    }
    ctx->pc = 0x399AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399AF4u;
        // 0x399af8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399AFCu;
label_399afc:
    // 0x399afc: 0x0  nop
    ctx->pc = 0x399afcu;
    // NOP
    ctx->pc = 0x399b00u;
}
