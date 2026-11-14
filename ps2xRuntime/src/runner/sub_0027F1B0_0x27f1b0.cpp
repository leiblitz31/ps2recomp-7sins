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

// Function: sub_0027F1B0
// Address: 0x27f1b0 - 0x27f490
void sub_0027F1B0_0x27f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F1B0_0x27f1b0");
#endif

    switch (ctx->pc) {
        case 0x27f1b0u: goto label_27f1b0;
        case 0x27f1b4u: goto label_27f1b4;
        case 0x27f1b8u: goto label_27f1b8;
        case 0x27f1bcu: goto label_27f1bc;
        case 0x27f1c0u: goto label_27f1c0;
        case 0x27f1c4u: goto label_27f1c4;
        case 0x27f1c8u: goto label_27f1c8;
        case 0x27f1ccu: goto label_27f1cc;
        case 0x27f1d0u: goto label_27f1d0;
        case 0x27f1d4u: goto label_27f1d4;
        case 0x27f1d8u: goto label_27f1d8;
        case 0x27f1dcu: goto label_27f1dc;
        case 0x27f1e0u: goto label_27f1e0;
        case 0x27f1e4u: goto label_27f1e4;
        case 0x27f1e8u: goto label_27f1e8;
        case 0x27f1ecu: goto label_27f1ec;
        case 0x27f1f0u: goto label_27f1f0;
        case 0x27f1f4u: goto label_27f1f4;
        case 0x27f1f8u: goto label_27f1f8;
        case 0x27f1fcu: goto label_27f1fc;
        case 0x27f200u: goto label_27f200;
        case 0x27f204u: goto label_27f204;
        case 0x27f208u: goto label_27f208;
        case 0x27f20cu: goto label_27f20c;
        case 0x27f210u: goto label_27f210;
        case 0x27f214u: goto label_27f214;
        case 0x27f218u: goto label_27f218;
        case 0x27f21cu: goto label_27f21c;
        case 0x27f220u: goto label_27f220;
        case 0x27f224u: goto label_27f224;
        case 0x27f228u: goto label_27f228;
        case 0x27f22cu: goto label_27f22c;
        case 0x27f230u: goto label_27f230;
        case 0x27f234u: goto label_27f234;
        case 0x27f238u: goto label_27f238;
        case 0x27f23cu: goto label_27f23c;
        case 0x27f240u: goto label_27f240;
        case 0x27f244u: goto label_27f244;
        case 0x27f248u: goto label_27f248;
        case 0x27f24cu: goto label_27f24c;
        case 0x27f250u: goto label_27f250;
        case 0x27f254u: goto label_27f254;
        case 0x27f258u: goto label_27f258;
        case 0x27f25cu: goto label_27f25c;
        case 0x27f260u: goto label_27f260;
        case 0x27f264u: goto label_27f264;
        case 0x27f268u: goto label_27f268;
        case 0x27f26cu: goto label_27f26c;
        case 0x27f270u: goto label_27f270;
        case 0x27f274u: goto label_27f274;
        case 0x27f278u: goto label_27f278;
        case 0x27f27cu: goto label_27f27c;
        case 0x27f280u: goto label_27f280;
        case 0x27f284u: goto label_27f284;
        case 0x27f288u: goto label_27f288;
        case 0x27f28cu: goto label_27f28c;
        case 0x27f290u: goto label_27f290;
        case 0x27f294u: goto label_27f294;
        case 0x27f298u: goto label_27f298;
        case 0x27f29cu: goto label_27f29c;
        case 0x27f2a0u: goto label_27f2a0;
        case 0x27f2a4u: goto label_27f2a4;
        case 0x27f2a8u: goto label_27f2a8;
        case 0x27f2acu: goto label_27f2ac;
        case 0x27f2b0u: goto label_27f2b0;
        case 0x27f2b4u: goto label_27f2b4;
        case 0x27f2b8u: goto label_27f2b8;
        case 0x27f2bcu: goto label_27f2bc;
        case 0x27f2c0u: goto label_27f2c0;
        case 0x27f2c4u: goto label_27f2c4;
        case 0x27f2c8u: goto label_27f2c8;
        case 0x27f2ccu: goto label_27f2cc;
        case 0x27f2d0u: goto label_27f2d0;
        case 0x27f2d4u: goto label_27f2d4;
        case 0x27f2d8u: goto label_27f2d8;
        case 0x27f2dcu: goto label_27f2dc;
        case 0x27f2e0u: goto label_27f2e0;
        case 0x27f2e4u: goto label_27f2e4;
        case 0x27f2e8u: goto label_27f2e8;
        case 0x27f2ecu: goto label_27f2ec;
        case 0x27f2f0u: goto label_27f2f0;
        case 0x27f2f4u: goto label_27f2f4;
        case 0x27f2f8u: goto label_27f2f8;
        case 0x27f2fcu: goto label_27f2fc;
        case 0x27f300u: goto label_27f300;
        case 0x27f304u: goto label_27f304;
        case 0x27f308u: goto label_27f308;
        case 0x27f30cu: goto label_27f30c;
        case 0x27f310u: goto label_27f310;
        case 0x27f314u: goto label_27f314;
        case 0x27f318u: goto label_27f318;
        case 0x27f31cu: goto label_27f31c;
        case 0x27f320u: goto label_27f320;
        case 0x27f324u: goto label_27f324;
        case 0x27f328u: goto label_27f328;
        case 0x27f32cu: goto label_27f32c;
        case 0x27f330u: goto label_27f330;
        case 0x27f334u: goto label_27f334;
        case 0x27f338u: goto label_27f338;
        case 0x27f33cu: goto label_27f33c;
        case 0x27f340u: goto label_27f340;
        case 0x27f344u: goto label_27f344;
        case 0x27f348u: goto label_27f348;
        case 0x27f34cu: goto label_27f34c;
        case 0x27f350u: goto label_27f350;
        case 0x27f354u: goto label_27f354;
        case 0x27f358u: goto label_27f358;
        case 0x27f35cu: goto label_27f35c;
        case 0x27f360u: goto label_27f360;
        case 0x27f364u: goto label_27f364;
        case 0x27f368u: goto label_27f368;
        case 0x27f36cu: goto label_27f36c;
        case 0x27f370u: goto label_27f370;
        case 0x27f374u: goto label_27f374;
        case 0x27f378u: goto label_27f378;
        case 0x27f37cu: goto label_27f37c;
        case 0x27f380u: goto label_27f380;
        case 0x27f384u: goto label_27f384;
        case 0x27f388u: goto label_27f388;
        case 0x27f38cu: goto label_27f38c;
        case 0x27f390u: goto label_27f390;
        case 0x27f394u: goto label_27f394;
        case 0x27f398u: goto label_27f398;
        case 0x27f39cu: goto label_27f39c;
        case 0x27f3a0u: goto label_27f3a0;
        case 0x27f3a4u: goto label_27f3a4;
        case 0x27f3a8u: goto label_27f3a8;
        case 0x27f3acu: goto label_27f3ac;
        case 0x27f3b0u: goto label_27f3b0;
        case 0x27f3b4u: goto label_27f3b4;
        case 0x27f3b8u: goto label_27f3b8;
        case 0x27f3bcu: goto label_27f3bc;
        case 0x27f3c0u: goto label_27f3c0;
        case 0x27f3c4u: goto label_27f3c4;
        case 0x27f3c8u: goto label_27f3c8;
        case 0x27f3ccu: goto label_27f3cc;
        case 0x27f3d0u: goto label_27f3d0;
        case 0x27f3d4u: goto label_27f3d4;
        case 0x27f3d8u: goto label_27f3d8;
        case 0x27f3dcu: goto label_27f3dc;
        case 0x27f3e0u: goto label_27f3e0;
        case 0x27f3e4u: goto label_27f3e4;
        case 0x27f3e8u: goto label_27f3e8;
        case 0x27f3ecu: goto label_27f3ec;
        case 0x27f3f0u: goto label_27f3f0;
        case 0x27f3f4u: goto label_27f3f4;
        case 0x27f3f8u: goto label_27f3f8;
        case 0x27f3fcu: goto label_27f3fc;
        case 0x27f400u: goto label_27f400;
        case 0x27f404u: goto label_27f404;
        case 0x27f408u: goto label_27f408;
        case 0x27f40cu: goto label_27f40c;
        case 0x27f410u: goto label_27f410;
        case 0x27f414u: goto label_27f414;
        case 0x27f418u: goto label_27f418;
        case 0x27f41cu: goto label_27f41c;
        case 0x27f420u: goto label_27f420;
        case 0x27f424u: goto label_27f424;
        case 0x27f428u: goto label_27f428;
        case 0x27f42cu: goto label_27f42c;
        case 0x27f430u: goto label_27f430;
        case 0x27f434u: goto label_27f434;
        case 0x27f438u: goto label_27f438;
        case 0x27f43cu: goto label_27f43c;
        case 0x27f440u: goto label_27f440;
        case 0x27f444u: goto label_27f444;
        case 0x27f448u: goto label_27f448;
        case 0x27f44cu: goto label_27f44c;
        case 0x27f450u: goto label_27f450;
        case 0x27f454u: goto label_27f454;
        case 0x27f458u: goto label_27f458;
        case 0x27f45cu: goto label_27f45c;
        case 0x27f460u: goto label_27f460;
        case 0x27f464u: goto label_27f464;
        case 0x27f468u: goto label_27f468;
        case 0x27f46cu: goto label_27f46c;
        case 0x27f470u: goto label_27f470;
        case 0x27f474u: goto label_27f474;
        case 0x27f478u: goto label_27f478;
        case 0x27f47cu: goto label_27f47c;
        case 0x27f480u: goto label_27f480;
        case 0x27f484u: goto label_27f484;
        case 0x27f488u: goto label_27f488;
        case 0x27f48cu: goto label_27f48c;
        default: break;
    }

    ctx->pc = 0x27f1b0u;

