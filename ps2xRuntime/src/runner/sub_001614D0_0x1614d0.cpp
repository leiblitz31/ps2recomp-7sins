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

// Function: sub_001614D0
// Address: 0x1614d0 - 0x161c90
void sub_001614D0_0x1614d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001614D0_0x1614d0");
#endif

    switch (ctx->pc) {
        case 0x1615a8u: goto label_1615a8;
        case 0x1615b8u: goto label_1615b8;
        case 0x1615d0u: goto label_1615d0;
        case 0x1615e4u: goto label_1615e4;
        case 0x161604u: goto label_161604;
        case 0x16161cu: goto label_16161c;
        case 0x161988u: goto label_161988;
        case 0x161a40u: goto label_161a40;
        case 0x161a9cu: goto label_161a9c;
        case 0x161aacu: goto label_161aac;
        case 0x161ac4u: goto label_161ac4;
        case 0x161ad8u: goto label_161ad8;
        case 0x161b18u: goto label_161b18;
        case 0x161b2cu: goto label_161b2c;
        case 0x161b40u: goto label_161b40;
        case 0x161b78u: goto label_161b78;
        case 0x161bbcu: goto label_161bbc;
        case 0x161bccu: goto label_161bcc;
        case 0x161becu: goto label_161bec;
        case 0x161bfcu: goto label_161bfc;
        case 0x161c10u: goto label_161c10;
        case 0x161c20u: goto label_161c20;
        case 0x161c34u: goto label_161c34;
        case 0x161c60u: goto label_161c60;
        default: break;
    }

    ctx->pc = 0x1614d0u;

    // 0x1614d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1614d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1614d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1614d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1614d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1614d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1614dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1614dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1614e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1614e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1614e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1614e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1614e8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1614e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1614ec: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1614ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1614f0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1614f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1614f4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1614f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1614f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1614f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1614fc: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x1614fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161504: 0x0  nop
    ctx->pc = 0x161504u;
    // NOP
    // 0x161508: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16150c: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x16150Cu;
    {
        const bool branch_taken_0x16150c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16150c) {
            ctx->pc = 0x16160Cu;
            goto label_16160c;
        }
    }
    ctx->pc = 0x161514u;
    // 0x161514: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161518: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x161518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16151c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x16151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161520: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x161520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x161524: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x161524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x161528: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16152c: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x16152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161530: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161530u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161534: 0x0  nop
    ctx->pc = 0x161534u;
    // NOP
    // 0x161538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16153c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16153Cu;
    {
        const bool branch_taken_0x16153c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16153c) {
            ctx->pc = 0x161550u;
            goto label_161550;
        }
    }
    ctx->pc = 0x161544u;
    // 0x161544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161548: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16154c: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x16154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_161550:
    // 0x161550: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161554: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x161554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161558: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16155c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16155cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161560: 0x0  nop
    ctx->pc = 0x161560u;
    // NOP
    // 0x161564: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161568: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x161568u;
    {
        const bool branch_taken_0x161568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161568) {
            ctx->pc = 0x161584u;
            goto label_161584;
        }
    }
    ctx->pc = 0x161570u;
    // 0x161570: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161574: 0xc44000a4  lwc1        $f0, 0xA4($v0)
    ctx->pc = 0x161574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161578: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x161578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x16157c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16157Cu;
    {
        const bool branch_taken_0x16157c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16157c) {
            ctx->pc = 0x161594u;
            goto label_161594;
        }
    }
    ctx->pc = 0x161584u;
label_161584:
    // 0x161584: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16158c: 0x0  nop
    ctx->pc = 0x16158cu;
    // NOP
    // 0x161590: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x161590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_161594:
    // 0x161594: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x161594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161598: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x161598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x16159c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16159cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1615A0u;
    {
        const bool branch_taken_0x1615a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1615a0) {
            ctx->pc = 0x1615E8u;
            goto label_1615e8;
        }
    }
    ctx->pc = 0x1615A8u;
