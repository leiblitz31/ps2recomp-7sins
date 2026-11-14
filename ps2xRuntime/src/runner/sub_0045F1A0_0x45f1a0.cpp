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

// Function: sub_0045F1A0
// Address: 0x45f1a0 - 0x45f420
void sub_0045F1A0_0x45f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F1A0_0x45f1a0");
#endif

    switch (ctx->pc) {
        case 0x45f1a0u: goto label_45f1a0;
        case 0x45f1a4u: goto label_45f1a4;
        case 0x45f1a8u: goto label_45f1a8;
        case 0x45f1acu: goto label_45f1ac;
        case 0x45f1b0u: goto label_45f1b0;
        case 0x45f1b4u: goto label_45f1b4;
        case 0x45f1b8u: goto label_45f1b8;
        case 0x45f1bcu: goto label_45f1bc;
        case 0x45f1c0u: goto label_45f1c0;
        case 0x45f1c4u: goto label_45f1c4;
        case 0x45f1c8u: goto label_45f1c8;
        case 0x45f1ccu: goto label_45f1cc;
        case 0x45f1d0u: goto label_45f1d0;
        case 0x45f1d4u: goto label_45f1d4;
        case 0x45f1d8u: goto label_45f1d8;
        case 0x45f1dcu: goto label_45f1dc;
        case 0x45f1e0u: goto label_45f1e0;
        case 0x45f1e4u: goto label_45f1e4;
        case 0x45f1e8u: goto label_45f1e8;
        case 0x45f1ecu: goto label_45f1ec;
        case 0x45f1f0u: goto label_45f1f0;
        case 0x45f1f4u: goto label_45f1f4;
        case 0x45f1f8u: goto label_45f1f8;
        case 0x45f1fcu: goto label_45f1fc;
        case 0x45f200u: goto label_45f200;
        case 0x45f204u: goto label_45f204;
        case 0x45f208u: goto label_45f208;
        case 0x45f20cu: goto label_45f20c;
        case 0x45f210u: goto label_45f210;
        case 0x45f214u: goto label_45f214;
        case 0x45f218u: goto label_45f218;
        case 0x45f21cu: goto label_45f21c;
        case 0x45f220u: goto label_45f220;
        case 0x45f224u: goto label_45f224;
        case 0x45f228u: goto label_45f228;
        case 0x45f22cu: goto label_45f22c;
        case 0x45f230u: goto label_45f230;
        case 0x45f234u: goto label_45f234;
        case 0x45f238u: goto label_45f238;
        case 0x45f23cu: goto label_45f23c;
        case 0x45f240u: goto label_45f240;
        case 0x45f244u: goto label_45f244;
        case 0x45f248u: goto label_45f248;
        case 0x45f24cu: goto label_45f24c;
        case 0x45f250u: goto label_45f250;
        case 0x45f254u: goto label_45f254;
        case 0x45f258u: goto label_45f258;
        case 0x45f25cu: goto label_45f25c;
        case 0x45f260u: goto label_45f260;
        case 0x45f264u: goto label_45f264;
        case 0x45f268u: goto label_45f268;
        case 0x45f26cu: goto label_45f26c;
        case 0x45f270u: goto label_45f270;
        case 0x45f274u: goto label_45f274;
        case 0x45f278u: goto label_45f278;
        case 0x45f27cu: goto label_45f27c;
        case 0x45f280u: goto label_45f280;
        case 0x45f284u: goto label_45f284;
        case 0x45f288u: goto label_45f288;
        case 0x45f28cu: goto label_45f28c;
        case 0x45f290u: goto label_45f290;
        case 0x45f294u: goto label_45f294;
        case 0x45f298u: goto label_45f298;
        case 0x45f29cu: goto label_45f29c;
        case 0x45f2a0u: goto label_45f2a0;
        case 0x45f2a4u: goto label_45f2a4;
        case 0x45f2a8u: goto label_45f2a8;
        case 0x45f2acu: goto label_45f2ac;
        case 0x45f2b0u: goto label_45f2b0;
        case 0x45f2b4u: goto label_45f2b4;
        case 0x45f2b8u: goto label_45f2b8;
        case 0x45f2bcu: goto label_45f2bc;
        case 0x45f2c0u: goto label_45f2c0;
        case 0x45f2c4u: goto label_45f2c4;
        case 0x45f2c8u: goto label_45f2c8;
        case 0x45f2ccu: goto label_45f2cc;
        case 0x45f2d0u: goto label_45f2d0;
        case 0x45f2d4u: goto label_45f2d4;
        case 0x45f2d8u: goto label_45f2d8;
        case 0x45f2dcu: goto label_45f2dc;
        case 0x45f2e0u: goto label_45f2e0;
        case 0x45f2e4u: goto label_45f2e4;
        case 0x45f2e8u: goto label_45f2e8;
        case 0x45f2ecu: goto label_45f2ec;
        case 0x45f2f0u: goto label_45f2f0;
        case 0x45f2f4u: goto label_45f2f4;
        case 0x45f2f8u: goto label_45f2f8;
        case 0x45f2fcu: goto label_45f2fc;
        case 0x45f300u: goto label_45f300;
        case 0x45f304u: goto label_45f304;
        case 0x45f308u: goto label_45f308;
        case 0x45f30cu: goto label_45f30c;
        case 0x45f310u: goto label_45f310;
        case 0x45f314u: goto label_45f314;
        case 0x45f318u: goto label_45f318;
        case 0x45f31cu: goto label_45f31c;
        case 0x45f320u: goto label_45f320;
        case 0x45f324u: goto label_45f324;
        case 0x45f328u: goto label_45f328;
        case 0x45f32cu: goto label_45f32c;
        case 0x45f330u: goto label_45f330;
        case 0x45f334u: goto label_45f334;
        case 0x45f338u: goto label_45f338;
        case 0x45f33cu: goto label_45f33c;
        case 0x45f340u: goto label_45f340;
        case 0x45f344u: goto label_45f344;
        case 0x45f348u: goto label_45f348;
        case 0x45f34cu: goto label_45f34c;
        case 0x45f350u: goto label_45f350;
        case 0x45f354u: goto label_45f354;
        case 0x45f358u: goto label_45f358;
        case 0x45f35cu: goto label_45f35c;
        case 0x45f360u: goto label_45f360;
        case 0x45f364u: goto label_45f364;
        case 0x45f368u: goto label_45f368;
        case 0x45f36cu: goto label_45f36c;
        case 0x45f370u: goto label_45f370;
        case 0x45f374u: goto label_45f374;
        case 0x45f378u: goto label_45f378;
        case 0x45f37cu: goto label_45f37c;
        case 0x45f380u: goto label_45f380;
        case 0x45f384u: goto label_45f384;
        case 0x45f388u: goto label_45f388;
        case 0x45f38cu: goto label_45f38c;
        case 0x45f390u: goto label_45f390;
        case 0x45f394u: goto label_45f394;
        case 0x45f398u: goto label_45f398;
        case 0x45f39cu: goto label_45f39c;
        case 0x45f3a0u: goto label_45f3a0;
        case 0x45f3a4u: goto label_45f3a4;
        case 0x45f3a8u: goto label_45f3a8;
        case 0x45f3acu: goto label_45f3ac;
        case 0x45f3b0u: goto label_45f3b0;
        case 0x45f3b4u: goto label_45f3b4;
        case 0x45f3b8u: goto label_45f3b8;
        case 0x45f3bcu: goto label_45f3bc;
        case 0x45f3c0u: goto label_45f3c0;
        case 0x45f3c4u: goto label_45f3c4;
        case 0x45f3c8u: goto label_45f3c8;
        case 0x45f3ccu: goto label_45f3cc;
        case 0x45f3d0u: goto label_45f3d0;
        case 0x45f3d4u: goto label_45f3d4;
        case 0x45f3d8u: goto label_45f3d8;
        case 0x45f3dcu: goto label_45f3dc;
        case 0x45f3e0u: goto label_45f3e0;
        case 0x45f3e4u: goto label_45f3e4;
        case 0x45f3e8u: goto label_45f3e8;
        case 0x45f3ecu: goto label_45f3ec;
        case 0x45f3f0u: goto label_45f3f0;
        case 0x45f3f4u: goto label_45f3f4;
        case 0x45f3f8u: goto label_45f3f8;
        case 0x45f3fcu: goto label_45f3fc;
        case 0x45f400u: goto label_45f400;
        case 0x45f404u: goto label_45f404;
        case 0x45f408u: goto label_45f408;
        case 0x45f40cu: goto label_45f40c;
        case 0x45f410u: goto label_45f410;
        case 0x45f414u: goto label_45f414;
        case 0x45f418u: goto label_45f418;
        case 0x45f41cu: goto label_45f41c;
        default: break;
    }

    ctx->pc = 0x45f1a0u;

