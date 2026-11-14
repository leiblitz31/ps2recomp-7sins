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

// Function: sub_0013E210
// Address: 0x13e210 - 0x13e5d0
void sub_0013E210_0x13e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E210_0x13e210");
#endif

    switch (ctx->pc) {
        case 0x13e210u: goto label_13e210;
        case 0x13e214u: goto label_13e214;
        case 0x13e218u: goto label_13e218;
        case 0x13e21cu: goto label_13e21c;
        case 0x13e220u: goto label_13e220;
        case 0x13e224u: goto label_13e224;
        case 0x13e228u: goto label_13e228;
        case 0x13e22cu: goto label_13e22c;
        case 0x13e230u: goto label_13e230;
        case 0x13e234u: goto label_13e234;
        case 0x13e238u: goto label_13e238;
        case 0x13e23cu: goto label_13e23c;
        case 0x13e240u: goto label_13e240;
        case 0x13e244u: goto label_13e244;
        case 0x13e248u: goto label_13e248;
        case 0x13e24cu: goto label_13e24c;
        case 0x13e250u: goto label_13e250;
        case 0x13e254u: goto label_13e254;
        case 0x13e258u: goto label_13e258;
        case 0x13e25cu: goto label_13e25c;
        case 0x13e260u: goto label_13e260;
        case 0x13e264u: goto label_13e264;
        case 0x13e268u: goto label_13e268;
        case 0x13e26cu: goto label_13e26c;
        case 0x13e270u: goto label_13e270;
        case 0x13e274u: goto label_13e274;
        case 0x13e278u: goto label_13e278;
        case 0x13e27cu: goto label_13e27c;
        case 0x13e280u: goto label_13e280;
        case 0x13e284u: goto label_13e284;
        case 0x13e288u: goto label_13e288;
        case 0x13e28cu: goto label_13e28c;
        case 0x13e290u: goto label_13e290;
        case 0x13e294u: goto label_13e294;
        case 0x13e298u: goto label_13e298;
        case 0x13e29cu: goto label_13e29c;
        case 0x13e2a0u: goto label_13e2a0;
        case 0x13e2a4u: goto label_13e2a4;
        case 0x13e2a8u: goto label_13e2a8;
        case 0x13e2acu: goto label_13e2ac;
        case 0x13e2b0u: goto label_13e2b0;
        case 0x13e2b4u: goto label_13e2b4;
        case 0x13e2b8u: goto label_13e2b8;
        case 0x13e2bcu: goto label_13e2bc;
        case 0x13e2c0u: goto label_13e2c0;
        case 0x13e2c4u: goto label_13e2c4;
        case 0x13e2c8u: goto label_13e2c8;
        case 0x13e2ccu: goto label_13e2cc;
        case 0x13e2d0u: goto label_13e2d0;
        case 0x13e2d4u: goto label_13e2d4;
        case 0x13e2d8u: goto label_13e2d8;
        case 0x13e2dcu: goto label_13e2dc;
        case 0x13e2e0u: goto label_13e2e0;
        case 0x13e2e4u: goto label_13e2e4;
        case 0x13e2e8u: goto label_13e2e8;
        case 0x13e2ecu: goto label_13e2ec;
        case 0x13e2f0u: goto label_13e2f0;
        case 0x13e2f4u: goto label_13e2f4;
        case 0x13e2f8u: goto label_13e2f8;
        case 0x13e2fcu: goto label_13e2fc;
        case 0x13e300u: goto label_13e300;
        case 0x13e304u: goto label_13e304;
        case 0x13e308u: goto label_13e308;
        case 0x13e30cu: goto label_13e30c;
        case 0x13e310u: goto label_13e310;
        case 0x13e314u: goto label_13e314;
        case 0x13e318u: goto label_13e318;
        case 0x13e31cu: goto label_13e31c;
        case 0x13e320u: goto label_13e320;
        case 0x13e324u: goto label_13e324;
        case 0x13e328u: goto label_13e328;
        case 0x13e32cu: goto label_13e32c;
        case 0x13e330u: goto label_13e330;
        case 0x13e334u: goto label_13e334;
        case 0x13e338u: goto label_13e338;
        case 0x13e33cu: goto label_13e33c;
        case 0x13e340u: goto label_13e340;
        case 0x13e344u: goto label_13e344;
        case 0x13e348u: goto label_13e348;
        case 0x13e34cu: goto label_13e34c;
        case 0x13e350u: goto label_13e350;
        case 0x13e354u: goto label_13e354;
        case 0x13e358u: goto label_13e358;
        case 0x13e35cu: goto label_13e35c;
        case 0x13e360u: goto label_13e360;
        case 0x13e364u: goto label_13e364;
        case 0x13e368u: goto label_13e368;
        case 0x13e36cu: goto label_13e36c;
        case 0x13e370u: goto label_13e370;
        case 0x13e374u: goto label_13e374;
        case 0x13e378u: goto label_13e378;
        case 0x13e37cu: goto label_13e37c;
        case 0x13e380u: goto label_13e380;
        case 0x13e384u: goto label_13e384;
        case 0x13e388u: goto label_13e388;
        case 0x13e38cu: goto label_13e38c;
        case 0x13e390u: goto label_13e390;
        case 0x13e394u: goto label_13e394;
        case 0x13e398u: goto label_13e398;
        case 0x13e39cu: goto label_13e39c;
        case 0x13e3a0u: goto label_13e3a0;
        case 0x13e3a4u: goto label_13e3a4;
        case 0x13e3a8u: goto label_13e3a8;
        case 0x13e3acu: goto label_13e3ac;
        case 0x13e3b0u: goto label_13e3b0;
        case 0x13e3b4u: goto label_13e3b4;
        case 0x13e3b8u: goto label_13e3b8;
        case 0x13e3bcu: goto label_13e3bc;
        case 0x13e3c0u: goto label_13e3c0;
        case 0x13e3c4u: goto label_13e3c4;
        case 0x13e3c8u: goto label_13e3c8;
        case 0x13e3ccu: goto label_13e3cc;
        case 0x13e3d0u: goto label_13e3d0;
        case 0x13e3d4u: goto label_13e3d4;
        case 0x13e3d8u: goto label_13e3d8;
        case 0x13e3dcu: goto label_13e3dc;
        case 0x13e3e0u: goto label_13e3e0;
        case 0x13e3e4u: goto label_13e3e4;
        case 0x13e3e8u: goto label_13e3e8;
        case 0x13e3ecu: goto label_13e3ec;
        case 0x13e3f0u: goto label_13e3f0;
        case 0x13e3f4u: goto label_13e3f4;
        case 0x13e3f8u: goto label_13e3f8;
        case 0x13e3fcu: goto label_13e3fc;
        case 0x13e400u: goto label_13e400;
        case 0x13e404u: goto label_13e404;
        case 0x13e408u: goto label_13e408;
        case 0x13e40cu: goto label_13e40c;
        case 0x13e410u: goto label_13e410;
        case 0x13e414u: goto label_13e414;
        case 0x13e418u: goto label_13e418;
        case 0x13e41cu: goto label_13e41c;
        case 0x13e420u: goto label_13e420;
        case 0x13e424u: goto label_13e424;
        case 0x13e428u: goto label_13e428;
        case 0x13e42cu: goto label_13e42c;
        case 0x13e430u: goto label_13e430;
        case 0x13e434u: goto label_13e434;
        case 0x13e438u: goto label_13e438;
        case 0x13e43cu: goto label_13e43c;
        case 0x13e440u: goto label_13e440;
        case 0x13e444u: goto label_13e444;
        case 0x13e448u: goto label_13e448;
        case 0x13e44cu: goto label_13e44c;
        case 0x13e450u: goto label_13e450;
        case 0x13e454u: goto label_13e454;
        case 0x13e458u: goto label_13e458;
        case 0x13e45cu: goto label_13e45c;
        case 0x13e460u: goto label_13e460;
        case 0x13e464u: goto label_13e464;
        case 0x13e468u: goto label_13e468;
        case 0x13e46cu: goto label_13e46c;
        case 0x13e470u: goto label_13e470;
        case 0x13e474u: goto label_13e474;
        case 0x13e478u: goto label_13e478;
        case 0x13e47cu: goto label_13e47c;
        case 0x13e480u: goto label_13e480;
        case 0x13e484u: goto label_13e484;
        case 0x13e488u: goto label_13e488;
        case 0x13e48cu: goto label_13e48c;
        case 0x13e490u: goto label_13e490;
        case 0x13e494u: goto label_13e494;
        case 0x13e498u: goto label_13e498;
        case 0x13e49cu: goto label_13e49c;
        case 0x13e4a0u: goto label_13e4a0;
        case 0x13e4a4u: goto label_13e4a4;
        case 0x13e4a8u: goto label_13e4a8;
        case 0x13e4acu: goto label_13e4ac;
        case 0x13e4b0u: goto label_13e4b0;
        case 0x13e4b4u: goto label_13e4b4;
        case 0x13e4b8u: goto label_13e4b8;
        case 0x13e4bcu: goto label_13e4bc;
        case 0x13e4c0u: goto label_13e4c0;
        case 0x13e4c4u: goto label_13e4c4;
        case 0x13e4c8u: goto label_13e4c8;
        case 0x13e4ccu: goto label_13e4cc;
        case 0x13e4d0u: goto label_13e4d0;
        case 0x13e4d4u: goto label_13e4d4;
        case 0x13e4d8u: goto label_13e4d8;
        case 0x13e4dcu: goto label_13e4dc;
        case 0x13e4e0u: goto label_13e4e0;
        case 0x13e4e4u: goto label_13e4e4;
        case 0x13e4e8u: goto label_13e4e8;
        case 0x13e4ecu: goto label_13e4ec;
        case 0x13e4f0u: goto label_13e4f0;
        case 0x13e4f4u: goto label_13e4f4;
        case 0x13e4f8u: goto label_13e4f8;
        case 0x13e4fcu: goto label_13e4fc;
        case 0x13e500u: goto label_13e500;
        case 0x13e504u: goto label_13e504;
        case 0x13e508u: goto label_13e508;
        case 0x13e50cu: goto label_13e50c;
        case 0x13e510u: goto label_13e510;
        case 0x13e514u: goto label_13e514;
        case 0x13e518u: goto label_13e518;
        case 0x13e51cu: goto label_13e51c;
        case 0x13e520u: goto label_13e520;
        case 0x13e524u: goto label_13e524;
        case 0x13e528u: goto label_13e528;
        case 0x13e52cu: goto label_13e52c;
        case 0x13e530u: goto label_13e530;
        case 0x13e534u: goto label_13e534;
        case 0x13e538u: goto label_13e538;
        case 0x13e53cu: goto label_13e53c;
        case 0x13e540u: goto label_13e540;
        case 0x13e544u: goto label_13e544;
        case 0x13e548u: goto label_13e548;
        case 0x13e54cu: goto label_13e54c;
        case 0x13e550u: goto label_13e550;
        case 0x13e554u: goto label_13e554;
        case 0x13e558u: goto label_13e558;
        case 0x13e55cu: goto label_13e55c;
        case 0x13e560u: goto label_13e560;
        case 0x13e564u: goto label_13e564;
        case 0x13e568u: goto label_13e568;
        case 0x13e56cu: goto label_13e56c;
        case 0x13e570u: goto label_13e570;
        case 0x13e574u: goto label_13e574;
        case 0x13e578u: goto label_13e578;
        case 0x13e57cu: goto label_13e57c;
        case 0x13e580u: goto label_13e580;
        case 0x13e584u: goto label_13e584;
        case 0x13e588u: goto label_13e588;
        case 0x13e58cu: goto label_13e58c;
        case 0x13e590u: goto label_13e590;
        case 0x13e594u: goto label_13e594;
        case 0x13e598u: goto label_13e598;
        case 0x13e59cu: goto label_13e59c;
        case 0x13e5a0u: goto label_13e5a0;
        case 0x13e5a4u: goto label_13e5a4;
        case 0x13e5a8u: goto label_13e5a8;
        case 0x13e5acu: goto label_13e5ac;
        case 0x13e5b0u: goto label_13e5b0;
        case 0x13e5b4u: goto label_13e5b4;
        case 0x13e5b8u: goto label_13e5b8;
        case 0x13e5bcu: goto label_13e5bc;
        case 0x13e5c0u: goto label_13e5c0;
        case 0x13e5c4u: goto label_13e5c4;
        case 0x13e5c8u: goto label_13e5c8;
        case 0x13e5ccu: goto label_13e5cc;
        default: break;
    }

    ctx->pc = 0x13e210u;

