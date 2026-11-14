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

// Function: sub_001022C0
// Address: 0x1022c0 - 0x102490
void sub_001022C0_0x1022c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001022C0_0x1022c0");
#endif

    switch (ctx->pc) {
        case 0x1022c0u: goto label_1022c0;
        case 0x1022c4u: goto label_1022c4;
        case 0x1022c8u: goto label_1022c8;
        case 0x1022ccu: goto label_1022cc;
        case 0x1022d0u: goto label_1022d0;
        case 0x1022d4u: goto label_1022d4;
        case 0x1022d8u: goto label_1022d8;
        case 0x1022dcu: goto label_1022dc;
        case 0x1022e0u: goto label_1022e0;
        case 0x1022e4u: goto label_1022e4;
        case 0x1022e8u: goto label_1022e8;
        case 0x1022ecu: goto label_1022ec;
        case 0x1022f0u: goto label_1022f0;
        case 0x1022f4u: goto label_1022f4;
        case 0x1022f8u: goto label_1022f8;
        case 0x1022fcu: goto label_1022fc;
        case 0x102300u: goto label_102300;
        case 0x102304u: goto label_102304;
        case 0x102308u: goto label_102308;
        case 0x10230cu: goto label_10230c;
        case 0x102310u: goto label_102310;
        case 0x102314u: goto label_102314;
        case 0x102318u: goto label_102318;
        case 0x10231cu: goto label_10231c;
        case 0x102320u: goto label_102320;
        case 0x102324u: goto label_102324;
        case 0x102328u: goto label_102328;
        case 0x10232cu: goto label_10232c;
        case 0x102330u: goto label_102330;
        case 0x102334u: goto label_102334;
        case 0x102338u: goto label_102338;
        case 0x10233cu: goto label_10233c;
        case 0x102340u: goto label_102340;
        case 0x102344u: goto label_102344;
        case 0x102348u: goto label_102348;
        case 0x10234cu: goto label_10234c;
        case 0x102350u: goto label_102350;
        case 0x102354u: goto label_102354;
        case 0x102358u: goto label_102358;
        case 0x10235cu: goto label_10235c;
        case 0x102360u: goto label_102360;
        case 0x102364u: goto label_102364;
        case 0x102368u: goto label_102368;
        case 0x10236cu: goto label_10236c;
        case 0x102370u: goto label_102370;
        case 0x102374u: goto label_102374;
        case 0x102378u: goto label_102378;
        case 0x10237cu: goto label_10237c;
        case 0x102380u: goto label_102380;
        case 0x102384u: goto label_102384;
        case 0x102388u: goto label_102388;
        case 0x10238cu: goto label_10238c;
        case 0x102390u: goto label_102390;
        case 0x102394u: goto label_102394;
        case 0x102398u: goto label_102398;
        case 0x10239cu: goto label_10239c;
        case 0x1023a0u: goto label_1023a0;
        case 0x1023a4u: goto label_1023a4;
        case 0x1023a8u: goto label_1023a8;
        case 0x1023acu: goto label_1023ac;
        case 0x1023b0u: goto label_1023b0;
        case 0x1023b4u: goto label_1023b4;
        case 0x1023b8u: goto label_1023b8;
        case 0x1023bcu: goto label_1023bc;
        case 0x1023c0u: goto label_1023c0;
        case 0x1023c4u: goto label_1023c4;
        case 0x1023c8u: goto label_1023c8;
        case 0x1023ccu: goto label_1023cc;
        case 0x1023d0u: goto label_1023d0;
        case 0x1023d4u: goto label_1023d4;
        case 0x1023d8u: goto label_1023d8;
        case 0x1023dcu: goto label_1023dc;
        case 0x1023e0u: goto label_1023e0;
        case 0x1023e4u: goto label_1023e4;
        case 0x1023e8u: goto label_1023e8;
        case 0x1023ecu: goto label_1023ec;
        case 0x1023f0u: goto label_1023f0;
        case 0x1023f4u: goto label_1023f4;
        case 0x1023f8u: goto label_1023f8;
        case 0x1023fcu: goto label_1023fc;
        case 0x102400u: goto label_102400;
        case 0x102404u: goto label_102404;
        case 0x102408u: goto label_102408;
        case 0x10240cu: goto label_10240c;
        case 0x102410u: goto label_102410;
        case 0x102414u: goto label_102414;
        case 0x102418u: goto label_102418;
        case 0x10241cu: goto label_10241c;
        case 0x102420u: goto label_102420;
        case 0x102424u: goto label_102424;
        case 0x102428u: goto label_102428;
        case 0x10242cu: goto label_10242c;
        case 0x102430u: goto label_102430;
        case 0x102434u: goto label_102434;
        case 0x102438u: goto label_102438;
        case 0x10243cu: goto label_10243c;
        case 0x102440u: goto label_102440;
        case 0x102444u: goto label_102444;
        case 0x102448u: goto label_102448;
        case 0x10244cu: goto label_10244c;
        case 0x102450u: goto label_102450;
        case 0x102454u: goto label_102454;
        case 0x102458u: goto label_102458;
        case 0x10245cu: goto label_10245c;
        case 0x102460u: goto label_102460;
        case 0x102464u: goto label_102464;
        case 0x102468u: goto label_102468;
        case 0x10246cu: goto label_10246c;
        case 0x102470u: goto label_102470;
        case 0x102474u: goto label_102474;
        case 0x102478u: goto label_102478;
        case 0x10247cu: goto label_10247c;
        case 0x102480u: goto label_102480;
        case 0x102484u: goto label_102484;
        case 0x102488u: goto label_102488;
        case 0x10248cu: goto label_10248c;
        default: break;
    }

    ctx->pc = 0x1022c0u;