label_45f1a0:
    // 0x45f1a0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x45f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_45f1a4:
    // 0x45f1a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45f1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_45f1a8:
    // 0x45f1a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45f1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45f1ac:
    // 0x45f1ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45f1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45f1b0:
    // 0x45f1b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45f1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45f1b4:
    // 0x45f1b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45f1b8:
    // 0x45f1b8: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x45f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_45f1bc:
    // 0x45f1bc: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x45f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
label_45f1c0:
    // 0x45f1c0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x45f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_45f1c4:
    // 0x45f1c4: 0x2463ed80  addiu       $v1, $v1, -0x1280
    ctx->pc = 0x45f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962560));
label_45f1c8:
    // 0x45f1c8: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x45f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_45f1cc:
    // 0x45f1cc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x45f1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45f1d0:
    // 0x45f1d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x45f1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45f1d4:
    // 0x45f1d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x45f1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45f1d8:
    // 0x45f1d8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x45f1d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_45f1dc:
    // 0x45f1dc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x45f1dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_45f1e0:
    // 0x45f1e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x45f1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_45f1e4:
    // 0x45f1e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45f1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f1e8:
    // 0x45f1e8: 0x8f82bfa4  lw          $v0, -0x405C($gp)
    ctx->pc = 0x45f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950820)));
