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

// Function: sub_0016E360
// Address: 0x16e360 - 0x16e5c0
void sub_0016E360_0x16e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E360_0x16e360");
#endif

    switch (ctx->pc) {
        case 0x16e360u: goto label_16e360;
        case 0x16e364u: goto label_16e364;
        case 0x16e368u: goto label_16e368;
        case 0x16e36cu: goto label_16e36c;
        case 0x16e370u: goto label_16e370;
        case 0x16e374u: goto label_16e374;
        case 0x16e378u: goto label_16e378;
        case 0x16e37cu: goto label_16e37c;
        case 0x16e380u: goto label_16e380;
        case 0x16e384u: goto label_16e384;
        case 0x16e388u: goto label_16e388;
        case 0x16e38cu: goto label_16e38c;
        case 0x16e390u: goto label_16e390;
        case 0x16e394u: goto label_16e394;
        case 0x16e398u: goto label_16e398;
        case 0x16e39cu: goto label_16e39c;
        case 0x16e3a0u: goto label_16e3a0;
        case 0x16e3a4u: goto label_16e3a4;
        case 0x16e3a8u: goto label_16e3a8;
        case 0x16e3acu: goto label_16e3ac;
        case 0x16e3b0u: goto label_16e3b0;
        case 0x16e3b4u: goto label_16e3b4;
        case 0x16e3b8u: goto label_16e3b8;
        case 0x16e3bcu: goto label_16e3bc;
        case 0x16e3c0u: goto label_16e3c0;
        case 0x16e3c4u: goto label_16e3c4;
        case 0x16e3c8u: goto label_16e3c8;
        case 0x16e3ccu: goto label_16e3cc;
        case 0x16e3d0u: goto label_16e3d0;
        case 0x16e3d4u: goto label_16e3d4;
        case 0x16e3d8u: goto label_16e3d8;
        case 0x16e3dcu: goto label_16e3dc;
        case 0x16e3e0u: goto label_16e3e0;
        case 0x16e3e4u: goto label_16e3e4;
        case 0x16e3e8u: goto label_16e3e8;
        case 0x16e3ecu: goto label_16e3ec;
        case 0x16e3f0u: goto label_16e3f0;
        case 0x16e3f4u: goto label_16e3f4;
        case 0x16e3f8u: goto label_16e3f8;
        case 0x16e3fcu: goto label_16e3fc;
        case 0x16e400u: goto label_16e400;
        case 0x16e404u: goto label_16e404;
        case 0x16e408u: goto label_16e408;
        case 0x16e40cu: goto label_16e40c;
        case 0x16e410u: goto label_16e410;
        case 0x16e414u: goto label_16e414;
        case 0x16e418u: goto label_16e418;
        case 0x16e41cu: goto label_16e41c;
        case 0x16e420u: goto label_16e420;
        case 0x16e424u: goto label_16e424;
        case 0x16e428u: goto label_16e428;
        case 0x16e42cu: goto label_16e42c;
        case 0x16e430u: goto label_16e430;
        case 0x16e434u: goto label_16e434;
        case 0x16e438u: goto label_16e438;
        case 0x16e43cu: goto label_16e43c;
        case 0x16e440u: goto label_16e440;
        case 0x16e444u: goto label_16e444;
        case 0x16e448u: goto label_16e448;
        case 0x16e44cu: goto label_16e44c;
        case 0x16e450u: goto label_16e450;
        case 0x16e454u: goto label_16e454;
        case 0x16e458u: goto label_16e458;
        case 0x16e45cu: goto label_16e45c;
        case 0x16e460u: goto label_16e460;
        case 0x16e464u: goto label_16e464;
        case 0x16e468u: goto label_16e468;
        case 0x16e46cu: goto label_16e46c;
        case 0x16e470u: goto label_16e470;
        case 0x16e474u: goto label_16e474;
        case 0x16e478u: goto label_16e478;
        case 0x16e47cu: goto label_16e47c;
        case 0x16e480u: goto label_16e480;
        case 0x16e484u: goto label_16e484;
        case 0x16e488u: goto label_16e488;
        case 0x16e48cu: goto label_16e48c;
        case 0x16e490u: goto label_16e490;
        case 0x16e494u: goto label_16e494;
        case 0x16e498u: goto label_16e498;
        case 0x16e49cu: goto label_16e49c;
        case 0x16e4a0u: goto label_16e4a0;
        case 0x16e4a4u: goto label_16e4a4;
        case 0x16e4a8u: goto label_16e4a8;
        case 0x16e4acu: goto label_16e4ac;
        case 0x16e4b0u: goto label_16e4b0;
        case 0x16e4b4u: goto label_16e4b4;
        case 0x16e4b8u: goto label_16e4b8;
        case 0x16e4bcu: goto label_16e4bc;
        case 0x16e4c0u: goto label_16e4c0;
        case 0x16e4c4u: goto label_16e4c4;
        case 0x16e4c8u: goto label_16e4c8;
        case 0x16e4ccu: goto label_16e4cc;
        case 0x16e4d0u: goto label_16e4d0;
        case 0x16e4d4u: goto label_16e4d4;
        case 0x16e4d8u: goto label_16e4d8;
        case 0x16e4dcu: goto label_16e4dc;
        case 0x16e4e0u: goto label_16e4e0;
        case 0x16e4e4u: goto label_16e4e4;
        case 0x16e4e8u: goto label_16e4e8;
        case 0x16e4ecu: goto label_16e4ec;
        case 0x16e4f0u: goto label_16e4f0;
        case 0x16e4f4u: goto label_16e4f4;
        case 0x16e4f8u: goto label_16e4f8;
        case 0x16e4fcu: goto label_16e4fc;
        case 0x16e500u: goto label_16e500;
        case 0x16e504u: goto label_16e504;
        case 0x16e508u: goto label_16e508;
        case 0x16e50cu: goto label_16e50c;
        case 0x16e510u: goto label_16e510;
        case 0x16e514u: goto label_16e514;
        case 0x16e518u: goto label_16e518;
        case 0x16e51cu: goto label_16e51c;
        case 0x16e520u: goto label_16e520;
        case 0x16e524u: goto label_16e524;
        case 0x16e528u: goto label_16e528;
        case 0x16e52cu: goto label_16e52c;
        case 0x16e530u: goto label_16e530;
        case 0x16e534u: goto label_16e534;
        case 0x16e538u: goto label_16e538;
        case 0x16e53cu: goto label_16e53c;
        case 0x16e540u: goto label_16e540;
        case 0x16e544u: goto label_16e544;
        case 0x16e548u: goto label_16e548;
        case 0x16e54cu: goto label_16e54c;
        case 0x16e550u: goto label_16e550;
        case 0x16e554u: goto label_16e554;
        case 0x16e558u: goto label_16e558;
        case 0x16e55cu: goto label_16e55c;
        case 0x16e560u: goto label_16e560;
        case 0x16e564u: goto label_16e564;
        case 0x16e568u: goto label_16e568;
        case 0x16e56cu: goto label_16e56c;
        case 0x16e570u: goto label_16e570;
        case 0x16e574u: goto label_16e574;
        case 0x16e578u: goto label_16e578;
        case 0x16e57cu: goto label_16e57c;
        case 0x16e580u: goto label_16e580;
        case 0x16e584u: goto label_16e584;
        case 0x16e588u: goto label_16e588;
        case 0x16e58cu: goto label_16e58c;
        case 0x16e590u: goto label_16e590;
        case 0x16e594u: goto label_16e594;
        case 0x16e598u: goto label_16e598;
        case 0x16e59cu: goto label_16e59c;
        case 0x16e5a0u: goto label_16e5a0;
        case 0x16e5a4u: goto label_16e5a4;
        case 0x16e5a8u: goto label_16e5a8;
        case 0x16e5acu: goto label_16e5ac;
        case 0x16e5b0u: goto label_16e5b0;
        case 0x16e5b4u: goto label_16e5b4;
        case 0x16e5b8u: goto label_16e5b8;
        case 0x16e5bcu: goto label_16e5bc;
        default: break;
    }

    ctx->pc = 0x16e360u;

