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

// Function: sub_00237280
// Address: 0x237280 - 0x237590
void sub_00237280_0x237280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237280_0x237280");
#endif

    switch (ctx->pc) {
        case 0x237280u: goto label_237280;
        case 0x237284u: goto label_237284;
        case 0x237288u: goto label_237288;
        case 0x23728cu: goto label_23728c;
        case 0x237290u: goto label_237290;
        case 0x237294u: goto label_237294;
        case 0x237298u: goto label_237298;
        case 0x23729cu: goto label_23729c;
        case 0x2372a0u: goto label_2372a0;
        case 0x2372a4u: goto label_2372a4;
        case 0x2372a8u: goto label_2372a8;
        case 0x2372acu: goto label_2372ac;
        case 0x2372b0u: goto label_2372b0;
        case 0x2372b4u: goto label_2372b4;
        case 0x2372b8u: goto label_2372b8;
        case 0x2372bcu: goto label_2372bc;
        case 0x2372c0u: goto label_2372c0;
        case 0x2372c4u: goto label_2372c4;
        case 0x2372c8u: goto label_2372c8;
        case 0x2372ccu: goto label_2372cc;
        case 0x2372d0u: goto label_2372d0;
        case 0x2372d4u: goto label_2372d4;
        case 0x2372d8u: goto label_2372d8;
        case 0x2372dcu: goto label_2372dc;
        case 0x2372e0u: goto label_2372e0;
        case 0x2372e4u: goto label_2372e4;
        case 0x2372e8u: goto label_2372e8;
        case 0x2372ecu: goto label_2372ec;
        case 0x2372f0u: goto label_2372f0;
        case 0x2372f4u: goto label_2372f4;
        case 0x2372f8u: goto label_2372f8;
        case 0x2372fcu: goto label_2372fc;
        case 0x237300u: goto label_237300;
        case 0x237304u: goto label_237304;
        case 0x237308u: goto label_237308;
        case 0x23730cu: goto label_23730c;
        case 0x237310u: goto label_237310;
        case 0x237314u: goto label_237314;
        case 0x237318u: goto label_237318;
        case 0x23731cu: goto label_23731c;
        case 0x237320u: goto label_237320;
        case 0x237324u: goto label_237324;
        case 0x237328u: goto label_237328;
        case 0x23732cu: goto label_23732c;
        case 0x237330u: goto label_237330;
        case 0x237334u: goto label_237334;
        case 0x237338u: goto label_237338;
        case 0x23733cu: goto label_23733c;
        case 0x237340u: goto label_237340;
        case 0x237344u: goto label_237344;
        case 0x237348u: goto label_237348;
        case 0x23734cu: goto label_23734c;
        case 0x237350u: goto label_237350;
        case 0x237354u: goto label_237354;
        case 0x237358u: goto label_237358;
        case 0x23735cu: goto label_23735c;
        case 0x237360u: goto label_237360;
        case 0x237364u: goto label_237364;
        case 0x237368u: goto label_237368;
        case 0x23736cu: goto label_23736c;
        case 0x237370u: goto label_237370;
        case 0x237374u: goto label_237374;
        case 0x237378u: goto label_237378;
        case 0x23737cu: goto label_23737c;
        case 0x237380u: goto label_237380;
        case 0x237384u: goto label_237384;
        case 0x237388u: goto label_237388;
        case 0x23738cu: goto label_23738c;
        case 0x237390u: goto label_237390;
        case 0x237394u: goto label_237394;
        case 0x237398u: goto label_237398;
        case 0x23739cu: goto label_23739c;
        case 0x2373a0u: goto label_2373a0;
        case 0x2373a4u: goto label_2373a4;
        case 0x2373a8u: goto label_2373a8;
        case 0x2373acu: goto label_2373ac;
        case 0x2373b0u: goto label_2373b0;
        case 0x2373b4u: goto label_2373b4;
        case 0x2373b8u: goto label_2373b8;
        case 0x2373bcu: goto label_2373bc;
        case 0x2373c0u: goto label_2373c0;
        case 0x2373c4u: goto label_2373c4;
        case 0x2373c8u: goto label_2373c8;
        case 0x2373ccu: goto label_2373cc;
        case 0x2373d0u: goto label_2373d0;
        case 0x2373d4u: goto label_2373d4;
        case 0x2373d8u: goto label_2373d8;
        case 0x2373dcu: goto label_2373dc;
        case 0x2373e0u: goto label_2373e0;
        case 0x2373e4u: goto label_2373e4;
        case 0x2373e8u: goto label_2373e8;
        case 0x2373ecu: goto label_2373ec;
        case 0x2373f0u: goto label_2373f0;
        case 0x2373f4u: goto label_2373f4;
        case 0x2373f8u: goto label_2373f8;
        case 0x2373fcu: goto label_2373fc;
        case 0x237400u: goto label_237400;
        case 0x237404u: goto label_237404;
        case 0x237408u: goto label_237408;
        case 0x23740cu: goto label_23740c;
        case 0x237410u: goto label_237410;
        case 0x237414u: goto label_237414;
        case 0x237418u: goto label_237418;
        case 0x23741cu: goto label_23741c;
        case 0x237420u: goto label_237420;
        case 0x237424u: goto label_237424;
        case 0x237428u: goto label_237428;
        case 0x23742cu: goto label_23742c;
        case 0x237430u: goto label_237430;
        case 0x237434u: goto label_237434;
        case 0x237438u: goto label_237438;
        case 0x23743cu: goto label_23743c;
        case 0x237440u: goto label_237440;
        case 0x237444u: goto label_237444;
        case 0x237448u: goto label_237448;
        case 0x23744cu: goto label_23744c;
        case 0x237450u: goto label_237450;
        case 0x237454u: goto label_237454;
        case 0x237458u: goto label_237458;
        case 0x23745cu: goto label_23745c;
        case 0x237460u: goto label_237460;
        case 0x237464u: goto label_237464;
        case 0x237468u: goto label_237468;
        case 0x23746cu: goto label_23746c;
        case 0x237470u: goto label_237470;
        case 0x237474u: goto label_237474;
        case 0x237478u: goto label_237478;
        case 0x23747cu: goto label_23747c;
        case 0x237480u: goto label_237480;
        case 0x237484u: goto label_237484;
        case 0x237488u: goto label_237488;
        case 0x23748cu: goto label_23748c;
        case 0x237490u: goto label_237490;
        case 0x237494u: goto label_237494;
        case 0x237498u: goto label_237498;
        case 0x23749cu: goto label_23749c;
        case 0x2374a0u: goto label_2374a0;
        case 0x2374a4u: goto label_2374a4;
        case 0x2374a8u: goto label_2374a8;
        case 0x2374acu: goto label_2374ac;
        case 0x2374b0u: goto label_2374b0;
        case 0x2374b4u: goto label_2374b4;
        case 0x2374b8u: goto label_2374b8;
        case 0x2374bcu: goto label_2374bc;
        case 0x2374c0u: goto label_2374c0;
        case 0x2374c4u: goto label_2374c4;
        case 0x2374c8u: goto label_2374c8;
        case 0x2374ccu: goto label_2374cc;
        case 0x2374d0u: goto label_2374d0;
        case 0x2374d4u: goto label_2374d4;
        case 0x2374d8u: goto label_2374d8;
        case 0x2374dcu: goto label_2374dc;
        case 0x2374e0u: goto label_2374e0;
        case 0x2374e4u: goto label_2374e4;
        case 0x2374e8u: goto label_2374e8;
        case 0x2374ecu: goto label_2374ec;
        case 0x2374f0u: goto label_2374f0;
        case 0x2374f4u: goto label_2374f4;
        case 0x2374f8u: goto label_2374f8;
        case 0x2374fcu: goto label_2374fc;
        case 0x237500u: goto label_237500;
        case 0x237504u: goto label_237504;
        case 0x237508u: goto label_237508;
        case 0x23750cu: goto label_23750c;
        case 0x237510u: goto label_237510;
        case 0x237514u: goto label_237514;
        case 0x237518u: goto label_237518;
        case 0x23751cu: goto label_23751c;
        case 0x237520u: goto label_237520;
        case 0x237524u: goto label_237524;
        case 0x237528u: goto label_237528;
        case 0x23752cu: goto label_23752c;
        case 0x237530u: goto label_237530;
        case 0x237534u: goto label_237534;
        case 0x237538u: goto label_237538;
        case 0x23753cu: goto label_23753c;
        case 0x237540u: goto label_237540;
        case 0x237544u: goto label_237544;
        case 0x237548u: goto label_237548;
        case 0x23754cu: goto label_23754c;
        case 0x237550u: goto label_237550;
        case 0x237554u: goto label_237554;
        case 0x237558u: goto label_237558;
        case 0x23755cu: goto label_23755c;
        case 0x237560u: goto label_237560;
        case 0x237564u: goto label_237564;
        case 0x237568u: goto label_237568;
        case 0x23756cu: goto label_23756c;
        case 0x237570u: goto label_237570;
        case 0x237574u: goto label_237574;
        case 0x237578u: goto label_237578;
        case 0x23757cu: goto label_23757c;
        case 0x237580u: goto label_237580;
        case 0x237584u: goto label_237584;
        case 0x237588u: goto label_237588;
        case 0x23758cu: goto label_23758c;
        default: break;
    }

    ctx->pc = 0x237280u;