label_45f1ec:
    // 0x45f1ec: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_45f1f0:
    if (ctx->pc == 0x45F1F0u) {
        ctx->pc = 0x45F1F4u;
        goto label_45f1f4;
    }
    ctx->pc = 0x45F1ECu;
    {
        const bool branch_taken_0x45f1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f1ec) {
            ctx->pc = 0x45F2DCu;
            goto label_45f2dc;
        }
    }
    ctx->pc = 0x45F1F4u;
label_45f1f4:
    // 0x45f1f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45f1f8:
    // 0x45f1f8: 0x1000007e  b           . + 4 + (0x7E << 2)
label_45f1fc:
    if (ctx->pc == 0x45F1FCu) {
        ctx->pc = 0x45F200u;
        goto label_45f200;
    }
    ctx->pc = 0x45F1F8u;
    {
        const bool branch_taken_0x45f1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f1f8) {
            ctx->pc = 0x45F3F4u;
            goto label_45f3f4;
        }
    }
    ctx->pc = 0x45F200u;
label_45f200:
    // 0x45f200: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45f200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45f204:
    // 0x45f204: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x45f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_45f208:
    // 0x45f208: 0x8c420180  lw          $v0, 0x180($v0)
    ctx->pc = 0x45f208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_45f20c:
    // 0x45f20c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45f210:
    if (ctx->pc == 0x45F210u) {
        ctx->pc = 0x45F214u;
        goto label_45f214;
    }
    ctx->pc = 0x45F20Cu;
    {
        const bool branch_taken_0x45f20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f20c) {
            ctx->pc = 0x45F2BCu;
            goto label_45f2bc;
        }
    }
    ctx->pc = 0x45F214u;
label_45f214:
    // 0x45f214: 0x8f82b19c  lw          $v0, -0x4E64($gp)
    ctx->pc = 0x45f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947228)));
label_45f218:
    // 0x45f218: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_45f21c:
    if (ctx->pc == 0x45F21Cu) {
        ctx->pc = 0x45F220u;
        goto label_45f220;
    }
    ctx->pc = 0x45F218u;
    {
        const bool branch_taken_0x45f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f218) {
            ctx->pc = 0x45F2BCu;
            goto label_45f2bc;
        }
    }
    ctx->pc = 0x45F220u;
label_45f220:
    // 0x45f220: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45f220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45f224:
    // 0x45f224: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f228:
    // 0x45f228: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x45f228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_45f22c:
    // 0x45f22c: 0xc115ee8  jal         func_457BA0
