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

// Function: sub_00326FD0
// Address: 0x326fd0 - 0x327490
void sub_00326FD0_0x326fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326FD0_0x326fd0");
#endif

    switch (ctx->pc) {
        case 0x326fd0u: goto label_326fd0;
        case 0x326fd4u: goto label_326fd4;
        case 0x326fd8u: goto label_326fd8;
        case 0x326fdcu: goto label_326fdc;
        case 0x326fe0u: goto label_326fe0;
        case 0x326fe4u: goto label_326fe4;
        case 0x326fe8u: goto label_326fe8;
        case 0x326fecu: goto label_326fec;
        case 0x326ff0u: goto label_326ff0;
        case 0x326ff4u: goto label_326ff4;
        case 0x326ff8u: goto label_326ff8;
        case 0x326ffcu: goto label_326ffc;
        case 0x327000u: goto label_327000;
        case 0x327004u: goto label_327004;
        case 0x327008u: goto label_327008;
        case 0x32700cu: goto label_32700c;
        case 0x327010u: goto label_327010;
        case 0x327014u: goto label_327014;
        case 0x327018u: goto label_327018;
        case 0x32701cu: goto label_32701c;
        case 0x327020u: goto label_327020;
        case 0x327024u: goto label_327024;
        case 0x327028u: goto label_327028;
        case 0x32702cu: goto label_32702c;
        case 0x327030u: goto label_327030;
        case 0x327034u: goto label_327034;
        case 0x327038u: goto label_327038;
        case 0x32703cu: goto label_32703c;
        case 0x327040u: goto label_327040;
        case 0x327044u: goto label_327044;
        case 0x327048u: goto label_327048;
        case 0x32704cu: goto label_32704c;
        case 0x327050u: goto label_327050;
        case 0x327054u: goto label_327054;
        case 0x327058u: goto label_327058;
        case 0x32705cu: goto label_32705c;
        case 0x327060u: goto label_327060;
        case 0x327064u: goto label_327064;
        case 0x327068u: goto label_327068;
        case 0x32706cu: goto label_32706c;
        case 0x327070u: goto label_327070;
        case 0x327074u: goto label_327074;
        case 0x327078u: goto label_327078;
        case 0x32707cu: goto label_32707c;
        case 0x327080u: goto label_327080;
        case 0x327084u: goto label_327084;
        case 0x327088u: goto label_327088;
        case 0x32708cu: goto label_32708c;
        case 0x327090u: goto label_327090;
        case 0x327094u: goto label_327094;
        case 0x327098u: goto label_327098;
        case 0x32709cu: goto label_32709c;
        case 0x3270a0u: goto label_3270a0;
        case 0x3270a4u: goto label_3270a4;
        case 0x3270a8u: goto label_3270a8;
        case 0x3270acu: goto label_3270ac;
        case 0x3270b0u: goto label_3270b0;
        case 0x3270b4u: goto label_3270b4;
        case 0x3270b8u: goto label_3270b8;
        case 0x3270bcu: goto label_3270bc;
        case 0x3270c0u: goto label_3270c0;
        case 0x3270c4u: goto label_3270c4;
        case 0x3270c8u: goto label_3270c8;
        case 0x3270ccu: goto label_3270cc;
        case 0x3270d0u: goto label_3270d0;
        case 0x3270d4u: goto label_3270d4;
        case 0x3270d8u: goto label_3270d8;
        case 0x3270dcu: goto label_3270dc;
        case 0x3270e0u: goto label_3270e0;
        case 0x3270e4u: goto label_3270e4;
        case 0x3270e8u: goto label_3270e8;
        case 0x3270ecu: goto label_3270ec;
        case 0x3270f0u: goto label_3270f0;
        case 0x3270f4u: goto label_3270f4;
        case 0x3270f8u: goto label_3270f8;
        case 0x3270fcu: goto label_3270fc;
        case 0x327100u: goto label_327100;
        case 0x327104u: goto label_327104;
        case 0x327108u: goto label_327108;
        case 0x32710cu: goto label_32710c;
        case 0x327110u: goto label_327110;
        case 0x327114u: goto label_327114;
        case 0x327118u: goto label_327118;
        case 0x32711cu: goto label_32711c;
        case 0x327120u: goto label_327120;
        case 0x327124u: goto label_327124;
        case 0x327128u: goto label_327128;
        case 0x32712cu: goto label_32712c;
        case 0x327130u: goto label_327130;
        case 0x327134u: goto label_327134;
        case 0x327138u: goto label_327138;
        case 0x32713cu: goto label_32713c;
        case 0x327140u: goto label_327140;
        case 0x327144u: goto label_327144;
        case 0x327148u: goto label_327148;
        case 0x32714cu: goto label_32714c;
        case 0x327150u: goto label_327150;
        case 0x327154u: goto label_327154;
        case 0x327158u: goto label_327158;
        case 0x32715cu: goto label_32715c;
        case 0x327160u: goto label_327160;
        case 0x327164u: goto label_327164;
        case 0x327168u: goto label_327168;
        case 0x32716cu: goto label_32716c;
        case 0x327170u: goto label_327170;
        case 0x327174u: goto label_327174;
        case 0x327178u: goto label_327178;
        case 0x32717cu: goto label_32717c;
        case 0x327180u: goto label_327180;
        case 0x327184u: goto label_327184;
        case 0x327188u: goto label_327188;
        case 0x32718cu: goto label_32718c;
        case 0x327190u: goto label_327190;
        case 0x327194u: goto label_327194;
        case 0x327198u: goto label_327198;
        case 0x32719cu: goto label_32719c;
        case 0x3271a0u: goto label_3271a0;
        case 0x3271a4u: goto label_3271a4;
        case 0x3271a8u: goto label_3271a8;
        case 0x3271acu: goto label_3271ac;
        case 0x3271b0u: goto label_3271b0;
        case 0x3271b4u: goto label_3271b4;
        case 0x3271b8u: goto label_3271b8;
        case 0x3271bcu: goto label_3271bc;
        case 0x3271c0u: goto label_3271c0;
        case 0x3271c4u: goto label_3271c4;
        case 0x3271c8u: goto label_3271c8;
        case 0x3271ccu: goto label_3271cc;
        case 0x3271d0u: goto label_3271d0;
        case 0x3271d4u: goto label_3271d4;
        case 0x3271d8u: goto label_3271d8;
        case 0x3271dcu: goto label_3271dc;
        case 0x3271e0u: goto label_3271e0;
        case 0x3271e4u: goto label_3271e4;
        case 0x3271e8u: goto label_3271e8;
        case 0x3271ecu: goto label_3271ec;
        case 0x3271f0u: goto label_3271f0;
        case 0x3271f4u: goto label_3271f4;
        case 0x3271f8u: goto label_3271f8;
        case 0x3271fcu: goto label_3271fc;
        case 0x327200u: goto label_327200;
        case 0x327204u: goto label_327204;
        case 0x327208u: goto label_327208;
        case 0x32720cu: goto label_32720c;
        case 0x327210u: goto label_327210;
        case 0x327214u: goto label_327214;
        case 0x327218u: goto label_327218;
        case 0x32721cu: goto label_32721c;
        case 0x327220u: goto label_327220;
        case 0x327224u: goto label_327224;
        case 0x327228u: goto label_327228;
        case 0x32722cu: goto label_32722c;
        case 0x327230u: goto label_327230;
        case 0x327234u: goto label_327234;
        case 0x327238u: goto label_327238;
        case 0x32723cu: goto label_32723c;
        case 0x327240u: goto label_327240;
        case 0x327244u: goto label_327244;
        case 0x327248u: goto label_327248;
        case 0x32724cu: goto label_32724c;
        case 0x327250u: goto label_327250;
        case 0x327254u: goto label_327254;
        case 0x327258u: goto label_327258;
        case 0x32725cu: goto label_32725c;
        case 0x327260u: goto label_327260;
        case 0x327264u: goto label_327264;
        case 0x327268u: goto label_327268;
        case 0x32726cu: goto label_32726c;
        case 0x327270u: goto label_327270;
        case 0x327274u: goto label_327274;
        case 0x327278u: goto label_327278;
        case 0x32727cu: goto label_32727c;
        case 0x327280u: goto label_327280;
        case 0x327284u: goto label_327284;
        case 0x327288u: goto label_327288;
        case 0x32728cu: goto label_32728c;
        case 0x327290u: goto label_327290;
        case 0x327294u: goto label_327294;
        case 0x327298u: goto label_327298;
        case 0x32729cu: goto label_32729c;
        case 0x3272a0u: goto label_3272a0;
        case 0x3272a4u: goto label_3272a4;
        case 0x3272a8u: goto label_3272a8;
        case 0x3272acu: goto label_3272ac;
        case 0x3272b0u: goto label_3272b0;
        case 0x3272b4u: goto label_3272b4;
        case 0x3272b8u: goto label_3272b8;
        case 0x3272bcu: goto label_3272bc;
        case 0x3272c0u: goto label_3272c0;
        case 0x3272c4u: goto label_3272c4;
        case 0x3272c8u: goto label_3272c8;
        case 0x3272ccu: goto label_3272cc;
        case 0x3272d0u: goto label_3272d0;
        case 0x3272d4u: goto label_3272d4;
        case 0x3272d8u: goto label_3272d8;
        case 0x3272dcu: goto label_3272dc;
        case 0x3272e0u: goto label_3272e0;
        case 0x3272e4u: goto label_3272e4;
        case 0x3272e8u: goto label_3272e8;
        case 0x3272ecu: goto label_3272ec;
        case 0x3272f0u: goto label_3272f0;
        case 0x3272f4u: goto label_3272f4;
        case 0x3272f8u: goto label_3272f8;
        case 0x3272fcu: goto label_3272fc;
        case 0x327300u: goto label_327300;
        case 0x327304u: goto label_327304;
        case 0x327308u: goto label_327308;
        case 0x32730cu: goto label_32730c;
        case 0x327310u: goto label_327310;
        case 0x327314u: goto label_327314;
        case 0x327318u: goto label_327318;
        case 0x32731cu: goto label_32731c;
        case 0x327320u: goto label_327320;
        case 0x327324u: goto label_327324;
        case 0x327328u: goto label_327328;
        case 0x32732cu: goto label_32732c;
        case 0x327330u: goto label_327330;
        case 0x327334u: goto label_327334;
        case 0x327338u: goto label_327338;
        case 0x32733cu: goto label_32733c;
        case 0x327340u: goto label_327340;
        case 0x327344u: goto label_327344;
        case 0x327348u: goto label_327348;
        case 0x32734cu: goto label_32734c;
        case 0x327350u: goto label_327350;
        case 0x327354u: goto label_327354;
        case 0x327358u: goto label_327358;
        case 0x32735cu: goto label_32735c;
        case 0x327360u: goto label_327360;
        case 0x327364u: goto label_327364;
        case 0x327368u: goto label_327368;
        case 0x32736cu: goto label_32736c;
        case 0x327370u: goto label_327370;
        case 0x327374u: goto label_327374;
        case 0x327378u: goto label_327378;
        case 0x32737cu: goto label_32737c;
        case 0x327380u: goto label_327380;
        case 0x327384u: goto label_327384;
        case 0x327388u: goto label_327388;
        case 0x32738cu: goto label_32738c;
        case 0x327390u: goto label_327390;
        case 0x327394u: goto label_327394;
        case 0x327398u: goto label_327398;
        case 0x32739cu: goto label_32739c;
        case 0x3273a0u: goto label_3273a0;
        case 0x3273a4u: goto label_3273a4;
        case 0x3273a8u: goto label_3273a8;
        case 0x3273acu: goto label_3273ac;
        case 0x3273b0u: goto label_3273b0;
        case 0x3273b4u: goto label_3273b4;
        case 0x3273b8u: goto label_3273b8;
        case 0x3273bcu: goto label_3273bc;
        case 0x3273c0u: goto label_3273c0;
        case 0x3273c4u: goto label_3273c4;
        case 0x3273c8u: goto label_3273c8;
        case 0x3273ccu: goto label_3273cc;
        case 0x3273d0u: goto label_3273d0;
        case 0x3273d4u: goto label_3273d4;
        case 0x3273d8u: goto label_3273d8;
        case 0x3273dcu: goto label_3273dc;
        case 0x3273e0u: goto label_3273e0;
        case 0x3273e4u: goto label_3273e4;
        case 0x3273e8u: goto label_3273e8;
        case 0x3273ecu: goto label_3273ec;
        case 0x3273f0u: goto label_3273f0;
        case 0x3273f4u: goto label_3273f4;
        case 0x3273f8u: goto label_3273f8;
        case 0x3273fcu: goto label_3273fc;
        case 0x327400u: goto label_327400;
        case 0x327404u: goto label_327404;
        case 0x327408u: goto label_327408;
        case 0x32740cu: goto label_32740c;
        case 0x327410u: goto label_327410;
        case 0x327414u: goto label_327414;
        case 0x327418u: goto label_327418;
        case 0x32741cu: goto label_32741c;
        case 0x327420u: goto label_327420;
        case 0x327424u: goto label_327424;
        case 0x327428u: goto label_327428;
        case 0x32742cu: goto label_32742c;
        case 0x327430u: goto label_327430;
        case 0x327434u: goto label_327434;
        case 0x327438u: goto label_327438;
        case 0x32743cu: goto label_32743c;
        case 0x327440u: goto label_327440;
        case 0x327444u: goto label_327444;
        case 0x327448u: goto label_327448;
        case 0x32744cu: goto label_32744c;
        case 0x327450u: goto label_327450;
        case 0x327454u: goto label_327454;
        case 0x327458u: goto label_327458;
        case 0x32745cu: goto label_32745c;
        case 0x327460u: goto label_327460;
        case 0x327464u: goto label_327464;
        case 0x327468u: goto label_327468;
        case 0x32746cu: goto label_32746c;
        case 0x327470u: goto label_327470;
        case 0x327474u: goto label_327474;
        case 0x327478u: goto label_327478;
        case 0x32747cu: goto label_32747c;
        case 0x327480u: goto label_327480;
        case 0x327484u: goto label_327484;
        case 0x327488u: goto label_327488;
        case 0x32748cu: goto label_32748c;
        default: break;
    }

    ctx->pc = 0x326fd0u;