label_13e210:
    // 0x13e210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_13e214:
    // 0x13e214: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13e214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_13e218:
    // 0x13e218: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13e218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13e21c:
    // 0x13e21c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13e220:
    // 0x13e220: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13e220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_13e224:
    // 0x13e224: 0x3e00008  jr          $ra
label_13e228:
    if (ctx->pc == 0x13E228u) {
        ctx->pc = 0x13E22Cu;
        goto label_13e22c;
    }
    ctx->pc = 0x13E224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E22Cu;
label_13e22c:
    // 0x13e22c: 0x0  nop
    ctx->pc = 0x13e22cu;
    // NOP
label_13e230:
    // 0x13e230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_13e234:
    // 0x13e234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13e234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13e238:
    // 0x13e238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13e23c:
    // 0x13e23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13e240:
    // 0x13e240: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13e240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_13e244:
    // 0x13e244: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e248:
    // 0x13e248: 0xc08ec5c  jal         func_23B170
label_13e24c:
    if (ctx->pc == 0x13E24Cu) {
        ctx->pc = 0x13E250u;
        goto label_13e250;
    }
    ctx->pc = 0x13E248u;
    SET_GPR_U32(ctx, 31, 0x13E250u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x13E248u, 0x13E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E250u;
label_13e250:
    // 0x13e250: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e254:
    // 0x13e254: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e258:
    // 0x13e258: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x13e258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_13e25c:
    // 0x13e25c: 0xc04f884  jal         func_13E210
label_13e260:
    if (ctx->pc == 0x13E260u) {
        ctx->pc = 0x13E264u;
        goto label_13e264;
    }
    ctx->pc = 0x13E25Cu;
    SET_GPR_U32(ctx, 31, 0x13E264u);
    ctx->pc = 0x13E210u;
    goto label_13e210;
    ctx->pc = 0x13E264u;
label_13e264:
    // 0x13e264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13e264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e268:
    // 0x13e268: 0xc0412dc  jal         func_104B70
label_13e26c:
    if (ctx->pc == 0x13E26Cu) {
        ctx->pc = 0x13E270u;
        goto label_13e270;
    }
    ctx->pc = 0x13E268u;
    SET_GPR_U32(ctx, 31, 0x13E270u);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x13E268u, 0x13E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E270u;
label_13e270:
    // 0x13e270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13e270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e274:
    // 0x13e274: 0xc090590  jal         func_241640
label_13e278:
    if (ctx->pc == 0x13E278u) {
        ctx->pc = 0x13E27Cu;
        goto label_13e27c;
    }
    ctx->pc = 0x13E274u;
    SET_GPR_U32(ctx, 31, 0x13E27Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x13E274u, 0x13E27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E27Cu;
label_13e27c:
    // 0x13e27c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e280:
    // 0x13e280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13e280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e284:
    // 0x13e284: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x13e284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_13e288:
    // 0x13e288: 0xc0916c4  jal         func_245B10
label_13e28c:
    if (ctx->pc == 0x13E28Cu) {
        ctx->pc = 0x13E290u;
        goto label_13e290;
    }
    ctx->pc = 0x13E288u;
    SET_GPR_U32(ctx, 31, 0x13E290u);
    ctx->pc = 0x245B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B10u, 0x13E288u, 0x13E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E290u;
label_13e290:
    // 0x13e290: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e294:
    // 0x13e294: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13e294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13e298:
    // 0x13e298: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e29c:
    // 0x13e29c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x13e29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_13e2a0:
    // 0x13e2a0: 0x320f809  jalr        $t9
label_13e2a4:
    if (ctx->pc == 0x13E2A4u) {
        ctx->pc = 0x13E2A8u;
        goto label_13e2a8;
    }
    ctx->pc = 0x13E2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E2A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E2A0u, 0x13E2A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E2A8u;
label_13e2a8:
    // 0x13e2a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e2ac:
    // 0x13e2ac: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e2b0:
    // 0x13e2b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e2b4:
    // 0x13e2b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e2b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e2b8:
    // 0x13e2b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e2bc:
    // 0x13e2bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e2c0:
    // 0x13e2c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e2c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e2c4:
    // 0x13e2c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e2c8:
    // 0x13e2c8: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x13e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_13e2cc:
    // 0x13e2cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e2ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e2d0:
    // 0x13e2d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x13e2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_13e2d4:
    // 0x13e2d4: 0x320f809  jalr        $t9
label_13e2d8:
    if (ctx->pc == 0x13E2D8u) {
        ctx->pc = 0x13E2DCu;
        goto label_13e2dc;
    }
    ctx->pc = 0x13E2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E2DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E2D4u, 0x13E2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E2DCu;
label_13e2dc:
    // 0x13e2dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e2e0:
    // 0x13e2e0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e2e4:
    // 0x13e2e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e2e8:
    // 0x13e2e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e2ec:
    // 0x13e2ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e2f0:
    // 0x13e2f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e2f4:
    // 0x13e2f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e2f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e2f8:
    // 0x13e2f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e2fc:
    // 0x13e2fc: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x13e2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13e300:
    // 0x13e300: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e304:
    // 0x13e304: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x13e304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_13e308:
    // 0x13e308: 0x320f809  jalr        $t9
label_13e30c:
    if (ctx->pc == 0x13E30Cu) {
        ctx->pc = 0x13E310u;
        goto label_13e310;
    }
    ctx->pc = 0x13E308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E310u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E308u, 0x13E310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E310u;
label_13e310:
    // 0x13e310: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e314:
    // 0x13e314: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e318:
    // 0x13e318: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e31c:
    // 0x13e31c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e320:
    // 0x13e320: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e324:
    // 0x13e324: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e328:
    // 0x13e328: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e328u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e32c:
    // 0x13e32c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e330:
    // 0x13e330: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13e330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13e334:
    // 0x13e334: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e338:
    // 0x13e338: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x13e338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_13e33c:
    // 0x13e33c: 0x320f809  jalr        $t9
label_13e340:
    if (ctx->pc == 0x13E340u) {
        ctx->pc = 0x13E344u;
        goto label_13e344;
    }
    ctx->pc = 0x13E33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E344u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E33Cu, 0x13E344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E344u;
label_13e344:
    // 0x13e344: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e348:
    // 0x13e348: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e34c:
    // 0x13e34c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e350:
    // 0x13e350: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e354:
    // 0x13e354: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e358:
    // 0x13e358: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e35c:
    // 0x13e35c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e35cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e360:
    // 0x13e360: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13e360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e364:
    // 0x13e364: 0x10000017  b           . + 4 + (0x17 << 2)
label_13e368:
    if (ctx->pc == 0x13E368u) {
        ctx->pc = 0x13E36Cu;
        goto label_13e36c;
    }
    ctx->pc = 0x13E364u;
    {
        const bool branch_taken_0x13e364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e364) {
            ctx->pc = 0x13E3C4u;
            goto label_13e3c4;
        }
    }
    ctx->pc = 0x13E36Cu;
label_13e36c:
    // 0x13e36c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e370:
    // 0x13e370: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e374:
    // 0x13e374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e378:
    // 0x13e378: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x13e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13e37c:
    // 0x13e37c: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
label_13e380:
    if (ctx->pc == 0x13E380u) {
        ctx->pc = 0x13E384u;
        goto label_13e384;
    }
    ctx->pc = 0x13E37Cu;
    {
        const bool branch_taken_0x13e37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e37c) {
            ctx->pc = 0x13E3C0u;
            goto label_13e3c0;
        }
    }
    ctx->pc = 0x13E384u;
