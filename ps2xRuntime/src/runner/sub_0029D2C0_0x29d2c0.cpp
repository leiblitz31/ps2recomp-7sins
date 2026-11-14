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

// Function: sub_0029D2C0
// Address: 0x29d2c0 - 0x29d520
void sub_0029D2C0_0x29d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D2C0_0x29d2c0");
#endif

    switch (ctx->pc) {
        case 0x29d2c0u: goto label_29d2c0;
        case 0x29d2c4u: goto label_29d2c4;
        case 0x29d2c8u: goto label_29d2c8;
        case 0x29d2ccu: goto label_29d2cc;
        case 0x29d2d0u: goto label_29d2d0;
        case 0x29d2d4u: goto label_29d2d4;
        case 0x29d2d8u: goto label_29d2d8;
        case 0x29d2dcu: goto label_29d2dc;
        case 0x29d2e0u: goto label_29d2e0;
        case 0x29d2e4u: goto label_29d2e4;
        case 0x29d2e8u: goto label_29d2e8;
        case 0x29d2ecu: goto label_29d2ec;
        case 0x29d2f0u: goto label_29d2f0;
        case 0x29d2f4u: goto label_29d2f4;
        case 0x29d2f8u: goto label_29d2f8;
        case 0x29d2fcu: goto label_29d2fc;
        case 0x29d300u: goto label_29d300;
        case 0x29d304u: goto label_29d304;
        case 0x29d308u: goto label_29d308;
        case 0x29d30cu: goto label_29d30c;
        case 0x29d310u: goto label_29d310;
        case 0x29d314u: goto label_29d314;
        case 0x29d318u: goto label_29d318;
        case 0x29d31cu: goto label_29d31c;
        case 0x29d320u: goto label_29d320;
        case 0x29d324u: goto label_29d324;
        case 0x29d328u: goto label_29d328;
        case 0x29d32cu: goto label_29d32c;
        case 0x29d330u: goto label_29d330;
        case 0x29d334u: goto label_29d334;
        case 0x29d338u: goto label_29d338;
        case 0x29d33cu: goto label_29d33c;
        case 0x29d340u: goto label_29d340;
        case 0x29d344u: goto label_29d344;
        case 0x29d348u: goto label_29d348;
        case 0x29d34cu: goto label_29d34c;
        case 0x29d350u: goto label_29d350;
        case 0x29d354u: goto label_29d354;
        case 0x29d358u: goto label_29d358;
        case 0x29d35cu: goto label_29d35c;
        case 0x29d360u: goto label_29d360;
        case 0x29d364u: goto label_29d364;
        case 0x29d368u: goto label_29d368;
        case 0x29d36cu: goto label_29d36c;
        case 0x29d370u: goto label_29d370;
        case 0x29d374u: goto label_29d374;
        case 0x29d378u: goto label_29d378;
        case 0x29d37cu: goto label_29d37c;
        case 0x29d380u: goto label_29d380;
        case 0x29d384u: goto label_29d384;
        case 0x29d388u: goto label_29d388;
        case 0x29d38cu: goto label_29d38c;
        case 0x29d390u: goto label_29d390;
        case 0x29d394u: goto label_29d394;
        case 0x29d398u: goto label_29d398;
        case 0x29d39cu: goto label_29d39c;
        case 0x29d3a0u: goto label_29d3a0;
        case 0x29d3a4u: goto label_29d3a4;
        case 0x29d3a8u: goto label_29d3a8;
        case 0x29d3acu: goto label_29d3ac;
        case 0x29d3b0u: goto label_29d3b0;
        case 0x29d3b4u: goto label_29d3b4;
        case 0x29d3b8u: goto label_29d3b8;
        case 0x29d3bcu: goto label_29d3bc;
        case 0x29d3c0u: goto label_29d3c0;
        case 0x29d3c4u: goto label_29d3c4;
        case 0x29d3c8u: goto label_29d3c8;
        case 0x29d3ccu: goto label_29d3cc;
        case 0x29d3d0u: goto label_29d3d0;
        case 0x29d3d4u: goto label_29d3d4;
        case 0x29d3d8u: goto label_29d3d8;
        case 0x29d3dcu: goto label_29d3dc;
        case 0x29d3e0u: goto label_29d3e0;
        case 0x29d3e4u: goto label_29d3e4;
        case 0x29d3e8u: goto label_29d3e8;
        case 0x29d3ecu: goto label_29d3ec;
        case 0x29d3f0u: goto label_29d3f0;
        case 0x29d3f4u: goto label_29d3f4;
        case 0x29d3f8u: goto label_29d3f8;
        case 0x29d3fcu: goto label_29d3fc;
        case 0x29d400u: goto label_29d400;
        case 0x29d404u: goto label_29d404;
        case 0x29d408u: goto label_29d408;
        case 0x29d40cu: goto label_29d40c;
        case 0x29d410u: goto label_29d410;
        case 0x29d414u: goto label_29d414;
        case 0x29d418u: goto label_29d418;
        case 0x29d41cu: goto label_29d41c;
        case 0x29d420u: goto label_29d420;
        case 0x29d424u: goto label_29d424;
        case 0x29d428u: goto label_29d428;
        case 0x29d42cu: goto label_29d42c;
        case 0x29d430u: goto label_29d430;
        case 0x29d434u: goto label_29d434;
        case 0x29d438u: goto label_29d438;
        case 0x29d43cu: goto label_29d43c;
        case 0x29d440u: goto label_29d440;
        case 0x29d444u: goto label_29d444;
        case 0x29d448u: goto label_29d448;
        case 0x29d44cu: goto label_29d44c;
        case 0x29d450u: goto label_29d450;
        case 0x29d454u: goto label_29d454;
        case 0x29d458u: goto label_29d458;
        case 0x29d45cu: goto label_29d45c;
        case 0x29d460u: goto label_29d460;
        case 0x29d464u: goto label_29d464;
        case 0x29d468u: goto label_29d468;
        case 0x29d46cu: goto label_29d46c;
        case 0x29d470u: goto label_29d470;
        case 0x29d474u: goto label_29d474;
        case 0x29d478u: goto label_29d478;
        case 0x29d47cu: goto label_29d47c;
        case 0x29d480u: goto label_29d480;
        case 0x29d484u: goto label_29d484;
        case 0x29d488u: goto label_29d488;
        case 0x29d48cu: goto label_29d48c;
        case 0x29d490u: goto label_29d490;
        case 0x29d494u: goto label_29d494;
        case 0x29d498u: goto label_29d498;
        case 0x29d49cu: goto label_29d49c;
        case 0x29d4a0u: goto label_29d4a0;
        case 0x29d4a4u: goto label_29d4a4;
        case 0x29d4a8u: goto label_29d4a8;
        case 0x29d4acu: goto label_29d4ac;
        case 0x29d4b0u: goto label_29d4b0;
        case 0x29d4b4u: goto label_29d4b4;
        case 0x29d4b8u: goto label_29d4b8;
        case 0x29d4bcu: goto label_29d4bc;
        case 0x29d4c0u: goto label_29d4c0;
        case 0x29d4c4u: goto label_29d4c4;
        case 0x29d4c8u: goto label_29d4c8;
        case 0x29d4ccu: goto label_29d4cc;
        case 0x29d4d0u: goto label_29d4d0;
        case 0x29d4d4u: goto label_29d4d4;
        case 0x29d4d8u: goto label_29d4d8;
        case 0x29d4dcu: goto label_29d4dc;
        case 0x29d4e0u: goto label_29d4e0;
        case 0x29d4e4u: goto label_29d4e4;
        case 0x29d4e8u: goto label_29d4e8;
        case 0x29d4ecu: goto label_29d4ec;
        case 0x29d4f0u: goto label_29d4f0;
        case 0x29d4f4u: goto label_29d4f4;
        case 0x29d4f8u: goto label_29d4f8;
        case 0x29d4fcu: goto label_29d4fc;
        case 0x29d500u: goto label_29d500;
        case 0x29d504u: goto label_29d504;
        case 0x29d508u: goto label_29d508;
        case 0x29d50cu: goto label_29d50c;
        case 0x29d510u: goto label_29d510;
        case 0x29d514u: goto label_29d514;
        case 0x29d518u: goto label_29d518;
        case 0x29d51cu: goto label_29d51c;
        default: break;
    }

    ctx->pc = 0x29d2c0u;