label_27f1b0:
    // 0x27f1b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x27f1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_27f1b4:
    // 0x27f1b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_27f1b8:
    // 0x27f1b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x27f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_27f1bc:
    // 0x27f1bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27f1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27f1c0:
    // 0x27f1c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27f1c4:
    // 0x27f1c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27f1c8:
    // 0x27f1c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27f1cc:
    // 0x27f1cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27f1d0:
    // 0x27f1d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27f1d4:
    // 0x27f1d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27f1d8:
    // 0x27f1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27f1dc:
    // 0x27f1dc: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x27f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_27f1e0:
    // 0x27f1e0: 0xa3a500e0  sb          $a1, 0xE0($sp)
    ctx->pc = 0x27f1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 5));
label_27f1e4:
    // 0x27f1e4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x27f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27f1e8:
    // 0x27f1e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27f1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27f1ec:
    // 0x27f1ec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x27f1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_27f1f0:
    // 0x27f1f0: 0x320f809  jalr        $t9
label_27f1f4:
    if (ctx->pc == 0x27F1F4u) {
        ctx->pc = 0x27F1F8u;
        goto label_27f1f8;
    }
    ctx->pc = 0x27F1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27F1F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F1F0u, 0x27F1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F1F8u;
label_27f1f8:
    // 0x27f1f8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x27f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_27f1fc:
    // 0x27f1fc: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x27f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_27f200:
    // 0x27f200: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x27f200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27f204:
    // 0x27f204: 0xc085538  jal         func_2154E0
