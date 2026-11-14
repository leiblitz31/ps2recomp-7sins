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

// Function: sub_001CE310
// Address: 0x1ce310 - 0x1ce560
void sub_001CE310_0x1ce310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE310_0x1ce310");
#endif

    switch (ctx->pc) {
        case 0x1ce340u: goto label_1ce340;
        case 0x1ce374u: goto label_1ce374;
        case 0x1ce398u: goto label_1ce398;
        case 0x1ce3b8u: goto label_1ce3b8;
        case 0x1ce3ccu: goto label_1ce3cc;
        case 0x1ce410u: goto label_1ce410;
        case 0x1ce424u: goto label_1ce424;
        case 0x1ce43cu: goto label_1ce43c;
        case 0x1ce4d0u: goto label_1ce4d0;
        case 0x1ce510u: goto label_1ce510;
        case 0x1ce53cu: goto label_1ce53c;
        default: break;
    }

    ctx->pc = 0x1ce310u;

    // 0x1ce310: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ce310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ce314: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce318: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ce318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ce31c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ce31cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1ce320: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1ce320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1ce324: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1ce324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1ce328: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1ce328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1ce32c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ce330: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ce330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce334: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE334u;
    {
        const bool branch_taken_0x1ce334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce334) {
            ctx->pc = 0x1CE35Cu;
            goto label_1ce35c;
        }
    }
    ctx->pc = 0x1CE33Cu;
    // 0x1ce33c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1ce33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1ce340:
    // 0x1ce340: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1ce340u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce344: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ce344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ce348: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ce348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ce34c: 0x0  nop
    ctx->pc = 0x1ce34cu;
    // NOP
    // 0x1ce350: 0x0  nop
    ctx->pc = 0x1ce350u;
    // NOP
    // 0x1ce354: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CE354u;
    {
        const bool branch_taken_0x1ce354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce354) {
            ctx->pc = 0x1CE340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce340;
        }
    }
    ctx->pc = 0x1CE35Cu;
label_1ce35c:
    // 0x1ce35c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ce35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce360: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ce360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce364: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1ce364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1ce368: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce36c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CE36Cu;
    SET_GPR_U32(ctx, 31, 0x1CE374u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CE36Cu, 0x1CE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE374u;
label_1ce374:
    // 0x1ce374: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce378: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ce378u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce37c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ce37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ce380: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ce380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce384: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ce384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce388: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1ce388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1ce38c: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce390: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CE390u;
    SET_GPR_U32(ctx, 31, 0x1CE398u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CE390u, 0x1CE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE398u;
label_1ce398:
    // 0x1ce398: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ce398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce39c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ce39cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce3a0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1ce3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ce3a4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1ce3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ce3a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ce3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ce3ac: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ce3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ce3b0: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x1CE3B0u;
    SET_GPR_U32(ctx, 31, 0x1CE3B8u);
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x1CE3B0u, 0x1CE3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3B8u;
label_1ce3b8:
    // 0x1ce3b8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1ce3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1ce3bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ce3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce3c0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE3C0u;
    {
        const bool branch_taken_0x1ce3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce3c0) {
            ctx->pc = 0x1CE3E8u;
            goto label_1ce3e8;
        }
    }
    ctx->pc = 0x1CE3C8u;
    // 0x1ce3c8: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1ce3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1ce3cc:
    // 0x1ce3cc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1ce3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce3d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ce3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ce3d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ce3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ce3d8: 0x0  nop
    ctx->pc = 0x1ce3d8u;
    // NOP
    // 0x1ce3dc: 0x0  nop
    ctx->pc = 0x1ce3dcu;
    // NOP
    // 0x1ce3e0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CE3E0u;
    {
        const bool branch_taken_0x1ce3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce3e0) {
            ctx->pc = 0x1CE3CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce3cc;
        }
    }
    ctx->pc = 0x1CE3E8u;