label_13e384:
    // 0x13e384: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e388:
    // 0x13e388: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13e388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e38c:
    // 0x13e38c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e390:
    // 0x13e390: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13e394:
    // 0x13e394: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e398:
    // 0x13e398: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x13e398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_13e39c:
    // 0x13e39c: 0x320f809  jalr        $t9
label_13e3a0:
    if (ctx->pc == 0x13E3A0u) {
        ctx->pc = 0x13E3A4u;
        goto label_13e3a4;
    }
    ctx->pc = 0x13E39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E3A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E39Cu, 0x13E3A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E3A4u;
label_13e3a4:
    // 0x13e3a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e3a8:
    // 0x13e3a8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e3ac:
    // 0x13e3ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e3b0:
    // 0x13e3b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e3b4:
    // 0x13e3b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e3b8:
    // 0x13e3b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e3bc:
    // 0x13e3bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e3bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e3c0:
    // 0x13e3c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13e3c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13e3c4:
    // 0x13e3c4: 0x2e22000b  sltiu       $v0, $s1, 0xB
    ctx->pc = 0x13e3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_13e3c8:
    // 0x13e3c8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_13e3cc:
    if (ctx->pc == 0x13E3CCu) {
        ctx->pc = 0x13E3D0u;
        goto label_13e3d0;
    }
    ctx->pc = 0x13E3C8u;
    {
        const bool branch_taken_0x13e3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e3c8) {
            ctx->pc = 0x13E36Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e36c;
        }
    }
    ctx->pc = 0x13E3D0u;
