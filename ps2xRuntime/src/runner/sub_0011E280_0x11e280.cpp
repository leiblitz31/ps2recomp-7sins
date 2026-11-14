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

// Function: sub_0011E280
// Address: 0x11e280 - 0x11e5c0
void sub_0011E280_0x11e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E280_0x11e280");
#endif

    switch (ctx->pc) {
        case 0x11e280u: goto label_11e280;
        case 0x11e284u: goto label_11e284;
        case 0x11e288u: goto label_11e288;
        case 0x11e28cu: goto label_11e28c;
        case 0x11e290u: goto label_11e290;
        case 0x11e294u: goto label_11e294;
        case 0x11e298u: goto label_11e298;
        case 0x11e29cu: goto label_11e29c;
        case 0x11e2a0u: goto label_11e2a0;
        case 0x11e2a4u: goto label_11e2a4;
        case 0x11e2a8u: goto label_11e2a8;
        case 0x11e2acu: goto label_11e2ac;
        case 0x11e2b0u: goto label_11e2b0;
        case 0x11e2b4u: goto label_11e2b4;
        case 0x11e2b8u: goto label_11e2b8;
        case 0x11e2bcu: goto label_11e2bc;
        case 0x11e2c0u: goto label_11e2c0;
        case 0x11e2c4u: goto label_11e2c4;
        case 0x11e2c8u: goto label_11e2c8;
        case 0x11e2ccu: goto label_11e2cc;
        case 0x11e2d0u: goto label_11e2d0;
        case 0x11e2d4u: goto label_11e2d4;
        case 0x11e2d8u: goto label_11e2d8;
        case 0x11e2dcu: goto label_11e2dc;
        case 0x11e2e0u: goto label_11e2e0;
        case 0x11e2e4u: goto label_11e2e4;
        case 0x11e2e8u: goto label_11e2e8;
        case 0x11e2ecu: goto label_11e2ec;
        case 0x11e2f0u: goto label_11e2f0;
        case 0x11e2f4u: goto label_11e2f4;
        case 0x11e2f8u: goto label_11e2f8;
        case 0x11e2fcu: goto label_11e2fc;
        case 0x11e300u: goto label_11e300;
        case 0x11e304u: goto label_11e304;
        case 0x11e308u: goto label_11e308;
        case 0x11e30cu: goto label_11e30c;
        case 0x11e310u: goto label_11e310;
        case 0x11e314u: goto label_11e314;
        case 0x11e318u: goto label_11e318;
        case 0x11e31cu: goto label_11e31c;
        case 0x11e320u: goto label_11e320;
        case 0x11e324u: goto label_11e324;
        case 0x11e328u: goto label_11e328;
        case 0x11e32cu: goto label_11e32c;
        case 0x11e330u: goto label_11e330;
        case 0x11e334u: goto label_11e334;
        case 0x11e338u: goto label_11e338;
        case 0x11e33cu: goto label_11e33c;
        case 0x11e340u: goto label_11e340;
        case 0x11e344u: goto label_11e344;
        case 0x11e348u: goto label_11e348;
        case 0x11e34cu: goto label_11e34c;
        case 0x11e350u: goto label_11e350;
        case 0x11e354u: goto label_11e354;
        case 0x11e358u: goto label_11e358;
        case 0x11e35cu: goto label_11e35c;
        case 0x11e360u: goto label_11e360;
        case 0x11e364u: goto label_11e364;
        case 0x11e368u: goto label_11e368;
        case 0x11e36cu: goto label_11e36c;
        case 0x11e370u: goto label_11e370;
        case 0x11e374u: goto label_11e374;
        case 0x11e378u: goto label_11e378;
        case 0x11e37cu: goto label_11e37c;
        case 0x11e380u: goto label_11e380;
        case 0x11e384u: goto label_11e384;
        case 0x11e388u: goto label_11e388;
        case 0x11e38cu: goto label_11e38c;
        case 0x11e390u: goto label_11e390;
        case 0x11e394u: goto label_11e394;
        case 0x11e398u: goto label_11e398;
        case 0x11e39cu: goto label_11e39c;
        case 0x11e3a0u: goto label_11e3a0;
        case 0x11e3a4u: goto label_11e3a4;
        case 0x11e3a8u: goto label_11e3a8;
        case 0x11e3acu: goto label_11e3ac;
        case 0x11e3b0u: goto label_11e3b0;
        case 0x11e3b4u: goto label_11e3b4;
        case 0x11e3b8u: goto label_11e3b8;
        case 0x11e3bcu: goto label_11e3bc;
        case 0x11e3c0u: goto label_11e3c0;
        case 0x11e3c4u: goto label_11e3c4;
        case 0x11e3c8u: goto label_11e3c8;
        case 0x11e3ccu: goto label_11e3cc;
        case 0x11e3d0u: goto label_11e3d0;
        case 0x11e3d4u: goto label_11e3d4;
        case 0x11e3d8u: goto label_11e3d8;
        case 0x11e3dcu: goto label_11e3dc;
        case 0x11e3e0u: goto label_11e3e0;
        case 0x11e3e4u: goto label_11e3e4;
        case 0x11e3e8u: goto label_11e3e8;
        case 0x11e3ecu: goto label_11e3ec;
        case 0x11e3f0u: goto label_11e3f0;
        case 0x11e3f4u: goto label_11e3f4;
        case 0x11e3f8u: goto label_11e3f8;
        case 0x11e3fcu: goto label_11e3fc;
        case 0x11e400u: goto label_11e400;
        case 0x11e404u: goto label_11e404;
        case 0x11e408u: goto label_11e408;
        case 0x11e40cu: goto label_11e40c;
        case 0x11e410u: goto label_11e410;
        case 0x11e414u: goto label_11e414;
        case 0x11e418u: goto label_11e418;
        case 0x11e41cu: goto label_11e41c;
        case 0x11e420u: goto label_11e420;
        case 0x11e424u: goto label_11e424;
        case 0x11e428u: goto label_11e428;
        case 0x11e42cu: goto label_11e42c;
        case 0x11e430u: goto label_11e430;
        case 0x11e434u: goto label_11e434;
        case 0x11e438u: goto label_11e438;
        case 0x11e43cu: goto label_11e43c;
        case 0x11e440u: goto label_11e440;
        case 0x11e444u: goto label_11e444;
        case 0x11e448u: goto label_11e448;
        case 0x11e44cu: goto label_11e44c;
        case 0x11e450u: goto label_11e450;
        case 0x11e454u: goto label_11e454;
        case 0x11e458u: goto label_11e458;
        case 0x11e45cu: goto label_11e45c;
        case 0x11e460u: goto label_11e460;
        case 0x11e464u: goto label_11e464;
        case 0x11e468u: goto label_11e468;
        case 0x11e46cu: goto label_11e46c;
        case 0x11e470u: goto label_11e470;
        case 0x11e474u: goto label_11e474;
        case 0x11e478u: goto label_11e478;
        case 0x11e47cu: goto label_11e47c;
        case 0x11e480u: goto label_11e480;
        case 0x11e484u: goto label_11e484;
        case 0x11e488u: goto label_11e488;
        case 0x11e48cu: goto label_11e48c;
        case 0x11e490u: goto label_11e490;
        case 0x11e494u: goto label_11e494;
        case 0x11e498u: goto label_11e498;
        case 0x11e49cu: goto label_11e49c;
        case 0x11e4a0u: goto label_11e4a0;
        case 0x11e4a4u: goto label_11e4a4;
        case 0x11e4a8u: goto label_11e4a8;
        case 0x11e4acu: goto label_11e4ac;
        case 0x11e4b0u: goto label_11e4b0;
        case 0x11e4b4u: goto label_11e4b4;
        case 0x11e4b8u: goto label_11e4b8;
        case 0x11e4bcu: goto label_11e4bc;
        case 0x11e4c0u: goto label_11e4c0;
        case 0x11e4c4u: goto label_11e4c4;
        case 0x11e4c8u: goto label_11e4c8;
        case 0x11e4ccu: goto label_11e4cc;
        case 0x11e4d0u: goto label_11e4d0;
        case 0x11e4d4u: goto label_11e4d4;
        case 0x11e4d8u: goto label_11e4d8;
        case 0x11e4dcu: goto label_11e4dc;
        case 0x11e4e0u: goto label_11e4e0;
        case 0x11e4e4u: goto label_11e4e4;
        case 0x11e4e8u: goto label_11e4e8;
        case 0x11e4ecu: goto label_11e4ec;
        case 0x11e4f0u: goto label_11e4f0;
        case 0x11e4f4u: goto label_11e4f4;
        case 0x11e4f8u: goto label_11e4f8;
        case 0x11e4fcu: goto label_11e4fc;
        case 0x11e500u: goto label_11e500;
        case 0x11e504u: goto label_11e504;
        case 0x11e508u: goto label_11e508;
        case 0x11e50cu: goto label_11e50c;
        case 0x11e510u: goto label_11e510;
        case 0x11e514u: goto label_11e514;
        case 0x11e518u: goto label_11e518;
        case 0x11e51cu: goto label_11e51c;
        case 0x11e520u: goto label_11e520;
        case 0x11e524u: goto label_11e524;
        case 0x11e528u: goto label_11e528;
        case 0x11e52cu: goto label_11e52c;
        case 0x11e530u: goto label_11e530;
        case 0x11e534u: goto label_11e534;
        case 0x11e538u: goto label_11e538;
        case 0x11e53cu: goto label_11e53c;
        case 0x11e540u: goto label_11e540;
        case 0x11e544u: goto label_11e544;
        case 0x11e548u: goto label_11e548;
        case 0x11e54cu: goto label_11e54c;
        case 0x11e550u: goto label_11e550;
        case 0x11e554u: goto label_11e554;
        case 0x11e558u: goto label_11e558;
        case 0x11e55cu: goto label_11e55c;
        case 0x11e560u: goto label_11e560;
        case 0x11e564u: goto label_11e564;
        case 0x11e568u: goto label_11e568;
        case 0x11e56cu: goto label_11e56c;
        case 0x11e570u: goto label_11e570;
        case 0x11e574u: goto label_11e574;
        case 0x11e578u: goto label_11e578;
        case 0x11e57cu: goto label_11e57c;
        case 0x11e580u: goto label_11e580;
        case 0x11e584u: goto label_11e584;
        case 0x11e588u: goto label_11e588;
        case 0x11e58cu: goto label_11e58c;
        case 0x11e590u: goto label_11e590;
        case 0x11e594u: goto label_11e594;
        case 0x11e598u: goto label_11e598;
        case 0x11e59cu: goto label_11e59c;
        case 0x11e5a0u: goto label_11e5a0;
        case 0x11e5a4u: goto label_11e5a4;
        case 0x11e5a8u: goto label_11e5a8;
        case 0x11e5acu: goto label_11e5ac;
        case 0x11e5b0u: goto label_11e5b0;
        case 0x11e5b4u: goto label_11e5b4;
        case 0x11e5b8u: goto label_11e5b8;
        case 0x11e5bcu: goto label_11e5bc;
        default: break;
    }

    ctx->pc = 0x11e280u;

