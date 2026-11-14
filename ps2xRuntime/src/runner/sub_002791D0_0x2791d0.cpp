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

// Function: sub_002791D0
// Address: 0x2791d0 - 0x279470
void sub_002791D0_0x2791d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002791D0_0x2791d0");
#endif

    switch (ctx->pc) {
        case 0x2791d0u: goto label_2791d0;
        case 0x2791d4u: goto label_2791d4;
        case 0x2791d8u: goto label_2791d8;
        case 0x2791dcu: goto label_2791dc;
        case 0x2791e0u: goto label_2791e0;
        case 0x2791e4u: goto label_2791e4;
        case 0x2791e8u: goto label_2791e8;
        case 0x2791ecu: goto label_2791ec;
        case 0x2791f0u: goto label_2791f0;
        case 0x2791f4u: goto label_2791f4;
        case 0x2791f8u: goto label_2791f8;
        case 0x2791fcu: goto label_2791fc;
        case 0x279200u: goto label_279200;
        case 0x279204u: goto label_279204;
        case 0x279208u: goto label_279208;
        case 0x27920cu: goto label_27920c;
        case 0x279210u: goto label_279210;
        case 0x279214u: goto label_279214;
        case 0x279218u: goto label_279218;
        case 0x27921cu: goto label_27921c;
        case 0x279220u: goto label_279220;
        case 0x279224u: goto label_279224;
        case 0x279228u: goto label_279228;
        case 0x27922cu: goto label_27922c;
        case 0x279230u: goto label_279230;
        case 0x279234u: goto label_279234;
        case 0x279238u: goto label_279238;
        case 0x27923cu: goto label_27923c;
        case 0x279240u: goto label_279240;
        case 0x279244u: goto label_279244;
        case 0x279248u: goto label_279248;
        case 0x27924cu: goto label_27924c;
        case 0x279250u: goto label_279250;
        case 0x279254u: goto label_279254;
        case 0x279258u: goto label_279258;
        case 0x27925cu: goto label_27925c;
        case 0x279260u: goto label_279260;
        case 0x279264u: goto label_279264;
        case 0x279268u: goto label_279268;
        case 0x27926cu: goto label_27926c;
        case 0x279270u: goto label_279270;
        case 0x279274u: goto label_279274;
        case 0x279278u: goto label_279278;
        case 0x27927cu: goto label_27927c;
        case 0x279280u: goto label_279280;
        case 0x279284u: goto label_279284;
        case 0x279288u: goto label_279288;
        case 0x27928cu: goto label_27928c;
        case 0x279290u: goto label_279290;
        case 0x279294u: goto label_279294;
        case 0x279298u: goto label_279298;
        case 0x27929cu: goto label_27929c;
        case 0x2792a0u: goto label_2792a0;
        case 0x2792a4u: goto label_2792a4;
        case 0x2792a8u: goto label_2792a8;
        case 0x2792acu: goto label_2792ac;
        case 0x2792b0u: goto label_2792b0;
        case 0x2792b4u: goto label_2792b4;
        case 0x2792b8u: goto label_2792b8;
        case 0x2792bcu: goto label_2792bc;
        case 0x2792c0u: goto label_2792c0;
        case 0x2792c4u: goto label_2792c4;
        case 0x2792c8u: goto label_2792c8;
        case 0x2792ccu: goto label_2792cc;
        case 0x2792d0u: goto label_2792d0;
        case 0x2792d4u: goto label_2792d4;
        case 0x2792d8u: goto label_2792d8;
        case 0x2792dcu: goto label_2792dc;
        case 0x2792e0u: goto label_2792e0;
        case 0x2792e4u: goto label_2792e4;
        case 0x2792e8u: goto label_2792e8;
        case 0x2792ecu: goto label_2792ec;
        case 0x2792f0u: goto label_2792f0;
        case 0x2792f4u: goto label_2792f4;
        case 0x2792f8u: goto label_2792f8;
        case 0x2792fcu: goto label_2792fc;
        case 0x279300u: goto label_279300;
        case 0x279304u: goto label_279304;
        case 0x279308u: goto label_279308;
        case 0x27930cu: goto label_27930c;
        case 0x279310u: goto label_279310;
        case 0x279314u: goto label_279314;
        case 0x279318u: goto label_279318;
        case 0x27931cu: goto label_27931c;
        case 0x279320u: goto label_279320;
        case 0x279324u: goto label_279324;
        case 0x279328u: goto label_279328;
        case 0x27932cu: goto label_27932c;
        case 0x279330u: goto label_279330;
        case 0x279334u: goto label_279334;
        case 0x279338u: goto label_279338;
        case 0x27933cu: goto label_27933c;
        case 0x279340u: goto label_279340;
        case 0x279344u: goto label_279344;
        case 0x279348u: goto label_279348;
        case 0x27934cu: goto label_27934c;
        case 0x279350u: goto label_279350;
        case 0x279354u: goto label_279354;
        case 0x279358u: goto label_279358;
        case 0x27935cu: goto label_27935c;
        case 0x279360u: goto label_279360;
        case 0x279364u: goto label_279364;
        case 0x279368u: goto label_279368;
        case 0x27936cu: goto label_27936c;
        case 0x279370u: goto label_279370;
        case 0x279374u: goto label_279374;
        case 0x279378u: goto label_279378;
        case 0x27937cu: goto label_27937c;
        case 0x279380u: goto label_279380;
        case 0x279384u: goto label_279384;
        case 0x279388u: goto label_279388;
        case 0x27938cu: goto label_27938c;
        case 0x279390u: goto label_279390;
        case 0x279394u: goto label_279394;
        case 0x279398u: goto label_279398;
        case 0x27939cu: goto label_27939c;
        case 0x2793a0u: goto label_2793a0;
        case 0x2793a4u: goto label_2793a4;
        case 0x2793a8u: goto label_2793a8;
        case 0x2793acu: goto label_2793ac;
        case 0x2793b0u: goto label_2793b0;
        case 0x2793b4u: goto label_2793b4;
        case 0x2793b8u: goto label_2793b8;
        case 0x2793bcu: goto label_2793bc;
        case 0x2793c0u: goto label_2793c0;
        case 0x2793c4u: goto label_2793c4;
        case 0x2793c8u: goto label_2793c8;
        case 0x2793ccu: goto label_2793cc;
        case 0x2793d0u: goto label_2793d0;
        case 0x2793d4u: goto label_2793d4;
        case 0x2793d8u: goto label_2793d8;
        case 0x2793dcu: goto label_2793dc;
        case 0x2793e0u: goto label_2793e0;
        case 0x2793e4u: goto label_2793e4;
        case 0x2793e8u: goto label_2793e8;
        case 0x2793ecu: goto label_2793ec;
        case 0x2793f0u: goto label_2793f0;
        case 0x2793f4u: goto label_2793f4;
        case 0x2793f8u: goto label_2793f8;
        case 0x2793fcu: goto label_2793fc;
        case 0x279400u: goto label_279400;
        case 0x279404u: goto label_279404;
        case 0x279408u: goto label_279408;
        case 0x27940cu: goto label_27940c;
        case 0x279410u: goto label_279410;
        case 0x279414u: goto label_279414;
        case 0x279418u: goto label_279418;
        case 0x27941cu: goto label_27941c;
        case 0x279420u: goto label_279420;
        case 0x279424u: goto label_279424;
        case 0x279428u: goto label_279428;
        case 0x27942cu: goto label_27942c;
        case 0x279430u: goto label_279430;
        case 0x279434u: goto label_279434;
        case 0x279438u: goto label_279438;
        case 0x27943cu: goto label_27943c;
        case 0x279440u: goto label_279440;
        case 0x279444u: goto label_279444;
        case 0x279448u: goto label_279448;
        case 0x27944cu: goto label_27944c;
        case 0x279450u: goto label_279450;
        case 0x279454u: goto label_279454;
        case 0x279458u: goto label_279458;
        case 0x27945cu: goto label_27945c;
        case 0x279460u: goto label_279460;
        case 0x279464u: goto label_279464;
        case 0x279468u: goto label_279468;
        case 0x27946cu: goto label_27946c;
        default: break;
    }

    ctx->pc = 0x2791d0u;