label_27f208:
    if (ctx->pc == 0x27F208u) {
        ctx->pc = 0x27F20Cu;
        goto label_27f20c;
    }
    ctx->pc = 0x27F204u;
    SET_GPR_U32(ctx, 31, 0x27F20Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27F204u, 0x27F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F20Cu;
label_27f20c:
    // 0x27f20c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27f20cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f210:
    // 0x27f210: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27f210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27f214:
    // 0x27f214: 0xc091aa8  jal         func_246AA0
label_27f218:
    if (ctx->pc == 0x27F218u) {
        ctx->pc = 0x27F21Cu;
        goto label_27f21c;
    }
    ctx->pc = 0x27F214u;
    SET_GPR_U32(ctx, 31, 0x27F21Cu);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x27F214u, 0x27F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F21Cu;
label_27f21c:
    // 0x27f21c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27f21cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f220:
    // 0x27f220: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27f220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27f224:
    // 0x27f224: 0xc040e7c  jal         func_1039F0
label_27f228:
    if (ctx->pc == 0x27F228u) {
        ctx->pc = 0x27F22Cu;
        goto label_27f22c;
    }
    ctx->pc = 0x27F224u;
    SET_GPR_U32(ctx, 31, 0x27F22Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27F224u, 0x27F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F22Cu;
label_27f22c:
    // 0x27f22c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f22cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f230:
    // 0x27f230: 0x1000007e  b           . + 4 + (0x7E << 2)
label_27f234:
    if (ctx->pc == 0x27F234u) {
        ctx->pc = 0x27F238u;
        goto label_27f238;
    }
    ctx->pc = 0x27F230u;
    {
        const bool branch_taken_0x27f230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f230) {
            ctx->pc = 0x27F42Cu;
            goto label_27f42c;
        }
    }
    ctx->pc = 0x27F238u;
label_27f238:
    // 0x27f238: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x27f238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_27f23c:
    // 0x27f23c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27f23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27f240:
    // 0x27f240: 0xc085538  jal         func_2154E0
label_27f244:
    if (ctx->pc == 0x27F244u) {
        ctx->pc = 0x27F248u;
        goto label_27f248;
    }
    ctx->pc = 0x27F240u;
    SET_GPR_U32(ctx, 31, 0x27F248u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27F240u, 0x27F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F248u;
label_27f248:
    // 0x27f248: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27f248u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f24c:
    // 0x27f24c: 0x93a200e0  lbu         $v0, 0xE0($sp)
    ctx->pc = 0x27f24cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_27f250:
    // 0x27f250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27f254:
    // 0x27f254: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_27f258:
    if (ctx->pc == 0x27F258u) {
        ctx->pc = 0x27F25Cu;
        goto label_27f25c;
    }
    ctx->pc = 0x27F254u;
    {
        const bool branch_taken_0x27f254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f254) {
            ctx->pc = 0x27F27Cu;
            goto label_27f27c;
        }
    }
    ctx->pc = 0x27F25Cu;
label_27f25c:
    // 0x27f25c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f260:
    // 0x27f260: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27f260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27f264:
    // 0x27f264: 0x24a58200  addiu       $a1, $a1, -0x7E00
    ctx->pc = 0x27f264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935040));