label_1615a8:
    // 0x1615a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1615a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1615ac: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x1615acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1615b0: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x1615B0u;
    SET_GPR_U32(ctx, 31, 0x1615B8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x1615B0u, 0x1615B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615B8u;
label_1615b8:
    // 0x1615b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1615b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615bc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1615bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1615c0: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x1615c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x1615c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1615c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1615C8u;
    SET_GPR_U32(ctx, 31, 0x1615D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1615C8u, 0x1615D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615D0u;
label_1615d0:
    // 0x1615d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1615d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1615d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1615d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615d8: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x1615d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1615dc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1615DCu;
    SET_GPR_U32(ctx, 31, 0x1615E4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1615DCu, 0x1615E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1615E4u;
label_1615e4:
    // 0x1615e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1615e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1615e8:
    // 0x1615e8: 0x2e41000a  sltiu       $at, $s2, 0xA
    ctx->pc = 0x1615e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1615ec: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1615ECu;
    {
        const bool branch_taken_0x1615ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1615ec) {
            ctx->pc = 0x1615A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1615a8;
        }
    }
    ctx->pc = 0x1615F4u;
    // 0x1615f4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1615f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1615f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1615f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1615fc: 0xc058730  jal         func_161CC0
    ctx->pc = 0x1615FCu;
    SET_GPR_U32(ctx, 31, 0x161604u);
    ctx->pc = 0x161CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161CC0u, 0x1615FCu, 0x161604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161604u;
label_161604:
    // 0x161604: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x161604u;
    {
        const bool branch_taken_0x161604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161604) {
            ctx->pc = 0x161C68u;
            goto label_161c68;
        }
    }
    ctx->pc = 0x16160Cu;
label_16160c:
    // 0x16160c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16160cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161614: 0xc058730  jal         func_161CC0
    ctx->pc = 0x161614u;
    SET_GPR_U32(ctx, 31, 0x16161Cu);
    ctx->pc = 0x161CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161CC0u, 0x161614u, 0x16161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16161Cu;
label_16161c:
    // 0x16161c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16161cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x161620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161624: 0x0  nop
    ctx->pc = 0x161624u;
    // NOP
    // 0x161628: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x161628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x16162c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16162cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x161630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161634: 0x0  nop
    ctx->pc = 0x161634u;
    // NOP
    // 0x161638: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x161638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x16163c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161640: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x161640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161648: 0x0  nop
    ctx->pc = 0x161648u;
    // NOP
    // 0x16164c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16164cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161650: 0x45010066  bc1t        . + 4 + (0x66 << 2)
    ctx->pc = 0x161650u;
    {
        const bool branch_taken_0x161650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161650) {
            ctx->pc = 0x1617ECu;
            goto label_1617ec;
        }
    }
    ctx->pc = 0x161658u;
    // 0x161658: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16165c: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x16165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161660: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x161660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161664: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x161664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x161668: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x161668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x16166c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16166cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161670: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x161670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161678: 0x0  nop
    ctx->pc = 0x161678u;
    // NOP
    // 0x16167c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16167cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161680: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x161680u;
    {
        const bool branch_taken_0x161680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161680) {
            ctx->pc = 0x1616ACu;
            goto label_1616ac;
        }
    }
    ctx->pc = 0x161688u;
    // 0x161688: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16168c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161690: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x161690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x161694: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x161694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161698: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16169c: 0xac6400c4  sw          $a0, 0xC4($v1)
    ctx->pc = 0x16169cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 4));
    // 0x1616a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1616a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1616a4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1616a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1616a8: 0xa06400cc  sb          $a0, 0xCC($v1)
    ctx->pc = 0x1616a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 204), (uint8_t)GPR_U32(ctx, 4));
label_1616ac:
    // 0x1616ac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1616acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1616b0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1616b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1616b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1616b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1616b8: 0xc48000ac  lwc1        $f0, 0xAC($a0)
    ctx->pc = 0x1616b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1616bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1616bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1616c0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1616c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1616c4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1616c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1616c8: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1616c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1616cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1616ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1616d0: 0x0  nop
    ctx->pc = 0x1616d0u;
    // NOP
    // 0x1616d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1616d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1616d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1616D8u;
    {
        const bool branch_taken_0x1616d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1616d8) {
            ctx->pc = 0x1616F8u;
            goto label_1616f8;
        }
    }
    ctx->pc = 0x1616E0u;
    // 0x1616e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1616e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1616e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1616e8: 0x0  nop
    ctx->pc = 0x1616e8u;
    // NOP
    // 0x1616ec: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1616ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1616f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1616F0u;
    {
        const bool branch_taken_0x1616f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1616f0) {
            ctx->pc = 0x161730u;
            goto label_161730;
        }
    }
    ctx->pc = 0x1616F8u;