label_11e280:
    // 0x11e280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11e284:
    // 0x11e284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11e288:
    // 0x11e288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11e288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_11e28c:
    // 0x11e28c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e290:
    // 0x11e290: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x11e290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_11e294:
    // 0x11e294: 0xc047074  jal         func_11C1D0
label_11e298:
    if (ctx->pc == 0x11E298u) {
        ctx->pc = 0x11E29Cu;
        goto label_11e29c;
    }
    ctx->pc = 0x11E294u;
    SET_GPR_U32(ctx, 31, 0x11E29Cu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x11E294u, 0x11E29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E29Cu;
label_11e29c:
    // 0x11e29c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_11e2a0:
    // 0x11e2a0: 0x246334d0  addiu       $v1, $v1, 0x34D0
    ctx->pc = 0x11e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13520));
label_11e2a4:
    // 0x11e2a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e2a8:
    // 0x11e2a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_11e2ac:
    // 0x11e2ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e2b0:
    // 0x11e2b0: 0xa040003c  sb          $zero, 0x3C($v0)
    ctx->pc = 0x11e2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 60), (uint8_t)GPR_U32(ctx, 0));
label_11e2b4:
    // 0x11e2b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e2b8:
    // 0x11e2b8: 0xa040003d  sb          $zero, 0x3D($v0)
    ctx->pc = 0x11e2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 0));