label_13e3d0:
    // 0x13e3d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e3d4:
    // 0x13e3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e3d8:
    // 0x13e3d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13e3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e3dc:
    // 0x13e3dc: 0xc04fbf8  jal         func_13EFE0
label_13e3e0:
    if (ctx->pc == 0x13E3E0u) {
        ctx->pc = 0x13E3E4u;
        goto label_13e3e4;
    }
    ctx->pc = 0x13E3DCu;
    SET_GPR_U32(ctx, 31, 0x13E3E4u);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x13E3DCu, 0x13E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E3E4u;
label_13e3e4:
    // 0x13e3e4: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x13e3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e3e8:
    // 0x13e3e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e3ec:
    // 0x13e3ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_13e3f0:
    if (ctx->pc == 0x13E3F0u) {
        ctx->pc = 0x13E3F4u;
        goto label_13e3f4;
    }
    ctx->pc = 0x13E3ECu;
    {
        const bool branch_taken_0x13e3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13e3ec) {
            ctx->pc = 0x13E400u;
            goto label_13e400;
        }
    }
    ctx->pc = 0x13E3F4u;
label_13e3f4:
    // 0x13e3f4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13e3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13e3f8:
    // 0x13e3f8: 0xc04fa1c  jal         func_13E870
label_13e3fc:
    if (ctx->pc == 0x13E3FCu) {
        ctx->pc = 0x13E400u;
        goto label_13e400;
    }
    ctx->pc = 0x13E3F8u;
    SET_GPR_U32(ctx, 31, 0x13E400u);
    ctx->pc = 0x13E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E870u, 0x13E3F8u, 0x13E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E400u;