label_1616f8:
    // 0x1616f8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1616f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1616fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1616fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161700: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x161700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161704: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x161704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x161708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16170c: 0x0  nop
    ctx->pc = 0x16170cu;
    // NOP
    // 0x161710: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x161710u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x161714: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x161718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x161718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16171c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16171cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161720: 0x0  nop
    ctx->pc = 0x161720u;
    // NOP
    // 0x161724: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x161724u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x161728: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x161728u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x16172c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x16172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_161730:
    // 0x161730: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x161730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161734: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x161734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x161738: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x161738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16173c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x16173cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x161740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161744: 0x0  nop
    ctx->pc = 0x161744u;
    // NOP
    // 0x161748: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16174c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x16174Cu;
    {
        const bool branch_taken_0x16174c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16174c) {
            ctx->pc = 0x161778u;
            goto label_161778;
        }
    }
    ctx->pc = 0x161754u;
    // 0x161754: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x161754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x161758: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x161758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16175c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x16175cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161760: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x161760u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x161764: 0x0  nop
    ctx->pc = 0x161764u;
    // NOP
    // 0x161768: 0x0  nop
    ctx->pc = 0x161768u;
    // NOP
    // 0x16176c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x16176cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x161770: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x161770u;
    {
        const bool branch_taken_0x161770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161770) {
            ctx->pc = 0x161A90u;
            goto label_161a90;
        }
    }
    ctx->pc = 0x161778u;
label_161778:
    // 0x161778: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x161778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16177c: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x16177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x161780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161784: 0x0  nop
    ctx->pc = 0x161784u;
    // NOP
    // 0x161788: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16178c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16178Cu;
    {
        const bool branch_taken_0x16178c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16178c) {
            ctx->pc = 0x1617ACu;
            goto label_1617ac;
        }
    }
    ctx->pc = 0x161794u;
    // 0x161794: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x161798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16179c: 0x0  nop
    ctx->pc = 0x16179cu;
    // NOP
    // 0x1617a0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1617a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1617a4: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1617A4u;
    {
        const bool branch_taken_0x1617a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617a4) {
            ctx->pc = 0x161A90u;
            goto label_161a90;
        }
    }
    ctx->pc = 0x1617ACu;
label_1617ac:
    // 0x1617ac: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1617acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1617b0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1617b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1617b4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1617b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1617b8: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x1617b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x1617bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1617bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1617c0: 0x0  nop
    ctx->pc = 0x1617c0u;
    // NOP
    // 0x1617c4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1617c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1617c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1617c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1617cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1617ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1617d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1617d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1617d4: 0x0  nop
    ctx->pc = 0x1617d4u;
    // NOP
    // 0x1617d8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1617d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1617dc: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1617dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1617e0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1617e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1617e4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1617E4u;
    {
        const bool branch_taken_0x1617e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617e4) {
            ctx->pc = 0x161A90u;
            goto label_161a90;
        }
    }
    ctx->pc = 0x1617ECu;
label_1617ec:
    // 0x1617ec: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1617ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1617f0: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x1617f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1617f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1617f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1617f8: 0x0  nop
    ctx->pc = 0x1617f8u;
    // NOP
    // 0x1617fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1617fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161800: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x161800u;
    {
        const bool branch_taken_0x161800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161800) {
            ctx->pc = 0x1618C4u;
            goto label_1618c4;
        }
    }
    ctx->pc = 0x161808u;
    // 0x161808: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16180c: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x16180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161810: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x161810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161814: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x161814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x161818: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x161818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x16181c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161820: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x161820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161824: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161828: 0x0  nop
    ctx->pc = 0x161828u;
    // NOP
    // 0x16182c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16182cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161830: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x161830u;
    {
        const bool branch_taken_0x161830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161830) {
            ctx->pc = 0x161844u;
            goto label_161844;
        }
    }
    ctx->pc = 0x161838u;
    // 0x161838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16183c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161840: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x161840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_161844:
    // 0x161844: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x161844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161848: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x161848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x16184c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16184cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161850: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x161850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161854: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x161854u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x161858: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x161858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x16185c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16185cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x161860: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161864: 0x0  nop
    ctx->pc = 0x161864u;
    // NOP
    // 0x161868: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x161868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x16186c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161870: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x161870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x161874: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161878: 0x0  nop
    ctx->pc = 0x161878u;
    // NOP
    // 0x16187c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16187cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161880: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x161880u;
    {
        const bool branch_taken_0x161880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161880) {
            ctx->pc = 0x1618A0u;
            goto label_1618a0;
        }
    }
    ctx->pc = 0x161888u;
    // 0x161888: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16188c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16188cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161890: 0x0  nop
    ctx->pc = 0x161890u;
    // NOP
    // 0x161894: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x161894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x161898: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x161898u;
    {
        const bool branch_taken_0x161898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161898) {
            ctx->pc = 0x1618B4u;
            goto label_1618b4;
        }
    }
    ctx->pc = 0x1618A0u;