label_27f268:
    // 0x27f268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f26c:
    // 0x27f26c: 0xc0a3674  jal         func_28D9D0
label_27f270:
    if (ctx->pc == 0x27F270u) {
        ctx->pc = 0x27F274u;
        goto label_27f274;
    }
    ctx->pc = 0x27F26Cu;
    SET_GPR_U32(ctx, 31, 0x27F274u);
    ctx->pc = 0x28D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9D0u, 0x27F26Cu, 0x27F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F274u;
label_27f274:
    // 0x27f274: 0x1000006c  b           . + 4 + (0x6C << 2)
label_27f278:
    if (ctx->pc == 0x27F278u) {
        ctx->pc = 0x27F27Cu;
        goto label_27f27c;
    }
    ctx->pc = 0x27F274u;
    {
        const bool branch_taken_0x27f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f274) {
            ctx->pc = 0x27F428u;
            goto label_27f428;
        }
    }
    ctx->pc = 0x27F27Cu;
label_27f27c:
    // 0x27f27c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f280:
    // 0x27f280: 0xc0a366c  jal         func_28D9B0
label_27f284:
    if (ctx->pc == 0x27F284u) {
        ctx->pc = 0x27F288u;
        goto label_27f288;
    }
    ctx->pc = 0x27F280u;
    SET_GPR_U32(ctx, 31, 0x27F288u);
    ctx->pc = 0x28D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9B0u, 0x27F280u, 0x27F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F288u;
label_27f288:
    // 0x27f288: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27f288u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f28c:
    // 0x27f28c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27f28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27f290:
    // 0x27f290: 0xc09fd3c  jal         func_27F4F0
label_27f294:
    if (ctx->pc == 0x27F294u) {
        ctx->pc = 0x27F298u;
        goto label_27f298;
    }
    ctx->pc = 0x27F290u;
    SET_GPR_U32(ctx, 31, 0x27F298u);
    ctx->pc = 0x27F4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4F0u, 0x27F290u, 0x27F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F298u;
label_27f298:
    // 0x27f298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f29c:
    // 0x27f29c: 0x10000016  b           . + 4 + (0x16 << 2)
