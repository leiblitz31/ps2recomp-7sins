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

// Function: sub_00449760
// Address: 0x449760 - 0x449b58
void sub_00449760_0x449760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449760_0x449760");
#endif

    switch (ctx->pc) {
        case 0x449760u: goto label_449760;
        case 0x449764u: goto label_449764;
        case 0x449768u: goto label_449768;
        case 0x44976cu: goto label_44976c;
        case 0x449770u: goto label_449770;
        case 0x449774u: goto label_449774;
        case 0x449778u: goto label_449778;
        case 0x44977cu: goto label_44977c;
        case 0x449780u: goto label_449780;
        case 0x449784u: goto label_449784;
        case 0x449788u: goto label_449788;
        case 0x44978cu: goto label_44978c;
        case 0x449790u: goto label_449790;
        case 0x449794u: goto label_449794;
        case 0x449798u: goto label_449798;
        case 0x44979cu: goto label_44979c;
        case 0x4497a0u: goto label_4497a0;
        case 0x4497a4u: goto label_4497a4;
        case 0x4497a8u: goto label_4497a8;
        case 0x4497acu: goto label_4497ac;
        case 0x4497b0u: goto label_4497b0;
        case 0x4497b4u: goto label_4497b4;
        case 0x4497b8u: goto label_4497b8;
        case 0x4497bcu: goto label_4497bc;
        case 0x4497c0u: goto label_4497c0;
        case 0x4497c4u: goto label_4497c4;
        case 0x4497c8u: goto label_4497c8;
        case 0x4497ccu: goto label_4497cc;
        case 0x4497d0u: goto label_4497d0;
        case 0x4497d4u: goto label_4497d4;
        case 0x4497d8u: goto label_4497d8;
        case 0x4497dcu: goto label_4497dc;
        case 0x4497e0u: goto label_4497e0;
        case 0x4497e4u: goto label_4497e4;
        case 0x4497e8u: goto label_4497e8;
        case 0x4497ecu: goto label_4497ec;
        case 0x4497f0u: goto label_4497f0;
        case 0x4497f4u: goto label_4497f4;
        case 0x4497f8u: goto label_4497f8;
        case 0x4497fcu: goto label_4497fc;
        case 0x449800u: goto label_449800;
        case 0x449804u: goto label_449804;
        case 0x449808u: goto label_449808;
        case 0x44980cu: goto label_44980c;
        case 0x449810u: goto label_449810;
        case 0x449814u: goto label_449814;
        case 0x449818u: goto label_449818;
        case 0x44981cu: goto label_44981c;
        case 0x449820u: goto label_449820;
        case 0x449824u: goto label_449824;
        case 0x449828u: goto label_449828;
        case 0x44982cu: goto label_44982c;
        case 0x449830u: goto label_449830;
        case 0x449834u: goto label_449834;
        case 0x449838u: goto label_449838;
        case 0x44983cu: goto label_44983c;
        case 0x449840u: goto label_449840;
        case 0x449844u: goto label_449844;
        case 0x449848u: goto label_449848;
        case 0x44984cu: goto label_44984c;
        case 0x449850u: goto label_449850;
        case 0x449854u: goto label_449854;
        case 0x449858u: goto label_449858;
        case 0x44985cu: goto label_44985c;
        case 0x449860u: goto label_449860;
        case 0x449864u: goto label_449864;
        case 0x449868u: goto label_449868;
        case 0x44986cu: goto label_44986c;
        case 0x449870u: goto label_449870;
        case 0x449874u: goto label_449874;
        case 0x449878u: goto label_449878;
        case 0x44987cu: goto label_44987c;
        case 0x449880u: goto label_449880;
        case 0x449884u: goto label_449884;
        case 0x449888u: goto label_449888;
        case 0x44988cu: goto label_44988c;
        case 0x449890u: goto label_449890;
        case 0x449894u: goto label_449894;
        case 0x449898u: goto label_449898;
        case 0x44989cu: goto label_44989c;
        case 0x4498a0u: goto label_4498a0;
        case 0x4498a4u: goto label_4498a4;
        case 0x4498a8u: goto label_4498a8;
        case 0x4498acu: goto label_4498ac;
        case 0x4498b0u: goto label_4498b0;
        case 0x4498b4u: goto label_4498b4;
        case 0x4498b8u: goto label_4498b8;
        case 0x4498bcu: goto label_4498bc;
        case 0x4498c0u: goto label_4498c0;
        case 0x4498c4u: goto label_4498c4;
        case 0x4498c8u: goto label_4498c8;
        case 0x4498ccu: goto label_4498cc;
        case 0x4498d0u: goto label_4498d0;
        case 0x4498d4u: goto label_4498d4;
        case 0x4498d8u: goto label_4498d8;
        case 0x4498dcu: goto label_4498dc;
        case 0x4498e0u: goto label_4498e0;
        case 0x4498e4u: goto label_4498e4;
        case 0x4498e8u: goto label_4498e8;
        case 0x4498ecu: goto label_4498ec;
        case 0x4498f0u: goto label_4498f0;
        case 0x4498f4u: goto label_4498f4;
        case 0x4498f8u: goto label_4498f8;
        case 0x4498fcu: goto label_4498fc;
        case 0x449900u: goto label_449900;
        case 0x449904u: goto label_449904;
        case 0x449908u: goto label_449908;
        case 0x44990cu: goto label_44990c;
        case 0x449910u: goto label_449910;
        case 0x449914u: goto label_449914;
        case 0x449918u: goto label_449918;
        case 0x44991cu: goto label_44991c;
        case 0x449920u: goto label_449920;
        case 0x449924u: goto label_449924;
        case 0x449928u: goto label_449928;
        case 0x44992cu: goto label_44992c;
        case 0x449930u: goto label_449930;
        case 0x449934u: goto label_449934;
        case 0x449938u: goto label_449938;
        case 0x44993cu: goto label_44993c;
        case 0x449940u: goto label_449940;
        case 0x449944u: goto label_449944;
        case 0x449948u: goto label_449948;
        case 0x44994cu: goto label_44994c;
        case 0x449950u: goto label_449950;
        case 0x449954u: goto label_449954;
        case 0x449958u: goto label_449958;
        case 0x44995cu: goto label_44995c;
        case 0x449960u: goto label_449960;
        case 0x449964u: goto label_449964;
        case 0x449968u: goto label_449968;
        case 0x44996cu: goto label_44996c;
        case 0x449970u: goto label_449970;
        case 0x449974u: goto label_449974;
        case 0x449978u: goto label_449978;
        case 0x44997cu: goto label_44997c;
        case 0x449980u: goto label_449980;
        case 0x449984u: goto label_449984;
        case 0x449988u: goto label_449988;
        case 0x44998cu: goto label_44998c;
        case 0x449990u: goto label_449990;
        case 0x449994u: goto label_449994;
        case 0x449998u: goto label_449998;
        case 0x44999cu: goto label_44999c;
        case 0x4499a0u: goto label_4499a0;
        case 0x4499a4u: goto label_4499a4;
        case 0x4499a8u: goto label_4499a8;
        case 0x4499acu: goto label_4499ac;
        case 0x4499b0u: goto label_4499b0;
        case 0x4499b4u: goto label_4499b4;
        case 0x4499b8u: goto label_4499b8;
        case 0x4499bcu: goto label_4499bc;
        case 0x4499c0u: goto label_4499c0;
        case 0x4499c4u: goto label_4499c4;
        case 0x4499c8u: goto label_4499c8;
        case 0x4499ccu: goto label_4499cc;
        case 0x4499d0u: goto label_4499d0;
        case 0x4499d4u: goto label_4499d4;
        case 0x4499d8u: goto label_4499d8;
        case 0x4499dcu: goto label_4499dc;
        case 0x4499e0u: goto label_4499e0;
        case 0x4499e4u: goto label_4499e4;
        case 0x4499e8u: goto label_4499e8;
        case 0x4499ecu: goto label_4499ec;
        case 0x4499f0u: goto label_4499f0;
        case 0x4499f4u: goto label_4499f4;
        case 0x4499f8u: goto label_4499f8;
        case 0x4499fcu: goto label_4499fc;
        case 0x449a00u: goto label_449a00;
        case 0x449a04u: goto label_449a04;
        case 0x449a08u: goto label_449a08;
        case 0x449a0cu: goto label_449a0c;
        case 0x449a10u: goto label_449a10;
        case 0x449a14u: goto label_449a14;
        case 0x449a18u: goto label_449a18;
        case 0x449a1cu: goto label_449a1c;
        case 0x449a20u: goto label_449a20;
        case 0x449a24u: goto label_449a24;
        case 0x449a28u: goto label_449a28;
        case 0x449a2cu: goto label_449a2c;
        case 0x449a30u: goto label_449a30;
        case 0x449a34u: goto label_449a34;
        case 0x449a38u: goto label_449a38;
        case 0x449a3cu: goto label_449a3c;
        case 0x449a40u: goto label_449a40;
        case 0x449a44u: goto label_449a44;
        case 0x449a48u: goto label_449a48;
        case 0x449a4cu: goto label_449a4c;
        case 0x449a50u: goto label_449a50;
        case 0x449a54u: goto label_449a54;
        case 0x449a58u: goto label_449a58;
        case 0x449a5cu: goto label_449a5c;
        case 0x449a60u: goto label_449a60;
        case 0x449a64u: goto label_449a64;
        case 0x449a68u: goto label_449a68;
        case 0x449a6cu: goto label_449a6c;
        case 0x449a70u: goto label_449a70;
        case 0x449a74u: goto label_449a74;
        case 0x449a78u: goto label_449a78;
        case 0x449a7cu: goto label_449a7c;
        case 0x449a80u: goto label_449a80;
        case 0x449a84u: goto label_449a84;
        case 0x449a88u: goto label_449a88;
        case 0x449a8cu: goto label_449a8c;
        case 0x449a90u: goto label_449a90;
        case 0x449a94u: goto label_449a94;
        case 0x449a98u: goto label_449a98;
        case 0x449a9cu: goto label_449a9c;
        case 0x449aa0u: goto label_449aa0;
        case 0x449aa4u: goto label_449aa4;
        case 0x449aa8u: goto label_449aa8;
        case 0x449aacu: goto label_449aac;
        case 0x449ab0u: goto label_449ab0;
        case 0x449ab4u: goto label_449ab4;
        case 0x449ab8u: goto label_449ab8;
        case 0x449abcu: goto label_449abc;
        case 0x449ac0u: goto label_449ac0;
        case 0x449ac4u: goto label_449ac4;
        case 0x449ac8u: goto label_449ac8;
        case 0x449accu: goto label_449acc;
        case 0x449ad0u: goto label_449ad0;
        case 0x449ad4u: goto label_449ad4;
        case 0x449ad8u: goto label_449ad8;
        case 0x449adcu: goto label_449adc;
        case 0x449ae0u: goto label_449ae0;
        case 0x449ae4u: goto label_449ae4;
        case 0x449ae8u: goto label_449ae8;
        case 0x449aecu: goto label_449aec;
        case 0x449af0u: goto label_449af0;
        case 0x449af4u: goto label_449af4;
        case 0x449af8u: goto label_449af8;
        case 0x449afcu: goto label_449afc;
        case 0x449b00u: goto label_449b00;
        case 0x449b04u: goto label_449b04;
        case 0x449b08u: goto label_449b08;
        case 0x449b0cu: goto label_449b0c;
        case 0x449b10u: goto label_449b10;
        case 0x449b14u: goto label_449b14;
        case 0x449b18u: goto label_449b18;
        case 0x449b1cu: goto label_449b1c;
        case 0x449b20u: goto label_449b20;
        case 0x449b24u: goto label_449b24;
        case 0x449b28u: goto label_449b28;
        case 0x449b2cu: goto label_449b2c;
        case 0x449b30u: goto label_449b30;
        case 0x449b34u: goto label_449b34;
        case 0x449b38u: goto label_449b38;
        case 0x449b3cu: goto label_449b3c;
        case 0x449b40u: goto label_449b40;
        case 0x449b44u: goto label_449b44;
        case 0x449b48u: goto label_449b48;
        case 0x449b4cu: goto label_449b4c;
        case 0x449b50u: goto label_449b50;
        case 0x449b54u: goto label_449b54;
        default: break;
    }

    ctx->pc = 0x449760u;