label_16e360:
    // 0x16e360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16e364:
    // 0x16e364: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16e364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_16e368:
    // 0x16e368: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16e36c:
    // 0x16e36c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x16e36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_16e370:
    // 0x16e370: 0x3e00008  jr          $ra
label_16e374:
    if (ctx->pc == 0x16E374u) {
        ctx->pc = 0x16E378u;
        goto label_16e378;
    }
    ctx->pc = 0x16E370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E378u;
label_16e378:
    // 0x16e378: 0x0  nop
    ctx->pc = 0x16e378u;
    // NOP
label_16e37c:
    // 0x16e37c: 0x0  nop
    ctx->pc = 0x16e37cu;
    // NOP
label_16e380:
    // 0x16e380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16e384:
    // 0x16e384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e388:
    // 0x16e388: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16e388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16e38c:
    // 0x16e38c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x16e38cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_16e390:
    // 0x16e390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e394:
    // 0x16e394: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_16e398:
    if (ctx->pc == 0x16E398u) {
        ctx->pc = 0x16E39Cu;
        goto label_16e39c;
    }
    ctx->pc = 0x16E394u;
    {
        const bool branch_taken_0x16e394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e394) {
            ctx->pc = 0x16E408u;
            goto label_16e408;
        }
    }
    ctx->pc = 0x16E39Cu;