label_27f2a0:
    if (ctx->pc == 0x27F2A0u) {
        ctx->pc = 0x27F2A4u;
        goto label_27f2a4;
    }
    ctx->pc = 0x27F29Cu;
    {
        const bool branch_taken_0x27f29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f29c) {
            ctx->pc = 0x27F2F8u;
            goto label_27f2f8;
        }
    }
    ctx->pc = 0x27F2A4u;
label_27f2a4:
    // 0x27f2a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27f2a8:
    // 0x27f2a8: 0x10020012  beq         $zero, $v0, . + 4 + (0x12 << 2)
label_27f2ac:
    if (ctx->pc == 0x27F2ACu) {
        ctx->pc = 0x27F2B0u;
        goto label_27f2b0;
    }
    ctx->pc = 0x27F2A8u;
    {
        const bool branch_taken_0x27f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f2a8) {
            ctx->pc = 0x27F2F4u;
            goto label_27f2f4;
        }
    }
    ctx->pc = 0x27F2B0u;
label_27f2b0:
    // 0x27f2b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x27f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27f2b4:
    // 0x27f2b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27f2b8:
    // 0x27f2b8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_27f2bc:
    if (ctx->pc == 0x27F2BCu) {
        ctx->pc = 0x27F2C0u;
        goto label_27f2c0;
    }
    ctx->pc = 0x27F2B8u;
    {
        const bool branch_taken_0x27f2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f2b8) {
            ctx->pc = 0x27F2F4u;
            goto label_27f2f4;
        }
    }
    ctx->pc = 0x27F2C0u;
label_27f2c0:
    // 0x27f2c0: 0xc12246c  jal         func_4891B0
label_27f2c4:
    if (ctx->pc == 0x27F2C4u) {
        ctx->pc = 0x27F2C8u;
        goto label_27f2c8;
    }
    ctx->pc = 0x27F2C0u;
    SET_GPR_U32(ctx, 31, 0x27F2C8u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27F2C0u, 0x27F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2C8u;
label_27f2c8:
    // 0x27f2c8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x27f2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_27f2cc:
    // 0x27f2cc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27f2d0:
    // 0x27f2d0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x27f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27f2d4:
    // 0x27f2d4: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x27f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_27f2d8:
    // 0x27f2d8: 0xc09fd2c  jal         func_27F4B0
label_27f2dc:
    if (ctx->pc == 0x27F2DCu) {
        ctx->pc = 0x27F2E0u;
        goto label_27f2e0;
    }
    ctx->pc = 0x27F2D8u;
    SET_GPR_U32(ctx, 31, 0x27F2E0u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x27F2D8u, 0x27F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2E0u;
label_27f2e0:
    // 0x27f2e0: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x27f2e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27f2e4:
    // 0x27f2e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27f2e8:
    // 0x27f2e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x27f2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27f2ec:
    // 0x27f2ec: 0xc12052c  jal         func_4814B0
label_27f2f0:
    if (ctx->pc == 0x27F2F0u) {
        ctx->pc = 0x27F2F4u;
        goto label_27f2f4;
    }
    ctx->pc = 0x27F2ECu;
    SET_GPR_U32(ctx, 31, 0x27F2F4u);
    ctx->pc = 0x4814B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4814B0u, 0x27F2ECu, 0x27F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2F4u;
label_27f2f4:
    // 0x27f2f4: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x27f2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_27f2f8:
    // 0x27f2f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27f2fc:
    // 0x27f2fc: 0xc09fd24  jal         func_27F490
label_27f300:
    if (ctx->pc == 0x27F300u) {
        ctx->pc = 0x27F304u;
        goto label_27f304;
    }
    ctx->pc = 0x27F2FCu;
    SET_GPR_U32(ctx, 31, 0x27F304u);
    ctx->pc = 0x27F490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F490u, 0x27F2FCu, 0x27F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F304u;
label_27f304:
    // 0x27f304: 0x1602ffe7  bne         $s0, $v0, . + 4 + (-0x19 << 2)
label_27f308:
    if (ctx->pc == 0x27F308u) {
        ctx->pc = 0x27F30Cu;
        goto label_27f30c;
    }
    ctx->pc = 0x27F304u;
    {
        const bool branch_taken_0x27f304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f304) {
            ctx->pc = 0x27F2A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f2a4;
        }
    }
    ctx->pc = 0x27F30Cu;
label_27f30c:
    // 0x27f30c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f310:
    // 0x27f310: 0xc0a361c  jal         func_28D870
label_27f314:
    if (ctx->pc == 0x27F314u) {
        ctx->pc = 0x27F318u;
        goto label_27f318;
    }
    ctx->pc = 0x27F310u;
    SET_GPR_U32(ctx, 31, 0x27F318u);
    ctx->pc = 0x28D870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D870u, 0x27F310u, 0x27F318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F318u;
label_27f318:
    // 0x27f318: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27f318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f31c:
    // 0x27f31c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27f31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27f320:
    // 0x27f320: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27f320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f324:
    // 0x27f324: 0xc0542d8  jal         func_150B60
label_27f328:
    if (ctx->pc == 0x27F328u) {
        ctx->pc = 0x27F32Cu;
        goto label_27f32c;
    }
    ctx->pc = 0x27F324u;
    SET_GPR_U32(ctx, 31, 0x27F32Cu);
    ctx->pc = 0x150B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B60u, 0x27F324u, 0x27F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F32Cu;
label_27f32c:
    // 0x27f32c: 0x10000034  b           . + 4 + (0x34 << 2)
label_27f330:
    if (ctx->pc == 0x27F330u) {
        ctx->pc = 0x27F334u;
        goto label_27f334;
    }
    ctx->pc = 0x27F32Cu;
    {
        const bool branch_taken_0x27f32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f32c) {
            ctx->pc = 0x27F400u;
            goto label_27f400;
        }
    }
    ctx->pc = 0x27F334u;
