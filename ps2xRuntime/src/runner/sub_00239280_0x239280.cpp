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

// Function: sub_00239280
// Address: 0x239280 - 0x2393a0
void sub_00239280_0x239280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239280_0x239280");
#endif

    switch (ctx->pc) {
        case 0x239280u: goto label_239280;
        case 0x239284u: goto label_239284;
        case 0x239288u: goto label_239288;
        case 0x23928cu: goto label_23928c;
        case 0x239290u: goto label_239290;
        case 0x239294u: goto label_239294;
        case 0x239298u: goto label_239298;
        case 0x23929cu: goto label_23929c;
        case 0x2392a0u: goto label_2392a0;
        case 0x2392a4u: goto label_2392a4;
        case 0x2392a8u: goto label_2392a8;
        case 0x2392acu: goto label_2392ac;
        case 0x2392b0u: goto label_2392b0;
        case 0x2392b4u: goto label_2392b4;
        case 0x2392b8u: goto label_2392b8;
        case 0x2392bcu: goto label_2392bc;
        case 0x2392c0u: goto label_2392c0;
        case 0x2392c4u: goto label_2392c4;
        case 0x2392c8u: goto label_2392c8;
        case 0x2392ccu: goto label_2392cc;
        case 0x2392d0u: goto label_2392d0;
        case 0x2392d4u: goto label_2392d4;
        case 0x2392d8u: goto label_2392d8;
        case 0x2392dcu: goto label_2392dc;
        case 0x2392e0u: goto label_2392e0;
        case 0x2392e4u: goto label_2392e4;
        case 0x2392e8u: goto label_2392e8;
        case 0x2392ecu: goto label_2392ec;
        case 0x2392f0u: goto label_2392f0;
        case 0x2392f4u: goto label_2392f4;
        case 0x2392f8u: goto label_2392f8;
        case 0x2392fcu: goto label_2392fc;
        case 0x239300u: goto label_239300;
        case 0x239304u: goto label_239304;
        case 0x239308u: goto label_239308;
        case 0x23930cu: goto label_23930c;
        case 0x239310u: goto label_239310;
        case 0x239314u: goto label_239314;
        case 0x239318u: goto label_239318;
        case 0x23931cu: goto label_23931c;
        case 0x239320u: goto label_239320;
        case 0x239324u: goto label_239324;
        case 0x239328u: goto label_239328;
        case 0x23932cu: goto label_23932c;
        case 0x239330u: goto label_239330;
        case 0x239334u: goto label_239334;
        case 0x239338u: goto label_239338;
        case 0x23933cu: goto label_23933c;
        case 0x239340u: goto label_239340;
        case 0x239344u: goto label_239344;
        case 0x239348u: goto label_239348;
        case 0x23934cu: goto label_23934c;
        case 0x239350u: goto label_239350;
        case 0x239354u: goto label_239354;
        case 0x239358u: goto label_239358;
        case 0x23935cu: goto label_23935c;
        case 0x239360u: goto label_239360;
        case 0x239364u: goto label_239364;
        case 0x239368u: goto label_239368;
        case 0x23936cu: goto label_23936c;
        case 0x239370u: goto label_239370;
        case 0x239374u: goto label_239374;
        case 0x239378u: goto label_239378;
        case 0x23937cu: goto label_23937c;
        case 0x239380u: goto label_239380;
        case 0x239384u: goto label_239384;
        case 0x239388u: goto label_239388;
        case 0x23938cu: goto label_23938c;
        case 0x239390u: goto label_239390;
        case 0x239394u: goto label_239394;
        case 0x239398u: goto label_239398;
        case 0x23939cu: goto label_23939c;
        default: break;
    }

    ctx->pc = 0x239280u;

label_239280:
    // 0x239280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_239284:
    // 0x239284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_239288:
    // 0x239288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x239288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23928c:
    // 0x23928c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23928cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_239290:
    // 0x239290: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239294:
    // 0x239294: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239298:
    // 0x239298: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x239298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23929c:
    // 0x23929c: 0x320f809  jalr        $t9
label_2392a0:
    if (ctx->pc == 0x2392A0u) {
        ctx->pc = 0x2392A4u;
        goto label_2392a4;
    }
    ctx->pc = 0x23929Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2392A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23929Cu, 0x2392A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2392A4u;
label_2392a4:
    // 0x2392a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2392a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2392a8:
    // 0x2392a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2392a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2392ac:
    // 0x2392ac: 0x3e00008  jr          $ra
label_2392b0:
    if (ctx->pc == 0x2392B0u) {
        ctx->pc = 0x2392B4u;
        goto label_2392b4;
    }
    ctx->pc = 0x2392ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2392B4u;
label_2392b4:
    // 0x2392b4: 0x0  nop
    ctx->pc = 0x2392b4u;
    // NOP
label_2392b8:
    // 0x2392b8: 0x0  nop
    ctx->pc = 0x2392b8u;
    // NOP
label_2392bc:
    // 0x2392bc: 0x0  nop
    ctx->pc = 0x2392bcu;
    // NOP
label_2392c0:
    // 0x2392c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2392c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2392c4:
    // 0x2392c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2392c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2392c8:
    // 0x2392c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2392c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2392cc:
    // 0x2392cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2392ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2392d0:
    // 0x2392d0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2392d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2392d4:
    // 0x2392d4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2392d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2392d8:
    // 0x2392d8: 0xc08ec5c  jal         func_23B170