label_1618a0:
    // 0x1618a0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1618a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1618a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1618a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1618a8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1618a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1618ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1618acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1618b0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1618b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1618b4:
    // 0x1618b4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1618b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1618b8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1618b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1618bc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1618BCu;
    {
        const bool branch_taken_0x1618bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1618bc) {
            ctx->pc = 0x161A90u;
            goto label_161a90;
        }
    }
    ctx->pc = 0x1618C4u;
label_1618c4:
    // 0x1618c4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1618c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1618c8: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x1618c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1618cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1618ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1618d0: 0x0  nop
    ctx->pc = 0x1618d0u;
    // NOP
    // 0x1618d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1618d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1618d8: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x1618D8u;
    {
        const bool branch_taken_0x1618d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1618d8) {
            ctx->pc = 0x1619B4u;
            goto label_1619b4;
        }
    }
    ctx->pc = 0x1618E0u;
    // 0x1618e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1618e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1618e4: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x1618e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1618e8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1618e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1618ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1618ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1618f0: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x1618f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x1618f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1618f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1618f8: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x1618f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1618fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1618fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161900: 0x0  nop
    ctx->pc = 0x161900u;
    // NOP
    // 0x161904: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x161904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161908: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x161908u;
    {
        const bool branch_taken_0x161908 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161908) {
            ctx->pc = 0x16193Cu;
            goto label_16193c;
        }
    }
    ctx->pc = 0x161910u;
    // 0x161910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161914: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161918: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x161918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x16191c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16191cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161920: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x161920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x161924: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x161924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x161928: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x161928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
    // 0x16192c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x16192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x161930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161934: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161938: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x161938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_16193c:
    // 0x16193c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x16193cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161940: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x161940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x161944: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161948: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x161948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16194c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16194cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x161950: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x161950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x161954: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x161954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x161958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16195c: 0x0  nop
    ctx->pc = 0x16195cu;
    // NOP
    // 0x161960: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x161960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x161964: 0xc78382b0  lwc1        $f3, -0x7D50($gp)
    ctx->pc = 0x161964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161968: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x161968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16196c: 0xc78182b4  lwc1        $f1, -0x7D4C($gp)
    ctx->pc = 0x16196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161974: 0x0  nop
    ctx->pc = 0x161974u;
    // NOP
    // 0x161978: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x161978u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x16197c: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x16197cu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x161980: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x161980u;
    SET_GPR_U32(ctx, 31, 0x161988u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x161980u, 0x161988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161988u;
label_161988:
    // 0x161988: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x161988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x16198c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x16198cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x161990: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x161990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x161994: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x161994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161998: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x161998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16199c: 0x0  nop
    ctx->pc = 0x16199cu;
    // NOP
    // 0x1619a0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1619a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1619a4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1619a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1619a8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1619a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1619ac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1619ACu;
    {
        const bool branch_taken_0x1619ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1619ac) {
            ctx->pc = 0x161A90u;
            goto label_161a90;
        }
    }
    ctx->pc = 0x1619B4u;
