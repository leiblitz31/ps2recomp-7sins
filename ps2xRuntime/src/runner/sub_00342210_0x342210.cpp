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

// Function: sub_00342210
// Address: 0x342210 - 0x342620
void sub_00342210_0x342210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342210_0x342210");
#endif

    switch (ctx->pc) {
        case 0x342210u: goto label_342210;
        case 0x342214u: goto label_342214;
        case 0x342218u: goto label_342218;
        case 0x34221cu: goto label_34221c;
        case 0x342220u: goto label_342220;
        case 0x342224u: goto label_342224;
        case 0x342228u: goto label_342228;
        case 0x34222cu: goto label_34222c;
        case 0x342230u: goto label_342230;
        case 0x342234u: goto label_342234;
        case 0x342238u: goto label_342238;
        case 0x34223cu: goto label_34223c;
        case 0x342240u: goto label_342240;
        case 0x342244u: goto label_342244;
        case 0x342248u: goto label_342248;
        case 0x34224cu: goto label_34224c;
        case 0x342250u: goto label_342250;
        case 0x342254u: goto label_342254;
        case 0x342258u: goto label_342258;
        case 0x34225cu: goto label_34225c;
        case 0x342260u: goto label_342260;
        case 0x342264u: goto label_342264;
        case 0x342268u: goto label_342268;
        case 0x34226cu: goto label_34226c;
        case 0x342270u: goto label_342270;
        case 0x342274u: goto label_342274;
        case 0x342278u: goto label_342278;
        case 0x34227cu: goto label_34227c;
        case 0x342280u: goto label_342280;
        case 0x342284u: goto label_342284;
        case 0x342288u: goto label_342288;
        case 0x34228cu: goto label_34228c;
        case 0x342290u: goto label_342290;
        case 0x342294u: goto label_342294;
        case 0x342298u: goto label_342298;
        case 0x34229cu: goto label_34229c;
        case 0x3422a0u: goto label_3422a0;
        case 0x3422a4u: goto label_3422a4;
        case 0x3422a8u: goto label_3422a8;
        case 0x3422acu: goto label_3422ac;
        case 0x3422b0u: goto label_3422b0;
        case 0x3422b4u: goto label_3422b4;
        case 0x3422b8u: goto label_3422b8;
        case 0x3422bcu: goto label_3422bc;
        case 0x3422c0u: goto label_3422c0;
        case 0x3422c4u: goto label_3422c4;
        case 0x3422c8u: goto label_3422c8;
        case 0x3422ccu: goto label_3422cc;
        case 0x3422d0u: goto label_3422d0;
        case 0x3422d4u: goto label_3422d4;
        case 0x3422d8u: goto label_3422d8;
        case 0x3422dcu: goto label_3422dc;
        case 0x3422e0u: goto label_3422e0;
        case 0x3422e4u: goto label_3422e4;
        case 0x3422e8u: goto label_3422e8;
        case 0x3422ecu: goto label_3422ec;
        case 0x3422f0u: goto label_3422f0;
        case 0x3422f4u: goto label_3422f4;
        case 0x3422f8u: goto label_3422f8;
        case 0x3422fcu: goto label_3422fc;
        case 0x342300u: goto label_342300;
        case 0x342304u: goto label_342304;
        case 0x342308u: goto label_342308;
        case 0x34230cu: goto label_34230c;
        case 0x342310u: goto label_342310;
        case 0x342314u: goto label_342314;
        case 0x342318u: goto label_342318;
        case 0x34231cu: goto label_34231c;
        case 0x342320u: goto label_342320;
        case 0x342324u: goto label_342324;
        case 0x342328u: goto label_342328;
        case 0x34232cu: goto label_34232c;
        case 0x342330u: goto label_342330;
        case 0x342334u: goto label_342334;
        case 0x342338u: goto label_342338;
        case 0x34233cu: goto label_34233c;
        case 0x342340u: goto label_342340;
        case 0x342344u: goto label_342344;
        case 0x342348u: goto label_342348;
        case 0x34234cu: goto label_34234c;
        case 0x342350u: goto label_342350;
        case 0x342354u: goto label_342354;
        case 0x342358u: goto label_342358;
        case 0x34235cu: goto label_34235c;
        case 0x342360u: goto label_342360;
        case 0x342364u: goto label_342364;
        case 0x342368u: goto label_342368;
        case 0x34236cu: goto label_34236c;
        case 0x342370u: goto label_342370;
        case 0x342374u: goto label_342374;
        case 0x342378u: goto label_342378;
        case 0x34237cu: goto label_34237c;
        case 0x342380u: goto label_342380;
        case 0x342384u: goto label_342384;
        case 0x342388u: goto label_342388;
        case 0x34238cu: goto label_34238c;
        case 0x342390u: goto label_342390;
        case 0x342394u: goto label_342394;
        case 0x342398u: goto label_342398;
        case 0x34239cu: goto label_34239c;
        case 0x3423a0u: goto label_3423a0;
        case 0x3423a4u: goto label_3423a4;
        case 0x3423a8u: goto label_3423a8;
        case 0x3423acu: goto label_3423ac;
        case 0x3423b0u: goto label_3423b0;
        case 0x3423b4u: goto label_3423b4;
        case 0x3423b8u: goto label_3423b8;
        case 0x3423bcu: goto label_3423bc;
        case 0x3423c0u: goto label_3423c0;
        case 0x3423c4u: goto label_3423c4;
        case 0x3423c8u: goto label_3423c8;
        case 0x3423ccu: goto label_3423cc;
        case 0x3423d0u: goto label_3423d0;
        case 0x3423d4u: goto label_3423d4;
        case 0x3423d8u: goto label_3423d8;
        case 0x3423dcu: goto label_3423dc;
        case 0x3423e0u: goto label_3423e0;
        case 0x3423e4u: goto label_3423e4;
        case 0x3423e8u: goto label_3423e8;
        case 0x3423ecu: goto label_3423ec;
        case 0x3423f0u: goto label_3423f0;
        case 0x3423f4u: goto label_3423f4;
        case 0x3423f8u: goto label_3423f8;
        case 0x3423fcu: goto label_3423fc;
        case 0x342400u: goto label_342400;
        case 0x342404u: goto label_342404;
        case 0x342408u: goto label_342408;
        case 0x34240cu: goto label_34240c;
        case 0x342410u: goto label_342410;
        case 0x342414u: goto label_342414;
        case 0x342418u: goto label_342418;
        case 0x34241cu: goto label_34241c;
        case 0x342420u: goto label_342420;
        case 0x342424u: goto label_342424;
        case 0x342428u: goto label_342428;
        case 0x34242cu: goto label_34242c;
        case 0x342430u: goto label_342430;
        case 0x342434u: goto label_342434;
        case 0x342438u: goto label_342438;
        case 0x34243cu: goto label_34243c;
        case 0x342440u: goto label_342440;
        case 0x342444u: goto label_342444;
        case 0x342448u: goto label_342448;
        case 0x34244cu: goto label_34244c;
        case 0x342450u: goto label_342450;
        case 0x342454u: goto label_342454;
        case 0x342458u: goto label_342458;
        case 0x34245cu: goto label_34245c;
        case 0x342460u: goto label_342460;
        case 0x342464u: goto label_342464;
        case 0x342468u: goto label_342468;
        case 0x34246cu: goto label_34246c;
        case 0x342470u: goto label_342470;
        case 0x342474u: goto label_342474;
        case 0x342478u: goto label_342478;
        case 0x34247cu: goto label_34247c;
        case 0x342480u: goto label_342480;
        case 0x342484u: goto label_342484;
        case 0x342488u: goto label_342488;
        case 0x34248cu: goto label_34248c;
        case 0x342490u: goto label_342490;
        case 0x342494u: goto label_342494;
        case 0x342498u: goto label_342498;
        case 0x34249cu: goto label_34249c;
        case 0x3424a0u: goto label_3424a0;
        case 0x3424a4u: goto label_3424a4;
        case 0x3424a8u: goto label_3424a8;
        case 0x3424acu: goto label_3424ac;
        case 0x3424b0u: goto label_3424b0;
        case 0x3424b4u: goto label_3424b4;
        case 0x3424b8u: goto label_3424b8;
        case 0x3424bcu: goto label_3424bc;
        case 0x3424c0u: goto label_3424c0;
        case 0x3424c4u: goto label_3424c4;
        case 0x3424c8u: goto label_3424c8;
        case 0x3424ccu: goto label_3424cc;
        case 0x3424d0u: goto label_3424d0;
        case 0x3424d4u: goto label_3424d4;
        case 0x3424d8u: goto label_3424d8;
        case 0x3424dcu: goto label_3424dc;
        case 0x3424e0u: goto label_3424e0;
        case 0x3424e4u: goto label_3424e4;
        case 0x3424e8u: goto label_3424e8;
        case 0x3424ecu: goto label_3424ec;
        case 0x3424f0u: goto label_3424f0;
        case 0x3424f4u: goto label_3424f4;
        case 0x3424f8u: goto label_3424f8;
        case 0x3424fcu: goto label_3424fc;
        case 0x342500u: goto label_342500;
        case 0x342504u: goto label_342504;
        case 0x342508u: goto label_342508;
        case 0x34250cu: goto label_34250c;
        case 0x342510u: goto label_342510;
        case 0x342514u: goto label_342514;
        case 0x342518u: goto label_342518;
        case 0x34251cu: goto label_34251c;
        case 0x342520u: goto label_342520;
        case 0x342524u: goto label_342524;
        case 0x342528u: goto label_342528;
        case 0x34252cu: goto label_34252c;
        case 0x342530u: goto label_342530;
        case 0x342534u: goto label_342534;
        case 0x342538u: goto label_342538;
        case 0x34253cu: goto label_34253c;
        case 0x342540u: goto label_342540;
        case 0x342544u: goto label_342544;
        case 0x342548u: goto label_342548;
        case 0x34254cu: goto label_34254c;
        case 0x342550u: goto label_342550;
        case 0x342554u: goto label_342554;
        case 0x342558u: goto label_342558;
        case 0x34255cu: goto label_34255c;
        case 0x342560u: goto label_342560;
        case 0x342564u: goto label_342564;
        case 0x342568u: goto label_342568;
        case 0x34256cu: goto label_34256c;
        case 0x342570u: goto label_342570;
        case 0x342574u: goto label_342574;
        case 0x342578u: goto label_342578;
        case 0x34257cu: goto label_34257c;
        case 0x342580u: goto label_342580;
        case 0x342584u: goto label_342584;
        case 0x342588u: goto label_342588;
        case 0x34258cu: goto label_34258c;
        case 0x342590u: goto label_342590;
        case 0x342594u: goto label_342594;
        case 0x342598u: goto label_342598;
        case 0x34259cu: goto label_34259c;
        case 0x3425a0u: goto label_3425a0;
        case 0x3425a4u: goto label_3425a4;
        case 0x3425a8u: goto label_3425a8;
        case 0x3425acu: goto label_3425ac;
        case 0x3425b0u: goto label_3425b0;
        case 0x3425b4u: goto label_3425b4;
        case 0x3425b8u: goto label_3425b8;
        case 0x3425bcu: goto label_3425bc;
        case 0x3425c0u: goto label_3425c0;
        case 0x3425c4u: goto label_3425c4;
        case 0x3425c8u: goto label_3425c8;
        case 0x3425ccu: goto label_3425cc;
        case 0x3425d0u: goto label_3425d0;
        case 0x3425d4u: goto label_3425d4;
        case 0x3425d8u: goto label_3425d8;
        case 0x3425dcu: goto label_3425dc;
        case 0x3425e0u: goto label_3425e0;
        case 0x3425e4u: goto label_3425e4;
        case 0x3425e8u: goto label_3425e8;
        case 0x3425ecu: goto label_3425ec;
        case 0x3425f0u: goto label_3425f0;
        case 0x3425f4u: goto label_3425f4;
        case 0x3425f8u: goto label_3425f8;
        case 0x3425fcu: goto label_3425fc;
        case 0x342600u: goto label_342600;
        case 0x342604u: goto label_342604;
        case 0x342608u: goto label_342608;
        case 0x34260cu: goto label_34260c;
        case 0x342610u: goto label_342610;
        case 0x342614u: goto label_342614;
        case 0x342618u: goto label_342618;
        case 0x34261cu: goto label_34261c;
        default: break;
    }

    ctx->pc = 0x342210u;