label_13e400:
    // 0x13e400: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e404:
    // 0x13e404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13e404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13e408:
    // 0x13e408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e40c:
    // 0x13e40c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e410:
    // 0x13e410: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13e414:
    // 0x13e414: 0x3e00008  jr          $ra
label_13e418:
    if (ctx->pc == 0x13E418u) {
        ctx->pc = 0x13E41Cu;
        goto label_13e41c;
    }
    ctx->pc = 0x13E414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E41Cu;
label_13e41c:
    // 0x13e41c: 0x0  nop
    ctx->pc = 0x13e41cu;
    // NOP
label_13e420:
    // 0x13e420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13e420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13e424:
    // 0x13e424: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13e424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13e428:
    // 0x13e428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13e42c:
    // 0x13e42c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13e430:
    // 0x13e430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13e434:
    // 0x13e434: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13e434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_13e438:
    // 0x13e438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e43c:
    // 0x13e43c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e43cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e440:
    // 0x13e440: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13e440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13e444:
    // 0x13e444: 0x8c44005c  lw          $a0, 0x5C($v0)
    ctx->pc = 0x13e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_13e448:
    // 0x13e448: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e44c:
    // 0x13e44c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13e44cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13e450:
    // 0x13e450: 0x320f809  jalr        $t9
label_13e454:
    if (ctx->pc == 0x13E454u) {
        ctx->pc = 0x13E458u;
        goto label_13e458;
    }
    ctx->pc = 0x13E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E458u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E450u, 0x13E458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E458u;