label_2791d0:
    // 0x2791d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2791d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2791d4:
    // 0x2791d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2791d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2791d8:
    // 0x2791d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2791d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2791dc:
    // 0x2791dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2791dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2791e0:
    // 0x2791e0: 0x3e00008  jr          $ra
label_2791e4:
    if (ctx->pc == 0x2791E4u) {
        ctx->pc = 0x2791E8u;
        goto label_2791e8;
    }
    ctx->pc = 0x2791E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2791E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2791E8u;
label_2791e8:
    // 0x2791e8: 0x0  nop
    ctx->pc = 0x2791e8u;
    // NOP
label_2791ec:
    // 0x2791ec: 0x0  nop
    ctx->pc = 0x2791ecu;
    // NOP
label_2791f0:
    // 0x2791f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2791f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2791f4:
    // 0x2791f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2791f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2791f8:
    // 0x2791f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2791f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2791fc:
    // 0x2791fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2791fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_279200:
    // 0x279200: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279204:
    // 0x279204: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_279208:
    if (ctx->pc == 0x279208u) {
        ctx->pc = 0x27920Cu;
        goto label_27920c;
    }
    ctx->pc = 0x279204u;
    {
        const bool branch_taken_0x279204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279204) {
            ctx->pc = 0x2792A0u;
            goto label_2792a0;
        }
    }
    ctx->pc = 0x27920Cu;