label_45f230:
    if (ctx->pc == 0x45F230u) {
        ctx->pc = 0x45F234u;
        goto label_45f234;
    }
    ctx->pc = 0x45F22Cu;
    SET_GPR_U32(ctx, 31, 0x45F234u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45F22Cu, 0x45F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F234u;
label_45f234:
    // 0x45f234: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45f238:
    if (ctx->pc == 0x45F238u) {
        ctx->pc = 0x45F23Cu;
        goto label_45f23c;
    }
    ctx->pc = 0x45F234u;
    {
        const bool branch_taken_0x45f234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f234) {
            ctx->pc = 0x45F2BCu;
            goto label_45f2bc;
        }
    }
    ctx->pc = 0x45F23Cu;
label_45f23c:
    // 0x45f23c: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x45f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_45f240:
    // 0x45f240: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45f244:
    if (ctx->pc == 0x45F244u) {
        ctx->pc = 0x45F248u;
        goto label_45f248;
    }
    ctx->pc = 0x45F240u;
    {
        const bool branch_taken_0x45f240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f240) {
            ctx->pc = 0x45F2BCu;
            goto label_45f2bc;
        }
    }
    ctx->pc = 0x45F248u;
label_45f248:
    // 0x45f248: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x45f248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_45f24c:
    // 0x45f24c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45f24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45f250:
    // 0x45f250: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x45f250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_45f254:
    // 0x45f254: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45f254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45f258:
    // 0x45f258: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x45f258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_45f25c:
    // 0x45f25c: 0x24080189  addiu       $t0, $zero, 0x189
    ctx->pc = 0x45f25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 393));
label_45f260:
    // 0x45f260: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45f260u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45f264:
    // 0x45f264: 0x2529ed90  addiu       $t1, $t1, -0x1270
    ctx->pc = 0x45f264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962576));
label_45f268:
    // 0x45f268: 0xc113940  jal         func_44E500
label_45f26c:
    if (ctx->pc == 0x45F26Cu) {
        ctx->pc = 0x45F270u;
        goto label_45f270;
    }
    ctx->pc = 0x45F268u;
    SET_GPR_U32(ctx, 31, 0x45F270u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45F268u, 0x45F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F270u;
label_45f270:
    // 0x45f270: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x45f270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_45f274:
    // 0x45f274: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45f274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45f278:
    // 0x45f278: 0x24a5edb0  addiu       $a1, $a1, -0x1250
    ctx->pc = 0x45f278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962608));
label_45f27c:
    // 0x45f27c: 0xc115c24  jal         func_457090
label_45f280:
    if (ctx->pc == 0x45F280u) {
        ctx->pc = 0x45F284u;
        goto label_45f284;
    }
    ctx->pc = 0x45F27Cu;
    SET_GPR_U32(ctx, 31, 0x45F284u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45F27Cu, 0x45F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F284u;
label_45f284:
    // 0x45f284: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x45f284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_45f288:
    // 0x45f288: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x45f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_45f28c:
    // 0x45f28c: 0x40f809  jalr        $v0
label_45f290:
    if (ctx->pc == 0x45F290u) {
        ctx->pc = 0x45F294u;
        goto label_45f294;
    }
    ctx->pc = 0x45F28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45F294u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F28Cu, 0x45F294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45F294u;
label_45f294:
    // 0x45f294: 0xaf82b19c  sw          $v0, -0x4E64($gp)
    ctx->pc = 0x45f294u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947228), GPR_U32(ctx, 2));
label_45f298:
    // 0x45f298: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45f298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_45f29c:
    // 0x45f29c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45f2a0:
    if (ctx->pc == 0x45F2A0u) {
        ctx->pc = 0x45F2A4u;
        goto label_45f2a4;
    }
    ctx->pc = 0x45F29Cu;
    {
        const bool branch_taken_0x45f29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f29c) {
            ctx->pc = 0x45F2ACu;
            goto label_45f2ac;
        }
    }
    ctx->pc = 0x45F2A4u;
label_45f2a4:
    // 0x45f2a4: 0xd  break       0
    ctx->pc = 0x45f2a4u;
    runtime->handleBreak(rdram, ctx);
label_45f2a8:
    // 0x45f2a8: 0x0  nop
    ctx->pc = 0x45f2a8u;
    // NOP
label_45f2ac:
    // 0x45f2ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x45f2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_45f2b0:
    // 0x45f2b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45f2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45f2b4:
    // 0x45f2b4: 0xc11392c  jal         func_44E4B0