label_326fd0:
    // 0x326fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_326fd4:
    // 0x326fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_326fd8:
    // 0x326fd8: 0xc0c94c6  jal         func_325318
label_326fdc:
    if (ctx->pc == 0x326FDCu) {
        ctx->pc = 0x326FE0u;
        goto label_326fe0;
    }
    ctx->pc = 0x326FD8u;
    SET_GPR_U32(ctx, 31, 0x326FE0u);
    ctx->pc = 0x325318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325318u, 0x326FD8u, 0x326FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FE0u;
label_326fe0:
    // 0x326fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326fe4:
    // 0x326fe4: 0x3e00008  jr          $ra
label_326fe8:
    if (ctx->pc == 0x326FE8u) {
        ctx->pc = 0x326FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FE4u;
        // 0x326fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FECu;
        goto label_326fec;
    }
    ctx->pc = 0x326FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FE4u;
        // 0x326fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326FECu;
label_326fec:
    // 0x326fec: 0x0  nop
    ctx->pc = 0x326fecu;
    // NOP
label_326ff0:
    // 0x326ff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x326ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_326ff4:
    // 0x326ff4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x326ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_326ff8:
    // 0x326ff8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x326ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_326ffc:
    // 0x326ffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327000:
    // 0x327000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_327004:
    // 0x327004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_327008:
    // 0x327008: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x327008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_32700c:
    // 0x32700c: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