label_1ce3e8:
    // 0x1ce3e8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1ce3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce3ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ce3ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ce3f0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1ce3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ce3f4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1ce3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce3f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1ce3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1ce3fc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1ce3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ce400: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ce400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce404: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x1ce404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce408: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1CE408u;
    SET_GPR_U32(ctx, 31, 0x1CE410u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CE408u, 0x1CE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE410u;
label_1ce410:
    // 0x1ce410: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1ce410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1ce414: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ce414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce418: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x1ce418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce41c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1CE41Cu;
    SET_GPR_U32(ctx, 31, 0x1CE424u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1CE41Cu, 0x1CE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE424u;
label_1ce424:
    // 0x1ce424: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1ce424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ce428: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ce428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce42c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1ce42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce430: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE430u;
    {
        const bool branch_taken_0x1ce430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce430) {
            ctx->pc = 0x1CE458u;
            goto label_1ce458;
        }
    }
    ctx->pc = 0x1CE438u;
    // 0x1ce438: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1ce438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1ce43c:
    // 0x1ce43c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1ce43cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce440: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ce444: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ce444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ce448: 0x0  nop
    ctx->pc = 0x1ce448u;
    // NOP
    // 0x1ce44c: 0x0  nop
    ctx->pc = 0x1ce44cu;
    // NOP
    // 0x1ce450: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CE450u;
    {
        const bool branch_taken_0x1ce450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce450) {
            ctx->pc = 0x1CE43Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ce43c;
        }
    }
    ctx->pc = 0x1CE458u;
label_1ce458:
    // 0x1ce458: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x1ce458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce45c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1ce45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce460: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1ce460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce464: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1ce464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce468: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ce468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ce46c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce46cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce470: 0x0  nop
    ctx->pc = 0x1ce470u;
    // NOP
    // 0x1ce474: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ce474u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ce478: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ce478u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ce47c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ce47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ce480: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x1ce480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce484: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1ce484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce488: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1ce488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce48c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1ce48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce490: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ce490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ce494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce498: 0x0  nop
    ctx->pc = 0x1ce498u;
    // NOP
    // 0x1ce49c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ce49cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ce4a0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ce4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ce4a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1ce4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ce4a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ce4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ce4ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ce4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce4b0: 0xc455004c  lwc1        $f21, 0x4C($v0)
    ctx->pc = 0x1ce4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce4b4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1ce4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce4b8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ce4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce4bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ce4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce4c0: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1ce4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1ce4c4: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce4c8: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CE4C8u;
    SET_GPR_U32(ctx, 31, 0x1CE4D0u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CE4C8u, 0x1CE4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4D0u;
label_1ce4d0:
    // 0x1ce4d0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ce4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce4d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce4d8: 0x0  nop
    ctx->pc = 0x1ce4d8u;
    // NOP
    // 0x1ce4dc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ce4dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ce4e0: 0x4614a81c  madd.s      $f0, $f21, $f20
    ctx->pc = 0x1ce4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[21], ctx->f[20]));
    // 0x1ce4e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ce4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce4e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ce4ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ce4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce4f0: 0xc455004c  lwc1        $f21, 0x4C($v0)
    ctx->pc = 0x1ce4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce4f4: 0xc7b40024  lwc1        $f20, 0x24($sp)
    ctx->pc = 0x1ce4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce4f8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ce4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce4fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ce4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce500: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1ce500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1ce504: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x1ce504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ce508: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1CE508u;
    SET_GPR_U32(ctx, 31, 0x1CE510u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1CE508u, 0x1CE510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE510u;
label_1ce510:
    // 0x1ce510: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ce510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ce514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce518: 0x0  nop
    ctx->pc = 0x1ce518u;
    // NOP
    // 0x1ce51c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ce51cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ce520: 0x4614a81c  madd.s      $f0, $f21, $f20
    ctx->pc = 0x1ce520u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[21], ctx->f[20]));
    // 0x1ce524: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ce524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce528: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ce528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ce52c: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1ce52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce530: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x1ce530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce534: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x1CE534u;
    SET_GPR_U32(ctx, 31, 0x1CE53Cu);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x1CE534u, 0x1CE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE53Cu;
label_1ce53c:
    // 0x1ce53c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1ce53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ce540: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ce540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ce544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce548: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1ce548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce54c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ce54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce550: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1ce550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ce554: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE55Cu;
    // 0x1ce55c: 0x0  nop
    ctx->pc = 0x1ce55cu;
    // NOP
    ctx->pc = 0x1ce560u;
}