label_11e2bc:
    // 0x11e2bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e2c0:
    // 0x11e2c0: 0xa040003e  sb          $zero, 0x3E($v0)
    ctx->pc = 0x11e2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 62), (uint8_t)GPR_U32(ctx, 0));
label_11e2c4:
    // 0x11e2c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e2c8:
    // 0x11e2c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11e2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11e2cc:
    // 0x11e2cc: 0x24a51df8  addiu       $a1, $a1, 0x1DF8
    ctx->pc = 0x11e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7672));
label_11e2d0:
    // 0x11e2d0: 0xc04322c  jal         func_10C8B0
label_11e2d4:
    if (ctx->pc == 0x11E2D4u) {
        ctx->pc = 0x11E2D8u;
        goto label_11e2d8;
    }
    ctx->pc = 0x11E2D0u;
    SET_GPR_U32(ctx, 31, 0x11E2D8u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x11E2D0u, 0x11E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E2D8u;
label_11e2d8:
    // 0x11e2d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_11e2dc:
    // 0x11e2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11e2e0:
    // 0x11e2e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_11e2e4:
    // 0x11e2e4: 0x3e00008  jr          $ra
label_11e2e8:
    if (ctx->pc == 0x11E2E8u) {
        ctx->pc = 0x11E2ECu;
        goto label_11e2ec;
    }
    ctx->pc = 0x11E2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E2ECu;
label_11e2ec:
    // 0x11e2ec: 0x0  nop
    ctx->pc = 0x11e2ecu;
    // NOP
label_11e2f0:
    // 0x11e2f0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x11e2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_11e2f4:
    // 0x11e2f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11e2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11e2f8:
    // 0x11e2f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x11e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_11e2fc:
    // 0x11e2fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_11e300:
    // 0x11e300: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11e300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_11e304:
    // 0x11e304: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_11e308:
    // 0x11e308: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11e308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11e30c:
    // 0x11e30c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11e310:
    // 0x11e310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11e310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_11e314:
    // 0x11e314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11e314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_11e318:
    // 0x11e318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11e318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11e31c:
    // 0x11e31c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x11e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_11e320:
    // 0x11e320: 0xa3a500c0  sb          $a1, 0xC0($sp)
    ctx->pc = 0x11e320u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 5));