label_449760:
    // 0x449760: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x449760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_449764:
    // 0x449764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x449764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449768:
    // 0x449768: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x449768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_44976c:
    // 0x44976c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x44976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_449770:
    // 0x449770: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x449770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_449774:
    // 0x449774: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x449774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_449778:
    // 0x449778: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x449778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44977c:
    // 0x44977c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x44977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_449780:
    // 0x449780: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x449780u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_449784:
    // 0x449784: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x449784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_449788:
    // 0x449788: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x449788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_44978c:
    // 0x44978c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x44978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_449790:
    // 0x449790: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_449794:
    if (ctx->pc == 0x449794u) {
        ctx->pc = 0x449794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449790u;
        // 0x449794: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449798u;
        goto label_449798;
    }
    ctx->pc = 0x449790u;
    {
        const bool branch_taken_0x449790 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x449794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449790u;
        // 0x449794: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449790) {
            ctx->pc = 0x4497A8u;
            goto label_4497a8;
        }
    }
    ctx->pc = 0x449798u;
label_449798:
    // 0x449798: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_44979c:
    if (ctx->pc == 0x44979Cu) {
        ctx->pc = 0x4497A0u;
        goto label_4497a0;
    }
    ctx->pc = 0x449798u;
    {
        const bool branch_taken_0x449798 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x449798) {
            ctx->pc = 0x4497A8u;
            goto label_4497a8;
        }
    }
    ctx->pc = 0x4497A0u;