label_342210:
    // 0x342210: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x342210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_342214:
    // 0x342214: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x342214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_342218:
    // 0x342218: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x342218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_34221c:
    // 0x34221c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x34221cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_342220:
    // 0x342220: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x342220u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_342224:
    // 0x342224: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x342224u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342228:
    // 0x342228: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x342228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_34222c:
    // 0x34222c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x34222cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_342230:
    // 0x342230: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x342230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_342234:
    // 0x342234: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x342234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_342238:
    // 0x342238: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x342238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_34223c:
    // 0x34223c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x34223cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_342240:
    // 0x342240: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x342240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_342244:
    // 0x342244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x342244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_342248:
    // 0x342248: 0xc103468  jal         func_40D1A0
label_34224c:
    if (ctx->pc == 0x34224Cu) {
        ctx->pc = 0x34224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342248u;
        // 0x34224c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342250u;
        goto label_342250;
    }
    ctx->pc = 0x342248u;
    SET_GPR_U32(ctx, 31, 0x342250u);
    ctx->pc = 0x34224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342248u;
    // 0x34224c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x342248u, 0x342250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342250u;
label_342250:
    // 0x342250: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x342250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_342254:
    // 0x342254: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x342254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_342258:
    // 0x342258: 0xc103468  jal         func_40D1A0