label_327010:
    if (ctx->pc == 0x327010u) {
        ctx->pc = 0x327010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32700Cu;
        // 0x327010: 0x8f82a650  lw          $v0, -0x59B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327014u;
        goto label_327014;
    }
    ctx->pc = 0x32700Cu;
    {
        const bool branch_taken_0x32700c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x327010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32700Cu;
        // 0x327010: 0x8f82a650  lw          $v0, -0x59B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32700c) {
            ctx->pc = 0x327120u;
            goto label_327120;
        }
    }
    ctx->pc = 0x327014u;
label_327014:
    // 0x327014: 0x2630004c  addiu       $s0, $s1, 0x4C
    ctx->pc = 0x327014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_327018:
    // 0x327018: 0x8f83a654  lw          $v1, -0x59AC($gp)
    ctx->pc = 0x327018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_32701c:
    // 0x32701c: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x32701cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_327020:
    // 0x327020: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x327020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_327024:
    // 0x327024: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
label_327028:
    if (ctx->pc == 0x327028u) {
        ctx->pc = 0x327028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327024u;
        // 0x327028: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32702Cu;
        goto label_32702c;
    }
    ctx->pc = 0x327024u;
    {
        const bool branch_taken_0x327024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x327028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327024u;
        // 0x327028: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327024) {
            ctx->pc = 0x327030u;
            goto label_327030;
        }
    }
    ctx->pc = 0x32702Cu;
label_32702c:
    // 0x32702c: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x32702cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
label_327030:
    // 0x327030: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x327030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_327034:
    // 0x327034: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x327034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_327038:
    // 0x327038: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x327038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_32703c:
    // 0x32703c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x32703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_327040:
    // 0x327040: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x327040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_327044:
    // 0x327044: 0x30450004  andi        $a1, $v0, 0x4
    ctx->pc = 0x327044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_327048:
    // 0x327048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_32704c:
    // 0x32704c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x32704cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_327050:
    // 0x327050: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x327050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_327054:
    // 0x327054: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x327054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_327058:
    // 0x327058: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_32705c:
    if (ctx->pc == 0x32705Cu) {
        ctx->pc = 0x32705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327058u;
        // 0x32705c: 0xa6040004  sh          $a0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327060u;
        goto label_327060;
    }
    ctx->pc = 0x327058u;
    {
        const bool branch_taken_0x327058 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327058u;
        // 0x32705c: 0xa6040004  sh          $a0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327058) {
            ctx->pc = 0x327074u;
            goto label_327074;
        }
    }
    ctx->pc = 0x327060u;
label_327060:
    // 0x327060: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x327060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_327064:
    // 0x327064: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_327068:
    if (ctx->pc == 0x327068u) {
        ctx->pc = 0x327068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327064u;
        // 0x327068: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32706Cu;
        goto label_32706c;
    }
    ctx->pc = 0x327064u;
    {
        const bool branch_taken_0x327064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x327064) {
            ctx->pc = 0x327068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327064u;
            // 0x327068: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327078u;
            goto label_327078;
        }
    }
    ctx->pc = 0x32706Cu;
label_32706c:
    // 0x32706c: 0xc106794  jal         func_419E50
label_327070:
    if (ctx->pc == 0x327070u) {
        ctx->pc = 0x327074u;
        goto label_327074;
    }
    ctx->pc = 0x32706Cu;
    SET_GPR_U32(ctx, 31, 0x327074u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x32706Cu, 0x327074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327074u;
label_327074:
    // 0x327074: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x327074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_327078:
    // 0x327078: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32707c:
    // 0x32707c: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x32707cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_327080:
    // 0x327080: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x327080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_327084:
    // 0x327084: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x327084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
label_327088:
    // 0x327088: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x327088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_32708c:
    // 0x32708c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_327090:
    if (ctx->pc == 0x327090u) {
        ctx->pc = 0x327090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32708Cu;
        // 0x327090: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327094u;
        goto label_327094;
    }
    ctx->pc = 0x32708Cu;
    {
        const bool branch_taken_0x32708c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x327090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32708Cu;
        // 0x327090: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32708c) {
            ctx->pc = 0x3270A8u;
            goto label_3270a8;
        }
    }
    ctx->pc = 0x327094u;