label_4497a0:
    // 0x4497a0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4497a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4497a4:
    // 0x4497a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4497a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4497a8:
    // 0x4497a8: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_4497ac:
    if (ctx->pc == 0x4497ACu) {
        ctx->pc = 0x4497B0u;
        goto label_4497b0;
    }
    ctx->pc = 0x4497A8u;
    {
        const bool branch_taken_0x4497a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4497a8) {
            ctx->pc = 0x4499B0u;
            goto label_4499b0;
        }
    }
    ctx->pc = 0x4497B0u;
label_4497b0:
    // 0x4497b0: 0x8e910008  lw          $s1, 0x8($s4)
    ctx->pc = 0x4497b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4497b4:
    // 0x4497b4: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
label_4497b8:
    if (ctx->pc == 0x4497B8u) {
        ctx->pc = 0x4497B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497B4u;
        // 0x4497b8: 0x8e900004  lw          $s0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4497BCu;
        goto label_4497bc;
    }
    ctx->pc = 0x4497B4u;
    {
        const bool branch_taken_0x4497b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4497B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497B4u;
        // 0x4497b8: 0x8e900004  lw          $s0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4497b4) {
            ctx->pc = 0x449834u;
            goto label_449834;
        }
    }
    ctx->pc = 0x4497BCu;
label_4497bc:
    // 0x4497bc: 0x5226001c  beql        $s1, $a2, . + 4 + (0x1C << 2)
label_4497c0:
    if (ctx->pc == 0x4497C0u) {
        ctx->pc = 0x4497C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497BCu;
        // 0x4497c0: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4497C4u;
        goto label_4497c4;
    }
    ctx->pc = 0x4497BCu;
    {
        const bool branch_taken_0x4497bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        if (branch_taken_0x4497bc) {
            ctx->pc = 0x4497C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4497BCu;
            // 0x4497c0: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449830u;
            goto label_449830;
        }
    }
    ctx->pc = 0x4497C4u;
label_4497c4:
    // 0x4497c4: 0x1a000019  blez        $s0, . + 4 + (0x19 << 2)
label_4497c8:
    if (ctx->pc == 0x4497C8u) {
        ctx->pc = 0x4497C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497C4u;
        // 0x4497c8: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4497CCu;
        goto label_4497cc;
    }
    ctx->pc = 0x4497C4u;
    {
        const bool branch_taken_0x4497c4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4497C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497C4u;
        // 0x4497c8: 0x101023  negu        $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4497c4) {
            ctx->pc = 0x44982Cu;
            goto label_44982c;
        }
    }
    ctx->pc = 0x4497CCu;
label_4497cc:
    // 0x4497cc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4497ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4497d0:
    // 0x4497d0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_4497d4:
    if (ctx->pc == 0x4497D4u) {
        ctx->pc = 0x4497D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497D0u;
        // 0x4497d4: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4497D8u;
        goto label_4497d8;
    }
    ctx->pc = 0x4497D0u;
    {
        const bool branch_taken_0x4497d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4497d0) {
            ctx->pc = 0x4497D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4497D0u;
            // 0x4497d4: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4497F8u;
            goto label_4497f8;
        }
    }
    ctx->pc = 0x4497D8u;
label_4497d8:
    // 0x4497d8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4497d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_4497dc:
    // 0x4497dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4497e0:
    if (ctx->pc == 0x4497E0u) {
        ctx->pc = 0x4497E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497DCu;
        // 0x4497e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4497E4u;
        goto label_4497e4;
    }
    ctx->pc = 0x4497DCu;
    {
        const bool branch_taken_0x4497dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4497E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497DCu;
        // 0x4497e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4497dc) {
            ctx->pc = 0x449818u;
            goto label_449818;
        }
    }
    ctx->pc = 0x4497E4u;
label_4497e4:
    // 0x4497e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4497e8:
    if (ctx->pc == 0x4497E8u) {
        ctx->pc = 0x4497E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497E4u;
        // 0x4497e8: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4497ECu;
        goto label_4497ec;
    }
    ctx->pc = 0x4497E4u;
    {
        const bool branch_taken_0x4497e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4497E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497E4u;
        // 0x4497e8: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4497e4) {
            ctx->pc = 0x449810u;
            goto label_449810;
        }
    }
    ctx->pc = 0x4497ECu;
label_4497ec:
    // 0x4497ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_4497f0:
    if (ctx->pc == 0x4497F0u) {
        ctx->pc = 0x4497F4u;
        goto label_4497f4;
    }
    ctx->pc = 0x4497ECu;
    {
        const bool branch_taken_0x4497ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4497ec) {
            ctx->pc = 0x449804u;
            goto label_449804;
        }
    }
    ctx->pc = 0x4497F4u;
label_4497f4:
    // 0x4497f4: 0x0  nop
    ctx->pc = 0x4497f4u;
    // NOP
label_4497f8:
    // 0x4497f8: 0x1226000c  beq         $s1, $a2, . + 4 + (0xC << 2)
label_4497fc:
    if (ctx->pc == 0x4497FCu) {
        ctx->pc = 0x4497FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497F8u;
        // 0x4497fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449800u;
        goto label_449800;
    }
    ctx->pc = 0x4497F8u;
    {
        const bool branch_taken_0x4497f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x4497FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4497F8u;
        // 0x4497fc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4497f8) {
            ctx->pc = 0x44982Cu;
            goto label_44982c;
        }
    }
    ctx->pc = 0x449800u;
label_449800:
    // 0x449800: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x449800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_449804:
    // 0x449804: 0x12260009  beq         $s1, $a2, . + 4 + (0x9 << 2)