label_34225c:
    if (ctx->pc == 0x34225Cu) {
        ctx->pc = 0x34225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342258u;
        // 0x34225c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342260u;
        goto label_342260;
    }
    ctx->pc = 0x342258u;
    SET_GPR_U32(ctx, 31, 0x342260u);
    ctx->pc = 0x34225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342258u;
    // 0x34225c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x342258u, 0x342260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342260u;
label_342260:
    // 0x342260: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x342260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_342264:
    // 0x342264: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x342264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_342268:
    // 0x342268: 0xc103468  jal         func_40D1A0
label_34226c:
    if (ctx->pc == 0x34226Cu) {
        ctx->pc = 0x34226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342268u;
        // 0x34226c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342270u;
        goto label_342270;
    }
    ctx->pc = 0x342268u;
    SET_GPR_U32(ctx, 31, 0x342270u);
    ctx->pc = 0x34226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342268u;
    // 0x34226c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x342268u, 0x342270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342270u;
label_342270:
    // 0x342270: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x342270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_342274:
    // 0x342274: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x342274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_342278:
    // 0x342278: 0xc103468  jal         func_40D1A0
label_34227c:
    if (ctx->pc == 0x34227Cu) {
        ctx->pc = 0x34227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342278u;
        // 0x34227c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342280u;
        goto label_342280;
    }
    ctx->pc = 0x342278u;
    SET_GPR_U32(ctx, 31, 0x342280u);
    ctx->pc = 0x34227Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342278u;
    // 0x34227c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x342278u, 0x342280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342280u;
label_342280:
    // 0x342280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x342280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_342284:
    // 0x342284: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x342284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_342288:
    // 0x342288: 0xc103468  jal         func_40D1A0
label_34228c:
    if (ctx->pc == 0x34228Cu) {
        ctx->pc = 0x34228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342288u;
        // 0x34228c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342290u;
        goto label_342290;
    }
    ctx->pc = 0x342288u;
    SET_GPR_U32(ctx, 31, 0x342290u);
    ctx->pc = 0x34228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342288u;
    // 0x34228c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x342288u, 0x342290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342290u;
label_342290:
    // 0x342290: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x342290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_342294:
    // 0x342294: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_342298:
    if (ctx->pc == 0x342298u) {
        ctx->pc = 0x342298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342294u;
        // 0x342298: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34229Cu;
        goto label_34229c;
    }
    ctx->pc = 0x342294u;
    {
        const bool branch_taken_0x342294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x342298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342294u;
        // 0x342298: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342294) {
            ctx->pc = 0x34233Cu;
            goto label_34233c;
        }
    }
    ctx->pc = 0x34229Cu;
label_34229c:
    // 0x34229c: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x34229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3422a0:
    // 0x3422a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3422a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3422a4:
    // 0x3422a4: 0xc103322  jal         func_40CC88
label_3422a8:
    if (ctx->pc == 0x3422A8u) {
        ctx->pc = 0x3422A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422A4u;
        // 0x3422a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422ACu;
        goto label_3422ac;
    }
    ctx->pc = 0x3422A4u;
    SET_GPR_U32(ctx, 31, 0x3422ACu);
    ctx->pc = 0x3422A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422A4u;
    // 0x3422a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3422A4u, 0x3422ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422ACu;
label_3422ac:
    // 0x3422ac: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
label_3422b0:
    if (ctx->pc == 0x3422B0u) {
        ctx->pc = 0x3422B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422ACu;
        // 0x3422b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422B4u;
        goto label_3422b4;
    }
    ctx->pc = 0x3422ACu;
    {
        const bool branch_taken_0x3422ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3422B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422ACu;
        // 0x3422b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3422ac) {
            ctx->pc = 0x3425F0u;
            goto label_3425f0;
        }
    }
    ctx->pc = 0x3422B4u;
label_3422b4:
    // 0x3422b4: 0xc0d115c  jal         func_344570
label_3422b8:
    if (ctx->pc == 0x3422B8u) {
        ctx->pc = 0x3422B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422B4u;
        // 0x3422b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422BCu;
        goto label_3422bc;
    }
    ctx->pc = 0x3422B4u;
    SET_GPR_U32(ctx, 31, 0x3422BCu);
    ctx->pc = 0x3422B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422B4u;
    // 0x3422b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344570u, 0x3422B4u, 0x3422BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422BCu;
label_3422bc:
    // 0x3422bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3422bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3422c0:
    // 0x3422c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3422c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3422c4:
    // 0x3422c4: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x3422c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3422c8:
    // 0x3422c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3422c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3422cc:
    // 0x3422cc: 0xc103322  jal         func_40CC88
label_3422d0:
    if (ctx->pc == 0x3422D0u) {
        ctx->pc = 0x3422D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422CCu;
        // 0x3422d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422D4u;
        goto label_3422d4;
    }
    ctx->pc = 0x3422CCu;
    SET_GPR_U32(ctx, 31, 0x3422D4u);
    ctx->pc = 0x3422D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422CCu;
    // 0x3422d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3422CCu, 0x3422D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422D4u;
label_3422d4:
    // 0x3422d4: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
label_3422d8:
    if (ctx->pc == 0x3422D8u) {
        ctx->pc = 0x3422D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422D4u;
        // 0x3422d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422DCu;
        goto label_3422dc;
    }
    ctx->pc = 0x3422D4u;
    {
        const bool branch_taken_0x3422d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3422D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422D4u;
        // 0x3422d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3422d4) {
            ctx->pc = 0x3425F0u;
            goto label_3425f0;
        }
    }
    ctx->pc = 0x3422DCu;
label_3422dc:
    // 0x3422dc: 0xc0d115c  jal         func_344570
label_3422e0:
    if (ctx->pc == 0x3422E0u) {
        ctx->pc = 0x3422E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422DCu;
        // 0x3422e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422E4u;
        goto label_3422e4;
    }
    ctx->pc = 0x3422DCu;
    SET_GPR_U32(ctx, 31, 0x3422E4u);
    ctx->pc = 0x3422E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422DCu;
    // 0x3422e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344570u, 0x3422DCu, 0x3422E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422E4u;