label_237280:
    // 0x237280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_237284:
    // 0x237284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_237288:
    // 0x237288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x237288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23728c:
    // 0x23728c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_237290:
    // 0x237290: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x237290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_237294:
    // 0x237294: 0xc049394  jal         func_124E50
label_237298:
    if (ctx->pc == 0x237298u) {
        ctx->pc = 0x23729Cu;
        goto label_23729c;
    }
    ctx->pc = 0x237294u;
    SET_GPR_U32(ctx, 31, 0x23729Cu);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x237294u, 0x23729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23729Cu;
label_23729c:
    // 0x23729c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23729cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2372a0:
    // 0x2372a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2372a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2372a4:
    // 0x2372a4: 0x3e00008  jr          $ra
label_2372a8:
    if (ctx->pc == 0x2372A8u) {
        ctx->pc = 0x2372ACu;
        goto label_2372ac;
    }
    ctx->pc = 0x2372A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2372A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2372ACu;
label_2372ac:
    // 0x2372ac: 0x0  nop
    ctx->pc = 0x2372acu;
    // NOP
label_2372b0:
    // 0x2372b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2372b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2372b4:
    // 0x2372b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2372b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2372b8:
    // 0x2372b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2372b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2372bc:
    // 0x2372bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2372bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2372c0:
    // 0x2372c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2372c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2372c4:
    // 0x2372c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2372c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2372c8:
    // 0x2372c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2372c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2372cc:
    // 0x2372cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2372ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2372d0:
    // 0x2372d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2372d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2372d4:
    // 0x2372d4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2372d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_2372d8:
    // 0x2372d8: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2372d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_2372dc:
    // 0x2372dc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2372dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2372e0:
    // 0x2372e0: 0xc042330  jal         func_108CC0