label_13e458:
    // 0x13e458: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e45c:
    // 0x13e45c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e460:
    // 0x13e460: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e464:
    // 0x13e464: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e468:
    // 0x13e468: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e46c:
    // 0x13e46c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e470:
    // 0x13e470: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e470u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e474:
    // 0x13e474: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13e478:
    // 0x13e478: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x13e478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_13e47c:
    // 0x13e47c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e480:
    // 0x13e480: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13e480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13e484:
    // 0x13e484: 0x320f809  jalr        $t9
label_13e488:
    if (ctx->pc == 0x13E488u) {
        ctx->pc = 0x13E48Cu;
        goto label_13e48c;
    }
    ctx->pc = 0x13E484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E48Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E484u, 0x13E48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E48Cu;
label_13e48c:
    // 0x13e48c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e490:
    // 0x13e490: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e494:
    // 0x13e494: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e498:
    // 0x13e498: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e49c:
    // 0x13e49c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e4a0:
    // 0x13e4a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e4a4:
    // 0x13e4a4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e4a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e4a8:
    // 0x13e4a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13e4ac:
    // 0x13e4ac: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x13e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_13e4b0:
    // 0x13e4b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e4b4:
    // 0x13e4b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13e4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13e4b8:
    // 0x13e4b8: 0x320f809  jalr        $t9