label_45f2b8:
    if (ctx->pc == 0x45F2B8u) {
        ctx->pc = 0x45F2BCu;
        goto label_45f2bc;
    }
    ctx->pc = 0x45F2B4u;
    SET_GPR_U32(ctx, 31, 0x45F2BCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45F2B4u, 0x45F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F2BCu;
label_45f2bc:
    // 0x45f2bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45f2c0:
    // 0x45f2c0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x45f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_45f2c4:
    // 0x45f2c4: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x45f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_45f2c8:
    // 0x45f2c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45f2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f2cc:
    // 0x45f2cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45f2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f2d0:
    // 0x45f2d0: 0xc11655c  jal         func_459570
label_45f2d4:
    if (ctx->pc == 0x45F2D4u) {
        ctx->pc = 0x45F2D8u;
        goto label_45f2d8;
    }
    ctx->pc = 0x45F2D0u;
    SET_GPR_U32(ctx, 31, 0x45F2D8u);
    ctx->pc = 0x459570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459570u, 0x45F2D0u, 0x45F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F2D8u;
label_45f2d8:
    // 0x45f2d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45f2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45f2dc:
    // 0x45f2dc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_45f2e0:
    // 0x45f2e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x45f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_45f2e4:
    // 0x45f2e4: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x45f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_45f2e8:
    // 0x45f2e8: 0x2785b198  addiu       $a1, $gp, -0x4E68
    ctx->pc = 0x45f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947224));
label_45f2ec:
    // 0x45f2ec: 0xc0bc574  jal         func_2F15D0
label_45f2f0:
    if (ctx->pc == 0x45F2F0u) {
        ctx->pc = 0x45F2F4u;
        goto label_45f2f4;
    }
    ctx->pc = 0x45F2ECu;
    SET_GPR_U32(ctx, 31, 0x45F2F4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x45F2ECu, 0x45F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F2F4u;
label_45f2f4:
    // 0x45f2f4: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_45f2f8:
    if (ctx->pc == 0x45F2F8u) {
        ctx->pc = 0x45F2FCu;
        goto label_45f2fc;
    }
    ctx->pc = 0x45F2F4u;
    {
        const bool branch_taken_0x45f2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f2f4) {
            ctx->pc = 0x45F200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45f200;
        }
    }
    ctx->pc = 0x45F2FCu;
label_45f2fc:
    // 0x45f2fc: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x45f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45f300:
    // 0x45f300: 0xc0bc60c  jal         func_2F1830
label_45f304:
    if (ctx->pc == 0x45F304u) {
        ctx->pc = 0x45F308u;
        goto label_45f308;
    }
    ctx->pc = 0x45F300u;
    SET_GPR_U32(ctx, 31, 0x45F308u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x45F300u, 0x45F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F308u;
label_45f308:
    // 0x45f308: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x45f308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_45f30c:
    // 0x45f30c: 0x2c410004  sltiu       $at, $v0, 0x4
    ctx->pc = 0x45f30cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_45f310:
    // 0x45f310: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_45f314:
    if (ctx->pc == 0x45F314u) {
        ctx->pc = 0x45F318u;
        goto label_45f318;
    }
    ctx->pc = 0x45F310u;
    {
        const bool branch_taken_0x45f310 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f310) {
            ctx->pc = 0x45F334u;
            goto label_45f334;
        }
    }
    ctx->pc = 0x45F318u;
label_45f318:
    // 0x45f318: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x45f318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45f31c:
    // 0x45f31c: 0xc0bc60c  jal         func_2F1830
label_45f320:
    if (ctx->pc == 0x45F320u) {
        ctx->pc = 0x45F324u;
        goto label_45f324;
    }
    ctx->pc = 0x45F31Cu;
    SET_GPR_U32(ctx, 31, 0x45F324u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x45F31Cu, 0x45F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F324u;
label_45f324:
    // 0x45f324: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x45f324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45f328:
    // 0x45f328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45f328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f32c:
    // 0x45f32c: 0x10000031  b           . + 4 + (0x31 << 2)
label_45f330:
    if (ctx->pc == 0x45F330u) {
        ctx->pc = 0x45F334u;
        goto label_45f334;
    }
    ctx->pc = 0x45F32Cu;
    {
        const bool branch_taken_0x45f32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f32c) {
            ctx->pc = 0x45F3F4u;
            goto label_45f3f4;
        }
    }
    ctx->pc = 0x45F334u;