label_2372e4:
    if (ctx->pc == 0x2372E4u) {
        ctx->pc = 0x2372E8u;
        goto label_2372e8;
    }
    ctx->pc = 0x2372E0u;
    SET_GPR_U32(ctx, 31, 0x2372E8u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x2372E0u, 0x2372E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372E8u;
label_2372e8:
    // 0x2372e8: 0x1002000a  beq         $zero, $v0, . + 4 + (0xA << 2)
label_2372ec:
    if (ctx->pc == 0x2372ECu) {
        ctx->pc = 0x2372F0u;
        goto label_2372f0;
    }
    ctx->pc = 0x2372E8u;
    {
        const bool branch_taken_0x2372e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2372e8) {
            ctx->pc = 0x237314u;
            goto label_237314;
        }
    }
    ctx->pc = 0x2372F0u;
label_2372f0:
    // 0x2372f0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2372f4:
    // 0x2372f4: 0xc042330  jal         func_108CC0
label_2372f8:
    if (ctx->pc == 0x2372F8u) {
        ctx->pc = 0x2372FCu;
        goto label_2372fc;
    }
    ctx->pc = 0x2372F4u;
    SET_GPR_U32(ctx, 31, 0x2372FCu);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x2372F4u, 0x2372FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2372FCu;
label_2372fc:
    // 0x2372fc: 0x3c140012  lui         $s4, 0x12
    ctx->pc = 0x2372fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)18 << 16));
label_237300:
    // 0x237300: 0x26943cd0  addiu       $s4, $s4, 0x3CD0
    ctx->pc = 0x237300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 15568));
label_237304:
    // 0x237304: 0x280f809  jalr        $s4
label_237308:
    if (ctx->pc == 0x237308u) {
        ctx->pc = 0x23730Cu;
        goto label_23730c;
    }
    ctx->pc = 0x237304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x23730Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237304u, 0x23730Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23730Cu;
label_23730c:
    // 0x23730c: 0x14020007  bne         $zero, $v0, . + 4 + (0x7 << 2)