label_13e4bc:
    if (ctx->pc == 0x13E4BCu) {
        ctx->pc = 0x13E4C0u;
        goto label_13e4c0;
    }
    ctx->pc = 0x13E4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E4C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E4B8u, 0x13E4C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E4C0u;
label_13e4c0:
    // 0x13e4c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e4c4:
    // 0x13e4c4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e4c8:
    // 0x13e4c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e4cc:
    // 0x13e4cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e4d0:
    // 0x13e4d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e4d4:
    // 0x13e4d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e4d8:
    // 0x13e4d8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e4d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e4dc:
    // 0x13e4dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13e4e0:
    // 0x13e4e0: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x13e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_13e4e4:
    // 0x13e4e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e4e8:
    // 0x13e4e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13e4e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13e4ec:
    // 0x13e4ec: 0x320f809  jalr        $t9
label_13e4f0:
    if (ctx->pc == 0x13E4F0u) {
        ctx->pc = 0x13E4F4u;
        goto label_13e4f4;
    }
    ctx->pc = 0x13E4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E4F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E4ECu, 0x13E4F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E4F4u;
label_13e4f4:
    // 0x13e4f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e4f8:
    // 0x13e4f8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e4fc:
    // 0x13e4fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e500:
    // 0x13e500: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e504:
    // 0x13e504: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e508:
    // 0x13e508: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e50c:
    // 0x13e50c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e50cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e510:
    // 0x13e510: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13e510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e514:
    // 0x13e514: 0x10000017  b           . + 4 + (0x17 << 2)
label_13e518:
    if (ctx->pc == 0x13E518u) {
        ctx->pc = 0x13E51Cu;
        goto label_13e51c;
    }
    ctx->pc = 0x13E514u;
    {
        const bool branch_taken_0x13e514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e514) {
            ctx->pc = 0x13E574u;
            goto label_13e574;
        }
    }
    ctx->pc = 0x13E51Cu;
label_13e51c:
    // 0x13e51c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e520:
    // 0x13e520: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13e520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13e524:
    // 0x13e524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e528:
    // 0x13e528: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x13e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13e52c:
    // 0x13e52c: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