label_11e324:
    // 0x11e324: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x11e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11e328:
    // 0x11e328: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11e328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11e32c:
    // 0x11e32c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11e32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11e330:
    // 0x11e330: 0x24a51e08  addiu       $a1, $a1, 0x1E08
    ctx->pc = 0x11e330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7688));
label_11e334:
    // 0x11e334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e338:
    // 0x11e338: 0xc047970  jal         func_11E5C0
label_11e33c:
    if (ctx->pc == 0x11E33Cu) {
        ctx->pc = 0x11E340u;
        goto label_11e340;
    }
    ctx->pc = 0x11E338u;
    SET_GPR_U32(ctx, 31, 0x11E340u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x11E338u, 0x11E340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E340u;
label_11e340:
    // 0x11e340: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11e340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e344:
    // 0x11e344: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x11e344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11e348:
    // 0x11e348: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x11e348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_11e34c:
    // 0x11e34c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_11e350:
    // 0x11e350: 0x24a51e18  addiu       $a1, $a1, 0x1E18
    ctx->pc = 0x11e350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7704));
label_11e354:
    // 0x11e354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e358:
    // 0x11e358: 0xc047970  jal         func_11E5C0
label_11e35c:
    if (ctx->pc == 0x11E35Cu) {
        ctx->pc = 0x11E360u;
        goto label_11e360;
    }
    ctx->pc = 0x11E358u;
    SET_GPR_U32(ctx, 31, 0x11E360u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x11E358u, 0x11E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E360u;
label_11e360:
    // 0x11e360: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x11e360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_11e364:
    // 0x11e364: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x11e364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11e368:
    // 0x11e368: 0x93a500c0  lbu         $a1, 0xC0($sp)
    ctx->pc = 0x11e368u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_11e36c:
    // 0x11e36c: 0xc08edb0  jal         func_23B6C0
label_11e370:
    if (ctx->pc == 0x11E370u) {
        ctx->pc = 0x11E374u;
        goto label_11e374;
    }
    ctx->pc = 0x11E36Cu;
    SET_GPR_U32(ctx, 31, 0x11E374u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x11E36Cu, 0x11E374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E374u;
label_11e374:
    // 0x11e374: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e378:
    // 0x11e378: 0xc08e054  jal         func_238150
label_11e37c:
    if (ctx->pc == 0x11E37Cu) {
        ctx->pc = 0x11E380u;
        goto label_11e380;
    }
    ctx->pc = 0x11E378u;
    SET_GPR_U32(ctx, 31, 0x11E380u);
    ctx->pc = 0x238150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238150u, 0x11E378u, 0x11E380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E380u;
label_11e380:
    // 0x11e380: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11e380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11e384:
    // 0x11e384: 0xc050b24  jal         func_142C90
label_11e388:
    if (ctx->pc == 0x11E388u) {
        ctx->pc = 0x11E38Cu;
        goto label_11e38c;
    }
    ctx->pc = 0x11E384u;
    SET_GPR_U32(ctx, 31, 0x11E38Cu);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x11E384u, 0x11E38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E38Cu;
label_11e38c:
    // 0x11e38c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11e38cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e390:
    // 0x11e390: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11e394:
    // 0x11e394: 0xc050c5c  jal         func_143170
label_11e398:
    if (ctx->pc == 0x11E398u) {
        ctx->pc = 0x11E39Cu;
        goto label_11e39c;
    }
    ctx->pc = 0x11E394u;
    SET_GPR_U32(ctx, 31, 0x11E39Cu);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x11E394u, 0x11E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E39Cu;
label_11e39c:
    // 0x11e39c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11e39cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e3a0:
    // 0x11e3a0: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x11e3a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_11e3a4:
    // 0x11e3a4: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
label_11e3a8:
    if (ctx->pc == 0x11E3A8u) {
        ctx->pc = 0x11E3ACu;
        goto label_11e3ac;
    }
    ctx->pc = 0x11E3A4u;
    {
        const bool branch_taken_0x11e3a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e3a4) {
            ctx->pc = 0x11E57Cu;
            goto label_11e57c;
        }
    }
    ctx->pc = 0x11E3ACu;
label_11e3ac:
    // 0x11e3ac: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x11e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_11e3b0:
    // 0x11e3b0: 0x24847ed0  addiu       $a0, $a0, 0x7ED0
    ctx->pc = 0x11e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32464));