label_237310:
    if (ctx->pc == 0x237310u) {
        ctx->pc = 0x237314u;
        goto label_237314;
    }
    ctx->pc = 0x23730Cu;
    {
        const bool branch_taken_0x23730c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x23730c) {
            ctx->pc = 0x23732Cu;
            goto label_23732c;
        }
    }
    ctx->pc = 0x237314u;
label_237314:
    // 0x237314: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x237314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_237318:
    // 0x237318: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x237318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_23731c:
    // 0x23731c: 0xc08dba4  jal         func_236E90
label_237320:
    if (ctx->pc == 0x237320u) {
        ctx->pc = 0x237324u;
        goto label_237324;
    }
    ctx->pc = 0x23731Cu;
    SET_GPR_U32(ctx, 31, 0x237324u);
    ctx->pc = 0x236E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E90u, 0x23731Cu, 0x237324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237324u;
label_237324:
    // 0x237324: 0x10000071  b           . + 4 + (0x71 << 2)
label_237328:
    if (ctx->pc == 0x237328u) {
        ctx->pc = 0x23732Cu;
        goto label_23732c;
    }
    ctx->pc = 0x237324u;
    {
        const bool branch_taken_0x237324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237324) {
            ctx->pc = 0x2374ECu;
            goto label_2374ec;
        }
    }
    ctx->pc = 0x23732Cu;
label_23732c:
    // 0x23732c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x23732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_237330:
    // 0x237330: 0xc042330  jal         func_108CC0
label_237334:
    if (ctx->pc == 0x237334u) {
        ctx->pc = 0x237338u;
        goto label_237338;
    }
    ctx->pc = 0x237330u;
    SET_GPR_U32(ctx, 31, 0x237338u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x237330u, 0x237338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237338u;
label_237338:
    // 0x237338: 0x3c130012  lui         $s3, 0x12
    ctx->pc = 0x237338u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)18 << 16));
label_23733c:
    // 0x23733c: 0x26733cd0  addiu       $s3, $s3, 0x3CD0
    ctx->pc = 0x23733cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 15568));
label_237340:
    // 0x237340: 0x260f809  jalr        $s3
label_237344:
    if (ctx->pc == 0x237344u) {
        ctx->pc = 0x237348u;
        goto label_237348;
    }
    ctx->pc = 0x237340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x237348u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237340u, 0x237348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237348u;
label_237348:
    // 0x237348: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x237348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23734c:
    // 0x23734c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x23734cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_237350:
    // 0x237350: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x237350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_237354:
    // 0x237354: 0xc08d954  jal         func_236550
label_237358:
    if (ctx->pc == 0x237358u) {
        ctx->pc = 0x23735Cu;
        goto label_23735c;
    }
    ctx->pc = 0x237354u;
    SET_GPR_U32(ctx, 31, 0x23735Cu);
    ctx->pc = 0x236550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236550u, 0x237354u, 0x23735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23735Cu;
label_23735c:
    // 0x23735c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23735cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237360:
    // 0x237360: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x237360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_237364:
    // 0x237364: 0x1420005d  bnez        $at, . + 4 + (0x5D << 2)
label_237368:
    if (ctx->pc == 0x237368u) {
        ctx->pc = 0x23736Cu;
        goto label_23736c;
    }
    ctx->pc = 0x237364u;
    {
        const bool branch_taken_0x237364 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x237364) {
            ctx->pc = 0x2374DCu;
            goto label_2374dc;
        }
    }
    ctx->pc = 0x23736Cu;
label_23736c:
    // 0x23736c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x23736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_237370:
    // 0x237370: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x237370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_237374:
    // 0x237374: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x237374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_237378:
    // 0x237378: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x237378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_23737c:
    // 0x23737c: 0x320f809  jalr        $t9
label_237380:
    if (ctx->pc == 0x237380u) {
        ctx->pc = 0x237384u;
        goto label_237384;
    }
    ctx->pc = 0x23737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x237384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23737Cu, 0x237384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237384u;
label_237384:
    // 0x237384: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x237384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237388:
    // 0x237388: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_23738c:
    if (ctx->pc == 0x23738Cu) {
        ctx->pc = 0x237390u;
        goto label_237390;
    }
    ctx->pc = 0x237388u;
    {
        const bool branch_taken_0x237388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x237388) {
            ctx->pc = 0x23739Cu;
            goto label_23739c;
        }
    }
    ctx->pc = 0x237390u;