label_327094:
    // 0x327094: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x327094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_327098:
    // 0x327098: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_32709c:
    if (ctx->pc == 0x32709Cu) {
        ctx->pc = 0x32709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327098u;
        // 0x32709c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270A0u;
        goto label_3270a0;
    }
    ctx->pc = 0x327098u;
    {
        const bool branch_taken_0x327098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x327098) {
            ctx->pc = 0x32709Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327098u;
            // 0x32709c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3270ACu;
            goto label_3270ac;
        }
    }
    ctx->pc = 0x3270A0u;
label_3270a0:
    // 0x3270a0: 0xc106794  jal         func_419E50
label_3270a4:
    if (ctx->pc == 0x3270A4u) {
        ctx->pc = 0x3270A8u;
        goto label_3270a8;
    }
    ctx->pc = 0x3270A0u;
    SET_GPR_U32(ctx, 31, 0x3270A8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x3270A0u, 0x3270A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270A8u;
label_3270a8:
    // 0x3270a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3270a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3270ac:
    // 0x3270ac: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3270acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3270b0:
    // 0x3270b0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3270b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_3270b4:
    // 0x3270b4: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x3270b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3270b8:
    // 0x3270b8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3270bc:
    if (ctx->pc == 0x3270BCu) {
        ctx->pc = 0x3270BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270B8u;
        // 0x3270bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270C0u;
        goto label_3270c0;
    }
    ctx->pc = 0x3270B8u;
    {
        const bool branch_taken_0x3270b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3270BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270B8u;
        // 0x3270bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270b8) {
            ctx->pc = 0x3270D4u;
            goto label_3270d4;
        }
    }
    ctx->pc = 0x3270C0u;
label_3270c0:
    // 0x3270c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3270c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3270c4:
    // 0x3270c4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3270c8:
    if (ctx->pc == 0x3270C8u) {
        ctx->pc = 0x3270C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270C4u;
        // 0x3270c8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3270CCu;
        goto label_3270cc;
    }
    ctx->pc = 0x3270C4u;
    {
        const bool branch_taken_0x3270c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3270c4) {
            ctx->pc = 0x3270C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3270C4u;
            // 0x3270c8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3270D8u;
            goto label_3270d8;
        }
    }
    ctx->pc = 0x3270CCu;
label_3270cc:
    // 0x3270cc: 0xc106794  jal         func_419E50
label_3270d0:
    if (ctx->pc == 0x3270D0u) {
        ctx->pc = 0x3270D4u;
        goto label_3270d4;
    }
    ctx->pc = 0x3270CCu;
    SET_GPR_U32(ctx, 31, 0x3270D4u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x3270CCu, 0x3270D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270D4u;
label_3270d4:
    // 0x3270d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3270d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3270d8:
    // 0x3270d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3270d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3270dc:
    // 0x3270dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3270dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3270e0:
    // 0x3270e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3270e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3270e4:
    // 0x3270e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3270e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3270e8:
    // 0x3270e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3270e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3270ec:
    // 0x3270ec: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x3270ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3270f0:
    // 0x3270f0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3270f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_3270f4:
    // 0x3270f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3270f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3270f8:
    // 0x3270f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3270f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3270fc:
    // 0x3270fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_327100:
    if (ctx->pc == 0x327100u) {
        ctx->pc = 0x327100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270FCu;
        // 0x327100: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x327104u;
        goto label_327104;
    }
    ctx->pc = 0x3270FCu;
    {
        const bool branch_taken_0x3270fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270FCu;
        // 0x327100: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270fc) {
            ctx->pc = 0x327118u;
            goto label_327118;
        }
    }
    ctx->pc = 0x327104u;
label_327104:
    // 0x327104: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x327104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_327108:
    // 0x327108: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_32710c:
    if (ctx->pc == 0x32710Cu) {
        ctx->pc = 0x32710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327108u;
        // 0x32710c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327110u;
        goto label_327110;
    }
    ctx->pc = 0x327108u;
    {
        const bool branch_taken_0x327108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327108u;
        // 0x32710c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327108) {
            ctx->pc = 0x327140u;
            goto label_327140;
        }
    }
    ctx->pc = 0x327110u;
label_327110:
    // 0x327110: 0xc106794  jal         func_419E50
label_327114:
    if (ctx->pc == 0x327114u) {
        ctx->pc = 0x327118u;
        goto label_327118;
    }
    ctx->pc = 0x327110u;
    SET_GPR_U32(ctx, 31, 0x327118u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x327110u, 0x327118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327118u;
label_327118:
    // 0x327118: 0x10000009  b           . + 4 + (0x9 << 2)
label_32711c:
    if (ctx->pc == 0x32711Cu) {
        ctx->pc = 0x32711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327118u;
        // 0x32711c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327120u;
        goto label_327120;
    }
    ctx->pc = 0x327118u;
    {
        const bool branch_taken_0x327118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327118u;
        // 0x32711c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327118) {
            ctx->pc = 0x327140u;
            goto label_327140;
        }
    }
    ctx->pc = 0x327120u;
label_327120:
    // 0x327120: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x327120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_327124:
    // 0x327124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x327124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327128:
    // 0x327128: 0xc1035f6  jal         func_40D7D8
label_32712c:
    if (ctx->pc == 0x32712Cu) {
        ctx->pc = 0x32712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327128u;
        // 0x32712c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327130u;
        goto label_327130;
    }
    ctx->pc = 0x327128u;
    SET_GPR_U32(ctx, 31, 0x327130u);
    ctx->pc = 0x32712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327128u;
    // 0x32712c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x327128u, 0x327130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327130u;
label_327130:
    // 0x327130: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x327130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327134:
    // 0x327134: 0xc103628  jal         func_40D8A0
label_327138:
    if (ctx->pc == 0x327138u) {
        ctx->pc = 0x327138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327134u;
        // 0x327138: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32713Cu;
        goto label_32713c;
    }
    ctx->pc = 0x327134u;
    SET_GPR_U32(ctx, 31, 0x32713Cu);
    ctx->pc = 0x327138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327134u;
    // 0x327138: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x327134u, 0x32713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32713Cu;
label_32713c:
    // 0x32713c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32713cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327140:
    // 0x327140: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x327140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_327144:
    // 0x327144: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x327144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_327148:
    // 0x327148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x327148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32714c:
    // 0x32714c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32714cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327150:
    // 0x327150: 0x3e00008  jr          $ra
label_327154:
    if (ctx->pc == 0x327154u) {
        ctx->pc = 0x327154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327150u;
        // 0x327154: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327158u;
        goto label_327158;
    }
    ctx->pc = 0x327150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327150u;
        // 0x327154: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327158u;
label_327158:
    // 0x327158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x327158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_32715c:
    // 0x32715c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_327160:
    // 0x327160: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x327160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_327164:
    // 0x327164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x327164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327168:
    // 0x327168: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x327168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_32716c:
    // 0x32716c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32716cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_327170:
    // 0x327170: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x327170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_327174:
    // 0x327174: 0x10800048  beqz        $a0, . + 4 + (0x48 << 2)