label_29d2c0:
    // 0x29d2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29d2c4:
    // 0x29d2c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x29d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_29d2c8:
    // 0x29d2c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d2cc:
    // 0x29d2cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d2d0:
    // 0x29d2d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29d2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29d2d4:
    // 0x29d2d4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x29d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_29d2d8:
    // 0x29d2d8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x29d2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_29d2dc:
    // 0x29d2dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29d2dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_29d2e0:
    // 0x29d2e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x29d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29d2e4:
    // 0x29d2e4: 0x3e00008  jr          $ra
label_29d2e8:
    if (ctx->pc == 0x29D2E8u) {
        ctx->pc = 0x29D2ECu;
        goto label_29d2ec;
    }
    ctx->pc = 0x29D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D2ECu;
label_29d2ec:
    // 0x29d2ec: 0x0  nop
    ctx->pc = 0x29d2ecu;
    // NOP
label_29d2f0:
    // 0x29d2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29d2f4:
    // 0x29d2f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29d2f8:
    // 0x29d2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29d2fc:
    // 0x29d2fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_29d300:
    // 0x29d300: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29d300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_29d304:
    // 0x29d304: 0x90420068  lbu         $v0, 0x68($v0)
    ctx->pc = 0x29d304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
label_29d308:
    // 0x29d308: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29d308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d30c:
    // 0x29d30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d310:
    // 0x29d310: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_29d314:
    if (ctx->pc == 0x29D314u) {
        ctx->pc = 0x29D318u;
        goto label_29d318;
    }
    ctx->pc = 0x29D310u;
    {
        const bool branch_taken_0x29d310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d310) {
            ctx->pc = 0x29D360u;
            goto label_29d360;
        }
    }
    ctx->pc = 0x29D318u;