label_237390:
    // 0x237390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x237390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237394:
    // 0x237394: 0x10000055  b           . + 4 + (0x55 << 2)
label_237398:
    if (ctx->pc == 0x237398u) {
        ctx->pc = 0x23739Cu;
        goto label_23739c;
    }
    ctx->pc = 0x237394u;
    {
        const bool branch_taken_0x237394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237394) {
            ctx->pc = 0x2374ECu;
            goto label_2374ec;
        }
    }
    ctx->pc = 0x23739Cu;
label_23739c:
    // 0x23739c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23739cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2373a0:
    // 0x2373a0: 0xc08dca0  jal         func_237280
label_2373a4:
    if (ctx->pc == 0x2373A4u) {
        ctx->pc = 0x2373A8u;
        goto label_2373a8;
    }
    ctx->pc = 0x2373A0u;
    SET_GPR_U32(ctx, 31, 0x2373A8u);
    ctx->pc = 0x237280u;
    goto label_237280;
    ctx->pc = 0x2373A8u;
label_2373a8:
    // 0x2373a8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2373a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2373ac:
    // 0x2373ac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2373acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2373b0:
    // 0x2373b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2373b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2373b4:
    // 0x2373b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2373b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2373b8:
    // 0x2373b8: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2373b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2373bc:
    // 0x2373bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2373bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2373c0:
    // 0x2373c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2373c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2373c4:
    // 0x2373c4: 0xc11a12c  jal         func_4684B0
label_2373c8:
    if (ctx->pc == 0x2373C8u) {
        ctx->pc = 0x2373CCu;
        goto label_2373cc;
    }
    ctx->pc = 0x2373C4u;
    SET_GPR_U32(ctx, 31, 0x2373CCu);
    ctx->pc = 0x4684B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4684B0u, 0x2373C4u, 0x2373CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373CCu;
label_2373cc:
    // 0x2373cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2373ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2373d0:
    // 0x2373d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2373d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2373d4:
    // 0x2373d4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x2373d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_2373d8:
    // 0x2373d8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2373d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2373dc:
    // 0x2373dc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2373dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2373e0:
    // 0x2373e0: 0xc041b48  jal         func_106D20
