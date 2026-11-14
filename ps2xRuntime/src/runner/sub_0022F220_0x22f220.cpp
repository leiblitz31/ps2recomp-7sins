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

// Function: sub_0022F220
// Address: 0x22f220 - 0x22f540
void sub_0022F220_0x22f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F220_0x22f220");
#endif

    switch (ctx->pc) {
        case 0x22f284u: goto label_22f284;
        case 0x22f28cu: goto label_22f28c;
        case 0x22f29cu: goto label_22f29c;
        case 0x22f2acu: goto label_22f2ac;
        case 0x22f30cu: goto label_22f30c;
        case 0x22f400u: goto label_22f400;
        case 0x22f410u: goto label_22f410;
        case 0x22f464u: goto label_22f464;
        case 0x22f478u: goto label_22f478;
        case 0x22f488u: goto label_22f488;
        case 0x22f4c0u: goto label_22f4c0;
        case 0x22f4f0u: goto label_22f4f0;
        case 0x22f504u: goto label_22f504;
        case 0x22f514u: goto label_22f514;
        default: break;
    }

    ctx->pc = 0x22f220u;

    // 0x22f220: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x22f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x22f224: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22f228: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22f228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22f22c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22f22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22f230: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22f230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22f234: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22f234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22f238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22f238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22f23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22f23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22f240: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x22f240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x22f244: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x22f244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x22f248: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x22f248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x22f24c: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x22f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
    // 0x22f250: 0xafa800d0  sw          $t0, 0xD0($sp)
    ctx->pc = 0x22f250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 8));
    // 0x22f254: 0xafa900e0  sw          $t1, 0xE0($sp)
    ctx->pc = 0x22f254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 9));
    // 0x22f258: 0xafaa00f0  sw          $t2, 0xF0($sp)
    ctx->pc = 0x22f258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 10));
    // 0x22f25c: 0xa3ab0100  sb          $t3, 0x100($sp)
    ctx->pc = 0x22f25cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 11));
    // 0x22f260: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x22f260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x22f264: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x22f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22f268: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x22f268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f26c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x22F26Cu;
    {
        const bool branch_taken_0x22f26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f26c) {
            ctx->pc = 0x22F324u;
            goto label_22f324;
        }
    }
    ctx->pc = 0x22F274u;
    // 0x22f274: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x22f274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x22f278: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x22f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
    // 0x22f27c: 0xc107156  jal         func_41C558
    ctx->pc = 0x22F27Cu;
    SET_GPR_U32(ctx, 31, 0x22F284u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x22F27Cu, 0x22F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F284u;
label_22f284:
    // 0x22f284: 0xc1080e4  jal         func_420390
    ctx->pc = 0x22F284u;
    SET_GPR_U32(ctx, 31, 0x22F28Cu);
    ctx->pc = 0x420390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420390u, 0x22F284u, 0x22F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F28Cu;
label_22f28c:
    // 0x22f28c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22f28cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f290: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f294: 0xc1080dc  jal         func_420370
    ctx->pc = 0x22F294u;
    SET_GPR_U32(ctx, 31, 0x22F29Cu);
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x22F294u, 0x22F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F29Cu;
label_22f29c:
    // 0x22f29c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x22f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22f2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f2a4: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x22F2A4u;
    SET_GPR_U32(ctx, 31, 0x22F2ACu);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x22F2A4u, 0x22F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F2ACu;
label_22f2ac:
    // 0x22f2ac: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x22f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x22f2b0: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x22f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22f2b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22F2B4u;
    {
        const bool branch_taken_0x22f2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f2b4) {
            ctx->pc = 0x22F300u;
            goto label_22f300;
        }
    }
    ctx->pc = 0x22F2BCu;
    // 0x22f2bc: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x22f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22f2c0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x22f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x22f2c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22f2c8: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x22f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x22f2cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f2d0: 0x34433300  ori         $v1, $v0, 0x3300
    ctx->pc = 0x22f2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13056);
    // 0x22f2d4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x22f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22f2d8: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x22f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x22f2dc: 0x27b3008c  addiu       $s3, $sp, 0x8C
    ctx->pc = 0x22f2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x22f2e0: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x22f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22f2e4: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x22f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x22f2e8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x22f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x22f2ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x22f2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22f2f0: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x22f2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x22f2f4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x22f2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22f2f8: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x22f2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x22f2fc: 0x27b2008c  addiu       $s2, $sp, 0x8C
    ctx->pc = 0x22f2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_22f300:
    // 0x22f300: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22f300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f304: 0xc1080dc  jal         func_420370
    ctx->pc = 0x22F304u;
    SET_GPR_U32(ctx, 31, 0x22F30Cu);
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x22F304u, 0x22F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F30Cu;
label_22f30c:
    // 0x22f30c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x22f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22f310: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F310u;
    {
        const bool branch_taken_0x22f310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f310) {
            ctx->pc = 0x22F324u;
            goto label_22f324;
        }
    }
    ctx->pc = 0x22F318u;
    // 0x22f318: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22f31c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x22F31Cu;
    {
        const bool branch_taken_0x22f31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f31c) {
            ctx->pc = 0x22F518u;
            goto label_22f518;
        }
    }
    ctx->pc = 0x22F324u;
