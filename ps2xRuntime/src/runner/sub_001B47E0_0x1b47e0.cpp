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

// Function: sub_001B47E0
// Address: 0x1b47e0 - 0x1b4aa0
void sub_001B47E0_0x1b47e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B47E0_0x1b47e0");
#endif

    switch (ctx->pc) {
        case 0x1b47fcu: goto label_1b47fc;
        case 0x1b4878u: goto label_1b4878;
        case 0x1b488cu: goto label_1b488c;
        case 0x1b48a0u: goto label_1b48a0;
        case 0x1b48bcu: goto label_1b48bc;
        case 0x1b4948u: goto label_1b4948;
        case 0x1b495cu: goto label_1b495c;
        case 0x1b4978u: goto label_1b4978;
        case 0x1b498cu: goto label_1b498c;
        case 0x1b49a0u: goto label_1b49a0;
        case 0x1b49bcu: goto label_1b49bc;
        case 0x1b4a4cu: goto label_1b4a4c;
        case 0x1b4a60u: goto label_1b4a60;
        case 0x1b4a7cu: goto label_1b4a7c;
        case 0x1b4a8cu: goto label_1b4a8c;
        default: break;
    }

    ctx->pc = 0x1b47e0u;

    // 0x1b47e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b47e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b47e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b47e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b47e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b47ec: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1b47ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1b47f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b47f4: 0xc084504  jal         func_211410
    ctx->pc = 0x1B47F4u;
    SET_GPR_U32(ctx, 31, 0x1B47FCu);
    ctx->pc = 0x211410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211410u, 0x1B47F4u, 0x1B47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47FCu;
