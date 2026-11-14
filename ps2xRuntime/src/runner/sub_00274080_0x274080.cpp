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

// Function: sub_00274080
// Address: 0x274080 - 0x274210
void sub_00274080_0x274080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274080_0x274080");
#endif

    switch (ctx->pc) {
        case 0x2740b8u: goto label_2740b8;
        case 0x2740ccu: goto label_2740cc;
        case 0x2740e4u: goto label_2740e4;
        case 0x2740f0u: goto label_2740f0;
        case 0x2740fcu: goto label_2740fc;
        case 0x27410cu: goto label_27410c;
        case 0x27411cu: goto label_27411c;
        case 0x274128u: goto label_274128;
        case 0x274148u: goto label_274148;
        case 0x274160u: goto label_274160;
        case 0x274174u: goto label_274174;
        case 0x2741b0u: goto label_2741b0;
        case 0x2741dcu: goto label_2741dc;
        default: break;
    }

    ctx->pc = 0x274080u;

    // 0x274080: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x274080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x274084: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x274084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x274088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x274088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27408c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x274090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x274094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27409c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x27409cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2740a0: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2740a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2740a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2740a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2740a8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2740a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2740ac: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2740acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2740b0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2740B0u;
    SET_GPR_U32(ctx, 31, 0x2740B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2740B0u, 0x2740B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740B8u;
label_2740b8:
    // 0x2740b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2740b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2740bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740c0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2740c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2740c4: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x2740C4u;
    SET_GPR_U32(ctx, 31, 0x2740CCu);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x2740C4u, 0x2740CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740CCu;
label_2740cc:
    // 0x2740cc: 0x3c0243de  lui         $v0, 0x43DE
    ctx->pc = 0x2740ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17374 << 16));
    // 0x2740d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2740d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2740d4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2740d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2740d8: 0x240504f1  addiu       $a1, $zero, 0x4F1
    ctx->pc = 0x2740d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1265));
    // 0x2740dc: 0xc042090  jal         func_108240
    ctx->pc = 0x2740DCu;
    SET_GPR_U32(ctx, 31, 0x2740E4u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2740DCu, 0x2740E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740E4u;
label_2740e4:
    // 0x2740e4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2740e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2740e8: 0xc090864  jal         func_242190
    ctx->pc = 0x2740E8u;
    SET_GPR_U32(ctx, 31, 0x2740F0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2740E8u, 0x2740F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740F0u;
label_2740f0:
    // 0x2740f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2740f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740f4: 0xc090590  jal         func_241640
    ctx->pc = 0x2740F4u;
    SET_GPR_U32(ctx, 31, 0x2740FCu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2740F4u, 0x2740FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2740FCu;
label_2740fc:
    // 0x2740fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2740fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274100: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x274100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x274104: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x274104u;
    SET_GPR_U32(ctx, 31, 0x27410Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x274104u, 0x27410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27410Cu;
label_27410c:
    // 0x27410c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27410cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x274110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274114: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x274114u;
    SET_GPR_U32(ctx, 31, 0x27411Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x274114u, 0x27411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27411Cu;
label_27411c:
    // 0x27411c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27411cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274120: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x274120u;
    {
        const bool branch_taken_0x274120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274120) {
            ctx->pc = 0x2741D0u;
            goto label_2741d0;
        }
    }
    ctx->pc = 0x274128u;
label_274128:
    // 0x274128: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x274128u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27412c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x27412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274130: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x274130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x274134: 0x12220025  beq         $s1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x274134u;
    {
        const bool branch_taken_0x274134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x274134) {
            ctx->pc = 0x2741CCu;
            goto label_2741cc;
        }
    }
    ctx->pc = 0x27413Cu;
    // 0x27413c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x27413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x274140: 0xc096880  jal         func_25A200
    ctx->pc = 0x274140u;
    SET_GPR_U32(ctx, 31, 0x274148u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x274140u, 0x274148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274148u;
label_274148:
    // 0x274148: 0x12220020  beq         $s1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x274148u;
    {
        const bool branch_taken_0x274148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x274148) {
            ctx->pc = 0x2741CCu;
            goto label_2741cc;
        }
    }
    ctx->pc = 0x274150u;
    // 0x274150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274154: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x274154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x274158: 0xc085538  jal         func_2154E0
    ctx->pc = 0x274158u;
    SET_GPR_U32(ctx, 31, 0x274160u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x274158u, 0x274160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274160u;
label_274160:
    // 0x274160: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x274160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274164: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x274164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274168: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x274168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27416c: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x27416Cu;
    SET_GPR_U32(ctx, 31, 0x274174u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x27416Cu, 0x274174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274174u;
label_274174:
    // 0x274174: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x274174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274178: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x274178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27417c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27417cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274180: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x274180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x274184: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x274184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274188: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x274188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27418c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27418cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274190: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x274190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x274194: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x274194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274198: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x274198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27419c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27419cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2741a0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2741a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2741a4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2741a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2741a8: 0xc104d24  jal         func_413490
    ctx->pc = 0x2741A8u;
    SET_GPR_U32(ctx, 31, 0x2741B0u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2741A8u, 0x2741B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741B0u;
label_2741b0:
    // 0x2741b0: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2741b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2741b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2741b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2741b8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2741B8u;
    {
        const bool branch_taken_0x2741b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2741b8) {
            ctx->pc = 0x2741CCu;
            goto label_2741cc;
        }
    }
    ctx->pc = 0x2741C0u;
    // 0x2741c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2741c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2741C4u;
    {
        const bool branch_taken_0x2741c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2741c4) {
            ctx->pc = 0x2741E8u;
            goto label_2741e8;
        }
    }
    ctx->pc = 0x2741CCu;
label_2741cc:
    // 0x2741cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2741ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2741d0:
    // 0x2741d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2741d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741d4: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2741D4u;
    SET_GPR_U32(ctx, 31, 0x2741DCu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2741D4u, 0x2741DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2741DCu;
label_2741dc:
    // 0x2741dc: 0x1602ffd2  bne         $s0, $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2741DCu;
    {
        const bool branch_taken_0x2741dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2741dc) {
            ctx->pc = 0x274128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274128;
        }
    }
    ctx->pc = 0x2741E4u;
    // 0x2741e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2741e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2741e8:
    // 0x2741e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2741e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2741ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2741ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2741f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2741f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2741f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2741f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2741f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2741f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2741fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2741fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274200: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x274200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x274204: 0x3e00008  jr          $ra
    ctx->pc = 0x274204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27420Cu;
    // 0x27420c: 0x0  nop
    ctx->pc = 0x27420cu;
    // NOP
    ctx->pc = 0x274210u;
}