label_449808:
    if (ctx->pc == 0x449808u) {
        ctx->pc = 0x449808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449804u;
        // 0x449808: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44980Cu;
        goto label_44980c;
    }
    ctx->pc = 0x449804u;
    {
        const bool branch_taken_0x449804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x449808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449804u;
        // 0x449808: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449804) {
            ctx->pc = 0x44982Cu;
            goto label_44982c;
        }
    }
    ctx->pc = 0x44980Cu;
label_44980c:
    // 0x44980c: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x44980cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_449810:
    // 0x449810: 0x12260006  beq         $s1, $a2, . + 4 + (0x6 << 2)
label_449814:
    if (ctx->pc == 0x449814u) {
        ctx->pc = 0x449814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449810u;
        // 0x449814: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449818u;
        goto label_449818;
    }
    ctx->pc = 0x449810u;
    {
        const bool branch_taken_0x449810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x449814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449810u;
        // 0x449814: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449810) {
            ctx->pc = 0x44982Cu;
            goto label_44982c;
        }
    }
    ctx->pc = 0x449818u;
label_449818:
    // 0x449818: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x449818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_44981c:
    // 0x44981c: 0x12260003  beq         $s1, $a2, . + 4 + (0x3 << 2)
label_449820:
    if (ctx->pc == 0x449820u) {
        ctx->pc = 0x449820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44981Cu;
        // 0x449820: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449824u;
        goto label_449824;
    }
    ctx->pc = 0x44981Cu;
    {
        const bool branch_taken_0x44981c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x449820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44981Cu;
        // 0x449820: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44981c) {
            ctx->pc = 0x44982Cu;
            goto label_44982c;
        }
    }
    ctx->pc = 0x449824u;
label_449824:
    // 0x449824: 0x5e00fff4  bgtzl       $s0, . + 4 + (-0xC << 2)
label_449828:
    if (ctx->pc == 0x449828u) {
        ctx->pc = 0x449828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449824u;
        // 0x449828: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44982Cu;
        goto label_44982c;
    }
    ctx->pc = 0x449824u;
    {
        const bool branch_taken_0x449824 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x449824) {
            ctx->pc = 0x449828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449824u;
            // 0x449828: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4497F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4497f8;
        }
    }
    ctx->pc = 0x44982Cu;
label_44982c:
    // 0x44982c: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x44982cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_449830:
    // 0x449830: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x449830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_449834:
    // 0x449834: 0x1a00005e  blez        $s0, . + 4 + (0x5E << 2)
label_449838:
    if (ctx->pc == 0x449838u) {
        ctx->pc = 0x449838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449834u;
        // 0x449838: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44983Cu;
        goto label_44983c;
    }
    ctx->pc = 0x449834u;
    {
        const bool branch_taken_0x449834 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x449838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449834u;
        // 0x449838: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449834) {
            ctx->pc = 0x4499B0u;
            goto label_4499b0;
        }
    }
    ctx->pc = 0x44983Cu;
label_44983c:
    // 0x44983c: 0x101823  negu        $v1, $s0
    ctx->pc = 0x44983cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_449840:
    // 0x449840: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x449840u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_449844:
    // 0x449844: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x449844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_449848:
    // 0x449848: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_44984c:
    if (ctx->pc == 0x44984Cu) {
        ctx->pc = 0x44984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449848u;
        // 0x44984c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449850u;
        goto label_449850;
    }
    ctx->pc = 0x449848u;
    {
        const bool branch_taken_0x449848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449848u;
        // 0x44984c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449848) {
            ctx->pc = 0x4498E8u;
            goto label_4498e8;
        }
    }
    ctx->pc = 0x449850u;
label_449850:
    // 0x449850: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x449850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_449854:
    // 0x449854: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_449858:
    if (ctx->pc == 0x449858u) {
        ctx->pc = 0x449858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449854u;
        // 0x449858: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44985Cu;
        goto label_44985c;
    }
    ctx->pc = 0x449854u;
    {
        const bool branch_taken_0x449854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449854u;
        // 0x449858: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449854) {
            ctx->pc = 0x4498BCu;
            goto label_4498bc;
        }
    }
    ctx->pc = 0x44985Cu;
label_44985c:
    // 0x44985c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_449860:
    if (ctx->pc == 0x449860u) {
        ctx->pc = 0x449860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44985Cu;
        // 0x449860: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449864u;
        goto label_449864;
    }
    ctx->pc = 0x44985Cu;
    {
        const bool branch_taken_0x44985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44985c) {
            ctx->pc = 0x449860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44985Cu;
            // 0x449860: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449894u;
            goto label_449894;
        }
    }
    ctx->pc = 0x449864u;
label_449864:
    // 0x449864: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x449864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_449868:
    // 0x449868: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_44986c:
    if (ctx->pc == 0x44986Cu) {
        ctx->pc = 0x44986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449868u;
        // 0x44986c: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449870u;
        goto label_449870;
    }
    ctx->pc = 0x449868u;
    {
        const bool branch_taken_0x449868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x449868) {
            ctx->pc = 0x44986Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449868u;
            // 0x44986c: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449888u;
            goto label_449888;
        }
    }
    ctx->pc = 0x449870u;
label_449870:
    // 0x449870: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x449870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449874:
    // 0x449874: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x449874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_449878:
    // 0x449878: 0x40f809  jalr        $v0
label_44987c:
    if (ctx->pc == 0x44987Cu) {
        ctx->pc = 0x44987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449878u;
        // 0x44987c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449880u;
        goto label_449880;
    }
    ctx->pc = 0x449878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x449880u);
        ctx->pc = 0x44987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449878u;
        // 0x44987c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449878u, 0x449880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x449880u;
label_449880:
    // 0x449880: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_449884:
    if (ctx->pc == 0x449884u) {
        ctx->pc = 0x449884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449880u;
        // 0x449884: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449888u;
        goto label_449888;
    }
    ctx->pc = 0x449880u;
    {
        const bool branch_taken_0x449880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449880u;
        // 0x449884: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449880) {
            ctx->pc = 0x449984u;
            goto label_449984;
        }
    }
    ctx->pc = 0x449888u;
label_449888:
    // 0x449888: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x449888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_44988c:
    // 0x44988c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x44988cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_449890:
    // 0x449890: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x449890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_449894:
    // 0x449894: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_449898:
    if (ctx->pc == 0x449898u) {
        ctx->pc = 0x449898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449894u;
        // 0x449898: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44989Cu;
        goto label_44989c;
    }
    ctx->pc = 0x449894u;
    {
        const bool branch_taken_0x449894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x449894) {
            ctx->pc = 0x449898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449894u;
            // 0x449898: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4498B4u;
            goto label_4498b4;
        }
    }
    ctx->pc = 0x44989Cu;