label_11e3b4:
    // 0x11e3b4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x11e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_11e3b8:
    // 0x11e3b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11e3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_11e3bc:
    // 0x11e3bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11e3c0:
    // 0x11e3c0: 0x600008  jr          $v1
label_11e3c4:
    if (ctx->pc == 0x11E3C4u) {
        ctx->pc = 0x11E3C8u;
        goto label_11e3c8;
    }
    ctx->pc = 0x11E3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E3C8u: goto label_11e3c8;
            case 0x11E424u: goto label_11e424;
            case 0x11E57Cu: goto label_11e57c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E3C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11E3C8u;
label_11e3c8:
    // 0x11e3c8: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x11e3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_11e3cc:
    // 0x11e3cc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_11e3d0:
    if (ctx->pc == 0x11E3D0u) {
        ctx->pc = 0x11E3D4u;
        goto label_11e3d4;
    }
    ctx->pc = 0x11E3CCu;
    {
        const bool branch_taken_0x11e3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e3cc) {
            ctx->pc = 0x11E424u;
            goto label_11e424;
        }
    }
    ctx->pc = 0x11E3D4u;
label_11e3d4:
    // 0x11e3d4: 0xc05548c  jal         func_155230
label_11e3d8:
    if (ctx->pc == 0x11E3D8u) {
        ctx->pc = 0x11E3DCu;
        goto label_11e3dc;
    }
    ctx->pc = 0x11E3D4u;
    SET_GPR_U32(ctx, 31, 0x11E3DCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x11E3D4u, 0x11E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3DCu;
label_11e3dc:
    // 0x11e3dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e3e0:
    // 0x11e3e0: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x11e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_11e3e4:
    // 0x11e3e4: 0xc0553d4  jal         func_154F50
label_11e3e8:
    if (ctx->pc == 0x11E3E8u) {
        ctx->pc = 0x11E3ECu;
        goto label_11e3ec;
    }
    ctx->pc = 0x11E3E4u;
    SET_GPR_U32(ctx, 31, 0x11E3ECu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11E3E4u, 0x11E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3ECu;
label_11e3ec:
    // 0x11e3ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11e3ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e3f0:
    // 0x11e3f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11e3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11e3f4:
    // 0x11e3f4: 0xc0413bc  jal         func_104EF0
label_11e3f8:
    if (ctx->pc == 0x11E3F8u) {
        ctx->pc = 0x11E3FCu;
        goto label_11e3fc;
    }
    ctx->pc = 0x11E3F4u;
    SET_GPR_U32(ctx, 31, 0x11E3FCu);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x11E3F4u, 0x11E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E3FCu;
label_11e3fc:
    // 0x11e3fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11e3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11e400:
    // 0x11e400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e404:
    // 0x11e404: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_11e408:
    if (ctx->pc == 0x11E408u) {
        ctx->pc = 0x11E40Cu;
        goto label_11e40c;
    }
    ctx->pc = 0x11E404u;
    {
        const bool branch_taken_0x11e404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e404) {
            ctx->pc = 0x11E424u;
            goto label_11e424;
        }
    }
    ctx->pc = 0x11E40Cu;
label_11e40c:
    // 0x11e40c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11e40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11e410:
    // 0x11e410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e414:
    // 0x11e414: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11e414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11e418:
    // 0x11e418: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x11e418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_11e41c:
    // 0x11e41c: 0x320f809  jalr        $t9
label_11e420:
    if (ctx->pc == 0x11E420u) {
        ctx->pc = 0x11E424u;
        goto label_11e424;
    }
    ctx->pc = 0x11E41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11E424u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E41Cu, 0x11E424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E424u;
label_11e424:
    // 0x11e424: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x11e424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_11e428:
    // 0x11e428: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11e428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11e42c:
    // 0x11e42c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e430:
    // 0x11e430: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_11e434:
    if (ctx->pc == 0x11E434u) {
        ctx->pc = 0x11E438u;
        goto label_11e438;
    }
    ctx->pc = 0x11E430u;
    {
        const bool branch_taken_0x11e430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e430) {
            ctx->pc = 0x11E4E8u;
            goto label_11e4e8;
        }
    }
    ctx->pc = 0x11E438u;