label_13e530:
    if (ctx->pc == 0x13E530u) {
        ctx->pc = 0x13E534u;
        goto label_13e534;
    }
    ctx->pc = 0x13E52Cu;
    {
        const bool branch_taken_0x13e52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x13e52c) {
            ctx->pc = 0x13E570u;
            goto label_13e570;
        }
    }
    ctx->pc = 0x13E534u;
label_13e534:
    // 0x13e534: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13e534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13e538:
    // 0x13e538: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13e53c:
    // 0x13e53c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13e540:
    // 0x13e540: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x13e540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_13e544:
    // 0x13e544: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13e544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13e548:
    // 0x13e548: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x13e548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_13e54c:
    // 0x13e54c: 0x320f809  jalr        $t9
label_13e550:
    if (ctx->pc == 0x13E550u) {
        ctx->pc = 0x13E554u;
        goto label_13e554;
    }
    ctx->pc = 0x13E54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13E554u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E54Cu, 0x13E554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E554u;
label_13e554:
    // 0x13e554: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13e554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e558:
    // 0x13e558: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x13e558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_13e55c:
    // 0x13e55c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13e55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_13e560:
    // 0x13e560: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13e560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13e564:
    // 0x13e564: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e568:
    // 0x13e568: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13e568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_13e56c:
    // 0x13e56c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13e56cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e570:
    // 0x13e570: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13e570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13e574:
    // 0x13e574: 0x2e22000b  sltiu       $v0, $s1, 0xB
    ctx->pc = 0x13e574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_13e578:
    // 0x13e578: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_13e57c:
    if (ctx->pc == 0x13E57Cu) {
        ctx->pc = 0x13E580u;
        goto label_13e580;
    }
    ctx->pc = 0x13E578u;
    {
        const bool branch_taken_0x13e578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e578) {
            ctx->pc = 0x13E51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e51c;
        }
    }
    ctx->pc = 0x13E580u;
label_13e580:
    // 0x13e580: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13e580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13e584:
    // 0x13e584: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_13e588:
    if (ctx->pc == 0x13E588u) {
        ctx->pc = 0x13E58Cu;
        goto label_13e58c;
    }
    ctx->pc = 0x13E584u;
    {
        const bool branch_taken_0x13e584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e584) {
            ctx->pc = 0x13E5A8u;
            goto label_13e5a8;
        }
    }
    ctx->pc = 0x13E58Cu;
label_13e58c:
    // 0x13e58c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13e590:
    // 0x13e590: 0xc08ec70  jal         func_23B1C0
label_13e594:
    if (ctx->pc == 0x13E594u) {
        ctx->pc = 0x13E598u;
        goto label_13e598;
    }
    ctx->pc = 0x13E590u;
    SET_GPR_U32(ctx, 31, 0x13E598u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x13E590u, 0x13E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E598u;
label_13e598:
    // 0x13e598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_13e59c:
    if (ctx->pc == 0x13E59Cu) {
        ctx->pc = 0x13E5A0u;
        goto label_13e5a0;
    }
    ctx->pc = 0x13E598u;
    {
        const bool branch_taken_0x13e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e598) {
            ctx->pc = 0x13E5A8u;
            goto label_13e5a8;
        }
    }
    ctx->pc = 0x13E5A0u;
label_13e5a0:
    // 0x13e5a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13e5a4:
    // 0x13e5a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x13e5a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13e5a8:
    // 0x13e5a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13e5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13e5ac:
    // 0x13e5ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13e5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13e5b0:
    // 0x13e5b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13e5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13e5b4:
    // 0x13e5b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e5b8:
    // 0x13e5b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e5b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13e5bc:
    // 0x13e5bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13e5bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13e5c0:
    // 0x13e5c0: 0x3e00008  jr          $ra
label_13e5c4:
    if (ctx->pc == 0x13E5C4u) {
        ctx->pc = 0x13E5C8u;
        goto label_13e5c8;
    }
    ctx->pc = 0x13E5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E5C8u;
label_13e5c8:
    // 0x13e5c8: 0x0  nop
    ctx->pc = 0x13e5c8u;
    // NOP
label_13e5cc:
    // 0x13e5cc: 0x0  nop
    ctx->pc = 0x13e5ccu;
    // NOP
    ctx->pc = 0x13e5d0u;
}