label_16e39c:
    // 0x16e39c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_16e3a0:
    // 0x16e3a0: 0x24633d50  addiu       $v1, $v1, 0x3D50
    ctx->pc = 0x16e3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15696));
label_16e3a4:
    // 0x16e3a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e3a8:
    // 0x16e3a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_16e3ac:
    // 0x16e3ac: 0xaf80bad0  sw          $zero, -0x4530($gp)
    ctx->pc = 0x16e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949584), GPR_U32(ctx, 0));
label_16e3b0:
    // 0x16e3b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e3b4:
    // 0x16e3b4: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16e3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_16e3b8:
    // 0x16e3b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16e3bc:
    // 0x16e3bc: 0xc05b7e4  jal         func_16DF90
label_16e3c0:
    if (ctx->pc == 0x16E3C0u) {
        ctx->pc = 0x16E3C4u;
        goto label_16e3c4;
    }
    ctx->pc = 0x16E3BCu;
    SET_GPR_U32(ctx, 31, 0x16E3C4u);
    ctx->pc = 0x16DF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DF90u, 0x16E3BCu, 0x16E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3C4u;
label_16e3c4:
    // 0x16e3c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e3c8:
    // 0x16e3c8: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x16e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_16e3cc:
    // 0x16e3cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16e3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16e3d0:
    // 0x16e3d0: 0xc05b800  jal         func_16E000
label_16e3d4:
    if (ctx->pc == 0x16E3D4u) {
        ctx->pc = 0x16E3D8u;
        goto label_16e3d8;
    }
    ctx->pc = 0x16E3D0u;
    SET_GPR_U32(ctx, 31, 0x16E3D8u);
    ctx->pc = 0x16E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E000u, 0x16E3D0u, 0x16E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3D8u;
label_16e3d8:
    // 0x16e3d8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e3dc:
    // 0x16e3dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e3e0:
    // 0x16e3e0: 0xc055950  jal         func_156540