label_11e438:
    // 0x11e438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e43c:
    // 0x11e43c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11e43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11e440:
    // 0x11e440: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x11e440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_11e444:
    // 0x11e444: 0x320f809  jalr        $t9
label_11e448:
    if (ctx->pc == 0x11E448u) {
        ctx->pc = 0x11E44Cu;
        goto label_11e44c;
    }
    ctx->pc = 0x11E444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11E44Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E444u, 0x11E44Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E44Cu;
label_11e44c:
    // 0x11e44c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11e44cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e450:
    // 0x11e450: 0x16e0000c  bnez        $s7, . + 4 + (0xC << 2)
label_11e454:
    if (ctx->pc == 0x11E454u) {
        ctx->pc = 0x11E458u;
        goto label_11e458;
    }
    ctx->pc = 0x11E450u;
    {
        const bool branch_taken_0x11e450 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e450) {
            ctx->pc = 0x11E484u;
            goto label_11e484;
        }
    }
    ctx->pc = 0x11E458u;
label_11e458:
    // 0x11e458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e45c:
    // 0x11e45c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x11e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11e460:
    // 0x11e460: 0xa043003d  sb          $v1, 0x3D($v0)
    ctx->pc = 0x11e460u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 3));
label_11e464:
    // 0x11e464: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11e464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11e468:
    // 0x11e468: 0xc050b24  jal         func_142C90