label_1022c0:
    // 0x1022c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1022c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1022c4:
    // 0x1022c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1022c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1022c8:
    // 0x1022c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1022c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1022cc:
    // 0x1022cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1022ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1022d0:
    // 0x1022d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1022d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1022d4:
    // 0x1022d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1022d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1022d8:
    // 0x1022d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1022d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1022dc:
    // 0x1022dc: 0x320f809  jalr        $t9
label_1022e0:
    if (ctx->pc == 0x1022E0u) {
        ctx->pc = 0x1022E4u;
        goto label_1022e4;
    }
    ctx->pc = 0x1022DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1022E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1022DCu, 0x1022E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1022E4u;
label_1022e4:
    // 0x1022e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1022e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1022e8:
    // 0x1022e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1022e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1022ec:
    // 0x1022ec: 0x3e00008  jr          $ra
label_1022f0:
    if (ctx->pc == 0x1022F0u) {
        ctx->pc = 0x1022F4u;
        goto label_1022f4;
    }
    ctx->pc = 0x1022ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1022ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1022F4u;
label_1022f4:
    // 0x1022f4: 0x0  nop
    ctx->pc = 0x1022f4u;
    // NOP
label_1022f8:
    // 0x1022f8: 0x0  nop
    ctx->pc = 0x1022f8u;
    // NOP
label_1022fc:
    // 0x1022fc: 0x0  nop
    ctx->pc = 0x1022fcu;
    // NOP
label_102300:
    // 0x102300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x102300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_102304:
    // 0x102304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_102308:
    // 0x102308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10230c:
    // 0x10230c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_102310:
    // 0x102310: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x102310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_102314:
    // 0x102314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x102314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102318:
    // 0x102318: 0xc08e054  jal         func_238150