label_16e3e4:
    if (ctx->pc == 0x16E3E4u) {
        ctx->pc = 0x16E3E8u;
        goto label_16e3e8;
    }
    ctx->pc = 0x16E3E0u;
    SET_GPR_U32(ctx, 31, 0x16E3E8u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x16E3E0u, 0x16E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E3E8u;
label_16e3e8:
    // 0x16e3e8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x16e3e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_16e3ec:
    // 0x16e3ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16e3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_16e3f0:
    // 0x16e3f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16e3f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_16e3f4:
    // 0x16e3f4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_16e3f8:
    if (ctx->pc == 0x16E3F8u) {
        ctx->pc = 0x16E3FCu;
        goto label_16e3fc;
    }
    ctx->pc = 0x16E3F4u;
    {
        const bool branch_taken_0x16e3f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16e3f4) {
            ctx->pc = 0x16E408u;
            goto label_16e408;
        }
    }
    ctx->pc = 0x16E3FCu;
label_16e3fc:
    // 0x16e3fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e400:
    // 0x16e400: 0xc0ba070  jal         func_2E81C0
label_16e404:
    if (ctx->pc == 0x16E404u) {
        ctx->pc = 0x16E408u;
        goto label_16e408;
    }
    ctx->pc = 0x16E400u;
    SET_GPR_U32(ctx, 31, 0x16E408u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x16E400u, 0x16E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E408u;
label_16e408:
    // 0x16e408: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e40c:
    // 0x16e40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e410:
    // 0x16e410: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16e414:
    // 0x16e414: 0x3e00008  jr          $ra
label_16e418:
    if (ctx->pc == 0x16E418u) {
        ctx->pc = 0x16E41Cu;
        goto label_16e41c;
    }
    ctx->pc = 0x16E414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E41Cu;
label_16e41c:
    // 0x16e41c: 0x0  nop
    ctx->pc = 0x16e41cu;
    // NOP
label_16e420:
    // 0x16e420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16e420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16e424:
    // 0x16e424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16e424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16e428:
    // 0x16e428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16e42c:
    // 0x16e42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16e430:
    // 0x16e430: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x16e430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_16e434:
    // 0x16e434: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x16e434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_16e438:
    // 0x16e438: 0xc055974  jal         func_1565D0
label_16e43c:
    if (ctx->pc == 0x16E43Cu) {
        ctx->pc = 0x16E440u;
        goto label_16e440;
    }
    ctx->pc = 0x16E438u;
    SET_GPR_U32(ctx, 31, 0x16E440u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x16E438u, 0x16E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E440u;
label_16e440:
    // 0x16e440: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16e440u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16e444:
    // 0x16e444: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16e444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16e448:
    // 0x16e448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e44c:
    // 0x16e44c: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_16e450:
    if (ctx->pc == 0x16E450u) {
        ctx->pc = 0x16E454u;
        goto label_16e454;
    }
    ctx->pc = 0x16E44Cu;
    {
        const bool branch_taken_0x16e44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e44c) {
            ctx->pc = 0x16E500u;
            goto label_16e500;
        }
    }
    ctx->pc = 0x16E454u;
label_16e454:
    // 0x16e454: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_16e458:
    // 0x16e458: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16e458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_16e45c:
    // 0x16e45c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e460:
    // 0x16e460: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x16e460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_16e464:
    // 0x16e464: 0x320f809  jalr        $t9
label_16e468:
    if (ctx->pc == 0x16E468u) {
        ctx->pc = 0x16E46Cu;
        goto label_16e46c;
    }
    ctx->pc = 0x16E464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E46Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E464u, 0x16E46Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E46Cu;
label_16e46c:
    // 0x16e46c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16e46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16e470:
    // 0x16e470: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x16e470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16e474:
    // 0x16e474: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16e474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_16e478:
    // 0x16e478: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16e478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16e47c:
    // 0x16e47c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16e47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16e480:
    // 0x16e480: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16e480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16e484:
    // 0x16e484: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16e484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16e488:
    // 0x16e488: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x16e488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_16e48c:
    // 0x16e48c: 0xc119b68  jal         func_466DA0
label_16e490:
    if (ctx->pc == 0x16E490u) {
        ctx->pc = 0x16E494u;
        goto label_16e494;
    }
    ctx->pc = 0x16E48Cu;
    SET_GPR_U32(ctx, 31, 0x16E494u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16E48Cu, 0x16E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E494u;
label_16e494:
    // 0x16e494: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x16e494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_16e498:
    // 0x16e498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e49c:
    // 0x16e49c: 0xc0400e0  jal         func_100380
label_16e4a0:
    if (ctx->pc == 0x16E4A0u) {
        ctx->pc = 0x16E4A4u;
        goto label_16e4a4;
    }
    ctx->pc = 0x16E49Cu;
    SET_GPR_U32(ctx, 31, 0x16E4A4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16E49Cu, 0x16E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4A4u;
label_16e4a4:
    // 0x16e4a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16e4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e4a8:
    // 0x16e4a8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_16e4ac:
    if (ctx->pc == 0x16E4ACu) {
        ctx->pc = 0x16E4B0u;
        goto label_16e4b0;
    }
    ctx->pc = 0x16E4A8u;
    {
        const bool branch_taken_0x16e4a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e4a8) {
            ctx->pc = 0x16E4C4u;
            goto label_16e4c4;
        }
    }
    ctx->pc = 0x16E4B0u;
label_16e4b0:
    // 0x16e4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e4b4:
    // 0x16e4b4: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x16e4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_16e4b8:
    // 0x16e4b8: 0xc0557e8  jal         func_155FA0
label_16e4bc:
    if (ctx->pc == 0x16E4BCu) {
        ctx->pc = 0x16E4C0u;
        goto label_16e4c0;
    }
    ctx->pc = 0x16E4B8u;
    SET_GPR_U32(ctx, 31, 0x16E4C0u);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x16E4B8u, 0x16E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4C0u;
label_16e4c0:
    // 0x16e4c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16e4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e4c4:
    // 0x16e4c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_16e4c8:
    // 0x16e4c8: 0xac5100c4  sw          $s1, 0xC4($v0)
    ctx->pc = 0x16e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 17));