label_22f324:
    // 0x22f324: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x22f324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22f328: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x22f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x22f32c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x22f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f330: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x22f330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f334: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x22f334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x22f338: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x22f338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x22f33c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x22f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22f340: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f344: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F344u;
    {
        const bool branch_taken_0x22f344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f344) {
            ctx->pc = 0x22F368u;
            goto label_22f368;
        }
    }
    ctx->pc = 0x22F34Cu;
    // 0x22f34c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x22f34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f350: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x22f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22f354: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x22f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f358: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22f358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22f35c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22f35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22f360: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22F360u;
    {
        const bool branch_taken_0x22f360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f360) {
            ctx->pc = 0x22F398u;
            goto label_22f398;
        }
    }
    ctx->pc = 0x22F368u;
label_22f368:
    // 0x22f368: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x22f368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22f36c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x22f36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x22f370: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F370u;
    {
        const bool branch_taken_0x22f370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f370) {
            ctx->pc = 0x22F398u;
            goto label_22f398;
        }
    }
    ctx->pc = 0x22F378u;
    // 0x22f378: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x22f378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22f37c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22f380: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f384: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x22f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f388: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x22f388u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x22f38c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x22f38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f390: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f394: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22f394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_22f398:
    // 0x22f398: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x22f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22f39c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22f39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22f3a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F3A0u;
    {
        const bool branch_taken_0x22f3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3a0) {
            ctx->pc = 0x22F3C4u;
            goto label_22f3c4;
        }
    }
    ctx->pc = 0x22F3A8u;
    // 0x22f3a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x22f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22f3ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x22f3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f3b0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x22f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f3b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f3b8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x22f3bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22F3BCu;
    {
        const bool branch_taken_0x22f3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3bc) {
            ctx->pc = 0x22F3F4u;
            goto label_22f3f4;
        }
    }
    ctx->pc = 0x22F3C4u;