label_27920c:
    // 0x27920c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27920cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_279210:
    // 0x279210: 0x24635f50  addiu       $v1, $v1, 0x5F50
    ctx->pc = 0x279210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24400));
label_279214:
    // 0x279214: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279218:
    // 0x279218: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x279218u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_27921c:
    // 0x27921c: 0xaf80bc04  sw          $zero, -0x43FC($gp)
    ctx->pc = 0x27921cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949892), GPR_U32(ctx, 0));
label_279220:
    // 0x279220: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279224:
    // 0x279224: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x279224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_279228:
    // 0x279228: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x279228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27922c:
    // 0x27922c: 0xc06408c  jal         func_190230
label_279230:
    if (ctx->pc == 0x279230u) {
        ctx->pc = 0x279234u;
        goto label_279234;
    }
    ctx->pc = 0x27922Cu;
    SET_GPR_U32(ctx, 31, 0x279234u);
    ctx->pc = 0x190230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190230u, 0x27922Cu, 0x279234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279234u;
label_279234:
    // 0x279234: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279238:
    // 0x279238: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x279238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_27923c:
    // 0x27923c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27923cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_279240:
    // 0x279240: 0xc040ae4  jal         func_102B90
label_279244:
    if (ctx->pc == 0x279244u) {
        ctx->pc = 0x279248u;
        goto label_279248;
    }
    ctx->pc = 0x279240u;
    SET_GPR_U32(ctx, 31, 0x279248u);
    ctx->pc = 0x102B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B90u, 0x279240u, 0x279248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279248u;
label_279248:
    // 0x279248: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_27924c:
    // 0x27924c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x27924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_279250:
    // 0x279250: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x279250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_279254:
    // 0x279254: 0xc09e2bc  jal         func_278AF0
label_279258:
    if (ctx->pc == 0x279258u) {
        ctx->pc = 0x27925Cu;
        goto label_27925c;
    }
    ctx->pc = 0x279254u;
    SET_GPR_U32(ctx, 31, 0x27925Cu);
    ctx->pc = 0x278AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278AF0u, 0x279254u, 0x27925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27925Cu;
label_27925c:
    // 0x27925c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27925cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279260:
    // 0x279260: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x279260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_279264:
    // 0x279264: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x279264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_279268:
    // 0x279268: 0xc09e344  jal         func_278D10
label_27926c:
    if (ctx->pc == 0x27926Cu) {
        ctx->pc = 0x279270u;
        goto label_279270;
    }
    ctx->pc = 0x279268u;
    SET_GPR_U32(ctx, 31, 0x279270u);
    ctx->pc = 0x278D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278D10u, 0x279268u, 0x279270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279270u;
label_279270:
    // 0x279270: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279274:
    // 0x279274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x279274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279278:
    // 0x279278: 0xc084ffc  jal         func_213FF0
label_27927c:
    if (ctx->pc == 0x27927Cu) {
        ctx->pc = 0x279280u;
        goto label_279280;
    }
    ctx->pc = 0x279278u;
    SET_GPR_U32(ctx, 31, 0x279280u);
    ctx->pc = 0x213FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FF0u, 0x279278u, 0x279280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279280u;
label_279280:
    // 0x279280: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x279280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_279284:
    // 0x279284: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x279284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_279288:
    // 0x279288: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x279288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_27928c:
    // 0x27928c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_279290:
    if (ctx->pc == 0x279290u) {
        ctx->pc = 0x279294u;
        goto label_279294;
    }
    ctx->pc = 0x27928Cu;
    {
        const bool branch_taken_0x27928c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27928c) {
            ctx->pc = 0x2792A0u;
            goto label_2792a0;
        }
    }
    ctx->pc = 0x279294u;