label_1b47fc:
    // 0x1b47fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1b47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1b4800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4804: 0x0  nop
    ctx->pc = 0x1b4804u;
    // NOP
    // 0x1b4808: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1b4808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1b480c: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1b480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4810: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1b4810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1b4814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4818: 0x0  nop
    ctx->pc = 0x1b4818u;
    // NOP
    // 0x1b481c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b4820: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1b4820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b4824: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1b4824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1b4828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b482c: 0x0  nop
    ctx->pc = 0x1b482cu;
    // NOP
    // 0x1b4830: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1b4830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b4834: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b4834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b4838: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b4838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b483c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1b483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1b4840: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1b4840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b4844: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b484c: 0x0  nop
    ctx->pc = 0x1b484cu;
    // NOP
    // 0x1b4850: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1b4850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b4854: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1b4854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b4858: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1b485c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b485cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4860: 0x0  nop
    ctx->pc = 0x1b4860u;
    // NOP
    // 0x1b4864: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1b4864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1b4868: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1b4868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1b486c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4870: 0xc056708  jal         func_159C20
    ctx->pc = 0x1B4870u;
    SET_GPR_U32(ctx, 31, 0x1B4878u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1B4870u, 0x1B4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4878u;
label_1b4878:
    // 0x1b4878: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b4878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b487c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4880: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b4880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b4884: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4884u;
    SET_GPR_U32(ctx, 31, 0x1B488Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4884u, 0x1B488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B488Cu;
label_1b488c:
    // 0x1b488c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b488cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4890: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1b4890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1b4894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4898: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4898u;
    SET_GPR_U32(ctx, 31, 0x1B48A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4898u, 0x1B48A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B48A0u;
label_1b48a0:
    // 0x1b48a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b48a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b48a4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b48a8: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1b48a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1b48ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b48acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b48b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1b48b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b48b4: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x1B48B4u;
    SET_GPR_U32(ctx, 31, 0x1B48BCu);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x1B48B4u, 0x1B48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B48BCu;
label_1b48bc:
    // 0x1b48bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b48bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b48c0: 0x0  nop
    ctx->pc = 0x1b48c0u;
    // NOP
    // 0x1b48c4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1b48c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1b48c8: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1b48c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b48cc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1b48ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1b48d0: 0xc78083d0  lwc1        $f0, -0x7C30($gp)
    ctx->pc = 0x1b48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b48d4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1b48d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b48d8: 0xc78083d4  lwc1        $f0, -0x7C2C($gp)
    ctx->pc = 0x1b48d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b48dc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b48dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b48e0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1b48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1b48e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b48e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b48e8: 0x0  nop
    ctx->pc = 0x1b48e8u;
    // NOP
    // 0x1b48ec: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1b48ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b48f0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b48f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b48f4: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b48f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b48f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1b48f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b48fc: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b48fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4900: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1b4900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1b4904: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b4904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b4908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b490c: 0x0  nop
    ctx->pc = 0x1b490cu;
    // NOP
    // 0x1b4910: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1b4910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b4914: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b491c: 0x0  nop
    ctx->pc = 0x1b491cu;
    // NOP
    // 0x1b4920: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1b4920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b4924: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b4924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b4928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b492c: 0x0  nop
    ctx->pc = 0x1b492cu;
    // NOP
    // 0x1b4930: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1b4930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1b4934: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b4934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4938: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b493c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1b493cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b4940: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4940u;
    SET_GPR_U32(ctx, 31, 0x1B4948u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4940u, 0x1B4948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4948u;
label_1b4948:
    // 0x1b4948: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b4948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b494c: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1b494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1b4950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4954: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4954u;
    SET_GPR_U32(ctx, 31, 0x1B495Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4954u, 0x1B495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B495Cu;
label_1b495c:
    // 0x1b495c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b495cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4960: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4964: 0x244402a4  addiu       $a0, $v0, 0x2A4
    ctx->pc = 0x1b4964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 676));
    // 0x1b4968: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b4968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b496c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1b496cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4970: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x1B4970u;
    SET_GPR_U32(ctx, 31, 0x1B4978u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x1B4970u, 0x1B4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4978u;
label_1b4978:
    // 0x1b4978: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b497c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4980: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b4980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b4984: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4984u;
    SET_GPR_U32(ctx, 31, 0x1B498Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4984u, 0x1B498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B498Cu;
label_1b498c:
    // 0x1b498c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b498cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4990: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1b4990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1b4994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4998: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4998u;
    SET_GPR_U32(ctx, 31, 0x1B49A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4998u, 0x1B49A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49A0u;
label_1b49a0:
    // 0x1b49a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b49a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b49a4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b49a8: 0x24440334  addiu       $a0, $v0, 0x334
    ctx->pc = 0x1b49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 820));
    // 0x1b49ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b49acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b49b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1b49b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b49b4: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x1B49B4u;
    SET_GPR_U32(ctx, 31, 0x1B49BCu);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x1B49B4u, 0x1B49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B49BCu;
label_1b49bc:
    // 0x1b49bc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1b49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1b49c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b49c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b49c4: 0x0  nop
    ctx->pc = 0x1b49c4u;
    // NOP
    // 0x1b49c8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1b49c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1b49cc: 0xc7808290  lwc1        $f0, -0x7D70($gp)
    ctx->pc = 0x1b49ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b49d0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1b49d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1b49d4: 0xc78083d8  lwc1        $f0, -0x7C28($gp)
    ctx->pc = 0x1b49d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b49d8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1b49d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b49dc: 0xc78083dc  lwc1        $f0, -0x7C24($gp)
    ctx->pc = 0x1b49dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b49e0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b49e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b49e4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1b49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1b49e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b49e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b49ec: 0x0  nop
    ctx->pc = 0x1b49ecu;
    // NOP
    // 0x1b49f0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1b49f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b49f4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b49f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b49f8: 0xc78083e0  lwc1        $f0, -0x7C20($gp)
    ctx->pc = 0x1b49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b49fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1b49fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b4a00: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1b4a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4a04: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1b4a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1b4a08: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1b4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1b4a0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4a10: 0x0  nop
    ctx->pc = 0x1b4a10u;
    // NOP
    // 0x1b4a14: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1b4a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b4a18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4a20: 0x0  nop
    ctx->pc = 0x1b4a20u;
    // NOP
    // 0x1b4a24: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1b4a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b4a28: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b4a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4a30: 0x0  nop
    ctx->pc = 0x1b4a30u;
    // NOP
    // 0x1b4a34: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1b4a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1b4a38: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4a3c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4a40: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1b4a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b4a44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4A44u;
    SET_GPR_U32(ctx, 31, 0x1B4A4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4A44u, 0x1B4A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A4Cu;
label_1b4a4c:
    // 0x1b4a4c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b4a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4a50: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x1b4a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1b4a54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4a58: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4A58u;
    SET_GPR_U32(ctx, 31, 0x1B4A60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4A58u, 0x1B4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A60u;
label_1b4a60:
    // 0x1b4a60: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4a64: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1b4a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b4a68: 0x244403c4  addiu       $a0, $v0, 0x3C4
    ctx->pc = 0x1b4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 964));
    // 0x1b4a6c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1b4a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1b4a70: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1b4a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4a74: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x1B4A74u;
    SET_GPR_U32(ctx, 31, 0x1B4A7Cu);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x1B4A74u, 0x1B4A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A7Cu;
label_1b4a7c:
    // 0x1b4a7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4a80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4a84: 0xc08455c  jal         func_211570
    ctx->pc = 0x1B4A84u;
    SET_GPR_U32(ctx, 31, 0x1B4A8Cu);
    ctx->pc = 0x211570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211570u, 0x1B4A84u, 0x1B4A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4A8Cu;
label_1b4a8c:
    // 0x1b4a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4a94: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1b4a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b4a98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4AA0u;
}