label_3422e4:
    // 0x3422e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3422e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3422e8:
    // 0x3422e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3422e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3422ec:
    // 0x3422ec: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x3422ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3422f0:
    // 0x3422f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3422f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3422f4:
    // 0x3422f4: 0xc103322  jal         func_40CC88
label_3422f8:
    if (ctx->pc == 0x3422F8u) {
        ctx->pc = 0x3422F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422F4u;
        // 0x3422f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422FCu;
        goto label_3422fc;
    }
    ctx->pc = 0x3422F4u;
    SET_GPR_U32(ctx, 31, 0x3422FCu);
    ctx->pc = 0x3422F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422F4u;
    // 0x3422f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3422F4u, 0x3422FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422FCu;
label_3422fc:
    // 0x3422fc: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
label_342300:
    if (ctx->pc == 0x342300u) {
        ctx->pc = 0x342300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422FCu;
        // 0x342300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342304u;
        goto label_342304;
    }
    ctx->pc = 0x3422FCu;
    {
        const bool branch_taken_0x3422fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422FCu;
        // 0x342300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3422fc) {
            ctx->pc = 0x3425F0u;
            goto label_3425f0;
        }
    }
    ctx->pc = 0x342304u;
label_342304:
    // 0x342304: 0xc0d0d2a  jal         func_3434A8
label_342308:
    if (ctx->pc == 0x342308u) {
        ctx->pc = 0x342308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342304u;
        // 0x342308: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34230Cu;
        goto label_34230c;
    }
    ctx->pc = 0x342304u;
    SET_GPR_U32(ctx, 31, 0x34230Cu);
    ctx->pc = 0x342308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342304u;
    // 0x342308: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3434A8u, 0x342304u, 0x34230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34230Cu;
label_34230c:
    // 0x34230c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x34230cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_342310:
    // 0x342310: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x342310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_342314:
    // 0x342314: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x342314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_342318:
    // 0x342318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x342318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34231c:
    // 0x34231c: 0xc103322  jal         func_40CC88
label_342320:
    if (ctx->pc == 0x342320u) {
        ctx->pc = 0x342320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34231Cu;
        // 0x342320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342324u;
        goto label_342324;
    }
    ctx->pc = 0x34231Cu;
    SET_GPR_U32(ctx, 31, 0x342324u);
    ctx->pc = 0x342320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34231Cu;
    // 0x342320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x34231Cu, 0x342324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342324u;
label_342324:
    // 0x342324: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
label_342328:
    if (ctx->pc == 0x342328u) {
        ctx->pc = 0x342328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342324u;
        // 0x342328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34232Cu;
        goto label_34232c;
    }
    ctx->pc = 0x342324u;
    {
        const bool branch_taken_0x342324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342324u;
        // 0x342328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342324) {
            ctx->pc = 0x3425F0u;
            goto label_3425f0;
        }
    }
    ctx->pc = 0x34232Cu;
label_34232c:
    // 0x34232c: 0xc0d0340  jal         func_340D00
label_342330:
    if (ctx->pc == 0x342330u) {
        ctx->pc = 0x342330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34232Cu;
        // 0x342330: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342334u;
        goto label_342334;
    }
    ctx->pc = 0x34232Cu;
    SET_GPR_U32(ctx, 31, 0x342334u);
    ctx->pc = 0x342330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34232Cu;
    // 0x342330: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340D00u, 0x34232Cu, 0x342334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342334u;
label_342334:
    // 0x342334: 0x10000009  b           . + 4 + (0x9 << 2)
label_342338:
    if (ctx->pc == 0x342338u) {
        ctx->pc = 0x342338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342334u;
        // 0x342338: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34233Cu;
        goto label_34233c;
    }
    ctx->pc = 0x342334u;
    {
        const bool branch_taken_0x342334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342334u;
        // 0x342338: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342334) {
            ctx->pc = 0x34235Cu;
            goto label_34235c;
        }
    }
    ctx->pc = 0x34233Cu;
label_34233c:
    // 0x34233c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x34233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_342340:
    // 0x342340: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x342340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342344:
    // 0x342344: 0xc0d04c0  jal         func_341300
label_342348:
    if (ctx->pc == 0x342348u) {
        ctx->pc = 0x342348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342344u;
        // 0x342348: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34234Cu;
        goto label_34234c;
    }
    ctx->pc = 0x342344u;
    SET_GPR_U32(ctx, 31, 0x34234Cu);
    ctx->pc = 0x342348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342344u;
    // 0x342348: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341300u, 0x342344u, 0x34234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34234Cu;
label_34234c:
    // 0x34234c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x34234cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_342350:
    // 0x342350: 0xc0d0e5c  jal         func_343970
label_342354:
    if (ctx->pc == 0x342354u) {
        ctx->pc = 0x342354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342350u;
        // 0x342354: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342358u;
        goto label_342358;
    }
    ctx->pc = 0x342350u;
    SET_GPR_U32(ctx, 31, 0x342358u);
    ctx->pc = 0x342354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342350u;
    // 0x342354: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343970u, 0x342350u, 0x342358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342358u;
label_342358:
    // 0x342358: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x342358u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34235c:
    // 0x34235c: 0x5220003a  beql        $s1, $zero, . + 4 + (0x3A << 2)
label_342360:
    if (ctx->pc == 0x342360u) {
        ctx->pc = 0x342360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34235Cu;
        // 0x342360: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342364u;
        goto label_342364;
    }
    ctx->pc = 0x34235Cu;
    {
        const bool branch_taken_0x34235c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34235c) {
            ctx->pc = 0x342360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34235Cu;
            // 0x342360: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342448u;
            goto label_342448;
        }
    }
    ctx->pc = 0x342364u;
label_342364:
    // 0x342364: 0xc0d04ce  jal         func_341338
label_342368:
    if (ctx->pc == 0x342368u) {
        ctx->pc = 0x342368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342364u;
        // 0x342368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34236Cu;
        goto label_34236c;
    }
    ctx->pc = 0x342364u;
    SET_GPR_U32(ctx, 31, 0x34236Cu);
    ctx->pc = 0x342368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342364u;
    // 0x342368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341338u, 0x342364u, 0x34236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34236Cu;
label_34236c:
    // 0x34236c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34236cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_342370:
    // 0x342370: 0x12140018  beq         $s0, $s4, . + 4 + (0x18 << 2)