label_1619b4:
    // 0x1619b4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1619b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1619b8: 0x906300cc  lbu         $v1, 0xCC($v1)
    ctx->pc = 0x1619b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x1619bc: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1619BCu;
    {
        const bool branch_taken_0x1619bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1619bc) {
            ctx->pc = 0x161A84u;
            goto label_161a84;
        }
    }
    ctx->pc = 0x1619C4u;
    // 0x1619c4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1619c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1619c8: 0x906300e4  lbu         $v1, 0xE4($v1)
    ctx->pc = 0x1619c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x1619cc: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1619CCu;
    {
        const bool branch_taken_0x1619cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1619cc) {
            ctx->pc = 0x161A84u;
            goto label_161a84;
        }
    }
    ctx->pc = 0x1619D4u;
    // 0x1619d4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1619d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1619d8: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x1619d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1619dc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1619dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1619e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1619e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1619e4: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1619e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x1619e8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1619e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1619ec: 0xc46100a8  lwc1        $f1, 0xA8($v1)
    ctx->pc = 0x1619ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1619f0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1619f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1619f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1619f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1619f8: 0x0  nop
    ctx->pc = 0x1619f8u;
    // NOP
    // 0x1619fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1619fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a00: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x161A00u;
    {
        const bool branch_taken_0x161a00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a00) {
            ctx->pc = 0x161A60u;
            goto label_161a60;
        }
    }
    ctx->pc = 0x161A08u;
    // 0x161a08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161a0c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161a10: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x161a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x161a14: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161a18: 0x8c6300c4  lw          $v1, 0xC4($v1)
    ctx->pc = 0x161a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x161a1c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x161A1Cu;
    {
        const bool branch_taken_0x161a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a1c) {
            ctx->pc = 0x161A60u;
            goto label_161a60;
        }
    }
    ctx->pc = 0x161A24u;
    // 0x161a24: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161a28: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x161a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x161a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161a30: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x161A30u;
    {
        const bool branch_taken_0x161a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x161a30) {
            ctx->pc = 0x161A60u;
            goto label_161a60;
        }
    }
    ctx->pc = 0x161A38u;
    // 0x161a38: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x161A38u;
    SET_GPR_U32(ctx, 31, 0x161A40u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x161A38u, 0x161A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161A40u;
label_161a40:
    // 0x161a40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x161a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161a44: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x161a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x161a48: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161a4c: 0xac6400c4  sw          $a0, 0xC4($v1)
    ctx->pc = 0x161a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 4));
    // 0x161a50: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x161a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x161a54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161a54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161a58: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161a5c: 0xe46000b4  swc1        $f0, 0xB4($v1)
    ctx->pc = 0x161a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 180), bits); }
label_161a60:
    // 0x161a60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x161a64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161a68: 0x0  nop
    ctx->pc = 0x161a68u;
    // NOP
    // 0x161a6c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x161a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x161a70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161a74: 0x0  nop
    ctx->pc = 0x161a74u;
    // NOP
    // 0x161a78: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x161a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x161a7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x161A7Cu;
    {
        const bool branch_taken_0x161a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a7c) {
            ctx->pc = 0x161A90u;
            goto label_161a90;
        }
    }
    ctx->pc = 0x161A84u;
label_161a84:
    // 0x161a84: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x161a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161a88: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161a8c: 0xac6400c4  sw          $a0, 0xC4($v1)
    ctx->pc = 0x161a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 4));
label_161a90:
    // 0x161a90: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x161a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x161a94: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x161A94u;
    {
        const bool branch_taken_0x161a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a94) {
            ctx->pc = 0x161ADCu;
            goto label_161adc;
        }
    }
    ctx->pc = 0x161A9Cu;