label_44989c:
    // 0x44989c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x44989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4498a0:
    // 0x4498a0: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x4498a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_4498a4:
    // 0x4498a4: 0x40f809  jalr        $v0
label_4498a8:
    if (ctx->pc == 0x4498A8u) {
        ctx->pc = 0x4498A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498A4u;
        // 0x4498a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4498ACu;
        goto label_4498ac;
    }
    ctx->pc = 0x4498A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4498ACu);
        ctx->pc = 0x4498A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498A4u;
        // 0x4498a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4498A4u, 0x4498ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4498ACu;
label_4498ac:
    // 0x4498ac: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_4498b0:
    if (ctx->pc == 0x4498B0u) {
        ctx->pc = 0x4498B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498ACu;
        // 0x4498b0: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4498B4u;
        goto label_4498b4;
    }
    ctx->pc = 0x4498ACu;
    {
        const bool branch_taken_0x4498ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4498B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498ACu;
        // 0x4498b0: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4498ac) {
            ctx->pc = 0x449984u;
            goto label_449984;
        }
    }
    ctx->pc = 0x4498B4u;
label_4498b4:
    // 0x4498b4: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x4498b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_4498b8:
    // 0x4498b8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4498b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4498bc:
    // 0x4498bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4498bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4498c0:
    // 0x4498c0: 0x50800038  beql        $a0, $zero, . + 4 + (0x38 << 2)
label_4498c4:
    if (ctx->pc == 0x4498C4u) {
        ctx->pc = 0x4498C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498C0u;
        // 0x4498c4: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4498C8u;
        goto label_4498c8;
    }
    ctx->pc = 0x4498C0u;
    {
        const bool branch_taken_0x4498c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4498c0) {
            ctx->pc = 0x4498C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4498C0u;
            // 0x4498c4: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4499A4u;
            goto label_4499a4;
        }
    }
    ctx->pc = 0x4498C8u;
label_4498c8:
    // 0x4498c8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4498c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4498cc:
    // 0x4498cc: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x4498ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_4498d0:
    // 0x4498d0: 0x40f809  jalr        $v0
label_4498d4:
    if (ctx->pc == 0x4498D4u) {
        ctx->pc = 0x4498D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498D0u;
        // 0x4498d4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4498D8u;
        goto label_4498d8;
    }
    ctx->pc = 0x4498D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4498D8u);
        ctx->pc = 0x4498D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498D0u;
        // 0x4498d4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4498D0u, 0x4498D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4498D8u;
label_4498d8:
    // 0x4498d8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_4498dc:
    if (ctx->pc == 0x4498DCu) {
        ctx->pc = 0x4498DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498D8u;
        // 0x4498dc: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4498E0u;
        goto label_4498e0;
    }
    ctx->pc = 0x4498D8u;
    {
        const bool branch_taken_0x4498d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4498DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498D8u;
        // 0x4498dc: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4498d8) {
            ctx->pc = 0x449984u;
            goto label_449984;
        }
    }
    ctx->pc = 0x4498E0u;
label_4498e0:
    // 0x4498e0: 0x10000031  b           . + 4 + (0x31 << 2)
label_4498e4:
    if (ctx->pc == 0x4498E4u) {
        ctx->pc = 0x4498E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498E0u;
        // 0x4498e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4498E8u;
        goto label_4498e8;
    }
    ctx->pc = 0x4498E0u;
    {
        const bool branch_taken_0x4498e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4498E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498E0u;
        // 0x4498e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4498e0) {
            ctx->pc = 0x4499A8u;
            goto label_4499a8;
        }
    }
    ctx->pc = 0x4498E8u;
label_4498e8:
    // 0x4498e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4498e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4498ec:
    // 0x4498ec: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_4498f0:
    if (ctx->pc == 0x4498F0u) {
        ctx->pc = 0x4498F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498ECu;
        // 0x4498f0: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4498F4u;
        goto label_4498f4;
    }
    ctx->pc = 0x4498ECu;
    {
        const bool branch_taken_0x4498ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4498ec) {
            ctx->pc = 0x4498F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4498ECu;
            // 0x4498f0: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449910u;
            goto label_449910;
        }
    }
    ctx->pc = 0x4498F4u;
label_4498f4:
    // 0x4498f4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4498f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4498f8:
    // 0x4498f8: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x4498f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_4498fc:
    // 0x4498fc: 0x40f809  jalr        $v0
label_449900:
    if (ctx->pc == 0x449900u) {
        ctx->pc = 0x449900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498FCu;
        // 0x449900: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449904u;
        goto label_449904;
    }
    ctx->pc = 0x4498FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x449904u);
        ctx->pc = 0x449900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4498FCu;
        // 0x449900: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4498FCu, 0x449904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x449904u;
label_449904:
    // 0x449904: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_449908:
    if (ctx->pc == 0x449908u) {
        ctx->pc = 0x44990Cu;
        goto label_44990c;
    }
    ctx->pc = 0x449904u;
    {
        const bool branch_taken_0x449904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449904) {
            ctx->pc = 0x449984u;
            goto label_449984;
        }
    }
    ctx->pc = 0x44990Cu;
label_44990c:
    // 0x44990c: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x44990cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_449910:
    // 0x449910: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x449910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_449914:
    // 0x449914: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_449918:
    if (ctx->pc == 0x449918u) {
        ctx->pc = 0x449918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449914u;
        // 0x449918: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44991Cu;
        goto label_44991c;
    }
    ctx->pc = 0x449914u;
    {
        const bool branch_taken_0x449914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x449918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449914u;
        // 0x449918: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449914) {
            ctx->pc = 0x449934u;
            goto label_449934;
        }
    }
    ctx->pc = 0x44991Cu;
label_44991c:
    // 0x44991c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x44991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449920:
    // 0x449920: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x449920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_449924:
    // 0x449924: 0x40f809  jalr        $v0
label_449928:
    if (ctx->pc == 0x449928u) {
        ctx->pc = 0x449928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449924u;
        // 0x449928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44992Cu;
        goto label_44992c;
    }
    ctx->pc = 0x449924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44992Cu);
        ctx->pc = 0x449928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449924u;
        // 0x449928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449924u, 0x44992Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44992Cu;
label_44992c:
    // 0x44992c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_449930:
    if (ctx->pc == 0x449930u) {
        ctx->pc = 0x449934u;
        goto label_449934;
    }
    ctx->pc = 0x44992Cu;
    {
        const bool branch_taken_0x44992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44992c) {
            ctx->pc = 0x449984u;
            goto label_449984;
        }
    }
    ctx->pc = 0x449934u;