label_2392dc:
    if (ctx->pc == 0x2392DCu) {
        ctx->pc = 0x2392E0u;
        goto label_2392e0;
    }
    ctx->pc = 0x2392D8u;
    SET_GPR_U32(ctx, 31, 0x2392E0u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x2392D8u, 0x2392E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392E0u;
label_2392e0:
    // 0x2392e0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2392e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2392e4:
    // 0x2392e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2392e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2392e8:
    // 0x2392e8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2392ec:
    // 0x2392ec: 0x24a5bb90  addiu       $a1, $a1, -0x4470
    ctx->pc = 0x2392ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949776));
label_2392f0:
    // 0x2392f0: 0xc040304  jal         func_100C10
label_2392f4:
    if (ctx->pc == 0x2392F4u) {
        ctx->pc = 0x2392F8u;
        goto label_2392f8;
    }
    ctx->pc = 0x2392F0u;
    SET_GPR_U32(ctx, 31, 0x2392F8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2392F0u, 0x2392F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392F8u;
label_2392f8:
    // 0x2392f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2392f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2392fc:
    // 0x2392fc: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2392fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_239300:
    // 0x239300: 0x24a5bb50  addiu       $a1, $a1, -0x44B0
    ctx->pc = 0x239300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949712));
label_239304:
    // 0x239304: 0xc0424e8  jal         func_1093A0
label_239308:
    if (ctx->pc == 0x239308u) {
        ctx->pc = 0x23930Cu;
        goto label_23930c;
    }
    ctx->pc = 0x239304u;
    SET_GPR_U32(ctx, 31, 0x23930Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x239304u, 0x23930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23930Cu;
label_23930c:
    // 0x23930c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_239310:
    // 0x239310: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x239310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_239314:
    // 0x239314: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x239314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_239318:
    // 0x239318: 0xc11bcf4  jal         func_46F3D0
label_23931c:
    if (ctx->pc == 0x23931Cu) {
        ctx->pc = 0x239320u;
        goto label_239320;
    }
    ctx->pc = 0x239318u;
    SET_GPR_U32(ctx, 31, 0x239320u);
    ctx->pc = 0x46F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F3D0u, 0x239318u, 0x239320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239320u;
label_239320:
    // 0x239320: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_239324:
    if (ctx->pc == 0x239324u) {
        ctx->pc = 0x239328u;
        goto label_239328;
    }
    ctx->pc = 0x239320u;
    {
        const bool branch_taken_0x239320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239320) {
            ctx->pc = 0x239364u;
            goto label_239364;
        }
    }
    ctx->pc = 0x239328u;
label_239328:
    // 0x239328: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x239328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_23932c:
    // 0x23932c: 0x2484bb50  addiu       $a0, $a0, -0x44B0
    ctx->pc = 0x23932cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949712));
label_239330:
    // 0x239330: 0x27859d78  addiu       $a1, $gp, -0x6288
    ctx->pc = 0x239330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942072));
label_239334:
    // 0x239334: 0xc0bc5c6  jal         func_2F1718
label_239338:
    if (ctx->pc == 0x239338u) {
        ctx->pc = 0x23933Cu;
        goto label_23933c;
    }
    ctx->pc = 0x239334u;
    SET_GPR_U32(ctx, 31, 0x23933Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x239334u, 0x23933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23933Cu;
label_23933c:
    // 0x23933c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_239340:
    // 0x239340: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x239340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_239344:
    // 0x239344: 0x24a5bbb0  addiu       $a1, $a1, -0x4450
    ctx->pc = 0x239344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
label_239348:
    // 0x239348: 0xc041ba4  jal         func_106E90
label_23934c:
    if (ctx->pc == 0x23934Cu) {
        ctx->pc = 0x239350u;
        goto label_239350;
    }
    ctx->pc = 0x239348u;
    SET_GPR_U32(ctx, 31, 0x239350u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x239348u, 0x239350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239350u;
label_239350:
    // 0x239350: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_239354:
    // 0x239354: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_239358:
    // 0x239358: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23935c:
    // 0x23935c: 0xc11bcf4  jal         func_46F3D0
label_239360:
    if (ctx->pc == 0x239360u) {
        ctx->pc = 0x239364u;
        goto label_239364;
    }
    ctx->pc = 0x23935Cu;
    SET_GPR_U32(ctx, 31, 0x239364u);
    ctx->pc = 0x46F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F3D0u, 0x23935Cu, 0x239364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239364u;
label_239364:
    // 0x239364: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x239364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_239368:
    // 0x239368: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x239368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23936c:
    // 0x23936c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239370:
    // 0x239370: 0xc0402d4  jal         func_100B50
label_239374:
    if (ctx->pc == 0x239374u) {
        ctx->pc = 0x239378u;
        goto label_239378;
    }
    ctx->pc = 0x239370u;
    SET_GPR_U32(ctx, 31, 0x239378u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239370u, 0x239378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239378u;
label_239378:
    // 0x239378: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x239378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23937c:
    // 0x23937c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23937cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239380:
    // 0x239380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239384:
    // 0x239384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_239388:
    // 0x239388: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x239388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_23938c:
    // 0x23938c: 0x3e00008  jr          $ra
label_239390:
    if (ctx->pc == 0x239390u) {
        ctx->pc = 0x239394u;
        goto label_239394;
    }
    ctx->pc = 0x23938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239394u;
label_239394:
    // 0x239394: 0x0  nop
    ctx->pc = 0x239394u;
    // NOP
label_239398:
    // 0x239398: 0x0  nop
    ctx->pc = 0x239398u;
    // NOP
label_23939c:
    // 0x23939c: 0x0  nop
    ctx->pc = 0x23939cu;
    // NOP
    ctx->pc = 0x2393a0u;
}