label_29d318:
    // 0x29d318: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_29d31c:
    // 0x29d31c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x29d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_29d320:
    // 0x29d320: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29d320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29d324:
    // 0x29d324: 0xc085538  jal         func_2154E0
label_29d328:
    if (ctx->pc == 0x29D328u) {
        ctx->pc = 0x29D32Cu;
        goto label_29d32c;
    }
    ctx->pc = 0x29D324u;
    SET_GPR_U32(ctx, 31, 0x29D32Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x29D324u, 0x29D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D32Cu;
label_29d32c:
    // 0x29d32c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d330:
    // 0x29d330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d334:
    // 0x29d334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29d334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d338:
    // 0x29d338: 0xc0a8438  jal         func_2A10E0
label_29d33c:
    if (ctx->pc == 0x29D33Cu) {
        ctx->pc = 0x29D340u;
        goto label_29d340;
    }
    ctx->pc = 0x29D338u;
    SET_GPR_U32(ctx, 31, 0x29D340u);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x29D338u, 0x29D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D340u;
label_29d340:
    // 0x29d340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d344:
    // 0x29d344: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d348:
    // 0x29d348: 0xc0a8438  jal         func_2A10E0
label_29d34c:
    if (ctx->pc == 0x29D34Cu) {
        ctx->pc = 0x29D350u;
        goto label_29d350;
    }
    ctx->pc = 0x29D348u;
    SET_GPR_U32(ctx, 31, 0x29D350u);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x29D348u, 0x29D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D350u;
label_29d350:
    // 0x29d350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d354:
    // 0x29d354: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29d358:
    // 0x29d358: 0xc0a8438  jal         func_2A10E0
label_29d35c:
    if (ctx->pc == 0x29D35Cu) {
        ctx->pc = 0x29D360u;
        goto label_29d360;
    }
    ctx->pc = 0x29D358u;
    SET_GPR_U32(ctx, 31, 0x29D360u);
    ctx->pc = 0x2A10E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A10E0u, 0x29D358u, 0x29D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D360u;
label_29d360:
    // 0x29d360: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_29d364:
    // 0x29d364: 0xc09d220  jal         func_274880
label_29d368:
    if (ctx->pc == 0x29D368u) {
        ctx->pc = 0x29D36Cu;
        goto label_29d36c;
    }
    ctx->pc = 0x29D364u;
    SET_GPR_U32(ctx, 31, 0x29D36Cu);
    ctx->pc = 0x274880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274880u, 0x29D364u, 0x29D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D36Cu;
label_29d36c:
    // 0x29d36c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d370:
    // 0x29d370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d374:
    // 0x29d374: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29d374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29d378:
    // 0x29d378: 0x3e00008  jr          $ra
label_29d37c:
    if (ctx->pc == 0x29D37Cu) {
        ctx->pc = 0x29D380u;
        goto label_29d380;
    }
    ctx->pc = 0x29D378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D380u;
label_29d380:
    // 0x29d380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29d380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29d384:
    // 0x29d384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29d388:
    // 0x29d388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29d38c:
    // 0x29d38c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x29d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_29d390:
    // 0x29d390: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x29d390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_29d394:
    // 0x29d394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29d394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d398:
    // 0x29d398: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d39c:
    // 0x29d39c: 0xa043005c  sb          $v1, 0x5C($v0)
    ctx->pc = 0x29d39cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 92), (uint8_t)GPR_U32(ctx, 3));