label_279294:
    // 0x279294: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279298:
    // 0x279298: 0xc0ba070  jal         func_2E81C0
label_27929c:
    if (ctx->pc == 0x27929Cu) {
        ctx->pc = 0x2792A0u;
        goto label_2792a0;
    }
    ctx->pc = 0x279298u;
    SET_GPR_U32(ctx, 31, 0x2792A0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x279298u, 0x2792A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792A0u;
label_2792a0:
    // 0x2792a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2792a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2792a4:
    // 0x2792a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2792a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2792a8:
    // 0x2792a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2792a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2792ac:
    // 0x2792ac: 0x3e00008  jr          $ra
label_2792b0:
    if (ctx->pc == 0x2792B0u) {
        ctx->pc = 0x2792B4u;
        goto label_2792b4;
    }
    ctx->pc = 0x2792ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2792ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2792B4u;
label_2792b4:
    // 0x2792b4: 0x0  nop
    ctx->pc = 0x2792b4u;
    // NOP
label_2792b8:
    // 0x2792b8: 0x0  nop
    ctx->pc = 0x2792b8u;
    // NOP
label_2792bc:
    // 0x2792bc: 0x0  nop
    ctx->pc = 0x2792bcu;
    // NOP
label_2792c0:
    // 0x2792c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2792c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2792c4:
    // 0x2792c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2792c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2792c8:
    // 0x2792c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2792c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2792cc:
    // 0x2792cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2792ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2792d0:
    // 0x2792d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2792d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2792d4:
    // 0x2792d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2792d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2792d8:
    // 0x2792d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2792d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2792dc:
    // 0x2792dc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2792dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_2792e0:
    // 0x2792e0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2792e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2792e4:
    // 0x2792e4: 0xc085020  jal         func_214080
label_2792e8:
    if (ctx->pc == 0x2792E8u) {
        ctx->pc = 0x2792ECu;
        goto label_2792ec;
    }
    ctx->pc = 0x2792E4u;
    SET_GPR_U32(ctx, 31, 0x2792ECu);
    ctx->pc = 0x214080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214080u, 0x2792E4u, 0x2792ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792ECu;
label_2792ec:
    // 0x2792ec: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2792ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2792f0:
    // 0x2792f0: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x2792f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_2792f4:
    // 0x2792f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2792f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2792f8:
    // 0x2792f8: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_2792fc:
    if (ctx->pc == 0x2792FCu) {
        ctx->pc = 0x279300u;
        goto label_279300;
    }
    ctx->pc = 0x2792F8u;
    {
        const bool branch_taken_0x2792f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2792f8) {
            ctx->pc = 0x279398u;
            goto label_279398;
        }
    }
    ctx->pc = 0x279300u;
label_279300:
    // 0x279300: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x279300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_279304:
    // 0x279304: 0xc119b68  jal         func_466DA0
label_279308:
    if (ctx->pc == 0x279308u) {
        ctx->pc = 0x27930Cu;
        goto label_27930c;
    }
    ctx->pc = 0x279304u;
    SET_GPR_U32(ctx, 31, 0x27930Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x279304u, 0x27930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27930Cu;
label_27930c:
    // 0x27930c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x27930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_279310:
    // 0x279310: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x279310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279314:
    // 0x279314: 0xc0400e0  jal         func_100380
label_279318:
    if (ctx->pc == 0x279318u) {
        ctx->pc = 0x27931Cu;
        goto label_27931c;
    }
    ctx->pc = 0x279314u;
    SET_GPR_U32(ctx, 31, 0x27931Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x279314u, 0x27931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27931Cu;
label_27931c:
    // 0x27931c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27931cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279320:
    // 0x279320: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_279324:
    if (ctx->pc == 0x279324u) {
        ctx->pc = 0x279328u;
        goto label_279328;
    }
    ctx->pc = 0x279320u;
    {
        const bool branch_taken_0x279320 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x279320) {
            ctx->pc = 0x279338u;
            goto label_279338;
        }
    }
    ctx->pc = 0x279328u;
label_279328:
    // 0x279328: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x279328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27932c:
    // 0x27932c: 0xc0a6730  jal         func_299CC0
label_279330:
    if (ctx->pc == 0x279330u) {
        ctx->pc = 0x279334u;
        goto label_279334;
    }
    ctx->pc = 0x27932Cu;
    SET_GPR_U32(ctx, 31, 0x279334u);
    ctx->pc = 0x299CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299CC0u, 0x27932Cu, 0x279334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279334u;
label_279334:
    // 0x279334: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x279334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279338:
    // 0x279338: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x279338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_27933c:
    // 0x27933c: 0xac530084  sw          $s3, 0x84($v0)
    ctx->pc = 0x27933cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 19));