label_45f334:
    // 0x45f334: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x45f334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_45f338:
    // 0x45f338: 0xc0bc60c  jal         func_2F1830
label_45f33c:
    if (ctx->pc == 0x45F33Cu) {
        ctx->pc = 0x45F340u;
        goto label_45f340;
    }
    ctx->pc = 0x45F338u;
    SET_GPR_U32(ctx, 31, 0x45F340u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x45F338u, 0x45F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F340u;
label_45f340:
    // 0x45f340: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x45f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_45f344:
    // 0x45f344: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x45f344u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_45f348:
    // 0x45f348: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_45f34c:
    if (ctx->pc == 0x45F34Cu) {
        ctx->pc = 0x45F350u;
        goto label_45f350;
    }
    ctx->pc = 0x45F348u;
    {
        const bool branch_taken_0x45f348 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f348) {
            ctx->pc = 0x45F36Cu;
            goto label_45f36c;
        }
    }
    ctx->pc = 0x45F350u;
label_45f350:
    // 0x45f350: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x45f350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_45f354:
    // 0x45f354: 0xc0bc60c  jal         func_2F1830
label_45f358:
    if (ctx->pc == 0x45F358u) {
        ctx->pc = 0x45F35Cu;
        goto label_45f35c;
    }
    ctx->pc = 0x45F354u;
    SET_GPR_U32(ctx, 31, 0x45F35Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x45F354u, 0x45F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F35Cu;
label_45f35c:
    // 0x45f35c: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x45f35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_45f360:
    // 0x45f360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45f360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f364:
    // 0x45f364: 0x10000023  b           . + 4 + (0x23 << 2)
label_45f368:
    if (ctx->pc == 0x45F368u) {
        ctx->pc = 0x45F36Cu;
        goto label_45f36c;
    }
    ctx->pc = 0x45F364u;
    {
        const bool branch_taken_0x45f364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f364) {
            ctx->pc = 0x45F3F4u;
            goto label_45f3f4;
        }
    }
    ctx->pc = 0x45F36Cu;
label_45f36c:
    // 0x45f36c: 0x2784bfb8  addiu       $a0, $gp, -0x4048
    ctx->pc = 0x45f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_45f370:
    // 0x45f370: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x45f370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_45f374:
    // 0x45f374: 0xc0bc5c6  jal         func_2F1718
label_45f378:
    if (ctx->pc == 0x45F378u) {
        ctx->pc = 0x45F37Cu;
        goto label_45f37c;
    }
    ctx->pc = 0x45F374u;
    SET_GPR_U32(ctx, 31, 0x45F37Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45F374u, 0x45F37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F37Cu;
label_45f37c:
    // 0x45f37c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_45f380:
    // 0x45f380: 0x24844de8  addiu       $a0, $a0, 0x4DE8
    ctx->pc = 0x45f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19944));
label_45f384:
    // 0x45f384: 0x8fa501a0  lw          $a1, 0x1A0($sp)
    ctx->pc = 0x45f384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_45f388:
    // 0x45f388: 0xc0bc5c6  jal         func_2F1718
label_45f38c:
    if (ctx->pc == 0x45F38Cu) {
        ctx->pc = 0x45F390u;
        goto label_45f390;
    }
    ctx->pc = 0x45F388u;
    SET_GPR_U32(ctx, 31, 0x45F390u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x45F388u, 0x45F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F390u;
label_45f390:
    // 0x45f390: 0xc0c39fa  jal         func_30E7E8
label_45f394:
    if (ctx->pc == 0x45F394u) {
        ctx->pc = 0x45F398u;
        goto label_45f398;
    }
    ctx->pc = 0x45F390u;
    SET_GPR_U32(ctx, 31, 0x45F398u);
    ctx->pc = 0x30E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7E8u, 0x45F390u, 0x45F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F398u;
label_45f398:
    // 0x45f398: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x45f398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_45f39c:
    // 0x45f39c: 0x8f82bfb4  lw          $v0, -0x404C($gp)
    ctx->pc = 0x45f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_45f3a0:
    // 0x45f3a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_45f3a4:
    if (ctx->pc == 0x45F3A4u) {
        ctx->pc = 0x45F3A8u;
        goto label_45f3a8;
    }
    ctx->pc = 0x45F3A0u;
    {
        const bool branch_taken_0x45f3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45f3a0) {
            ctx->pc = 0x45F3D0u;
            goto label_45f3d0;
        }
    }
    ctx->pc = 0x45F3A8u;