label_342374:
    if (ctx->pc == 0x342374u) {
        ctx->pc = 0x342378u;
        goto label_342378;
    }
    ctx->pc = 0x342370u;
    {
        const bool branch_taken_0x342370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x342370) {
            ctx->pc = 0x3423D4u;
            goto label_3423d4;
        }
    }
    ctx->pc = 0x342378u;
label_342378:
    // 0x342378: 0x56000011  bnel        $s0, $zero, . + 4 + (0x11 << 2)
label_34237c:
    if (ctx->pc == 0x34237Cu) {
        ctx->pc = 0x34237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342378u;
        // 0x34237c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342380u;
        goto label_342380;
    }
    ctx->pc = 0x342378u;
    {
        const bool branch_taken_0x342378 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x342378) {
            ctx->pc = 0x34237Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342378u;
            // 0x34237c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3423C0u;
            goto label_3423c0;
        }
    }
    ctx->pc = 0x342380u;
label_342380:
    // 0x342380: 0xc0d0406  jal         func_341018
label_342384:
    if (ctx->pc == 0x342384u) {
        ctx->pc = 0x342388u;
        goto label_342388;
    }
    ctx->pc = 0x342380u;
    SET_GPR_U32(ctx, 31, 0x342388u);
    ctx->pc = 0x341018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341018u, 0x342380u, 0x342388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342388u;
label_342388:
    // 0x342388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x342388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34238c:
    // 0x34238c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34238cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342390:
    // 0x342390: 0xc0d0480  jal         func_341200
label_342394:
    if (ctx->pc == 0x342394u) {
        ctx->pc = 0x342394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342390u;
        // 0x342394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342398u;
        goto label_342398;
    }
    ctx->pc = 0x342390u;
    SET_GPR_U32(ctx, 31, 0x342398u);
    ctx->pc = 0x342394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342390u;
    // 0x342394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341200u, 0x342390u, 0x342398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342398u;
label_342398:
    // 0x342398: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x342398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_34239c:
    // 0x34239c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x34239cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3423a0:
    // 0x3423a0: 0x8c82c334  lw          $v0, -0x3CCC($a0)
    ctx->pc = 0x3423a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951732)));
label_3423a4:
    // 0x3423a4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3423a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3423a8:
    // 0x3423a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3423a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3423ac:
    // 0x3423ac: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3423acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3423b0:
    // 0x3423b0: 0x40f809  jalr        $v0
label_3423b4:
    if (ctx->pc == 0x3423B4u) {
        ctx->pc = 0x3423B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423B0u;
        // 0x3423b4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423B8u;
        goto label_3423b8;
    }
    ctx->pc = 0x3423B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3423B8u);
        ctx->pc = 0x3423B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423B0u;
        // 0x3423b4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3423B0u, 0x3423B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3423B8u;
label_3423b8:
    // 0x3423b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3423bc:
    if (ctx->pc == 0x3423BCu) {
        ctx->pc = 0x3423C0u;
        goto label_3423c0;
    }
    ctx->pc = 0x3423B8u;
    {
        const bool branch_taken_0x3423b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423b8) {
            ctx->pc = 0x3423C8u;
            goto label_3423c8;
        }
    }
    ctx->pc = 0x3423C0u;
label_3423c0:
    // 0x3423c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3423c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3423c4:
    // 0x3423c4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3423c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3423c8:
    // 0x3423c8: 0xc0d03c8  jal         func_340F20
label_3423cc:
    if (ctx->pc == 0x3423CCu) {
        ctx->pc = 0x3423CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423C8u;
        // 0x3423cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423D0u;
        goto label_3423d0;
    }
    ctx->pc = 0x3423C8u;
    SET_GPR_U32(ctx, 31, 0x3423D0u);
    ctx->pc = 0x3423CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3423C8u;
    // 0x3423cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340F20u, 0x3423C8u, 0x3423D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3423D0u;
label_3423d0:
    // 0x3423d0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3423d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3423d4:
    // 0x3423d4: 0xc0d0e6a  jal         func_3439A8
label_3423d8:
    if (ctx->pc == 0x3423D8u) {
        ctx->pc = 0x3423D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423D4u;
        // 0x3423d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423DCu;
        goto label_3423dc;
    }
    ctx->pc = 0x3423D4u;
    SET_GPR_U32(ctx, 31, 0x3423DCu);
    ctx->pc = 0x3423D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3423D4u;
    // 0x3423d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3439A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3439A8u, 0x3423D4u, 0x3423DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3423DCu;
label_3423dc:
    // 0x3423dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3423dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3423e0:
    // 0x3423e0: 0x52160019  beql        $s0, $s6, . + 4 + (0x19 << 2)
label_3423e4:
    if (ctx->pc == 0x3423E4u) {
        ctx->pc = 0x3423E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423E0u;
        // 0x3423e4: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423E8u;
        goto label_3423e8;
    }
    ctx->pc = 0x3423E0u;
    {
        const bool branch_taken_0x3423e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        if (branch_taken_0x3423e0) {
            ctx->pc = 0x3423E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3423E0u;
            // 0x3423e4: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342448u;
            goto label_342448;
        }
    }
    ctx->pc = 0x3423E8u;
label_3423e8:
    // 0x3423e8: 0x56000011  bnel        $s0, $zero, . + 4 + (0x11 << 2)
label_3423ec:
    if (ctx->pc == 0x3423ECu) {
        ctx->pc = 0x3423ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423E8u;
        // 0x3423ec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3423F0u;
        goto label_3423f0;
    }
    ctx->pc = 0x3423E8u;
    {
        const bool branch_taken_0x3423e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3423e8) {
            ctx->pc = 0x3423ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3423E8u;
            // 0x3423ec: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342430u;
            goto label_342430;
        }
    }
    ctx->pc = 0x3423F0u;
label_3423f0:
    // 0x3423f0: 0xc0d0dae  jal         func_3436B8
label_3423f4:
    if (ctx->pc == 0x3423F4u) {
        ctx->pc = 0x3423F8u;
        goto label_3423f8;
    }
    ctx->pc = 0x3423F0u;
    SET_GPR_U32(ctx, 31, 0x3423F8u);
    ctx->pc = 0x3436B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3436B8u, 0x3423F0u, 0x3423F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3423F8u;
label_3423f8:
    // 0x3423f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3423f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3423fc:
    // 0x3423fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3423fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_342400:
    // 0x342400: 0xc0d0e1c  jal         func_343870
label_342404:
    if (ctx->pc == 0x342404u) {
        ctx->pc = 0x342404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342400u;
        // 0x342404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342408u;
        goto label_342408;
    }
    ctx->pc = 0x342400u;
    SET_GPR_U32(ctx, 31, 0x342408u);
    ctx->pc = 0x342404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342400u;
    // 0x342404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343870u, 0x342400u, 0x342408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342408u;