label_10231c:
    if (ctx->pc == 0x10231Cu) {
        ctx->pc = 0x102320u;
        goto label_102320;
    }
    ctx->pc = 0x102318u;
    SET_GPR_U32(ctx, 31, 0x102320u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x102318u, 0x102320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102320u;
label_102320:
    // 0x102320: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x102320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_102324:
    // 0x102324: 0xc08ec5c  jal         func_23B170
label_102328:
    if (ctx->pc == 0x102328u) {
        ctx->pc = 0x10232Cu;
        goto label_10232c;
    }
    ctx->pc = 0x102324u;
    SET_GPR_U32(ctx, 31, 0x10232Cu);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x102324u, 0x10232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10232Cu;
label_10232c:
    // 0x10232c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10232cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102330:
    // 0x102330: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x102330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_102334:
    // 0x102334: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x102334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_102338:
    // 0x102338: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10233c:
    // 0x10233c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x10233cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_102340:
    // 0x102340: 0x320f809  jalr        $t9
label_102344:
    if (ctx->pc == 0x102344u) {
        ctx->pc = 0x102348u;
        goto label_102348;
    }
    ctx->pc = 0x102340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102348u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102340u, 0x102348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102348u;
label_102348:
    // 0x102348: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x102348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10234c:
    // 0x10234c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10234cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_102350:
    // 0x102350: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_102354:
    // 0x102354: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102358:
    // 0x102358: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10235c:
    // 0x10235c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10235cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102360:
    // 0x102360: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x102360u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102364:
    // 0x102364: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x102364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_102368:
    // 0x102368: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x102368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10236c:
    // 0x10236c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x10236cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_102370:
    // 0x102370: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x102370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_102374:
    // 0x102374: 0xc046ab0  jal         func_11AAC0
label_102378:
    if (ctx->pc == 0x102378u) {
        ctx->pc = 0x10237Cu;
        goto label_10237c;
    }
    ctx->pc = 0x102374u;
    SET_GPR_U32(ctx, 31, 0x10237Cu);
    ctx->pc = 0x11AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AAC0u, 0x102374u, 0x10237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10237Cu;
label_10237c:
    // 0x10237c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x10237cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_102380:
    // 0x102380: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x102380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_102384:
    // 0x102384: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x102384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_102388:
    // 0x102388: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x102388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_10238c:
    // 0x10238c: 0xc046acc  jal         func_11AB30
label_102390:
    if (ctx->pc == 0x102390u) {
        ctx->pc = 0x102394u;
        goto label_102394;
    }
    ctx->pc = 0x10238Cu;
    SET_GPR_U32(ctx, 31, 0x102394u);
    ctx->pc = 0x11AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AB30u, 0x10238Cu, 0x102394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102394u;
label_102394:
    // 0x102394: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x102394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_102398:
    // 0x102398: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x102398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_10239c:
    // 0x10239c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10239cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1023a0:
    // 0x1023a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1023a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1023a4:
    // 0x1023a4: 0x320f809  jalr        $t9
label_1023a8:
    if (ctx->pc == 0x1023A8u) {
        ctx->pc = 0x1023ACu;
        goto label_1023ac;
    }
    ctx->pc = 0x1023A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1023ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1023A4u, 0x1023ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1023ACu;
label_1023ac:
    // 0x1023ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1023acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1023b0:
    // 0x1023b0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1023b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1023b4:
    // 0x1023b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1023b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1023b8:
    // 0x1023b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1023b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1023bc:
    // 0x1023bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1023bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1023c0:
    // 0x1023c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1023c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1023c4:
    // 0x1023c4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1023c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1023c8:
    // 0x1023c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1023c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1023cc:
    // 0x1023cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1023ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1023d0:
    // 0x1023d0: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x1023d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1023d4:
    // 0x1023d4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1023d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1023d8:
    // 0x1023d8: 0xc050b18  jal         func_142C60
label_1023dc:
    if (ctx->pc == 0x1023DCu) {
        ctx->pc = 0x1023E0u;
        goto label_1023e0;
    }
    ctx->pc = 0x1023D8u;
    SET_GPR_U32(ctx, 31, 0x1023E0u);
    ctx->pc = 0x142C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C60u, 0x1023D8u, 0x1023E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023E0u;
label_1023e0:
    // 0x1023e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1023e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1023e4:
    // 0x1023e4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1023e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1023e8:
    // 0x1023e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1023e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1023ec:
    // 0x1023ec: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1023ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1023f0:
    // 0x1023f0: 0x320f809  jalr        $t9
label_1023f4:
    if (ctx->pc == 0x1023F4u) {
        ctx->pc = 0x1023F8u;
        goto label_1023f8;
    }
    ctx->pc = 0x1023F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1023F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1023F0u, 0x1023F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1023F8u;
label_1023f8:
    // 0x1023f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1023f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1023fc:
    // 0x1023fc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1023fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_102400:
    // 0x102400: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_102404:
    // 0x102404: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102408:
    // 0x102408: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10240c:
    // 0x10240c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10240cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102410:
    // 0x102410: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x102410u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102414:
    // 0x102414: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x102414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102418:
    // 0x102418: 0xc088560  jal         func_221580
label_10241c:
    if (ctx->pc == 0x10241Cu) {
        ctx->pc = 0x102420u;
        goto label_102420;
    }
    ctx->pc = 0x102418u;
    SET_GPR_U32(ctx, 31, 0x102420u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x102418u, 0x102420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102420u;
label_102420:
    // 0x102420: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x102420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102424:
    // 0x102424: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x102424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_102428:
    // 0x102428: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x102428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10242c:
    // 0x10242c: 0xc040924  jal         func_102490
label_102430:
    if (ctx->pc == 0x102430u) {
        ctx->pc = 0x102434u;
        goto label_102434;
    }
    ctx->pc = 0x10242Cu;
    SET_GPR_U32(ctx, 31, 0x102434u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x10242Cu, 0x102434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102434u;
label_102434:
    // 0x102434: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x102434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102438:
    // 0x102438: 0x24050568  addiu       $a1, $zero, 0x568
    ctx->pc = 0x102438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
label_10243c:
    // 0x10243c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_102440:
    // 0x102440: 0xc040924  jal         func_102490
label_102444:
    if (ctx->pc == 0x102444u) {
        ctx->pc = 0x102448u;
        goto label_102448;
    }
    ctx->pc = 0x102440u;
    SET_GPR_U32(ctx, 31, 0x102448u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x102440u, 0x102448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102448u;
label_102448:
    // 0x102448: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x102448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_10244c:
    // 0x10244c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x10244cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102450:
    // 0x102450: 0xc08ef28  jal         func_23BCA0
label_102454:
    if (ctx->pc == 0x102454u) {
        ctx->pc = 0x102458u;
        goto label_102458;
    }
    ctx->pc = 0x102450u;
    SET_GPR_U32(ctx, 31, 0x102458u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x102450u, 0x102458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102458u;
label_102458:
    // 0x102458: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x102458u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_10245c:
    // 0x10245c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x10245cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102460:
    // 0x102460: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x102460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_102464:
    // 0x102464: 0xc0887b4  jal         func_221ED0
label_102468:
    if (ctx->pc == 0x102468u) {
        ctx->pc = 0x10246Cu;
        goto label_10246c;
    }
    ctx->pc = 0x102464u;
    SET_GPR_U32(ctx, 31, 0x10246Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x102464u, 0x10246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10246Cu;
label_10246c:
    // 0x10246c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10246cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_102470:
    // 0x102470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x102470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_102474:
    // 0x102474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_102478:
    // 0x102478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10247c:
    // 0x10247c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10247cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_102480:
    // 0x102480: 0x3e00008  jr          $ra
label_102484:
    if (ctx->pc == 0x102484u) {
        ctx->pc = 0x102488u;
        goto label_102488;
    }
    ctx->pc = 0x102480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102488u;
label_102488:
    // 0x102488: 0x0  nop
    ctx->pc = 0x102488u;
    // NOP
label_10248c:
    // 0x10248c: 0x0  nop
    ctx->pc = 0x10248cu;
    // NOP
    ctx->pc = 0x102490u;
}