label_45f3a8:
    // 0x45f3a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x45f3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f3ac:
    // 0x45f3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45f3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f3b0:
    // 0x45f3b0: 0x2786bfb4  addiu       $a2, $gp, -0x404C
    ctx->pc = 0x45f3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950836));
label_45f3b4:
    // 0x45f3b4: 0xc0c3c8e  jal         func_30F238
label_45f3b8:
    if (ctx->pc == 0x45F3B8u) {
        ctx->pc = 0x45F3BCu;
        goto label_45f3bc;
    }
    ctx->pc = 0x45F3B4u;
    SET_GPR_U32(ctx, 31, 0x45F3BCu);
    ctx->pc = 0x30F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F238u, 0x45F3B4u, 0x45F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F3BCu;
label_45f3bc:
    // 0x45f3bc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x45f3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45f3c0:
    // 0x45f3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45f3c4:
    // 0x45f3c4: 0xaf82bfa4  sw          $v0, -0x405C($gp)
    ctx->pc = 0x45f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950820), GPR_U32(ctx, 2));
label_45f3c8:
    // 0x45f3c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_45f3cc:
    if (ctx->pc == 0x45F3CCu) {
        ctx->pc = 0x45F3D0u;
        goto label_45f3d0;
    }
    ctx->pc = 0x45F3C8u;
    {
        const bool branch_taken_0x45f3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f3c8) {
            ctx->pc = 0x45F3D4u;
            goto label_45f3d4;
        }
    }
    ctx->pc = 0x45F3D0u;
label_45f3d0:
    // 0x45f3d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45f3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45f3d4:
    // 0x45f3d4: 0xc1180d8  jal         func_460360
label_45f3d8:
    if (ctx->pc == 0x45F3D8u) {
        ctx->pc = 0x45F3DCu;
        goto label_45f3dc;
    }
    ctx->pc = 0x45F3D4u;
    SET_GPR_U32(ctx, 31, 0x45F3DCu);
    ctx->pc = 0x460360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460360u, 0x45F3D4u, 0x45F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F3DCu;
label_45f3dc:
    // 0x45f3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45f3e0:
    // 0x45f3e0: 0xaf82bfa0  sw          $v0, -0x4060($gp)
    ctx->pc = 0x45f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950816), GPR_U32(ctx, 2));
label_45f3e4:
    // 0x45f3e4: 0xc116654  jal         func_459950
label_45f3e8:
    if (ctx->pc == 0x45F3E8u) {
        ctx->pc = 0x45F3ECu;
        goto label_45f3ec;
    }
    ctx->pc = 0x45F3E4u;
    SET_GPR_U32(ctx, 31, 0x45F3ECu);
    ctx->pc = 0x459950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459950u, 0x45F3E4u, 0x45F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F3ECu;
label_45f3ec:
    // 0x45f3ec: 0xff82bfc8  sd          $v0, -0x4038($gp)
    ctx->pc = 0x45f3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950856), GPR_U64(ctx, 2));
label_45f3f0:
    // 0x45f3f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x45f3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45f3f4:
    // 0x45f3f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45f3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_45f3f8:
    // 0x45f3f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45f3f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45f3fc:
    // 0x45f3fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45f3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45f400:
    // 0x45f400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45f400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45f404:
    // 0x45f404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45f404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45f408:
    // 0x45f408: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x45f408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_45f40c:
    // 0x45f40c: 0x3e00008  jr          $ra
label_45f410:
    if (ctx->pc == 0x45F410u) {
        ctx->pc = 0x45F414u;
        goto label_45f414;
    }
    ctx->pc = 0x45F40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F414u;
label_45f414:
    // 0x45f414: 0x0  nop
    ctx->pc = 0x45f414u;
    // NOP
label_45f418:
    // 0x45f418: 0x0  nop
    ctx->pc = 0x45f418u;
    // NOP
label_45f41c:
    // 0x45f41c: 0x0  nop
    ctx->pc = 0x45f41cu;
    // NOP
    ctx->pc = 0x45f420u;
}