label_342408:
    // 0x342408: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x342408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_34240c:
    // 0x34240c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x34240cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_342410:
    // 0x342410: 0x8c82c338  lw          $v0, -0x3CC8($a0)
    ctx->pc = 0x342410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294951736)));
label_342414:
    // 0x342414: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x342414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_342418:
    // 0x342418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34241c:
    // 0x34241c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x34241cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_342420:
    // 0x342420: 0x40f809  jalr        $v0
label_342424:
    if (ctx->pc == 0x342424u) {
        ctx->pc = 0x342424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342420u;
        // 0x342424: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342428u;
        goto label_342428;
    }
    ctx->pc = 0x342420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342428u);
        ctx->pc = 0x342424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342420u;
        // 0x342424: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342420u, 0x342428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342428u;
label_342428:
    // 0x342428: 0x10000003  b           . + 4 + (0x3 << 2)
label_34242c:
    if (ctx->pc == 0x34242Cu) {
        ctx->pc = 0x342430u;
        goto label_342430;
    }
    ctx->pc = 0x342428u;
    {
        const bool branch_taken_0x342428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342428) {
            ctx->pc = 0x342438u;
            goto label_342438;
        }
    }
    ctx->pc = 0x342430u;
label_342430:
    // 0x342430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x342430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_342434:
    // 0x342434: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x342434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_342438:
    // 0x342438: 0xc0d0ce8  jal         func_3433A0
label_34243c:
    if (ctx->pc == 0x34243Cu) {
        ctx->pc = 0x34243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342438u;
        // 0x34243c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342440u;
        goto label_342440;
    }
    ctx->pc = 0x342438u;
    SET_GPR_U32(ctx, 31, 0x342440u);
    ctx->pc = 0x34243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342438u;
    // 0x34243c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3433A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3433A0u, 0x342438u, 0x342440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342440u;
label_342440:
    // 0x342440: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x342440u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342444:
    // 0x342444: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x342444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_342448:
    // 0x342448: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x342448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_34244c:
    // 0x34244c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x34244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_342450:
    // 0x342450: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x342450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_342454:
    // 0x342454: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x342454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_342458:
    // 0x342458: 0x40f809  jalr        $v0
label_34245c:
    if (ctx->pc == 0x34245Cu) {
        ctx->pc = 0x34245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342458u;
        // 0x34245c: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x342460u;
        goto label_342460;
    }
    ctx->pc = 0x342458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342460u);
        ctx->pc = 0x34245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342458u;
        // 0x34245c: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342458u, 0x342460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342460u;
label_342460:
    // 0x342460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x342460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_342464:
    // 0x342464: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_342468:
    if (ctx->pc == 0x342468u) {
        ctx->pc = 0x342468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342464u;
        // 0x342468: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34246Cu;
        goto label_34246c;
    }
    ctx->pc = 0x342464u;
    {
        const bool branch_taken_0x342464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x342468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342464u;
        // 0x342468: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342464) {
            ctx->pc = 0x34251Cu;
            goto label_34251c;
        }
    }
    ctx->pc = 0x34246Cu;
label_34246c:
    // 0x34246c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x34246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_342470:
    // 0x342470: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x342470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_342474:
    // 0x342474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342478:
    // 0x342478: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x342478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34247c:
    // 0x34247c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x34247cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_342480:
    // 0x342480: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x342480u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_342484:
    // 0x342484: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x342484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_342488:
    // 0x342488: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x342488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_34248c:
    // 0x34248c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x34248cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_342490:
    // 0x342490: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x342490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_342494:
    // 0x342494: 0x8e86000c  lw          $a2, 0xC($s4)
    ctx->pc = 0x342494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_342498:
    // 0x342498: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x342498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_34249c:
    // 0x34249c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x34249cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3424a0:
    // 0x3424a0: 0x24c6ffd0  addiu       $a2, $a2, -0x30
    ctx->pc = 0x3424a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_3424a4:
    // 0x3424a4: 0xc0bb7e6  jal         func_2EDF98
label_3424a8:
    if (ctx->pc == 0x3424A8u) {
        ctx->pc = 0x3424A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424A4u;
        // 0x3424a8: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3424ACu;
        goto label_3424ac;
    }
    ctx->pc = 0x3424A4u;
    SET_GPR_U32(ctx, 31, 0x3424ACu);
    ctx->pc = 0x3424A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3424A4u;
    // 0x3424a8: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3424A4u, 0x3424ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3424ACu;
label_3424ac:
    // 0x3424ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3424acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3424b0:
    // 0x3424b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3424b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3424b4:
    // 0x3424b4: 0xc0d120c  jal         func_344830
label_3424b8:
    if (ctx->pc == 0x3424B8u) {
        ctx->pc = 0x3424B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424B4u;
        // 0x3424b8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3424BCu;
        goto label_3424bc;
    }
    ctx->pc = 0x3424B4u;
    SET_GPR_U32(ctx, 31, 0x3424BCu);
    ctx->pc = 0x3424B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3424B4u;
    // 0x3424b8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3424B4u, 0x3424BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3424BCu;
label_3424bc:
    // 0x3424bc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3424c0:
    if (ctx->pc == 0x3424C0u) {
        ctx->pc = 0x3424C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424BCu;
        // 0x3424c0: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3424C4u;
        goto label_3424c4;
    }
    ctx->pc = 0x3424BCu;
    {
        const bool branch_taken_0x3424bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3424bc) {
            ctx->pc = 0x3424C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3424BCu;
            // 0x3424c0: 0x8e12000c  lw          $s2, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3424D0u;
            goto label_3424d0;
        }
    }
    ctx->pc = 0x3424C4u;
label_3424c4:
    // 0x3424c4: 0xc0d1454  jal         func_345150
label_3424c8:
    if (ctx->pc == 0x3424C8u) {
        ctx->pc = 0x3424C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424C4u;
        // 0x3424c8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3424CCu;
        goto label_3424cc;
    }
    ctx->pc = 0x3424C4u;
    SET_GPR_U32(ctx, 31, 0x3424CCu);
    ctx->pc = 0x3424C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3424C4u;
    // 0x3424c8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345150u, 0x3424C4u, 0x3424CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3424CCu;
label_3424cc:
    // 0x3424cc: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x3424ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3424d0:
    // 0x3424d0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3424d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3424d4:
    // 0x3424d4: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_3424d8:
    if (ctx->pc == 0x3424D8u) {
        ctx->pc = 0x3424D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424D4u;
        // 0x3424d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3424DCu;
        goto label_3424dc;
    }
    ctx->pc = 0x3424D4u;
    {
        const bool branch_taken_0x3424d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3424D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424D4u;
        // 0x3424d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3424d4) {
            ctx->pc = 0x34251Cu;
            goto label_34251c;
        }
    }
    ctx->pc = 0x3424DCu;