label_11e46c:
    if (ctx->pc == 0x11E46Cu) {
        ctx->pc = 0x11E470u;
        goto label_11e470;
    }
    ctx->pc = 0x11E468u;
    SET_GPR_U32(ctx, 31, 0x11E470u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x11E468u, 0x11E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E470u;
label_11e470:
    // 0x11e470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e474:
    // 0x11e474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e478:
    // 0x11e478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e47c:
    // 0x11e47c: 0xc041484  jal         func_105210
label_11e480:
    if (ctx->pc == 0x11E480u) {
        ctx->pc = 0x11E484u;
        goto label_11e484;
    }
    ctx->pc = 0x11E47Cu;
    SET_GPR_U32(ctx, 31, 0x11E484u);
    ctx->pc = 0x105210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105210u, 0x11E47Cu, 0x11E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E484u;
label_11e484:
    // 0x11e484: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x11e484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11e488:
    // 0x11e488: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x11e488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_11e48c:
    // 0x11e48c: 0xc0553d4  jal         func_154F50
label_11e490:
    if (ctx->pc == 0x11E490u) {
        ctx->pc = 0x11E494u;
        goto label_11e494;
    }
    ctx->pc = 0x11E48Cu;
    SET_GPR_U32(ctx, 31, 0x11E494u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11E48Cu, 0x11E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E494u;
label_11e494:
    // 0x11e494: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11e494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e498:
    // 0x11e498: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11e498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11e49c:
    // 0x11e49c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11e49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e4a0:
    // 0x11e4a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11e4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e4a4:
    // 0x11e4a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11e4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11e4a8:
    // 0x11e4a8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x11e4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_11e4ac:
    // 0x11e4ac: 0x320f809  jalr        $t9
label_11e4b0:
    if (ctx->pc == 0x11E4B0u) {
        ctx->pc = 0x11E4B4u;
        goto label_11e4b4;
    }
    ctx->pc = 0x11E4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11E4B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E4ACu, 0x11E4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E4B4u;
label_11e4b4:
    // 0x11e4b4: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x11e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_11e4b8:
    // 0x11e4b8: 0xc050c64  jal         func_143190
label_11e4bc:
    if (ctx->pc == 0x11E4BCu) {
        ctx->pc = 0x11E4C0u;
        goto label_11e4c0;
    }
    ctx->pc = 0x11E4B8u;
    SET_GPR_U32(ctx, 31, 0x11E4C0u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x11E4B8u, 0x11E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4C0u;
label_11e4c0:
    // 0x11e4c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e4c4:
    // 0x11e4c4: 0xc04738c  jal         func_11CE30
label_11e4c8:
    if (ctx->pc == 0x11E4C8u) {
        ctx->pc = 0x11E4CCu;
        goto label_11e4cc;
    }
    ctx->pc = 0x11E4C4u;
    SET_GPR_U32(ctx, 31, 0x11E4CCu);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x11E4C4u, 0x11E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4CCu;
label_11e4cc:
    // 0x11e4cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11e4ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e4d0:
    // 0x11e4d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11e4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_11e4d4:
    // 0x11e4d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_11e4d8:
    // 0x11e4d8: 0xc04c608  jal         func_131820
label_11e4dc:
    if (ctx->pc == 0x11E4DCu) {
        ctx->pc = 0x11E4E0u;
        goto label_11e4e0;
    }
    ctx->pc = 0x11E4D8u;
    SET_GPR_U32(ctx, 31, 0x11E4E0u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x11E4D8u, 0x11E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E4E0u;
label_11e4e0:
    // 0x11e4e0: 0x10000021  b           . + 4 + (0x21 << 2)
label_11e4e4:
    if (ctx->pc == 0x11E4E4u) {
        ctx->pc = 0x11E4E8u;
        goto label_11e4e8;
    }
    ctx->pc = 0x11E4E0u;
    {
        const bool branch_taken_0x11e4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e4e0) {
            ctx->pc = 0x11E568u;
            goto label_11e568;
        }
    }
    ctx->pc = 0x11E4E8u;
label_11e4e8:
    // 0x11e4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e4ec:
    // 0x11e4ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11e4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11e4f0:
    // 0x11e4f0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x11e4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_11e4f4:
    // 0x11e4f4: 0x320f809  jalr        $t9
label_11e4f8:
    if (ctx->pc == 0x11E4F8u) {
        ctx->pc = 0x11E4FCu;
        goto label_11e4fc;
    }
    ctx->pc = 0x11E4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11E4FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E4F4u, 0x11E4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E4FCu;
label_11e4fc:
    // 0x11e4fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11e4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e500:
    // 0x11e500: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_11e504:
    if (ctx->pc == 0x11E504u) {
        ctx->pc = 0x11E508u;
        goto label_11e508;
    }
    ctx->pc = 0x11E500u;
    {
        const bool branch_taken_0x11e500 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e500) {
            ctx->pc = 0x11E538u;
            goto label_11e538;
        }
    }
    ctx->pc = 0x11E508u;
label_11e508:
    // 0x11e508: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x11e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11e50c:
    // 0x11e50c: 0x9042003d  lbu         $v0, 0x3D($v0)
    ctx->pc = 0x11e50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 61)));