label_449934:
    // 0x449934: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x449934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_449938:
    // 0x449938: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x449938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_44993c:
    // 0x44993c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_449940:
    if (ctx->pc == 0x449940u) {
        ctx->pc = 0x449940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44993Cu;
        // 0x449940: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449944u;
        goto label_449944;
    }
    ctx->pc = 0x44993Cu;
    {
        const bool branch_taken_0x44993c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x449940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44993Cu;
        // 0x449940: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44993c) {
            ctx->pc = 0x44995Cu;
            goto label_44995c;
        }
    }
    ctx->pc = 0x449944u;
label_449944:
    // 0x449944: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x449944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449948:
    // 0x449948: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x449948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_44994c:
    // 0x44994c: 0x40f809  jalr        $v0
label_449950:
    if (ctx->pc == 0x449950u) {
        ctx->pc = 0x449950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44994Cu;
        // 0x449950: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449954u;
        goto label_449954;
    }
    ctx->pc = 0x44994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x449954u);
        ctx->pc = 0x449950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44994Cu;
        // 0x449950: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44994Cu, 0x449954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x449954u;
label_449954:
    // 0x449954: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_449958:
    if (ctx->pc == 0x449958u) {
        ctx->pc = 0x44995Cu;
        goto label_44995c;
    }
    ctx->pc = 0x449954u;
    {
        const bool branch_taken_0x449954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449954) {
            ctx->pc = 0x449984u;
            goto label_449984;
        }
    }
    ctx->pc = 0x44995Cu;
label_44995c:
    // 0x44995c: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x44995cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_449960:
    // 0x449960: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x449960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_449964:
    // 0x449964: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_449968:
    if (ctx->pc == 0x449968u) {
        ctx->pc = 0x449968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449964u;
        // 0x449968: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44996Cu;
        goto label_44996c;
    }
    ctx->pc = 0x449964u;
    {
        const bool branch_taken_0x449964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x449968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449964u;
        // 0x449968: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449964) {
            ctx->pc = 0x4499A0u;
            goto label_4499a0;
        }
    }
    ctx->pc = 0x44996Cu;
label_44996c:
    // 0x44996c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x44996cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449970:
    // 0x449970: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x449970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
label_449974:
    // 0x449974: 0x40f809  jalr        $v0
label_449978:
    if (ctx->pc == 0x449978u) {
        ctx->pc = 0x449978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449974u;
        // 0x449978: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44997Cu;
        goto label_44997c;
    }
    ctx->pc = 0x449974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x44997Cu);
        ctx->pc = 0x449978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449974u;
        // 0x449978: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449974u, 0x44997Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44997Cu;
label_44997c:
    // 0x44997c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_449980:
    if (ctx->pc == 0x449980u) {
        ctx->pc = 0x449980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44997Cu;
        // 0x449980: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449984u;
        goto label_449984;
    }
    ctx->pc = 0x44997Cu;
    {
        const bool branch_taken_0x44997c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x449980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44997Cu;
        // 0x449980: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44997c) {
            ctx->pc = 0x4499A4u;
            goto label_4499a4;
        }
    }
    ctx->pc = 0x449984u;
label_449984:
    // 0x449984: 0x5260000e  beql        $s3, $zero, . + 4 + (0xE << 2)
label_449988:
    if (ctx->pc == 0x449988u) {
        ctx->pc = 0x449988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449984u;
        // 0x449988: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44998Cu;
        goto label_44998c;
    }
    ctx->pc = 0x449984u;
    {
        const bool branch_taken_0x449984 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x449984) {
            ctx->pc = 0x449988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449984u;
            // 0x449988: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4499C0u;
            goto label_4499c0;
        }
    }
    ctx->pc = 0x44998Cu;
label_44998c:
    // 0x44998c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x44998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_449990:
    // 0x449990: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x449990u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_449994:
    // 0x449994: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x449994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_449998:
    // 0x449998: 0x10000009  b           . + 4 + (0x9 << 2)
label_44999c:
    if (ctx->pc == 0x44999Cu) {
        ctx->pc = 0x44999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449998u;
        // 0x44999c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4499A0u;
        goto label_4499a0;
    }
    ctx->pc = 0x449998u;
    {
        const bool branch_taken_0x449998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449998u;
        // 0x44999c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449998) {
            ctx->pc = 0x4499C0u;
            goto label_4499c0;
        }
    }
    ctx->pc = 0x4499A0u;
label_4499a0:
    // 0x4499a0: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x4499a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_4499a4:
    // 0x4499a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4499a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4499a8:
    // 0x4499a8: 0x1e00ffcf  bgtz        $s0, . + 4 + (-0x31 << 2)
label_4499ac:
    if (ctx->pc == 0x4499ACu) {
        ctx->pc = 0x4499ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4499A8u;
        // 0x4499ac: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4499B0u;
        goto label_4499b0;
    }
    ctx->pc = 0x4499A8u;
    {
        const bool branch_taken_0x4499a8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x4499ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4499A8u;
        // 0x4499ac: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4499a8) {
            ctx->pc = 0x4498E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4498e8;
        }
    }
    ctx->pc = 0x4499B0u;
label_4499b0:
    // 0x4499b0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_4499b4:
    if (ctx->pc == 0x4499B4u) {
        ctx->pc = 0x4499B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4499B0u;
        // 0x4499b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4499B8u;
        goto label_4499b8;
    }
    ctx->pc = 0x4499B0u;
    {
        const bool branch_taken_0x4499b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4499B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4499B0u;
        // 0x4499b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4499b0) {
            ctx->pc = 0x4499BCu;
            goto label_4499bc;
        }
    }
    ctx->pc = 0x4499B8u;
label_4499b8:
    // 0x4499b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4499b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4499bc:
    // 0x4499bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4499bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4499c0:
    // 0x4499c0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4499c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4499c4:
    // 0x4499c4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4499c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4499c8:
    // 0x4499c8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4499c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4499cc:
    // 0x4499cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4499ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4499d0:
    // 0x4499d0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4499d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4499d4:
    // 0x4499d4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4499d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4499d8:
    // 0x4499d8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4499d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4499dc:
    // 0x4499dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4499dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4499e0:
    // 0x4499e0: 0x3e00008  jr          $ra
label_4499e4:
    if (ctx->pc == 0x4499E4u) {
        ctx->pc = 0x4499E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4499E0u;
        // 0x4499e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4499E8u;
        goto label_4499e8;
    }
    ctx->pc = 0x4499E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4499E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4499E0u;
        // 0x4499e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4499E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4499E8u;