label_29d3a0:
    // 0x29d3a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29d3a4:
    // 0x29d3a4: 0x2785a380  addiu       $a1, $gp, -0x5C80
    ctx->pc = 0x29d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943616));
label_29d3a8:
    // 0x29d3a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29d3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d3ac:
    // 0x29d3ac: 0xc04206c  jal         func_1081B0
label_29d3b0:
    if (ctx->pc == 0x29D3B0u) {
        ctx->pc = 0x29D3B4u;
        goto label_29d3b4;
    }
    ctx->pc = 0x29D3ACu;
    SET_GPR_U32(ctx, 31, 0x29D3B4u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x29D3ACu, 0x29D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3B4u;
label_29d3b4:
    // 0x29d3b4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29d3b8:
    // 0x29d3b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29d3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d3bc:
    // 0x29d3bc: 0xc0bc5c6  jal         func_2F1718
label_29d3c0:
    if (ctx->pc == 0x29D3C0u) {
        ctx->pc = 0x29D3C4u;
        goto label_29d3c4;
    }
    ctx->pc = 0x29D3BCu;
    SET_GPR_U32(ctx, 31, 0x29D3C4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x29D3BCu, 0x29D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3C4u;
label_29d3c4:
    // 0x29d3c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29d3c8:
    // 0x29d3c8: 0xc0bc60c  jal         func_2F1830
label_29d3cc:
    if (ctx->pc == 0x29D3CCu) {
        ctx->pc = 0x29D3D0u;
        goto label_29d3d0;
    }
    ctx->pc = 0x29D3C8u;
    SET_GPR_U32(ctx, 31, 0x29D3D0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x29D3C8u, 0x29D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3D0u;
label_29d3d0:
    // 0x29d3d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29d3d4:
    // 0x29d3d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29d3d8:
    // 0x29d3d8: 0x80420020  lb          $v0, 0x20($v0)
    ctx->pc = 0x29d3d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
label_29d3dc:
    // 0x29d3dc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x29d3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_29d3e0:
    // 0x29d3e0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x29d3e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_29d3e4:
    // 0x29d3e4: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x29d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_29d3e8:
    // 0x29d3e8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_29d3ec:
    if (ctx->pc == 0x29D3ECu) {
        ctx->pc = 0x29D3F0u;
        goto label_29d3f0;
    }
    ctx->pc = 0x29D3E8u;
    {
        const bool branch_taken_0x29d3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d3e8) {
            ctx->pc = 0x29D408u;
            goto label_29d408;
        }
    }
    ctx->pc = 0x29D3F0u;
label_29d3f0:
    // 0x29d3f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x29d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29d3f4:
    // 0x29d3f4: 0xc0bc60c  jal         func_2F1830
label_29d3f8:
    if (ctx->pc == 0x29D3F8u) {
        ctx->pc = 0x29D3FCu;
        goto label_29d3fc;
    }
    ctx->pc = 0x29D3F4u;
    SET_GPR_U32(ctx, 31, 0x29D3FCu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x29D3F4u, 0x29D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3FCu;
label_29d3fc:
    // 0x29d3fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29d400:
    // 0x29d400: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29d400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29d404:
    // 0x29d404: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x29d404u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
label_29d408:
    // 0x29d408: 0xc090864  jal         func_242190
label_29d40c:
    if (ctx->pc == 0x29D40Cu) {
        ctx->pc = 0x29D410u;
        goto label_29d410;
    }
    ctx->pc = 0x29D408u;
    SET_GPR_U32(ctx, 31, 0x29D410u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x29D408u, 0x29D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D410u;
label_29d410:
    // 0x29d410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d414:
    // 0x29d414: 0xc0905a8  jal         func_2416A0
label_29d418:
    if (ctx->pc == 0x29D418u) {
        ctx->pc = 0x29D41Cu;
        goto label_29d41c;
    }
    ctx->pc = 0x29D414u;
    SET_GPR_U32(ctx, 31, 0x29D41Cu);
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x29D414u, 0x29D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D41Cu;
label_29d41c:
    // 0x29d41c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d420:
    // 0x29d420: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29d420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29d424:
    // 0x29d424: 0xc0993e0  jal         func_264F80
label_29d428:
    if (ctx->pc == 0x29D428u) {
        ctx->pc = 0x29D42Cu;
        goto label_29d42c;
    }
    ctx->pc = 0x29D424u;
    SET_GPR_U32(ctx, 31, 0x29D42Cu);
    ctx->pc = 0x264F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264F80u, 0x29D424u, 0x29D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D42Cu;
label_29d42c:
    // 0x29d42c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29d42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d430:
    // 0x29d430: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x29d430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_29d434:
    // 0x29d434: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d438:
    // 0x29d438: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x29d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_29d43c:
    // 0x29d43c: 0x14020012  bne         $zero, $v0, . + 4 + (0x12 << 2)
label_29d440:
    if (ctx->pc == 0x29D440u) {
        ctx->pc = 0x29D444u;
        goto label_29d444;
    }
    ctx->pc = 0x29D43Cu;
    {
        const bool branch_taken_0x29d43c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d43c) {
            ctx->pc = 0x29D488u;
            goto label_29d488;
        }
    }
    ctx->pc = 0x29D444u;
label_29d444:
    // 0x29d444: 0xc090864  jal         func_242190
label_29d448:
    if (ctx->pc == 0x29D448u) {
        ctx->pc = 0x29D44Cu;
        goto label_29d44c;
    }
    ctx->pc = 0x29D444u;
    SET_GPR_U32(ctx, 31, 0x29D44Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x29D444u, 0x29D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D44Cu;
label_29d44c:
    // 0x29d44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d450:
    // 0x29d450: 0xc0905a8  jal         func_2416A0
label_29d454:
    if (ctx->pc == 0x29D454u) {
        ctx->pc = 0x29D458u;
        goto label_29d458;
    }
    ctx->pc = 0x29D450u;
    SET_GPR_U32(ctx, 31, 0x29D458u);
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x29D450u, 0x29D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D458u;
label_29d458:
    // 0x29d458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d45c:
    // 0x29d45c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29d460:
    // 0x29d460: 0x2785a380  addiu       $a1, $gp, -0x5C80
    ctx->pc = 0x29d460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943616));
label_29d464:
    // 0x29d464: 0x2786a388  addiu       $a2, $gp, -0x5C78
    ctx->pc = 0x29d464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943624));