label_327178:
    if (ctx->pc == 0x327178u) {
        ctx->pc = 0x327178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327174u;
        // 0x327178: 0x8f82a650  lw          $v0, -0x59B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32717Cu;
        goto label_32717c;
    }
    ctx->pc = 0x327174u;
    {
        const bool branch_taken_0x327174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x327178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327174u;
        // 0x327178: 0x8f82a650  lw          $v0, -0x59B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327174) {
            ctx->pc = 0x327298u;
            goto label_327298;
        }
    }
    ctx->pc = 0x32717Cu;
label_32717c:
    // 0x32717c: 0x2650004c  addiu       $s0, $s2, 0x4C
    ctx->pc = 0x32717cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_327180:
    // 0x327180: 0x8f83a654  lw          $v1, -0x59AC($gp)
    ctx->pc = 0x327180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_327184:
    // 0x327184: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x327184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_327188:
    // 0x327188: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x327188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32718c:
    // 0x32718c: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_327190:
    if (ctx->pc == 0x327190u) {
        ctx->pc = 0x327190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32718Cu;
        // 0x327190: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327194u;
        goto label_327194;
    }
    ctx->pc = 0x32718Cu;
    {
        const bool branch_taken_0x32718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x327190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32718Cu;
        // 0x327190: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32718c) {
            ctx->pc = 0x3271A0u;
            goto label_3271a0;
        }
    }
    ctx->pc = 0x327194u;
label_327194:
    // 0x327194: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x327194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327198:
    // 0x327198: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_32719c:
    if (ctx->pc == 0x32719Cu) {
        ctx->pc = 0x32719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327198u;
        // 0x32719c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3271A0u;
        goto label_3271a0;
    }
    ctx->pc = 0x327198u;
    {
        const bool branch_taken_0x327198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327198) {
            ctx->pc = 0x32719Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327198u;
            // 0x32719c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3271B4u;
            goto label_3271b4;
        }
    }
    ctx->pc = 0x3271A0u;
label_3271a0:
    // 0x3271a0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3271a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3271a4:
    // 0x3271a4: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3271a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_3271a8:
    // 0x3271a8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_3271ac:
    if (ctx->pc == 0x3271ACu) {
        ctx->pc = 0x3271ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271A8u;
        // 0x3271ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3271B0u;
        goto label_3271b0;
    }
    ctx->pc = 0x3271A8u;
    {
        const bool branch_taken_0x3271a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3271ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271A8u;
        // 0x3271ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271a8) {
            ctx->pc = 0x327290u;
            goto label_327290;
        }
    }
    ctx->pc = 0x3271B0u;
label_3271b0:
    // 0x3271b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3271b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3271b4:
    // 0x3271b4: 0xe62c0004  swc1        $f12, 0x4($s1)
    ctx->pc = 0x3271b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3271b8:
    // 0x3271b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3271b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3271bc:
    // 0x3271bc: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x3271bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_3271c0:
    // 0x3271c0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3271c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_3271c4:
    // 0x3271c4: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x3271c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
label_3271c8:
    // 0x3271c8: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x3271c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3271cc:
    // 0x3271cc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3271d0:
    if (ctx->pc == 0x3271D0u) {
        ctx->pc = 0x3271D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271CCu;
        // 0x3271d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3271D4u;
        goto label_3271d4;
    }
    ctx->pc = 0x3271CCu;
    {
        const bool branch_taken_0x3271cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3271D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271CCu;
        // 0x3271d0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271cc) {
            ctx->pc = 0x3271E8u;
            goto label_3271e8;
        }
    }
    ctx->pc = 0x3271D4u;
label_3271d4:
    // 0x3271d4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3271d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3271d8:
    // 0x3271d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3271dc:
    if (ctx->pc == 0x3271DCu) {
        ctx->pc = 0x3271DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271D8u;
        // 0x3271dc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3271E0u;
        goto label_3271e0;
    }
    ctx->pc = 0x3271D8u;
    {
        const bool branch_taken_0x3271d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3271d8) {
            ctx->pc = 0x3271DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3271D8u;
            // 0x3271dc: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3271ECu;
            goto label_3271ec;
        }
    }
    ctx->pc = 0x3271E0u;
label_3271e0:
    // 0x3271e0: 0xc106794  jal         func_419E50
label_3271e4:
    if (ctx->pc == 0x3271E4u) {
        ctx->pc = 0x3271E8u;
        goto label_3271e8;
    }
    ctx->pc = 0x3271E0u;
    SET_GPR_U32(ctx, 31, 0x3271E8u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x3271E0u, 0x3271E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271E8u;
label_3271e8:
    // 0x3271e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3271e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3271ec:
    // 0x3271ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3271ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3271f0:
    // 0x3271f0: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x3271f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_3271f4:
    // 0x3271f4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3271f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_3271f8:
    // 0x3271f8: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x3271f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
label_3271fc:
    // 0x3271fc: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x3271fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_327200:
    // 0x327200: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_327204:
    if (ctx->pc == 0x327204u) {
        ctx->pc = 0x327204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327200u;
        // 0x327204: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327208u;
        goto label_327208;
    }
    ctx->pc = 0x327200u;
    {
        const bool branch_taken_0x327200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x327204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327200u;
        // 0x327204: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327200) {
            ctx->pc = 0x32721Cu;
            goto label_32721c;
        }
    }
    ctx->pc = 0x327208u;
label_327208:
    // 0x327208: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x327208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32720c:
    // 0x32720c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_327210:
    if (ctx->pc == 0x327210u) {
        ctx->pc = 0x327210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32720Cu;
        // 0x327210: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327214u;
        goto label_327214;
    }
    ctx->pc = 0x32720Cu;
    {
        const bool branch_taken_0x32720c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32720c) {
            ctx->pc = 0x327210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32720Cu;
            // 0x327210: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327220u;
            goto label_327220;
        }
    }
    ctx->pc = 0x327214u;
label_327214:
    // 0x327214: 0xc106794  jal         func_419E50
label_327218:
    if (ctx->pc == 0x327218u) {
        ctx->pc = 0x32721Cu;
        goto label_32721c;
    }
    ctx->pc = 0x327214u;
    SET_GPR_U32(ctx, 31, 0x32721Cu);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x327214u, 0x32721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32721Cu;
label_32721c:
    // 0x32721c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327220:
    // 0x327220: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x327220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_327224:
    // 0x327224: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x327224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_327228:
    // 0x327228: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x327228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_32722c:
    // 0x32722c: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x32722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_327230:
    // 0x327230: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_327234:
    if (ctx->pc == 0x327234u) {
        ctx->pc = 0x327234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327230u;
        // 0x327234: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327238u;
        goto label_327238;
    }
    ctx->pc = 0x327230u;
    {
        const bool branch_taken_0x327230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x327234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327230u;
        // 0x327234: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327230) {
            ctx->pc = 0x32724Cu;
            goto label_32724c;
        }
    }
    ctx->pc = 0x327238u;