label_4499e8:
    // 0x4499e8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_4499ec:
    if (ctx->pc == 0x4499ECu) {
        ctx->pc = 0x4499F0u;
        goto label_4499f0;
    }
    ctx->pc = 0x4499E8u;
    {
        const bool branch_taken_0x4499e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4499e8) {
            ctx->pc = 0x449A10u;
            goto label_449a10;
        }
    }
    ctx->pc = 0x4499F0u;
label_4499f0:
    // 0x4499f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4499f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4499f4:
    // 0x4499f4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4499f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4499f8:
    // 0x4499f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4499fc:
    if (ctx->pc == 0x4499FCu) {
        ctx->pc = 0x4499FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4499F8u;
        // 0x4499fc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449A00u;
        goto label_449a00;
    }
    ctx->pc = 0x4499F8u;
    {
        const bool branch_taken_0x4499f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4499FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4499F8u;
        // 0x4499fc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4499f8) {
            ctx->pc = 0x449A10u;
            goto label_449a10;
        }
    }
    ctx->pc = 0x449A00u;
label_449a00:
    // 0x449a00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x449a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_449a04:
    // 0x449a04: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x449a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_449a08:
    // 0x449a08: 0x3e00008  jr          $ra
label_449a0c:
    if (ctx->pc == 0x449A0Cu) {
        ctx->pc = 0x449A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A08u;
        // 0x449a0c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449A10u;
        goto label_449a10;
    }
    ctx->pc = 0x449A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A08u;
        // 0x449a0c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449A10u;
label_449a10:
    // 0x449a10: 0x3e00008  jr          $ra
label_449a14:
    if (ctx->pc == 0x449A14u) {
        ctx->pc = 0x449A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A10u;
        // 0x449a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449A18u;
        goto label_449a18;
    }
    ctx->pc = 0x449A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A10u;
        // 0x449a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449A18u;
label_449a18:
    // 0x449a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x449a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_449a1c:
    // 0x449a1c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x449a1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449a20:
    // 0x449a20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x449a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_449a24:
    // 0x449a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x449a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449a28:
    // 0x449a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x449a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_449a2c:
    // 0x449a2c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_449a30:
    if (ctx->pc == 0x449A30u) {
        ctx->pc = 0x449A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A2Cu;
        // 0x449a30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449A34u;
        goto label_449a34;
    }
    ctx->pc = 0x449A2Cu;
    {
        const bool branch_taken_0x449a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x449A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A2Cu;
        // 0x449a30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449a2c) {
            ctx->pc = 0x449A50u;
            goto label_449a50;
        }
    }
    ctx->pc = 0x449A34u;
label_449a34:
    // 0x449a34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x449a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_449a38:
    // 0x449a38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_449a3c:
    if (ctx->pc == 0x449A3Cu) {
        ctx->pc = 0x449A40u;
        goto label_449a40;
    }
    ctx->pc = 0x449A38u;
    {
        const bool branch_taken_0x449a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449a38) {
            ctx->pc = 0x449A50u;
            goto label_449a50;
        }
    }
    ctx->pc = 0x449A40u;
label_449a40:
    // 0x449a40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_449a44:
    if (ctx->pc == 0x449A44u) {
        ctx->pc = 0x449A48u;
        goto label_449a48;
    }
    ctx->pc = 0x449A40u;
    {
        const bool branch_taken_0x449a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x449a40) {
            ctx->pc = 0x449A50u;
            goto label_449a50;
        }
    }
    ctx->pc = 0x449A48u;
label_449a48:
    // 0x449a48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x449a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449a4c:
    // 0x449a4c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x449a4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_449a50:
    // 0x449a50: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_449a54:
    if (ctx->pc == 0x449A54u) {
        ctx->pc = 0x449A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A50u;
        // 0x449a54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449A58u;
        goto label_449a58;
    }
    ctx->pc = 0x449A50u;
    {
        const bool branch_taken_0x449a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x449A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A50u;
        // 0x449a54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449a50) {
            ctx->pc = 0x449A64u;
            goto label_449a64;
        }
    }
    ctx->pc = 0x449A58u;
label_449a58:
    // 0x449a58: 0xc111532  jal         func_4454C8
label_449a5c:
    if (ctx->pc == 0x449A5Cu) {
        ctx->pc = 0x449A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A58u;
        // 0x449a5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449A60u;
        goto label_449a60;
    }
    ctx->pc = 0x449A58u;
    SET_GPR_U32(ctx, 31, 0x449A60u);
    ctx->pc = 0x449A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x449A58u;
    // 0x449a5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x449A58u, 0x449A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x449A60u;
label_449a60:
    // 0x449a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x449a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_449a64:
    // 0x449a64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x449a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_449a68:
    // 0x449a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x449a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_449a6c:
    // 0x449a6c: 0x3e00008  jr          $ra
label_449a70:
    if (ctx->pc == 0x449A70u) {
        ctx->pc = 0x449A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A6Cu;
        // 0x449a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449A74u;
        goto label_449a74;
    }
    ctx->pc = 0x449A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A6Cu;
        // 0x449a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449A74u;
label_449a74:
    // 0x449a74: 0x0  nop
    ctx->pc = 0x449a74u;
    // NOP
label_449a78:
    // 0x449a78: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x449a78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449a7c:
    // 0x449a7c: 0x1100001d  beqz        $t0, . + 4 + (0x1D << 2)
label_449a80:
    if (ctx->pc == 0x449A80u) {
        ctx->pc = 0x449A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A7Cu;
        // 0x449a80: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449A84u;
        goto label_449a84;
    }
    ctx->pc = 0x449A7Cu;
    {
        const bool branch_taken_0x449a7c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x449A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A7Cu;
        // 0x449a80: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449a7c) {
            ctx->pc = 0x449AF4u;
            goto label_449af4;
        }
    }
    ctx->pc = 0x449A84u;
label_449a84:
    // 0x449a84: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x449a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_449a88:
    // 0x449a88: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_449a8c:
    if (ctx->pc == 0x449A8Cu) {
        ctx->pc = 0x449A90u;
        goto label_449a90;
    }
    ctx->pc = 0x449A88u;
    {
        const bool branch_taken_0x449a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449a88) {
            ctx->pc = 0x449AF4u;
            goto label_449af4;
        }
    }
    ctx->pc = 0x449A90u;
label_449a90:
    // 0x449a90: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