label_29d468:
    // 0x29d468: 0xc04206c  jal         func_1081B0
label_29d46c:
    if (ctx->pc == 0x29D46Cu) {
        ctx->pc = 0x29D470u;
        goto label_29d470;
    }
    ctx->pc = 0x29D468u;
    SET_GPR_U32(ctx, 31, 0x29D470u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x29D468u, 0x29D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D470u;
label_29d470:
    // 0x29d470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d474:
    // 0x29d474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29d474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d478:
    // 0x29d478: 0xc0993e0  jal         func_264F80
label_29d47c:
    if (ctx->pc == 0x29D47Cu) {
        ctx->pc = 0x29D480u;
        goto label_29d480;
    }
    ctx->pc = 0x29D478u;
    SET_GPR_U32(ctx, 31, 0x29D480u);
    ctx->pc = 0x264F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264F80u, 0x29D478u, 0x29D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D480u;
label_29d480:
    // 0x29d480: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d484:
    // 0x29d484: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x29d484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_29d488:
    // 0x29d488: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29d488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d48c:
    // 0x29d48c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29d48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29d490:
    // 0x29d490: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x29d490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_29d494:
    // 0x29d494: 0x320f809  jalr        $t9
label_29d498:
    if (ctx->pc == 0x29D498u) {
        ctx->pc = 0x29D49Cu;
        goto label_29d49c;
    }
    ctx->pc = 0x29D494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D49Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D494u, 0x29D49Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D49Cu;
label_29d49c:
    // 0x29d49c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29d49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d4a0:
    // 0x29d4a0: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x29d4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_29d4a4:
    // 0x29d4a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29d4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d4a8:
    // 0x29d4a8: 0xc0a7548  jal         func_29D520
label_29d4ac:
    if (ctx->pc == 0x29D4ACu) {
        ctx->pc = 0x29D4B0u;
        goto label_29d4b0;
    }
    ctx->pc = 0x29D4A8u;
    SET_GPR_U32(ctx, 31, 0x29D4B0u);
    ctx->pc = 0x29D520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D520u, 0x29D4A8u, 0x29D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4B0u;
label_29d4b0:
    // 0x29d4b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29d4b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29d4b4:
    // 0x29d4b4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29d4b8:
    // 0x29d4b8: 0x24050531  addiu       $a1, $zero, 0x531
    ctx->pc = 0x29d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1329));