label_11e510:
    // 0x11e510: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11e510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_11e514:
    // 0x11e514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11e518:
    // 0x11e518: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_11e51c:
    if (ctx->pc == 0x11E51Cu) {
        ctx->pc = 0x11E520u;
        goto label_11e520;
    }
    ctx->pc = 0x11E518u;
    {
        const bool branch_taken_0x11e518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e518) {
            ctx->pc = 0x11E538u;
            goto label_11e538;
        }
    }
    ctx->pc = 0x11E520u;
label_11e520:
    // 0x11e520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11e524:
    // 0x11e524: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11e524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11e528:
    // 0x11e528: 0xc041c7c  jal         func_1071F0
label_11e52c:
    if (ctx->pc == 0x11E52Cu) {
        ctx->pc = 0x11E530u;
        goto label_11e530;
    }
    ctx->pc = 0x11E528u;
    SET_GPR_U32(ctx, 31, 0x11E530u);
    ctx->pc = 0x1071F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1071F0u, 0x11E528u, 0x11E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E530u;
label_11e530:
    // 0x11e530: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x11e530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11e534:
    // 0x11e534: 0xa040003d  sb          $zero, 0x3D($v0)
    ctx->pc = 0x11e534u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 61), (uint8_t)GPR_U32(ctx, 0));
label_11e538:
    // 0x11e538: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x11e538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_11e53c:
    // 0x11e53c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x11e53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_11e540:
    // 0x11e540: 0xc0553d4  jal         func_154F50
label_11e544:
    if (ctx->pc == 0x11E544u) {
        ctx->pc = 0x11E548u;
        goto label_11e548;
    }
    ctx->pc = 0x11E540u;
    SET_GPR_U32(ctx, 31, 0x11E548u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11E540u, 0x11E548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E548u;
label_11e548:
    // 0x11e548: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11e548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e54c:
    // 0x11e54c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11e54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_11e550:
    // 0x11e550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e554:
    // 0x11e554: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11e554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11e558:
    // 0x11e558: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x11e558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11e55c:
    // 0x11e55c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x11e55cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_11e560:
    // 0x11e560: 0x320f809  jalr        $t9
label_11e564:
    if (ctx->pc == 0x11E564u) {
        ctx->pc = 0x11E568u;
        goto label_11e568;
    }
    ctx->pc = 0x11E560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x11E568u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E560u, 0x11E568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11E568u;
label_11e568:
    // 0x11e568: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11e568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_11e56c:
    // 0x11e56c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x11e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_11e570:
    // 0x11e570: 0x93a600c0  lbu         $a2, 0xC0($sp)
    ctx->pc = 0x11e570u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_11e574:
    // 0x11e574: 0xc04fbf8  jal         func_13EFE0
label_11e578:
    if (ctx->pc == 0x11E578u) {
        ctx->pc = 0x11E57Cu;
        goto label_11e57c;
    }
    ctx->pc = 0x11E574u;
    SET_GPR_U32(ctx, 31, 0x11E57Cu);
    ctx->pc = 0x13EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EFE0u, 0x11E574u, 0x11E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E57Cu;
label_11e57c:
    // 0x11e57c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e57cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11e580:
    // 0x11e580: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x11e580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_11e584:
    // 0x11e584: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x11e584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
label_11e588:
    // 0x11e588: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11e588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_11e58c:
    // 0x11e58c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11e58cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11e590:
    // 0x11e590: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11e590u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11e594:
    // 0x11e594: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11e594u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11e598:
    // 0x11e598: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11e598u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11e59c:
    // 0x11e59c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11e59cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11e5a0:
    // 0x11e5a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11e5a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11e5a4:
    // 0x11e5a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11e5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11e5a8:
    // 0x11e5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11e5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11e5ac:
    // 0x11e5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11e5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11e5b0:
    // 0x11e5b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x11e5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_11e5b4:
    // 0x11e5b4: 0x3e00008  jr          $ra
label_11e5b8:
    if (ctx->pc == 0x11E5B8u) {
        ctx->pc = 0x11E5BCu;
        goto label_11e5bc;
    }
    ctx->pc = 0x11E5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E5BCu;
label_11e5bc:
    // 0x11e5bc: 0x0  nop
    ctx->pc = 0x11e5bcu;
    // NOP
    ctx->pc = 0x11e5c0u;
}