label_16e4cc:
    // 0x16e4cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x16e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_16e4d0:
    // 0x16e4d0: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16e4d4:
    // 0x16e4d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e4d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e4d8:
    // 0x16e4d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x16e4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_16e4dc:
    // 0x16e4dc: 0x320f809  jalr        $t9
label_16e4e0:
    if (ctx->pc == 0x16E4E0u) {
        ctx->pc = 0x16E4E4u;
        goto label_16e4e4;
    }
    ctx->pc = 0x16E4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E4E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E4DCu, 0x16E4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E4E4u;
label_16e4e4:
    // 0x16e4e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x16e4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16e4e8:
    // 0x16e4e8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x16e4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16e4ec:
    // 0x16e4ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16e4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_16e4f0:
    // 0x16e4f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16e4f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16e4f4:
    // 0x16e4f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16e4f8:
    // 0x16e4f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16e4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16e4fc:
    // 0x16e4fc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16e4fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16e500:
    // 0x16e500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16e500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e504:
    // 0x16e504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16e504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16e508:
    // 0x16e508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16e508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16e50c:
    // 0x16e50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16e510:
    // 0x16e510: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x16e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16e514:
    // 0x16e514: 0x3e00008  jr          $ra
label_16e518:
    if (ctx->pc == 0x16E518u) {
        ctx->pc = 0x16E51Cu;
        goto label_16e51c;
    }
    ctx->pc = 0x16E514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E51Cu;
label_16e51c:
    // 0x16e51c: 0x0  nop
    ctx->pc = 0x16e51cu;
    // NOP
label_16e520:
    // 0x16e520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e524:
    // 0x16e524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e528:
    // 0x16e528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16e528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_16e52c:
    // 0x16e52c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e530:
    // 0x16e530: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x16e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_16e534:
    // 0x16e534: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e538:
    // 0x16e538: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x16e538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_16e53c:
    // 0x16e53c: 0x320f809  jalr        $t9