label_3424dc:
    // 0x3424dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3424dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3424e0:
    // 0x3424e0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x3424e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3424e4:
    // 0x3424e4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3424e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3424e8:
    // 0x3424e8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3424e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3424ec:
    // 0x3424ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3424f0:
    if (ctx->pc == 0x3424F0u) {
        ctx->pc = 0x3424F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424ECu;
        // 0x3424f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3424F4u;
        goto label_3424f4;
    }
    ctx->pc = 0x3424ECu;
    {
        const bool branch_taken_0x3424ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3424F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424ECu;
        // 0x3424f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3424ec) {
            ctx->pc = 0x342508u;
            goto label_342508;
        }
    }
    ctx->pc = 0x3424F4u;
label_3424f4:
    // 0x3424f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3424f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3424f8:
    // 0x3424f8: 0x40f809  jalr        $v0
label_3424fc:
    if (ctx->pc == 0x3424FCu) {
        ctx->pc = 0x3424FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424F8u;
        // 0x3424fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342500u;
        goto label_342500;
    }
    ctx->pc = 0x3424F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342500u);
        ctx->pc = 0x3424FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424F8u;
        // 0x3424fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3424F8u, 0x342500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342500u;
label_342500:
    // 0x342500: 0x54500006  bnel        $v0, $s0, . + 4 + (0x6 << 2)
label_342504:
    if (ctx->pc == 0x342504u) {
        ctx->pc = 0x342504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342500u;
        // 0x342504: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342508u;
        goto label_342508;
    }
    ctx->pc = 0x342500u;
    {
        const bool branch_taken_0x342500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x342500) {
            ctx->pc = 0x342504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342500u;
            // 0x342504: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34251Cu;
            goto label_34251c;
        }
    }
    ctx->pc = 0x342508u;
label_342508:
    // 0x342508: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x342508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_34250c:
    // 0x34250c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34250cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_342510:
    // 0x342510: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x342510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_342514:
    // 0x342514: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_342518:
    if (ctx->pc == 0x342518u) {
        ctx->pc = 0x342518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342514u;
        // 0x342518: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34251Cu;
        goto label_34251c;
    }
    ctx->pc = 0x342514u;
    {
        const bool branch_taken_0x342514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342514u;
        // 0x342518: 0x2673002c  addiu       $s3, $s3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342514) {
            ctx->pc = 0x3424E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3424e0;
        }
    }
    ctx->pc = 0x34251Cu;
label_34251c:
    // 0x34251c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_342520:
    if (ctx->pc == 0x342520u) {
        ctx->pc = 0x342520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34251Cu;
        // 0x342520: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342524u;
        goto label_342524;
    }
    ctx->pc = 0x34251Cu;
    {
        const bool branch_taken_0x34251c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x342520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34251Cu;
        // 0x342520: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34251c) {
            ctx->pc = 0x34252Cu;
            goto label_34252c;
        }
    }
    ctx->pc = 0x342524u;
label_342524:
    // 0x342524: 0x10000032  b           . + 4 + (0x32 << 2)
label_342528:
    if (ctx->pc == 0x342528u) {
        ctx->pc = 0x342528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342524u;
        // 0x342528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34252Cu;
        goto label_34252c;
    }
    ctx->pc = 0x342524u;
    {
        const bool branch_taken_0x342524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342524u;
        // 0x342528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342524) {
            ctx->pc = 0x3425F0u;
            goto label_3425f0;
        }
    }
    ctx->pc = 0x34252Cu;
label_34252c:
    // 0x34252c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x34252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_342530:
    // 0x342530: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x342530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_342534:
    // 0x342534: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x342534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_342538:
    // 0x342538: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_34253c:
    if (ctx->pc == 0x34253Cu) {
        ctx->pc = 0x34253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342538u;
        // 0x34253c: 0x8fb1000c  lw          $s1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342540u;
        goto label_342540;
    }
    ctx->pc = 0x342538u;
    {
        const bool branch_taken_0x342538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342538u;
        // 0x34253c: 0x8fb1000c  lw          $s1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342538) {
            ctx->pc = 0x342550u;
            goto label_342550;
        }
    }
    ctx->pc = 0x342540u;
label_342540:
    // 0x342540: 0xc0d05d0  jal         func_341740
label_342544:
    if (ctx->pc == 0x342544u) {
        ctx->pc = 0x342544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342540u;
        // 0x342544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342548u;
        goto label_342548;
    }
    ctx->pc = 0x342540u;
    SET_GPR_U32(ctx, 31, 0x342548u);
    ctx->pc = 0x342544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342540u;
    // 0x342544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341740u, 0x342540u, 0x342548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342548u;
label_342548:
    // 0x342548: 0xc0d0ce8  jal         func_3433A0
label_34254c:
    if (ctx->pc == 0x34254Cu) {
        ctx->pc = 0x34254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342548u;
        // 0x34254c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342550u;
        goto label_342550;
    }
    ctx->pc = 0x342548u;
    SET_GPR_U32(ctx, 31, 0x342550u);
    ctx->pc = 0x34254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342548u;
    // 0x34254c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3433A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3433A0u, 0x342548u, 0x342550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342550u;
label_342550:
    // 0x342550: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x342550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_342554:
    // 0x342554: 0xae160018  sw          $s6, 0x18($s0)
    ctx->pc = 0x342554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
label_342558:
    // 0x342558: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x342558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_34255c:
    // 0x34255c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_342560:
    // 0x342560: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x342560u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
label_342564:
    // 0x342564: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x342564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_342568:
    // 0x342568: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
label_34256c:
    if (ctx->pc == 0x34256Cu) {
        ctx->pc = 0x34256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342568u;
        // 0x34256c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342570u;
        goto label_342570;
    }
    ctx->pc = 0x342568u;
    {
        const bool branch_taken_0x342568 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x34256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342568u;
        // 0x34256c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342568) {
            ctx->pc = 0x3425B4u;
            goto label_3425b4;
        }
    }
    ctx->pc = 0x342570u;
label_342570:
    // 0x342570: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x342570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342574:
    // 0x342574: 0x0  nop
    ctx->pc = 0x342574u;
    // NOP