label_449a94:
    if (ctx->pc == 0x449A94u) {
        ctx->pc = 0x449A98u;
        goto label_449a98;
    }
    ctx->pc = 0x449A90u;
    {
        const bool branch_taken_0x449a90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x449a90) {
            ctx->pc = 0x449AF4u;
            goto label_449af4;
        }
    }
    ctx->pc = 0x449A98u;
label_449a98:
    // 0x449a98: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x449a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_449a9c:
    // 0x449a9c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_449aa0:
    if (ctx->pc == 0x449AA0u) {
        ctx->pc = 0x449AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A9Cu;
        // 0x449aa0: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449AA4u;
        goto label_449aa4;
    }
    ctx->pc = 0x449A9Cu;
    {
        const bool branch_taken_0x449a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x449AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449A9Cu;
        // 0x449aa0: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449a9c) {
            ctx->pc = 0x449AF4u;
            goto label_449af4;
        }
    }
    ctx->pc = 0x449AA4u;
label_449aa4:
    // 0x449aa4: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x449aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_449aa8:
    // 0x449aa8: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x449aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_449aac:
    // 0x449aac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x449aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_449ab0:
    // 0x449ab0: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x449ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_449ab4:
    // 0x449ab4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x449ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_449ab8:
    // 0x449ab8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x449ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_449abc:
    // 0x449abc: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x449abcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_449ac0:
    // 0x449ac0: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x449ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_449ac4:
    // 0x449ac4: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x449ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_449ac8:
    // 0x449ac8: 0x14870004  bne         $a0, $a3, . + 4 + (0x4 << 2)
label_449acc:
    if (ctx->pc == 0x449ACCu) {
        ctx->pc = 0x449ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449AC8u;
        // 0x449acc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x449AD0u;
        goto label_449ad0;
    }
    ctx->pc = 0x449AC8u;
    {
        const bool branch_taken_0x449ac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x449ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449AC8u;
        // 0x449acc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ac8) {
            ctx->pc = 0x449ADCu;
            goto label_449adc;
        }
    }
    ctx->pc = 0x449AD0u;
label_449ad0:
    // 0x449ad0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x449ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_449ad4:
    // 0x449ad4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x449ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_449ad8:
    // 0x449ad8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x449ad8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_449adc:
    // 0x449adc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x449adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_449ae0:
    // 0x449ae0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x449ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_449ae4:
    // 0x449ae4: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
label_449ae8:
    if (ctx->pc == 0x449AE8u) {
        ctx->pc = 0x449AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449AE4u;
        // 0x449ae8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449AECu;
        goto label_449aec;
    }
    ctx->pc = 0x449AE4u;
    {
        const bool branch_taken_0x449ae4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x449AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449AE4u;
        // 0x449ae8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449ae4) {
            ctx->pc = 0x449AF4u;
            goto label_449af4;
        }
    }
    ctx->pc = 0x449AECu;
label_449aec:
    // 0x449aec: 0x3e00008  jr          $ra
label_449af0:
    if (ctx->pc == 0x449AF0u) {
        ctx->pc = 0x449AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449AECu;
        // 0x449af0: 0xad060028  sw          $a2, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449AF4u;
        goto label_449af4;
    }
    ctx->pc = 0x449AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449AECu;
        // 0x449af0: 0xad060028  sw          $a2, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449AF4u;
label_449af4:
    // 0x449af4: 0x3e00008  jr          $ra
label_449af8:
    if (ctx->pc == 0x449AF8u) {
        ctx->pc = 0x449AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449AF4u;
        // 0x449af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449AFCu;
        goto label_449afc;
    }
    ctx->pc = 0x449AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449AF4u;
        // 0x449af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449AFCu;
label_449afc:
    // 0x449afc: 0x0  nop
    ctx->pc = 0x449afcu;
    // NOP
label_449b00:
    // 0x449b00: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_449b04:
    if (ctx->pc == 0x449B04u) {
        ctx->pc = 0x449B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449B00u;
        // 0x449b04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449B08u;
        goto label_449b08;
    }
    ctx->pc = 0x449B00u;
    {
        const bool branch_taken_0x449b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x449B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449B00u;
        // 0x449b04: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449b00) {
            ctx->pc = 0x449B4Cu;
            goto label_449b4c;
        }
    }
    ctx->pc = 0x449B08u;
label_449b08:
    // 0x449b08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x449b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449b0c:
    // 0x449b0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_449b10:
    if (ctx->pc == 0x449B10u) {
        ctx->pc = 0x449B14u;
        goto label_449b14;
    }
    ctx->pc = 0x449B0Cu;
    {
        const bool branch_taken_0x449b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449b0c) {
            ctx->pc = 0x449B4Cu;
            goto label_449b4c;
        }
    }
    ctx->pc = 0x449B14u;
label_449b14:
    // 0x449b14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x449b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_449b18:
    // 0x449b18: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x449b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_449b1c:
    // 0x449b1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x449b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_449b20:
    // 0x449b20: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
label_449b24:
    if (ctx->pc == 0x449B24u) {
        ctx->pc = 0x449B28u;
        goto label_449b28;
    }
    ctx->pc = 0x449B20u;
    {
        const bool branch_taken_0x449b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x449b20) {
            ctx->pc = 0x449B4Cu;
            goto label_449b4c;
        }
    }
    ctx->pc = 0x449B28u;
label_449b28:
    // 0x449b28: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x449b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_449b2c:
    // 0x449b2c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x449b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_449b30:
    // 0x449b30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_449b34:
    if (ctx->pc == 0x449B34u) {
        ctx->pc = 0x449B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449B30u;
        // 0x449b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449B38u;
        goto label_449b38;
    }
    ctx->pc = 0x449B30u;
    {
        const bool branch_taken_0x449b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x449b30) {
            ctx->pc = 0x449B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x449B30u;
            // 0x449b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x449B48u;
            goto label_449b48;
        }
    }
    ctx->pc = 0x449B38u;
label_449b38:
    // 0x449b38: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x449b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_449b3c:
    // 0x449b3c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x449b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_449b40:
    // 0x449b40: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x449b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_449b44:
    // 0x449b44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x449b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_449b48:
    // 0x449b48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x449b48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_449b4c:
    // 0x449b4c: 0x3e00008  jr          $ra
label_449b50:
    if (ctx->pc == 0x449B50u) {
        ctx->pc = 0x449B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449B4Cu;
        // 0x449b50: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x449B54u;
        goto label_449b54;
    }
    ctx->pc = 0x449B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x449B4Cu;
        // 0x449b50: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x449B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x449B54u;
label_449b54:
    // 0x449b54: 0x0  nop
    ctx->pc = 0x449b54u;
    // NOP
    ctx->pc = 0x449b58u;
}