label_16e540:
    if (ctx->pc == 0x16E540u) {
        ctx->pc = 0x16E544u;
        goto label_16e544;
    }
    ctx->pc = 0x16E53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E544u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E53Cu, 0x16E544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E544u;
label_16e544:
    // 0x16e544: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e548:
    // 0x16e548: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16e54c:
    // 0x16e54c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e54cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e550:
    // 0x16e550: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x16e550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_16e554:
    // 0x16e554: 0x320f809  jalr        $t9
label_16e558:
    if (ctx->pc == 0x16E558u) {
        ctx->pc = 0x16E55Cu;
        goto label_16e55c;
    }
    ctx->pc = 0x16E554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E55Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E554u, 0x16E55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E55Cu;
label_16e55c:
    // 0x16e55c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e560:
    // 0x16e560: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x16e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16e564:
    // 0x16e564: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_16e568:
    if (ctx->pc == 0x16E568u) {
        ctx->pc = 0x16E56Cu;
        goto label_16e56c;
    }
    ctx->pc = 0x16E564u;
    {
        const bool branch_taken_0x16e564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e564) {
            ctx->pc = 0x16E594u;
            goto label_16e594;
        }
    }
    ctx->pc = 0x16E56Cu;
label_16e56c:
    // 0x16e56c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e570:
    // 0x16e570: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16e570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16e574:
    // 0x16e574: 0xc054fe0  jal         func_153F80
label_16e578:
    if (ctx->pc == 0x16E578u) {
        ctx->pc = 0x16E57Cu;
        goto label_16e57c;
    }
    ctx->pc = 0x16E574u;
    SET_GPR_U32(ctx, 31, 0x16E57Cu);
    ctx->pc = 0x153F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F80u, 0x16E574u, 0x16E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E57Cu;
label_16e57c:
    // 0x16e57c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e580:
    // 0x16e580: 0x8c4400c4  lw          $a0, 0xC4($v0)
    ctx->pc = 0x16e580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16e584:
    // 0x16e584: 0xc119c5c  jal         func_467170
label_16e588:
    if (ctx->pc == 0x16E588u) {
        ctx->pc = 0x16E58Cu;
        goto label_16e58c;
    }
    ctx->pc = 0x16E584u;
    SET_GPR_U32(ctx, 31, 0x16E58Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x16E584u, 0x16E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E58Cu;
label_16e58c:
    // 0x16e58c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e590:
    // 0x16e590: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x16e590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
label_16e594:
    // 0x16e594: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e598:
    // 0x16e598: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x16e598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_16e59c:
    // 0x16e59c: 0xc05b970  jal         func_16E5C0
label_16e5a0:
    if (ctx->pc == 0x16E5A0u) {
        ctx->pc = 0x16E5A4u;
        goto label_16e5a4;
    }
    ctx->pc = 0x16E59Cu;
    SET_GPR_U32(ctx, 31, 0x16E5A4u);
    ctx->pc = 0x16E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E5C0u, 0x16E59Cu, 0x16E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E5A4u;
label_16e5a4:
    // 0x16e5a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_16e5a8:
    // 0x16e5a8: 0xc0559ac  jal         func_1566B0
label_16e5ac:
    if (ctx->pc == 0x16E5ACu) {
        ctx->pc = 0x16E5B0u;
        goto label_16e5b0;
    }
    ctx->pc = 0x16E5A8u;
    SET_GPR_U32(ctx, 31, 0x16E5B0u);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x16E5A8u, 0x16E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E5B0u;
label_16e5b0:
    // 0x16e5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e5b4:
    // 0x16e5b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x16e5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_16e5b8:
    // 0x16e5b8: 0x3e00008  jr          $ra
label_16e5bc:
    if (ctx->pc == 0x16E5BCu) {
        ctx->pc = 0x16E5C0u;
        goto label_fallthrough_0x16e5b8;
    }
    ctx->pc = 0x16E5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16e5b8:
    ctx->pc = 0x16E5C0u;
}