label_279340:
    // 0x279340: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x279340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_279344:
    // 0x279344: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x279344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_279348:
    // 0x279348: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x279348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27934c:
    // 0x27934c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27934cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_279350:
    // 0x279350: 0x320f809  jalr        $t9
label_279354:
    if (ctx->pc == 0x279354u) {
        ctx->pc = 0x279358u;
        goto label_279358;
    }
    ctx->pc = 0x279350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x279358u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279350u, 0x279358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279358u;
label_279358:
    // 0x279358: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x279358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27935c:
    // 0x27935c: 0xc119b68  jal         func_466DA0
label_279360:
    if (ctx->pc == 0x279360u) {
        ctx->pc = 0x279364u;
        goto label_279364;
    }
    ctx->pc = 0x27935Cu;
    SET_GPR_U32(ctx, 31, 0x279364u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27935Cu, 0x279364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279364u;
label_279364:
    // 0x279364: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x279364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_279368:
    // 0x279368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x279368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27936c:
    // 0x27936c: 0xc0400e0  jal         func_100380
label_279370:
    if (ctx->pc == 0x279370u) {
        ctx->pc = 0x279374u;
        goto label_279374;
    }
    ctx->pc = 0x27936Cu;
    SET_GPR_U32(ctx, 31, 0x279374u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27936Cu, 0x279374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279374u;
label_279374:
    // 0x279374: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x279374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279378:
    // 0x279378: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_27937c:
    if (ctx->pc == 0x27937Cu) {
        ctx->pc = 0x279380u;
        goto label_279380;
    }
    ctx->pc = 0x279378u;
    {
        const bool branch_taken_0x279378 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x279378) {
            ctx->pc = 0x279390u;
            goto label_279390;
        }
    }
    ctx->pc = 0x279380u;
label_279380:
    // 0x279380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_279384:
    // 0x279384: 0xc09e51c  jal         func_279470
label_279388:
    if (ctx->pc == 0x279388u) {
        ctx->pc = 0x27938Cu;
        goto label_27938c;
    }
    ctx->pc = 0x279384u;
    SET_GPR_U32(ctx, 31, 0x27938Cu);
    ctx->pc = 0x279470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279470u, 0x279384u, 0x27938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27938Cu;
label_27938c:
    // 0x27938c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27938cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279390:
    // 0x279390: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x279390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_279394:
    // 0x279394: 0xac520090  sw          $s2, 0x90($v0)
    ctx->pc = 0x279394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 18));
label_279398:
    // 0x279398: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x279398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_27939c:
    // 0x27939c: 0xc119b68  jal         func_466DA0
label_2793a0:
    if (ctx->pc == 0x2793A0u) {
        ctx->pc = 0x2793A4u;
        goto label_2793a4;
    }
    ctx->pc = 0x27939Cu;
    SET_GPR_U32(ctx, 31, 0x2793A4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27939Cu, 0x2793A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793A4u;
label_2793a4:
    // 0x2793a4: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x2793a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2793a8:
    // 0x2793a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2793a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2793ac:
    // 0x2793ac: 0xc0400e0  jal         func_100380
label_2793b0:
    if (ctx->pc == 0x2793B0u) {
        ctx->pc = 0x2793B4u;
        goto label_2793b4;
    }
    ctx->pc = 0x2793ACu;
    SET_GPR_U32(ctx, 31, 0x2793B4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2793ACu, 0x2793B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793B4u;
label_2793b4:
    // 0x2793b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2793b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2793b8:
    // 0x2793b8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2793bc:
    if (ctx->pc == 0x2793BCu) {
        ctx->pc = 0x2793C0u;
        goto label_2793c0;
    }
    ctx->pc = 0x2793B8u;
    {
        const bool branch_taken_0x2793b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2793b8) {
            ctx->pc = 0x2793D0u;
            goto label_2793d0;
        }
    }
    ctx->pc = 0x2793C0u;
label_2793c0:
    // 0x2793c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2793c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2793c4:
    // 0x2793c4: 0xc089ddc  jal         func_227770
label_2793c8:
    if (ctx->pc == 0x2793C8u) {
        ctx->pc = 0x2793CCu;
        goto label_2793cc;
    }
    ctx->pc = 0x2793C4u;
    SET_GPR_U32(ctx, 31, 0x2793CCu);
    ctx->pc = 0x227770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227770u, 0x2793C4u, 0x2793CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793CCu;
label_2793cc:
    // 0x2793cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2793ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2793d0:
    // 0x2793d0: 0xaf91bb84  sw          $s1, -0x447C($gp)
    ctx->pc = 0x2793d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949764), GPR_U32(ctx, 17));