label_342578:
    // 0x342578: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x342578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_34257c:
    // 0x34257c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x34257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_342580:
    // 0x342580: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x342580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_342584:
    // 0x342584: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342588:
    if (ctx->pc == 0x342588u) {
        ctx->pc = 0x342588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342584u;
        // 0x342588: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34258Cu;
        goto label_34258c;
    }
    ctx->pc = 0x342584u;
    {
        const bool branch_taken_0x342584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342584u;
        // 0x342588: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342584) {
            ctx->pc = 0x3425A0u;
            goto label_3425a0;
        }
    }
    ctx->pc = 0x34258Cu;
label_34258c:
    // 0x34258c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34258cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_342590:
    // 0x342590: 0x40f809  jalr        $v0
label_342594:
    if (ctx->pc == 0x342594u) {
        ctx->pc = 0x342594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342590u;
        // 0x342594: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342598u;
        goto label_342598;
    }
    ctx->pc = 0x342590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342598u);
        ctx->pc = 0x342594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342590u;
        // 0x342594: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342590u, 0x342598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342598u;
label_342598:
    // 0x342598: 0x14500015  bne         $v0, $s0, . + 4 + (0x15 << 2)
label_34259c:
    if (ctx->pc == 0x34259Cu) {
        ctx->pc = 0x34259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342598u;
        // 0x34259c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425A0u;
        goto label_3425a0;
    }
    ctx->pc = 0x342598u;
    {
        const bool branch_taken_0x342598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x34259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342598u;
        // 0x34259c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342598) {
            ctx->pc = 0x3425F0u;
            goto label_3425f0;
        }
    }
    ctx->pc = 0x3425A0u;
label_3425a0:
    // 0x3425a0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3425a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3425a4:
    // 0x3425a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3425a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3425a8:
    // 0x3425a8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3425a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3425ac:
    // 0x3425ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3425b0:
    if (ctx->pc == 0x3425B0u) {
        ctx->pc = 0x3425B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425ACu;
        // 0x3425b0: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425B4u;
        goto label_3425b4;
    }
    ctx->pc = 0x3425ACu;
    {
        const bool branch_taken_0x3425ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3425B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425ACu;
        // 0x3425b0: 0x2652002c  addiu       $s2, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425ac) {
            ctx->pc = 0x342578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342578;
        }
    }
    ctx->pc = 0x3425B4u;
label_3425b4:
    // 0x3425b4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3425b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3425b8:
    // 0x3425b8: 0xc0d26d0  jal         func_349B40
label_3425bc:
    if (ctx->pc == 0x3425BCu) {
        ctx->pc = 0x3425BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425B8u;
        // 0x3425bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425C0u;
        goto label_3425c0;
    }
    ctx->pc = 0x3425B8u;
    SET_GPR_U32(ctx, 31, 0x3425C0u);
    ctx->pc = 0x3425BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425B8u;
    // 0x3425bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349B40u, 0x3425B8u, 0x3425C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425C0u;
label_3425c0:
    // 0x3425c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3425c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3425c4:
    // 0x3425c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3425c8:
    if (ctx->pc == 0x3425C8u) {
        ctx->pc = 0x3425C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425C4u;
        // 0x3425c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425CCu;
        goto label_3425cc;
    }
    ctx->pc = 0x3425C4u;
    {
        const bool branch_taken_0x3425c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3425C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425C4u;
        // 0x3425c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425c4) {
            ctx->pc = 0x3425F0u;
            goto label_3425f0;
        }
    }
    ctx->pc = 0x3425CCu;
label_3425cc:
    // 0x3425cc: 0xc0d1054  jal         func_344150
label_3425d0:
    if (ctx->pc == 0x3425D0u) {
        ctx->pc = 0x3425D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425CCu;
        // 0x3425d0: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425D4u;
        goto label_3425d4;
    }
    ctx->pc = 0x3425CCu;
    SET_GPR_U32(ctx, 31, 0x3425D4u);
    ctx->pc = 0x3425D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425CCu;
    // 0x3425d0: 0x8e840010  lw          $a0, 0x10($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x3425CCu, 0x3425D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425D4u;
label_3425d4:
    // 0x3425d4: 0xc0d1054  jal         func_344150
label_3425d8:
    if (ctx->pc == 0x3425D8u) {
        ctx->pc = 0x3425D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425D4u;
        // 0x3425d8: 0x8ec40010  lw          $a0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425DCu;
        goto label_3425dc;
    }
    ctx->pc = 0x3425D4u;
    SET_GPR_U32(ctx, 31, 0x3425DCu);
    ctx->pc = 0x3425D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425D4u;
    // 0x3425d8: 0x8ec40010  lw          $a0, 0x10($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x3425D4u, 0x3425DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425DCu;
label_3425dc:
    // 0x3425dc: 0xc0d03c8  jal         func_340F20
label_3425e0:
    if (ctx->pc == 0x3425E0u) {
        ctx->pc = 0x3425E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425DCu;
        // 0x3425e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425E4u;
        goto label_3425e4;
    }
    ctx->pc = 0x3425DCu;
    SET_GPR_U32(ctx, 31, 0x3425E4u);
    ctx->pc = 0x3425E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425DCu;
    // 0x3425e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340F20u, 0x3425DCu, 0x3425E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425E4u;
label_3425e4:
    // 0x3425e4: 0xc0d0ce8  jal         func_3433A0
label_3425e8:
    if (ctx->pc == 0x3425E8u) {
        ctx->pc = 0x3425E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425E4u;
        // 0x3425e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3425ECu;
        goto label_3425ec;
    }
    ctx->pc = 0x3425E4u;
    SET_GPR_U32(ctx, 31, 0x3425ECu);
    ctx->pc = 0x3425E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425E4u;
    // 0x3425e8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3433A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3433A0u, 0x3425E4u, 0x3425ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425ECu;
label_3425ec:
    // 0x3425ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3425ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3425f0:
    // 0x3425f0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3425f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3425f4:
    // 0x3425f4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3425f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3425f8:
    // 0x3425f8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3425f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3425fc:
    // 0x3425fc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3425fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_342600:
    // 0x342600: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x342600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_342604:
    // 0x342604: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x342604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_342608:
    // 0x342608: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x342608u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34260c:
    // 0x34260c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x34260cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342610:
    // 0x342610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x342610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_342614:
    // 0x342614: 0x3e00008  jr          $ra
label_342618:
    if (ctx->pc == 0x342618u) {
        ctx->pc = 0x342618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342614u;
        // 0x342618: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34261Cu;
        goto label_34261c;
    }
    ctx->pc = 0x342614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342614u;
        // 0x342618: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34261Cu;
label_34261c:
    // 0x34261c: 0x0  nop
    ctx->pc = 0x34261cu;
    // NOP
    ctx->pc = 0x342620u;
}