label_29d4bc:
    // 0x29d4bc: 0xc042090  jal         func_108240
label_29d4c0:
    if (ctx->pc == 0x29D4C0u) {
        ctx->pc = 0x29D4C4u;
        goto label_29d4c4;
    }
    ctx->pc = 0x29D4BCu;
    SET_GPR_U32(ctx, 31, 0x29D4C4u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x29D4BCu, 0x29D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4C4u;
label_29d4c4:
    // 0x29d4c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d4c8:
    // 0x29d4c8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x29d4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_29d4cc:
    // 0x29d4cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29d4ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29d4d0:
    // 0x29d4d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29d4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29d4d4:
    // 0x29d4d4: 0x2405052f  addiu       $a1, $zero, 0x52F
    ctx->pc = 0x29d4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1327));
label_29d4d8:
    // 0x29d4d8: 0xc042090  jal         func_108240
label_29d4dc:
    if (ctx->pc == 0x29D4DCu) {
        ctx->pc = 0x29D4E0u;
        goto label_29d4e0;
    }
    ctx->pc = 0x29D4D8u;
    SET_GPR_U32(ctx, 31, 0x29D4E0u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x29D4D8u, 0x29D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4E0u;
label_29d4e0:
    // 0x29d4e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d4e4:
    // 0x29d4e4: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x29d4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_29d4e8:
    // 0x29d4e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29d4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29d4ec:
    // 0x29d4ec: 0x240504b2  addiu       $a1, $zero, 0x4B2
    ctx->pc = 0x29d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1202));
label_29d4f0:
    // 0x29d4f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29d4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d4f4:
    // 0x29d4f4: 0xc04146c  jal         func_1051B0
label_29d4f8:
    if (ctx->pc == 0x29D4F8u) {
        ctx->pc = 0x29D4FCu;
        goto label_29d4fc;
    }
    ctx->pc = 0x29D4F4u;
    SET_GPR_U32(ctx, 31, 0x29D4FCu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x29D4F4u, 0x29D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4FCu;
label_29d4fc:
    // 0x29d4fc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29d500:
    // 0x29d500: 0xa062007d  sb          $v0, 0x7D($v1)
    ctx->pc = 0x29d500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 125), (uint8_t)GPR_U32(ctx, 2));
label_29d504:
    // 0x29d504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d508:
    // 0x29d508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d50c:
    // 0x29d50c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29d50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_29d510:
    // 0x29d510: 0x3e00008  jr          $ra
label_29d514:
    if (ctx->pc == 0x29D514u) {
        ctx->pc = 0x29D518u;
        goto label_29d518;
    }
    ctx->pc = 0x29D510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D518u;
label_29d518:
    // 0x29d518: 0x0  nop
    ctx->pc = 0x29d518u;
    // NOP
label_29d51c:
    // 0x29d51c: 0x0  nop
    ctx->pc = 0x29d51cu;
    // NOP
    ctx->pc = 0x29d520u;
}