label_27f334:
    // 0x27f334: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27f334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f338:
    // 0x27f338: 0x1000002b  b           . + 4 + (0x2B << 2)
label_27f33c:
    if (ctx->pc == 0x27F33Cu) {
        ctx->pc = 0x27F340u;
        goto label_27f340;
    }
    ctx->pc = 0x27F338u;
    {
        const bool branch_taken_0x27f338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f338) {
            ctx->pc = 0x27F3E8u;
            goto label_27f3e8;
        }
    }
    ctx->pc = 0x27F340u;
label_27f340:
    // 0x27f340: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27f344:
    // 0x27f344: 0xc0542b4  jal         func_150AD0
label_27f348:
    if (ctx->pc == 0x27F348u) {
        ctx->pc = 0x27F34Cu;
        goto label_27f34c;
    }
    ctx->pc = 0x27F344u;
    SET_GPR_U32(ctx, 31, 0x27F34Cu);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x27F344u, 0x27F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F34Cu;
label_27f34c:
    // 0x27f34c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x27f34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_27f350:
    // 0x27f350: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f354:
    // 0x27f354: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x27f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27f358:
    // 0x27f358: 0x10020022  beq         $zero, $v0, . + 4 + (0x22 << 2)
label_27f35c:
    if (ctx->pc == 0x27F35Cu) {
        ctx->pc = 0x27F360u;
        goto label_27f360;
    }
    ctx->pc = 0x27F358u;
    {
        const bool branch_taken_0x27f358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f358) {
            ctx->pc = 0x27F3E4u;
            goto label_27f3e4;
        }
    }
    ctx->pc = 0x27F360u;
label_27f360:
    // 0x27f360: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27f360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27f364:
    // 0x27f364: 0xc0542b4  jal         func_150AD0
label_27f368:
    if (ctx->pc == 0x27F368u) {
        ctx->pc = 0x27F36Cu;
        goto label_27f36c;
    }
    ctx->pc = 0x27F364u;
    SET_GPR_U32(ctx, 31, 0x27F36Cu);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x27F364u, 0x27F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F36Cu;
label_27f36c:
    // 0x27f36c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x27f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_27f370:
    // 0x27f370: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f374:
    // 0x27f374: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x27f374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_27f378:
    // 0x27f378: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27f378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27f37c:
    // 0x27f37c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_27f380:
    if (ctx->pc == 0x27F380u) {
        ctx->pc = 0x27F384u;
        goto label_27f384;
    }
    ctx->pc = 0x27F37Cu;
    {
        const bool branch_taken_0x27f37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f37c) {
            ctx->pc = 0x27F3E4u;
            goto label_27f3e4;
        }
    }
    ctx->pc = 0x27F384u;
label_27f384:
    // 0x27f384: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27f384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27f388:
    // 0x27f388: 0xc0542b4  jal         func_150AD0