label_2373e4:
    if (ctx->pc == 0x2373E4u) {
        ctx->pc = 0x2373E8u;
        goto label_2373e8;
    }
    ctx->pc = 0x2373E0u;
    SET_GPR_U32(ctx, 31, 0x2373E8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2373E0u, 0x2373E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373E8u;
label_2373e8:
    // 0x2373e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2373e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2373ec:
    // 0x2373ec: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2373ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2373f0:
    // 0x2373f0: 0xc040304  jal         func_100C10
label_2373f4:
    if (ctx->pc == 0x2373F4u) {
        ctx->pc = 0x2373F8u;
        goto label_2373f8;
    }
    ctx->pc = 0x2373F0u;
    SET_GPR_U32(ctx, 31, 0x2373F8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2373F0u, 0x2373F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373F8u;
label_2373f8:
    // 0x2373f8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2373fc:
    // 0x2373fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2373fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_237400:
    // 0x237400: 0xc1190f4  jal         func_4643D0
label_237404:
    if (ctx->pc == 0x237404u) {
        ctx->pc = 0x237408u;
        goto label_237408;
    }
    ctx->pc = 0x237400u;
    SET_GPR_U32(ctx, 31, 0x237408u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x237400u, 0x237408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237408u;
label_237408:
    // 0x237408: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x237408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23740c:
    // 0x23740c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23740cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_237410:
    // 0x237410: 0xc0402d4  jal         func_100B50
label_237414:
    if (ctx->pc == 0x237414u) {
        ctx->pc = 0x237418u;
        goto label_237418;
    }
    ctx->pc = 0x237410u;
    SET_GPR_U32(ctx, 31, 0x237418u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x237410u, 0x237418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237418u;
label_237418:
    // 0x237418: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x237418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23741c:
    // 0x23741c: 0xc041b38  jal         func_106CE0
label_237420:
    if (ctx->pc == 0x237420u) {
        ctx->pc = 0x237424u;
        goto label_237424;
    }
    ctx->pc = 0x23741Cu;
    SET_GPR_U32(ctx, 31, 0x237424u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x23741Cu, 0x237424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237424u;
label_237424:
    // 0x237424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237428:
    // 0x237428: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23742c:
    // 0x23742c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x23742cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_237430:
    // 0x237430: 0xc0bc77e  jal         func_2F1DF8
label_237434:
    if (ctx->pc == 0x237434u) {
        ctx->pc = 0x237438u;
        goto label_237438;
    }
    ctx->pc = 0x237430u;
    SET_GPR_U32(ctx, 31, 0x237438u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x237430u, 0x237438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237438u;
label_237438:
    // 0x237438: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x237438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_23743c:
    // 0x23743c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23743cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_237440:
    // 0x237440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237444:
    // 0x237444: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237448:
    // 0x237448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x237448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23744c:
    // 0x23744c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23744cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_237450:
    // 0x237450: 0x320f809  jalr        $t9
label_237454:
    if (ctx->pc == 0x237454u) {
        ctx->pc = 0x237458u;
        goto label_237458;
    }
    ctx->pc = 0x237450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x237458u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237450u, 0x237458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237458u;
label_237458:
    // 0x237458: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x237458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_23745c:
    // 0x23745c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23745cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_237460:
    // 0x237460: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x237460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237464:
    // 0x237464: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x237464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_237468:
    // 0x237468: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x237468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_23746c:
    // 0x23746c: 0x320f809  jalr        $t9
label_237470:
    if (ctx->pc == 0x237470u) {
        ctx->pc = 0x237474u;
        goto label_237474;
    }
    ctx->pc = 0x23746Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x237474u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23746Cu, 0x237474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237474u;
label_237474:
    // 0x237474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_237478:
    // 0x237478: 0xc0497a4  jal         func_125E90
label_23747c:
    if (ctx->pc == 0x23747Cu) {
        ctx->pc = 0x237480u;
        goto label_237480;
    }
    ctx->pc = 0x237478u;
    SET_GPR_U32(ctx, 31, 0x237480u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x237478u, 0x237480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237480u;
label_237480:
    // 0x237480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237484:
    // 0x237484: 0xc049394  jal         func_124E50
label_237488:
    if (ctx->pc == 0x237488u) {
        ctx->pc = 0x23748Cu;
        goto label_23748c;
    }
    ctx->pc = 0x237484u;
    SET_GPR_U32(ctx, 31, 0x23748Cu);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x237484u, 0x23748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23748Cu;
label_23748c:
    // 0x23748c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x23748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_237490:
    // 0x237490: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x237490u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_237494:
    // 0x237494: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x237494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_237498:
    // 0x237498: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x237498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_23749c:
    // 0x23749c: 0xc049394  jal         func_124E50
label_2374a0:
    if (ctx->pc == 0x2374A0u) {
        ctx->pc = 0x2374A4u;
        goto label_2374a4;
    }
    ctx->pc = 0x23749Cu;
    SET_GPR_U32(ctx, 31, 0x2374A4u);
    ctx->pc = 0x124E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E50u, 0x23749Cu, 0x2374A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374A4u;
label_2374a4:
    // 0x2374a4: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2374a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2374a8:
    // 0x2374a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2374a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2374ac:
    // 0x2374ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2374acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2374b0:
    // 0x2374b0: 0xc0bb778  jal         func_2EDDE0
label_2374b4:
    if (ctx->pc == 0x2374B4u) {
        ctx->pc = 0x2374B8u;
        goto label_2374b8;
    }
    ctx->pc = 0x2374B0u;
    SET_GPR_U32(ctx, 31, 0x2374B8u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x2374B0u, 0x2374B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374B8u;
label_2374b8:
    // 0x2374b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2374b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2374bc:
    // 0x2374bc: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2374bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2374c0:
    // 0x2374c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2374c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2374c4:
    // 0x2374c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2374c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2374c8:
    // 0x2374c8: 0xc0402d4  jal         func_100B50
label_2374cc:
    if (ctx->pc == 0x2374CCu) {
        ctx->pc = 0x2374D0u;
        goto label_2374d0;
    }
    ctx->pc = 0x2374C8u;
    SET_GPR_U32(ctx, 31, 0x2374D0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2374C8u, 0x2374D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374D0u;
label_2374d0:
    // 0x2374d0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2374d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2374d4:
    // 0x2374d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2374d8:
    if (ctx->pc == 0x2374D8u) {
        ctx->pc = 0x2374DCu;
        goto label_2374dc;
    }
    ctx->pc = 0x2374D4u;
    {
        const bool branch_taken_0x2374d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2374d4) {
            ctx->pc = 0x2374ECu;
            goto label_2374ec;
        }
    }
    ctx->pc = 0x2374DCu;
label_2374dc:
    // 0x2374dc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2374dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2374e0:
    // 0x2374e0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2374e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2374e4:
    // 0x2374e4: 0xc08dba4  jal         func_236E90
label_2374e8:
    if (ctx->pc == 0x2374E8u) {
        ctx->pc = 0x2374ECu;
        goto label_2374ec;
    }
    ctx->pc = 0x2374E4u;
    SET_GPR_U32(ctx, 31, 0x2374ECu);
    ctx->pc = 0x236E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236E90u, 0x2374E4u, 0x2374ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374ECu;
label_2374ec:
    // 0x2374ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2374ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2374f0:
    // 0x2374f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2374f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2374f4:
    // 0x2374f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2374f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2374f8:
    // 0x2374f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2374f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2374fc:
    // 0x2374fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2374fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_237500:
    // 0x237500: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x237500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_237504:
    // 0x237504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x237504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_237508:
    // 0x237508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x237508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23750c:
    // 0x23750c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x23750cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_237510:
    // 0x237510: 0x3e00008  jr          $ra
label_237514:
    if (ctx->pc == 0x237514u) {
        ctx->pc = 0x237518u;
        goto label_237518;
    }
    ctx->pc = 0x237510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237518u;
label_237518:
    // 0x237518: 0x0  nop
    ctx->pc = 0x237518u;
    // NOP
label_23751c:
    // 0x23751c: 0x0  nop
    ctx->pc = 0x23751cu;
    // NOP
label_237520:
    // 0x237520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_237524:
    // 0x237524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x237524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_237528:
    // 0x237528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x237528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23752c:
    // 0x23752c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23752cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_237530:
    // 0x237530: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_237534:
    // 0x237534: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_237538:
    if (ctx->pc == 0x237538u) {
        ctx->pc = 0x23753Cu;
        goto label_23753c;
    }
    ctx->pc = 0x237534u;
    {
        const bool branch_taken_0x237534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237534) {
            ctx->pc = 0x23757Cu;
            goto label_23757c;
        }
    }
    ctx->pc = 0x23753Cu;
label_23753c:
    // 0x23753c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23753cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_237540:
    // 0x237540: 0x24635580  addiu       $v1, $v1, 0x5580
    ctx->pc = 0x237540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21888));
label_237544:
    // 0x237544: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x237544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_237548:
    // 0x237548: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x237548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23754c:
    // 0x23754c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_237550:
    // 0x237550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237554:
    // 0x237554: 0xc08dac8  jal         func_236B20
label_237558:
    if (ctx->pc == 0x237558u) {
        ctx->pc = 0x23755Cu;
        goto label_23755c;
    }
    ctx->pc = 0x237554u;
    SET_GPR_U32(ctx, 31, 0x23755Cu);
    ctx->pc = 0x236B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B20u, 0x237554u, 0x23755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23755Cu;
label_23755c:
    // 0x23755c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23755cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_237560:
    // 0x237560: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x237560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_237564:
    // 0x237564: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x237564u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_237568:
    // 0x237568: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_23756c:
    if (ctx->pc == 0x23756Cu) {
        ctx->pc = 0x237570u;
        goto label_237570;
    }
    ctx->pc = 0x237568u;
    {
        const bool branch_taken_0x237568 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x237568) {
            ctx->pc = 0x23757Cu;
            goto label_23757c;
        }
    }
    ctx->pc = 0x237570u;
label_237570:
    // 0x237570: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x237570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_237574:
    // 0x237574: 0xc0ba070  jal         func_2E81C0
label_237578:
    if (ctx->pc == 0x237578u) {
        ctx->pc = 0x23757Cu;
        goto label_23757c;
    }
    ctx->pc = 0x237574u;
    SET_GPR_U32(ctx, 31, 0x23757Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x237574u, 0x23757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23757Cu;
label_23757c:
    // 0x23757c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_237580:
    // 0x237580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x237580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237584:
    // 0x237584: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x237584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_237588:
    // 0x237588: 0x3e00008  jr          $ra
label_23758c:
    if (ctx->pc == 0x23758Cu) {
        ctx->pc = 0x237590u;
        goto label_fallthrough_0x237588;
    }
    ctx->pc = 0x237588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x237588:
    ctx->pc = 0x237590u;
}