label_22f3c4:
    // 0x22f3c4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x22f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22f3c8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22f3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x22f3cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F3CCu;
    {
        const bool branch_taken_0x22f3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f3cc) {
            ctx->pc = 0x22F3F4u;
            goto label_22f3f4;
        }
    }
    ctx->pc = 0x22F3D4u;
    // 0x22f3d4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x22f3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22f3d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x22f3dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f3e0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x22f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f3e4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x22f3e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x22f3e8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x22f3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f3ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22f3ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22f3f0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x22f3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_22f3f4:
    // 0x22f3f4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x22f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22f3f8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22F3F8u;
    SET_GPR_U32(ctx, 31, 0x22F400u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22F3F8u, 0x22F400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F400u;
label_22f400:
    // 0x22f400: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x22f400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22f404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22f404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f408: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22F408u;
    SET_GPR_U32(ctx, 31, 0x22F410u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22F408u, 0x22F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F410u;
label_22f410:
    // 0x22f410: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22f410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f414: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x22F414u;
    {
        const bool branch_taken_0x22f414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f414) {
            ctx->pc = 0x22F468u;
            goto label_22f468;
        }
    }
    ctx->pc = 0x22F41Cu;
    // 0x22f41c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22f420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22f420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22f424: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x22f424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22f428: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x22f428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22f42c: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x22f42cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22f430: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22f434: 0x93a20100  lbu         $v0, 0x100($sp)
    ctx->pc = 0x22f434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x22f438: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x22f438u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f43c: 0x93a20110  lbu         $v0, 0x110($sp)
    ctx->pc = 0x22f43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x22f440: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x22f440u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22f444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f448: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x22f448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22f44c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x22f44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22f450: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x22f450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x22f454: 0x8d080008  lw          $t0, 0x8($t0)
    ctx->pc = 0x22f454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x22f458: 0x8c69000c  lw          $t1, 0xC($v1)
    ctx->pc = 0x22f458u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22f45c: 0xc11bda8  jal         func_46F6A0
    ctx->pc = 0x22F45Cu;
    SET_GPR_U32(ctx, 31, 0x22F464u);
    ctx->pc = 0x46F6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F6A0u, 0x22F45Cu, 0x22F464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F464u;
label_22f464:
    // 0x22f464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22f464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f468:
    // 0x22f468: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x22f468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f46c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22f470: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22F470u;
    SET_GPR_U32(ctx, 31, 0x22F478u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22F470u, 0x22F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F478u;
label_22f478:
    // 0x22f478: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x22f478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22f47c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22f47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f480: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22F480u;
    SET_GPR_U32(ctx, 31, 0x22F488u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22F480u, 0x22F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F488u;
label_22f488:
    // 0x22f488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f48c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x22F48Cu;
    {
        const bool branch_taken_0x22f48c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f48c) {
            ctx->pc = 0x22F4C4u;
            goto label_22f4c4;
        }
    }
    ctx->pc = 0x22F494u;
    // 0x22f494: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x22f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22f498: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x22f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x22f49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f4a4: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x22f4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f4a8: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x22f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22f4ac: 0xc46e0000  lwc1        $f14, 0x0($v1)
    ctx->pc = 0x22f4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x22f4b0: 0xc44f0004  lwc1        $f15, 0x4($v0)
    ctx->pc = 0x22f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x22f4b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22f4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4b8: 0xc11d1d4  jal         func_474750
    ctx->pc = 0x22F4B8u;
    SET_GPR_U32(ctx, 31, 0x22F4C0u);
    ctx->pc = 0x474750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474750u, 0x22F4B8u, 0x22F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4C0u;
label_22f4c0:
    // 0x22f4c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f4c4:
    // 0x22f4c4: 0xafb00070  sw          $s0, 0x70($sp)
    ctx->pc = 0x22f4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 16));
    // 0x22f4c8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x22f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x22f4cc: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x22f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x22f4d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x22f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x22f4d4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x22f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x22f4d8: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x22f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22f4dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F4DCu;
    {
        const bool branch_taken_0x22f4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4dc) {
            ctx->pc = 0x22F4F0u;
            goto label_22f4f0;
        }
    }
    ctx->pc = 0x22F4E4u;
    // 0x22f4e4: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x22f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x22f4e8: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x22F4E8u;
    SET_GPR_U32(ctx, 31, 0x22F4F0u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x22F4E8u, 0x22F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4F0u;
label_22f4f0:
    // 0x22f4f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x22f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22f4f4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x22f4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x22f4f8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x22f4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22f4fc: 0xc08bd60  jal         func_22F580
    ctx->pc = 0x22F4FCu;
    SET_GPR_U32(ctx, 31, 0x22F504u);
    ctx->pc = 0x22F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F580u, 0x22F4FCu, 0x22F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F504u;
label_22f504:
    // 0x22f504: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x22f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22f508: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x22f508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x22f50c: 0xc08bd50  jal         func_22F540
    ctx->pc = 0x22F50Cu;
    SET_GPR_U32(ctx, 31, 0x22F514u);
    ctx->pc = 0x22F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F540u, 0x22F50Cu, 0x22F514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F514u;
label_22f514:
    // 0x22f514: 0x24420fff  addiu       $v0, $v0, 0xFFF
    ctx->pc = 0x22f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
label_22f518:
    // 0x22f518: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22f518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f51c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22f51cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f520: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22f520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f524: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22f524u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f528: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22f528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f52c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f534: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x22f534u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x22f538: 0x3e00008  jr          $ra
    ctx->pc = 0x22F538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F540u;
}