label_27f38c:
    if (ctx->pc == 0x27F38Cu) {
        ctx->pc = 0x27F390u;
        goto label_27f390;
    }
    ctx->pc = 0x27F388u;
    SET_GPR_U32(ctx, 31, 0x27F390u);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x27F388u, 0x27F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F390u;
label_27f390:
    // 0x27f390: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x27f390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_27f394:
    // 0x27f394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f398:
    // 0x27f398: 0x8c570004  lw          $s7, 0x4($v0)
    ctx->pc = 0x27f398u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27f39c:
    // 0x27f39c: 0xc12246c  jal         func_4891B0
label_27f3a0:
    if (ctx->pc == 0x27F3A0u) {
        ctx->pc = 0x27F3A4u;
        goto label_27f3a4;
    }
    ctx->pc = 0x27F39Cu;
    SET_GPR_U32(ctx, 31, 0x27F3A4u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27F39Cu, 0x27F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3A4u;
label_27f3a4:
    // 0x27f3a4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x27f3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_27f3a8:
    // 0x27f3a8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27f3ac:
    // 0x27f3ac: 0xc0542b4  jal         func_150AD0
label_27f3b0:
    if (ctx->pc == 0x27F3B0u) {
        ctx->pc = 0x27F3B4u;
        goto label_27f3b4;
    }
    ctx->pc = 0x27F3ACu;
    SET_GPR_U32(ctx, 31, 0x27F3B4u);
    ctx->pc = 0x150AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150AD0u, 0x27F3ACu, 0x27F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3B4u;
label_27f3b4:
    // 0x27f3b4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x27f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_27f3b8:
    // 0x27f3b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f3bc:
    // 0x27f3bc: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x27f3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_27f3c0:
    // 0x27f3c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27f3c4:
    // 0x27f3c4: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x27f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_27f3c8:
    // 0x27f3c8: 0xc09fd2c  jal         func_27F4B0
label_27f3cc:
    if (ctx->pc == 0x27F3CCu) {
        ctx->pc = 0x27F3D0u;
        goto label_27f3d0;
    }
    ctx->pc = 0x27F3C8u;
    SET_GPR_U32(ctx, 31, 0x27F3D0u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x27F3C8u, 0x27F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3D0u;
label_27f3d0:
    // 0x27f3d0: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x27f3d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_27f3d4:
    // 0x27f3d4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x27f3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27f3d8:
    // 0x27f3d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x27f3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27f3dc:
    // 0x27f3dc: 0xc12052c  jal         func_4814B0
label_27f3e0:
    if (ctx->pc == 0x27F3E0u) {
        ctx->pc = 0x27F3E4u;
        goto label_27f3e4;
    }
    ctx->pc = 0x27F3DCu;
    SET_GPR_U32(ctx, 31, 0x27F3E4u);
    ctx->pc = 0x4814B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4814B0u, 0x27F3DCu, 0x27F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F3E4u;
label_27f3e4:
    // 0x27f3e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27f3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27f3e8:
    // 0x27f3e8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x27f3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27f3ec:
    // 0x27f3ec: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_27f3f0:
    if (ctx->pc == 0x27F3F0u) {
        ctx->pc = 0x27F3F4u;
        goto label_27f3f4;
    }
    ctx->pc = 0x27F3ECu;
    {
        const bool branch_taken_0x27f3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f3ec) {
            ctx->pc = 0x27F340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f340;
        }
    }
    ctx->pc = 0x27F3F4u;
label_27f3f4:
    // 0x27f3f4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27f3f8:
    // 0x27f3f8: 0xc054278  jal         func_1509E0
label_27f3fc:
    if (ctx->pc == 0x27F3FCu) {
        ctx->pc = 0x27F400u;
        goto label_27f400;
    }
    ctx->pc = 0x27F3F8u;
    SET_GPR_U32(ctx, 31, 0x27F400u);
    ctx->pc = 0x1509E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1509E0u, 0x27F3F8u, 0x27F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F400u;
label_27f400:
    // 0x27f400: 0x27a400c4  addiu       $a0, $sp, 0xC4
    ctx->pc = 0x27f400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_27f404:
    // 0x27f404: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27f404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f408:
    // 0x27f408: 0xc054288  jal         func_150A20
label_27f40c:
    if (ctx->pc == 0x27F40Cu) {
        ctx->pc = 0x27F410u;
        goto label_27f410;
    }
    ctx->pc = 0x27F408u;
    SET_GPR_U32(ctx, 31, 0x27F410u);
    ctx->pc = 0x150A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A20u, 0x27F408u, 0x27F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F410u;
label_27f410:
    // 0x27f410: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27f410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27f414:
    // 0x27f414: 0x27a500c4  addiu       $a1, $sp, 0xC4
    ctx->pc = 0x27f414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_27f418:
    // 0x27f418: 0xc041998  jal         func_106660
label_27f41c:
    if (ctx->pc == 0x27F41Cu) {
        ctx->pc = 0x27F420u;
        goto label_27f420;
    }
    ctx->pc = 0x27F418u;
    SET_GPR_U32(ctx, 31, 0x27F420u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x27F418u, 0x27F420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F420u;
label_27f420:
    // 0x27f420: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_27f424:
    if (ctx->pc == 0x27F424u) {
        ctx->pc = 0x27F428u;
        goto label_27f428;
    }
    ctx->pc = 0x27F420u;
    {
        const bool branch_taken_0x27f420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f420) {
            ctx->pc = 0x27F334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f334;
        }
    }
    ctx->pc = 0x27F428u;
label_27f428:
    // 0x27f428: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x27f428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_27f42c:
    // 0x27f42c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27f42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27f430:
    // 0x27f430: 0xc04147c  jal         func_1051F0
label_27f434:
    if (ctx->pc == 0x27F434u) {
        ctx->pc = 0x27F438u;
        goto label_27f438;
    }
    ctx->pc = 0x27F430u;
    SET_GPR_U32(ctx, 31, 0x27F438u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27F430u, 0x27F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F438u;
label_27f438:
    // 0x27f438: 0x1642ff7f  bne         $s2, $v0, . + 4 + (-0x81 << 2)
label_27f43c:
    if (ctx->pc == 0x27F43Cu) {
        ctx->pc = 0x27F440u;
        goto label_27f440;
    }
    ctx->pc = 0x27F438u;
    {
        const bool branch_taken_0x27f438 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f438) {
            ctx->pc = 0x27F238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f238;
        }
    }
    ctx->pc = 0x27F440u;
label_27f440:
    // 0x27f440: 0xc12246c  jal         func_4891B0
label_27f444:
    if (ctx->pc == 0x27F444u) {
        ctx->pc = 0x27F448u;
        goto label_27f448;
    }
    ctx->pc = 0x27F440u;
    SET_GPR_U32(ctx, 31, 0x27F448u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27F440u, 0x27F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F448u;
label_27f448:
    // 0x27f448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f44c:
    // 0x27f44c: 0xc12026c  jal         func_4809B0
label_27f450:
    if (ctx->pc == 0x27F450u) {
        ctx->pc = 0x27F454u;
        goto label_27f454;
    }
    ctx->pc = 0x27F44Cu;
    SET_GPR_U32(ctx, 31, 0x27F454u);
    ctx->pc = 0x4809B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4809B0u, 0x27F44Cu, 0x27F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F454u;
label_27f454:
    // 0x27f454: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27f454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27f458:
    // 0x27f458: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27f458u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27f45c:
    // 0x27f45c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27f45cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27f460:
    // 0x27f460: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27f460u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27f464:
    // 0x27f464: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27f464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27f468:
    // 0x27f468: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27f468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27f46c:
    // 0x27f46c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27f46cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27f470:
    // 0x27f470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f474:
    // 0x27f474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f478:
    // 0x27f478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27f47c:
    // 0x27f47c: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x27f47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_27f480:
    // 0x27f480: 0x3e00008  jr          $ra
label_27f484:
    if (ctx->pc == 0x27F484u) {
        ctx->pc = 0x27F488u;
        goto label_27f488;
    }
    ctx->pc = 0x27F480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F488u;
label_27f488:
    // 0x27f488: 0x0  nop
    ctx->pc = 0x27f488u;
    // NOP
label_27f48c:
    // 0x27f48c: 0x0  nop
    ctx->pc = 0x27f48cu;
    // NOP
    ctx->pc = 0x27f490u;
}