label_327238:
    // 0x327238: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x327238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32723c:
    // 0x32723c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_327240:
    if (ctx->pc == 0x327240u) {
        ctx->pc = 0x327240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32723Cu;
        // 0x327240: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327244u;
        goto label_327244;
    }
    ctx->pc = 0x32723Cu;
    {
        const bool branch_taken_0x32723c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32723c) {
            ctx->pc = 0x327240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32723Cu;
            // 0x327240: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327250u;
            goto label_327250;
        }
    }
    ctx->pc = 0x327244u;
label_327244:
    // 0x327244: 0xc106794  jal         func_419E50
label_327248:
    if (ctx->pc == 0x327248u) {
        ctx->pc = 0x32724Cu;
        goto label_32724c;
    }
    ctx->pc = 0x327244u;
    SET_GPR_U32(ctx, 31, 0x32724Cu);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x327244u, 0x32724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32724Cu;
label_32724c:
    // 0x32724c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327250:
    // 0x327250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x327250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_327254:
    // 0x327254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x327254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_327258:
    // 0x327258: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x327258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_32725c:
    // 0x32725c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327260:
    // 0x327260: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x327260u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_327264:
    // 0x327264: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x327264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_327268:
    // 0x327268: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x327268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_32726c:
    // 0x32726c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32726cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_327270:
    // 0x327270: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x327270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_327274:
    // 0x327274: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_327278:
    if (ctx->pc == 0x327278u) {
        ctx->pc = 0x327278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327274u;
        // 0x327278: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32727Cu;
        goto label_32727c;
    }
    ctx->pc = 0x327274u;
    {
        const bool branch_taken_0x327274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327274u;
        // 0x327278: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327274) {
            ctx->pc = 0x327290u;
            goto label_327290;
        }
    }
    ctx->pc = 0x32727Cu;
label_32727c:
    // 0x32727c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x32727cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_327280:
    // 0x327280: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_327284:
    if (ctx->pc == 0x327284u) {
        ctx->pc = 0x327284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327280u;
        // 0x327284: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327288u;
        goto label_327288;
    }
    ctx->pc = 0x327280u;
    {
        const bool branch_taken_0x327280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x327284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327280u;
        // 0x327284: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327280) {
            ctx->pc = 0x3272B8u;
            goto label_3272b8;
        }
    }
    ctx->pc = 0x327288u;
label_327288:
    // 0x327288: 0xc106794  jal         func_419E50
label_32728c:
    if (ctx->pc == 0x32728Cu) {
        ctx->pc = 0x327290u;
        goto label_327290;
    }
    ctx->pc = 0x327288u;
    SET_GPR_U32(ctx, 31, 0x327290u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x327288u, 0x327290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327290u;
label_327290:
    // 0x327290: 0x10000009  b           . + 4 + (0x9 << 2)
label_327294:
    if (ctx->pc == 0x327294u) {
        ctx->pc = 0x327294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327290u;
        // 0x327294: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327298u;
        goto label_327298;
    }
    ctx->pc = 0x327290u;
    {
        const bool branch_taken_0x327290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327290u;
        // 0x327294: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327290) {
            ctx->pc = 0x3272B8u;
            goto label_3272b8;
        }
    }
    ctx->pc = 0x327298u;
label_327298:
    // 0x327298: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x327298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_32729c:
    // 0x32729c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3272a0:
    // 0x3272a0: 0xc1035f6  jal         func_40D7D8
label_3272a4:
    if (ctx->pc == 0x3272A4u) {
        ctx->pc = 0x3272A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272A0u;
        // 0x3272a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3272A8u;
        goto label_3272a8;
    }
    ctx->pc = 0x3272A0u;
    SET_GPR_U32(ctx, 31, 0x3272A8u);
    ctx->pc = 0x3272A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272A0u;
    // 0x3272a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3272A0u, 0x3272A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272A8u;
label_3272a8:
    // 0x3272a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3272a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3272ac:
    // 0x3272ac: 0xc103628  jal         func_40D8A0
label_3272b0:
    if (ctx->pc == 0x3272B0u) {
        ctx->pc = 0x3272B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272ACu;
        // 0x3272b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3272B4u;
        goto label_3272b4;
    }
    ctx->pc = 0x3272ACu;
    SET_GPR_U32(ctx, 31, 0x3272B4u);
    ctx->pc = 0x3272B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272ACu;
    // 0x3272b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3272ACu, 0x3272B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272B4u;
label_3272b4:
    // 0x3272b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3272b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3272b8:
    // 0x3272b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3272b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3272bc:
    // 0x3272bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3272bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3272c0:
    // 0x3272c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3272c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3272c4:
    // 0x3272c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3272c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3272c8:
    // 0x3272c8: 0x3e00008  jr          $ra
label_3272cc:
    if (ctx->pc == 0x3272CCu) {
        ctx->pc = 0x3272CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272C8u;
        // 0x3272cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3272D0u;
        goto label_3272d0;
    }
    ctx->pc = 0x3272C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3272CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272C8u;
        // 0x3272cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3272C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3272D0u;
label_3272d0:
    // 0x3272d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3272d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3272d4:
    // 0x3272d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3272d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3272d8:
    // 0x3272d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3272d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3272dc:
    // 0x3272dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3272dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3272e0:
    // 0x3272e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3272e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3272e4:
    // 0x3272e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3272e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3272e8:
    // 0x3272e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3272e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3272ec:
    // 0x3272ec: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x3272ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_3272f0:
    // 0x3272f0: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
label_3272f4:
    if (ctx->pc == 0x3272F4u) {
        ctx->pc = 0x3272F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272F0u;
        // 0x3272f4: 0x8f82a650  lw          $v0, -0x59B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3272F8u;
        goto label_3272f8;
    }
    ctx->pc = 0x3272F0u;
    {
        const bool branch_taken_0x3272f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3272F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272F0u;
        // 0x3272f4: 0x8f82a650  lw          $v0, -0x59B0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272f0) {
            ctx->pc = 0x32744Cu;
            goto label_32744c;
        }
    }
    ctx->pc = 0x3272F8u;
label_3272f8:
    // 0x3272f8: 0x2651004c  addiu       $s1, $s2, 0x4C
    ctx->pc = 0x3272f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_3272fc:
    // 0x3272fc: 0x8f83a654  lw          $v1, -0x59AC($gp)
    ctx->pc = 0x3272fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