label_161a9c:
    // 0x161a9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161aa0: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x161aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x161aa4: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x161AA4u;
    SET_GPR_U32(ctx, 31, 0x161AACu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x161AA4u, 0x161AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161AACu;
label_161aac:
    // 0x161aac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x161aacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ab0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161ab4: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x161ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x161ab8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161abc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x161ABCu;
    SET_GPR_U32(ctx, 31, 0x161AC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x161ABCu, 0x161AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161AC4u;
label_161ac4:
    // 0x161ac4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x161ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x161ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ad0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x161AD0u;
    SET_GPR_U32(ctx, 31, 0x161AD8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x161AD0u, 0x161AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161AD8u;
label_161ad8:
    // 0x161ad8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x161ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_161adc:
    // 0x161adc: 0x2e210010  sltiu       $at, $s1, 0x10
    ctx->pc = 0x161adcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x161ae0: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
    ctx->pc = 0x161AE0u;
    {
        const bool branch_taken_0x161ae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x161ae0) {
            ctx->pc = 0x161A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161a9c;
        }
    }
    ctx->pc = 0x161AE8u;
    // 0x161ae8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161aec: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x161aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x161af0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x161af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161af4: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x161AF4u;
    {
        const bool branch_taken_0x161af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x161af4) {
            ctx->pc = 0x161C34u;
            goto label_161c34;
        }
    }
    ctx->pc = 0x161AFCu;
    // 0x161afc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161b00: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161b04: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x161b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161b08: 0x2445000a  addiu       $a1, $v0, 0xA
    ctx->pc = 0x161b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x161b0c: 0x246400b8  addiu       $a0, $v1, 0xB8
    ctx->pc = 0x161b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x161b10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x161B10u;
    SET_GPR_U32(ctx, 31, 0x161B18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x161B10u, 0x161B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B18u;
label_161b18:
    // 0x161b18: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x161b18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161b1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161b20: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x161b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x161b24: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x161B24u;
    SET_GPR_U32(ctx, 31, 0x161B2Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x161B24u, 0x161B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B2Cu;
label_161b2c:
    // 0x161b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b34: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x161b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x161b38: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x161B38u;
    SET_GPR_U32(ctx, 31, 0x161B40u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x161B38u, 0x161B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B40u;
label_161b40:
    // 0x161b40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x161b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x161b44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161b48: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x161b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x161b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x161b50: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x161b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x161b54: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x161b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x161b58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x161b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161b5c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x161b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x161b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x161b64: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x161b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x161b68: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161b6c: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x161b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x161b70: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x161B70u;
    SET_GPR_U32(ctx, 31, 0x161B78u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x161B70u, 0x161B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161B78u;
label_161b78:
    // 0x161b78: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x161b7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x161b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161b80: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x161b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x161b84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x161b88: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x161b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b8c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x161b8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x161b90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x161b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x161b94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x161b94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161b98: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x161b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161b9c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x161b9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x161ba0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x161ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161ba4: 0x46010342  mul.s       $f13, $f0, $f1
    ctx->pc = 0x161ba4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x161ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bb4: 0xc08c208  jal         func_230820
    ctx->pc = 0x161BB4u;
    SET_GPR_U32(ctx, 31, 0x161BBCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x161BB4u, 0x161BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BBCu;
label_161bbc:
    // 0x161bbc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161bc0: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x161bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x161bc4: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x161BC4u;
    SET_GPR_U32(ctx, 31, 0x161BCCu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x161BC4u, 0x161BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BCCu;
label_161bcc:
    // 0x161bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bd4: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x161bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161bd8: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x161bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x161bdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x161bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161be0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x161be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161be4: 0xc08c544  jal         func_231510
    ctx->pc = 0x161BE4u;
    SET_GPR_U32(ctx, 31, 0x161BECu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x161BE4u, 0x161BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BECu;
label_161bec:
    // 0x161bec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161bf0: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x161bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x161bf4: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x161BF4u;
    SET_GPR_U32(ctx, 31, 0x161BFCu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x161BF4u, 0x161BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161BFCu;
label_161bfc:
    // 0x161bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x161c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161c08: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x161C08u;
    SET_GPR_U32(ctx, 31, 0x161C10u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x161C08u, 0x161C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C10u;
label_161c10:
    // 0x161c10: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x161c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161c14: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x161c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x161c18: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x161C18u;
    SET_GPR_U32(ctx, 31, 0x161C20u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x161C18u, 0x161C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C20u;
label_161c20:
    // 0x161c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c28: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x161c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161c2c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x161C2Cu;
    SET_GPR_U32(ctx, 31, 0x161C34u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x161C2Cu, 0x161C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C34u;
label_161c34:
    // 0x161c34: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161c38: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x161c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x161c3c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x161C3Cu;
    {
        const bool branch_taken_0x161c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161c3c) {
            ctx->pc = 0x161C68u;
            goto label_161c68;
        }
    }
    ctx->pc = 0x161C44u;
    // 0x161c44: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161c48: 0x906300cc  lbu         $v1, 0xCC($v1)
    ctx->pc = 0x161c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 204)));
    // 0x161c4c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x161C4Cu;
    {
        const bool branch_taken_0x161c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161c4c) {
            ctx->pc = 0x161C68u;
            goto label_161c68;
        }
    }
    ctx->pc = 0x161C54u;
    // 0x161c54: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x161c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161c58: 0xc0587f4  jal         func_161FD0
    ctx->pc = 0x161C58u;
    SET_GPR_U32(ctx, 31, 0x161C60u);
    ctx->pc = 0x161FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161FD0u, 0x161C58u, 0x161C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161C60u;
label_161c60:
    // 0x161c60: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x161c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161c64: 0xa06000cc  sb          $zero, 0xCC($v1)
    ctx->pc = 0x161c64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 204), (uint8_t)GPR_U32(ctx, 0));
label_161c68:
    // 0x161c68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x161c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161c6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x161c6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161c70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x161c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161c7c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x161c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x161c80: 0x3e00008  jr          $ra
    ctx->pc = 0x161C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161C88u;
    // 0x161c88: 0x0  nop
    ctx->pc = 0x161c88u;
    // NOP
    // 0x161c8c: 0x0  nop
    ctx->pc = 0x161c8cu;
    // NOP
    ctx->pc = 0x161c90u;
}