label_2793d4:
    // 0x2793d4: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2793d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_2793d8:
    // 0x2793d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2793d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2793dc:
    // 0x2793dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2793dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2793e0:
    // 0x2793e0: 0x320f809  jalr        $t9
label_2793e4:
    if (ctx->pc == 0x2793E4u) {
        ctx->pc = 0x2793E8u;
        goto label_2793e8;
    }
    ctx->pc = 0x2793E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2793E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2793E0u, 0x2793E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2793E8u;
label_2793e8:
    // 0x2793e8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2793e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2793ec:
    // 0x2793ec: 0xc119b68  jal         func_466DA0
label_2793f0:
    if (ctx->pc == 0x2793F0u) {
        ctx->pc = 0x2793F4u;
        goto label_2793f4;
    }
    ctx->pc = 0x2793ECu;
    SET_GPR_U32(ctx, 31, 0x2793F4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2793ECu, 0x2793F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793F4u;
label_2793f4:
    // 0x2793f4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2793f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2793f8:
    // 0x2793f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2793f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2793fc:
    // 0x2793fc: 0xc0400e0  jal         func_100380
label_279400:
    if (ctx->pc == 0x279400u) {
        ctx->pc = 0x279404u;
        goto label_279404;
    }
    ctx->pc = 0x2793FCu;
    SET_GPR_U32(ctx, 31, 0x279404u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2793FCu, 0x279404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279404u;
label_279404:
    // 0x279404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x279404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279408:
    // 0x279408: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_27940c:
    if (ctx->pc == 0x27940Cu) {
        ctx->pc = 0x279410u;
        goto label_279410;
    }
    ctx->pc = 0x279408u;
    {
        const bool branch_taken_0x279408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x279408) {
            ctx->pc = 0x279420u;
            goto label_279420;
        }
    }
    ctx->pc = 0x279410u;
label_279410:
    // 0x279410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279414:
    // 0x279414: 0xc0aac74  jal         func_2AB1D0
label_279418:
    if (ctx->pc == 0x279418u) {
        ctx->pc = 0x27941Cu;
        goto label_27941c;
    }
    ctx->pc = 0x279414u;
    SET_GPR_U32(ctx, 31, 0x27941Cu);
    ctx->pc = 0x2AB1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB1D0u, 0x279414u, 0x27941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27941Cu;
label_27941c:
    // 0x27941c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27941cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279420:
    // 0x279420: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x279420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_279424:
    // 0x279424: 0xac50008c  sw          $s0, 0x8C($v0)
    ctx->pc = 0x279424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 16));
label_279428:
    // 0x279428: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x279428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_27942c:
    // 0x27942c: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x27942cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_279430:
    // 0x279430: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x279430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_279434:
    // 0x279434: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x279434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_279438:
    // 0x279438: 0x320f809  jalr        $t9
label_27943c:
    if (ctx->pc == 0x27943Cu) {
        ctx->pc = 0x279440u;
        goto label_279440;
    }
    ctx->pc = 0x279438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x279440u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279438u, 0x279440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279440u;
label_279440:
    // 0x279440: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x279440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_279444:
    // 0x279444: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x279444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_279448:
    // 0x279448: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x279448u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27944c:
    // 0x27944c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27944cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_279450:
    // 0x279450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x279450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_279454:
    // 0x279454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279458:
    // 0x279458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27945c:
    // 0x27945c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27945cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_279460:
    // 0x279460: 0x3e00008  jr          $ra
label_279464:
    if (ctx->pc == 0x279464u) {
        ctx->pc = 0x279468u;
        goto label_279468;
    }
    ctx->pc = 0x279460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279468u;
label_279468:
    // 0x279468: 0x0  nop
    ctx->pc = 0x279468u;
    // NOP
label_27946c:
    // 0x27946c: 0x0  nop
    ctx->pc = 0x27946cu;
    // NOP
    ctx->pc = 0x279470u;
}