label_327300:
    // 0x327300: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x327300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_327304:
    // 0x327304: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x327304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_327308:
    // 0x327308: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_32730c:
    if (ctx->pc == 0x32730Cu) {
        ctx->pc = 0x32730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327308u;
        // 0x32730c: 0x839821  addu        $s3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327310u;
        goto label_327310;
    }
    ctx->pc = 0x327308u;
    {
        const bool branch_taken_0x327308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x32730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327308u;
        // 0x32730c: 0x839821  addu        $s3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327308) {
            ctx->pc = 0x32731Cu;
            goto label_32731c;
        }
    }
    ctx->pc = 0x327310u;
label_327310:
    // 0x327310: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327314:
    // 0x327314: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_327318:
    if (ctx->pc == 0x327318u) {
        ctx->pc = 0x327318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327314u;
        // 0x327318: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32731Cu;
        goto label_32731c;
    }
    ctx->pc = 0x327314u;
    {
        const bool branch_taken_0x327314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327314) {
            ctx->pc = 0x327318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327314u;
            // 0x327318: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x327334u;
            goto label_327334;
        }
    }
    ctx->pc = 0x32731Cu;
label_32731c:
    // 0x32731c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x32731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_327320:
    // 0x327320: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x327320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_327324:
    // 0x327324: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_327328:
    if (ctx->pc == 0x327328u) {
        ctx->pc = 0x327328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327324u;
        // 0x327328: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32732Cu;
        goto label_32732c;
    }
    ctx->pc = 0x327324u;
    {
        const bool branch_taken_0x327324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327324u;
        // 0x327328: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327324) {
            ctx->pc = 0x327444u;
            goto label_327444;
        }
    }
    ctx->pc = 0x32732Cu;
label_32732c:
    // 0x32732c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x32732cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_327330:
    // 0x327330: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327334:
    // 0x327334: 0x10000006  b           . + 4 + (0x6 << 2)
label_327338:
    if (ctx->pc == 0x327338u) {
        ctx->pc = 0x327338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327334u;
        // 0x327338: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32733Cu;
        goto label_32733c;
    }
    ctx->pc = 0x327334u;
    {
        const bool branch_taken_0x327334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327334u;
        // 0x327338: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327334) {
            ctx->pc = 0x327350u;
            goto label_327350;
        }
    }
    ctx->pc = 0x32733Cu;
label_32733c:
    // 0x32733c: 0x0  nop
    ctx->pc = 0x32733cu;
    // NOP
label_327340:
    // 0x327340: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x327340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327344:
    // 0x327344: 0x40f809  jalr        $v0
label_327348:
    if (ctx->pc == 0x327348u) {
        ctx->pc = 0x327348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327344u;
        // 0x327348: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x32734Cu;
        goto label_32734c;
    }
    ctx->pc = 0x327344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32734Cu);
        ctx->pc = 0x327348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327344u;
        // 0x327348: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327344u, 0x32734Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32734Cu;
label_32734c:
    // 0x32734c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327350:
    // 0x327350: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x327350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_327354:
    // 0x327354: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x327354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_327358:
    // 0x327358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x327358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_32735c:
    // 0x32735c: 0x0  nop
    ctx->pc = 0x32735cu;
    // NOP
label_327360:
    // 0x327360: 0x4503fff7  bc1tl       . + 4 + (-0x9 << 2)
label_327364:
    if (ctx->pc == 0x327364u) {
        ctx->pc = 0x327364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327360u;
        // 0x327364: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327368u;
        goto label_327368;
    }
    ctx->pc = 0x327360u;
    {
        const bool branch_taken_0x327360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x327360) {
            ctx->pc = 0x327364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327360u;
            // 0x327364: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327340;
        }
    }
    ctx->pc = 0x327368u;
label_327368:
    // 0x327368: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x327368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32736c:
    // 0x32736c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327370:
    // 0x327370: 0x84640004  lh          $a0, 0x4($v1)
    ctx->pc = 0x327370u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_327374:
    // 0x327374: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x327374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_327378:
    // 0x327378: 0xa6240004  sh          $a0, 0x4($s1)
    ctx->pc = 0x327378u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 4));
label_32737c:
    // 0x32737c: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x32737cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_327380:
    // 0x327380: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_327384:
    if (ctx->pc == 0x327384u) {
        ctx->pc = 0x327384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327380u;
        // 0x327384: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327388u;
        goto label_327388;
    }
    ctx->pc = 0x327380u;
    {
        const bool branch_taken_0x327380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x327384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327380u;
        // 0x327384: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327380) {
            ctx->pc = 0x32739Cu;
            goto label_32739c;
        }
    }
    ctx->pc = 0x327388u;
label_327388:
    // 0x327388: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x327388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_32738c:
    // 0x32738c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_327390:
    if (ctx->pc == 0x327390u) {
        ctx->pc = 0x327390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32738Cu;
        // 0x327390: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327394u;
        goto label_327394;
    }
    ctx->pc = 0x32738Cu;
    {
        const bool branch_taken_0x32738c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32738c) {
            ctx->pc = 0x327390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32738Cu;
            // 0x327390: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3273A0u;
            goto label_3273a0;
        }
    }
    ctx->pc = 0x327394u;
label_327394:
    // 0x327394: 0xc106794  jal         func_419E50
label_327398:
    if (ctx->pc == 0x327398u) {
        ctx->pc = 0x32739Cu;
        goto label_32739c;
    }
    ctx->pc = 0x327394u;
    SET_GPR_U32(ctx, 31, 0x32739Cu);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x327394u, 0x32739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32739Cu;
label_32739c:
    // 0x32739c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32739cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3273a0:
    // 0x3273a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3273a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3273a4:
    // 0x3273a4: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x3273a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_3273a8:
    // 0x3273a8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3273a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_3273ac:
    // 0x3273ac: 0xa6240006  sh          $a0, 0x6($s1)
    ctx->pc = 0x3273acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 4));
label_3273b0:
    // 0x3273b0: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x3273b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3273b4:
    // 0x3273b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3273b8:
    if (ctx->pc == 0x3273B8u) {
        ctx->pc = 0x3273B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273B4u;
        // 0x3273b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3273BCu;
        goto label_3273bc;
    }
    ctx->pc = 0x3273B4u;
    {
        const bool branch_taken_0x3273b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3273B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273B4u;
        // 0x3273b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273b4) {
            ctx->pc = 0x3273D0u;
            goto label_3273d0;
        }
    }
    ctx->pc = 0x3273BCu;
label_3273bc:
    // 0x3273bc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3273bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3273c0:
    // 0x3273c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3273c4:
    if (ctx->pc == 0x3273C4u) {
        ctx->pc = 0x3273C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273C0u;
        // 0x3273c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3273C8u;
        goto label_3273c8;
    }
    ctx->pc = 0x3273C0u;
    {
        const bool branch_taken_0x3273c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3273c0) {
            ctx->pc = 0x3273C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3273C0u;
            // 0x3273c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3273D4u;
            goto label_3273d4;
        }
    }
    ctx->pc = 0x3273C8u;
label_3273c8:
    // 0x3273c8: 0xc106794  jal         func_419E50
label_3273cc:
    if (ctx->pc == 0x3273CCu) {
        ctx->pc = 0x3273D0u;
        goto label_3273d0;
    }
    ctx->pc = 0x3273C8u;
    SET_GPR_U32(ctx, 31, 0x3273D0u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x3273C8u, 0x3273D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3273D0u;
label_3273d0:
    // 0x3273d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3273d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3273d4:
    // 0x3273d4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3273d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3273d8:
    // 0x3273d8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x3273d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_3273dc:
    // 0x3273dc: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x3273dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_3273e0:
    // 0x3273e0: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x3273e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3273e4:
    // 0x3273e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_3273e8:
    if (ctx->pc == 0x3273E8u) {
        ctx->pc = 0x3273E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273E4u;
        // 0x3273e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3273ECu;
        goto label_3273ec;
    }
    ctx->pc = 0x3273E4u;
    {
        const bool branch_taken_0x3273e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3273E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273E4u;
        // 0x3273e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3273e4) {
            ctx->pc = 0x327400u;
            goto label_327400;
        }
    }
    ctx->pc = 0x3273ECu;
label_3273ec:
    // 0x3273ec: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3273ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3273f0:
    // 0x3273f0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3273f4:
    if (ctx->pc == 0x3273F4u) {
        ctx->pc = 0x3273F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3273F0u;
        // 0x3273f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3273F8u;
        goto label_3273f8;
    }
    ctx->pc = 0x3273F0u;
    {
        const bool branch_taken_0x3273f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3273f0) {
            ctx->pc = 0x3273F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3273F0u;
            // 0x3273f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327404u;
            goto label_327404;
        }
    }
    ctx->pc = 0x3273F8u;
label_3273f8:
    // 0x3273f8: 0xc106794  jal         func_419E50
label_3273fc:
    if (ctx->pc == 0x3273FCu) {
        ctx->pc = 0x327400u;
        goto label_327400;
    }
    ctx->pc = 0x3273F8u;
    SET_GPR_U32(ctx, 31, 0x327400u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x3273F8u, 0x327400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327400u;
label_327400:
    // 0x327400: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x327400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327404:
    // 0x327404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x327404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_327408:
    // 0x327408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x327408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_32740c:
    // 0x32740c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x32740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_327410:
    // 0x327410: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x327410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327414:
    // 0x327414: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x327414u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_327418:
    // 0x327418: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x327418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_32741c:
    // 0x32741c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x32741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_327420:
    // 0x327420: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x327420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_327424:
    // 0x327424: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x327424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_327428:
    // 0x327428: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_32742c:
    if (ctx->pc == 0x32742Cu) {
        ctx->pc = 0x32742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327428u;
        // 0x32742c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x327430u;
        goto label_327430;
    }
    ctx->pc = 0x327428u;
    {
        const bool branch_taken_0x327428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327428u;
        // 0x32742c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327428) {
            ctx->pc = 0x327444u;
            goto label_327444;
        }
    }
    ctx->pc = 0x327430u;
label_327430:
    // 0x327430: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x327430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_327434:
    // 0x327434: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_327438:
    if (ctx->pc == 0x327438u) {
        ctx->pc = 0x327438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327434u;
        // 0x327438: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32743Cu;
        goto label_32743c;
    }
    ctx->pc = 0x327434u;
    {
        const bool branch_taken_0x327434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x327438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327434u;
        // 0x327438: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327434) {
            ctx->pc = 0x327470u;
            goto label_327470;
        }
    }
    ctx->pc = 0x32743Cu;
label_32743c:
    // 0x32743c: 0xc106794  jal         func_419E50
label_327440:
    if (ctx->pc == 0x327440u) {
        ctx->pc = 0x327444u;
        goto label_327444;
    }
    ctx->pc = 0x32743Cu;
    SET_GPR_U32(ctx, 31, 0x327444u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x32743Cu, 0x327444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327444u;
label_327444:
    // 0x327444: 0x1000000a  b           . + 4 + (0xA << 2)
label_327448:
    if (ctx->pc == 0x327448u) {
        ctx->pc = 0x327448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327444u;
        // 0x327448: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32744Cu;
        goto label_32744c;
    }
    ctx->pc = 0x327444u;
    {
        const bool branch_taken_0x327444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327444u;
        // 0x327448: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327444) {
            ctx->pc = 0x327470u;
            goto label_327470;
        }
    }
    ctx->pc = 0x32744Cu;
label_32744c:
    // 0x32744c: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x32744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_327450:
    // 0x327450: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x327450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327454:
    // 0x327454: 0xc1035f6  jal         func_40D7D8
label_327458:
    if (ctx->pc == 0x327458u) {
        ctx->pc = 0x327458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327454u;
        // 0x327458: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32745Cu;
        goto label_32745c;
    }
    ctx->pc = 0x327454u;
    SET_GPR_U32(ctx, 31, 0x32745Cu);
    ctx->pc = 0x327458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327454u;
    // 0x327458: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x327454u, 0x32745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32745Cu;
label_32745c:
    // 0x32745c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32745cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327460:
    // 0x327460: 0xc103628  jal         func_40D8A0
label_327464:
    if (ctx->pc == 0x327464u) {
        ctx->pc = 0x327464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327460u;
        // 0x327464: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327468u;
        goto label_327468;
    }
    ctx->pc = 0x327460u;
    SET_GPR_U32(ctx, 31, 0x327468u);
    ctx->pc = 0x327464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327460u;
    // 0x327464: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x327460u, 0x327468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327468u;
label_327468:
    // 0x327468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32746c:
    // 0x32746c: 0x0  nop
    ctx->pc = 0x32746cu;
    // NOP
label_327470:
    // 0x327470: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x327470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_327474:
    // 0x327474: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x327474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_327478:
    // 0x327478: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x327478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32747c:
    // 0x32747c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x32747cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_327480:
    // 0x327480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327484:
    // 0x327484: 0x3e00008  jr          $ra
label_327488:
    if (ctx->pc == 0x327488u) {
        ctx->pc = 0x327488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327484u;
        // 0x327488: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32748Cu;
        goto label_32748c;
    }
    ctx->pc = 0x327484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327484u;
        // 0x327488: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32748Cu;
label_32748c:
    // 0x32748c: 0x0  nop
    ctx->pc = 0x32748cu;
    // NOP
    ctx->pc = 0x327490u;
}
