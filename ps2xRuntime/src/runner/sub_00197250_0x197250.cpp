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

// Function: sub_00197250
// Address: 0x197250 - 0x197500
void sub_00197250_0x197250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197250_0x197250");
#endif

    switch (ctx->pc) {
        case 0x197270u: goto label_197270;
        case 0x1972b0u: goto label_1972b0;
        case 0x1972ccu: goto label_1972cc;
        case 0x1972e0u: goto label_1972e0;
        case 0x1972f0u: goto label_1972f0;
        case 0x197330u: goto label_197330;
        case 0x19734cu: goto label_19734c;
        case 0x197360u: goto label_197360;
        case 0x197370u: goto label_197370;
        case 0x1973b0u: goto label_1973b0;
        case 0x1973ccu: goto label_1973cc;
        case 0x1973e0u: goto label_1973e0;
        case 0x1973f0u: goto label_1973f0;
        case 0x197430u: goto label_197430;
        case 0x19744cu: goto label_19744c;
        case 0x197460u: goto label_197460;
        case 0x197470u: goto label_197470;
        case 0x1974b0u: goto label_1974b0;
        case 0x1974ccu: goto label_1974cc;
        case 0x1974e0u: goto label_1974e0;
        case 0x1974f0u: goto label_1974f0;
        default: break;
    }

    ctx->pc = 0x197250u;

    // 0x197250: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x197250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x197254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197258: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x197258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x19725c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197260: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197264: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x197264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x197268: 0xc065d58  jal         func_197560
    ctx->pc = 0x197268u;
    SET_GPR_U32(ctx, 31, 0x197270u);
    ctx->pc = 0x197560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197560u, 0x197268u, 0x197270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197270u;
label_197270:
    // 0x197270: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x197270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x197274: 0x24636090  addiu       $v1, $v1, 0x6090
    ctx->pc = 0x197274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24720));
    // 0x197278: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x197278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19727c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x19727cu;
    { uint32_t bits = FAST_READ32(0x4E6090u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197280: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x197280u;
    { uint32_t bits = FAST_READ32(0x4E6094u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197284: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x197284u;
    { uint32_t bits = FAST_READ32(0x4E6098u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197288: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x197288u;
    { uint32_t bits = FAST_READ32(0x4E609Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19728c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x19728cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x197290: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x197290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x197294: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x197294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x197298: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x197298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19729c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1972a0: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x1972a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1972a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1972a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972a8: 0xc065d40  jal         func_197500
    ctx->pc = 0x1972A8u;
    SET_GPR_U32(ctx, 31, 0x1972B0u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x1972A8u, 0x1972B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972B0u;
label_1972b0:
    // 0x1972b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1972b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972b4: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x1972b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1972b8: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x1972b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1972bc: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x1972bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1972c0: 0xc7af005c  lwc1        $f15, 0x5C($sp)
    ctx->pc = 0x1972c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1972c4: 0xc067274  jal         func_19C9D0
    ctx->pc = 0x1972C4u;
    SET_GPR_U32(ctx, 31, 0x1972CCu);
    ctx->pc = 0x19C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9D0u, 0x1972C4u, 0x1972CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972CCu;
label_1972cc:
    // 0x1972cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1972ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1972d0: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1972d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1972d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972d8: 0xc065d40  jal         func_197500
    ctx->pc = 0x1972D8u;
    SET_GPR_U32(ctx, 31, 0x1972E0u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x1972D8u, 0x1972E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972E0u;
label_1972e0:
    // 0x1972e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1972e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1972e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1972e8: 0xc06730c  jal         func_19CC30
    ctx->pc = 0x1972E8u;
    SET_GPR_U32(ctx, 31, 0x1972F0u);
    ctx->pc = 0x19CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC30u, 0x1972E8u, 0x1972F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972F0u;
label_1972f0:
    // 0x1972f0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1972f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1972f4: 0x246360a0  addiu       $v1, $v1, 0x60A0
    ctx->pc = 0x1972f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24736));
    // 0x1972f8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1972f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1972fc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1972fcu;
    { uint32_t bits = FAST_READ32(0x4E60A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197300: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x197300u;
    { uint32_t bits = FAST_READ32(0x4E60A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197304: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x197304u;
    { uint32_t bits = FAST_READ32(0x4E60A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197308: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x197308u;
    { uint32_t bits = FAST_READ32(0x4E60ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19730c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x19730cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x197310: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x197310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x197314: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x197314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x197318: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x197318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19731c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197320: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197324: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197328: 0xc065d40  jal         func_197500
    ctx->pc = 0x197328u;
    SET_GPR_U32(ctx, 31, 0x197330u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197328u, 0x197330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197330u;
label_197330:
    // 0x197330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197334: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x197334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197338: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x197338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19733c: 0xc7ae0048  lwc1        $f14, 0x48($sp)
    ctx->pc = 0x19733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x197340: 0xc7af004c  lwc1        $f15, 0x4C($sp)
    ctx->pc = 0x197340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x197344: 0xc067274  jal         func_19C9D0
    ctx->pc = 0x197344u;
    SET_GPR_U32(ctx, 31, 0x19734Cu);
    ctx->pc = 0x19C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9D0u, 0x197344u, 0x19734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19734Cu;
label_19734c:
    // 0x19734c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197350: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197358: 0xc065d40  jal         func_197500
    ctx->pc = 0x197358u;
    SET_GPR_U32(ctx, 31, 0x197360u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197358u, 0x197360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197360u;
label_197360:
    // 0x197360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197364: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197368: 0xc06730c  jal         func_19CC30
    ctx->pc = 0x197368u;
    SET_GPR_U32(ctx, 31, 0x197370u);
    ctx->pc = 0x19CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC30u, 0x197368u, 0x197370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197370u;
label_197370:
    // 0x197370: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x197370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x197374: 0x246360b0  addiu       $v1, $v1, 0x60B0
    ctx->pc = 0x197374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24752));
    // 0x197378: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x197378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19737c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x19737cu;
    { uint32_t bits = FAST_READ32(0x4E60B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197380: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x197380u;
    { uint32_t bits = FAST_READ32(0x4E60B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197384: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x197384u;
    { uint32_t bits = FAST_READ32(0x4E60B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197388: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x197388u;
    { uint32_t bits = FAST_READ32(0x4E60BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19738c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x19738cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x197390: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x197390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x197394: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x197394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x197398: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x197398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19739c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1973a0: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x1973a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1973a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1973a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1973a8: 0xc065d40  jal         func_197500
    ctx->pc = 0x1973A8u;
    SET_GPR_U32(ctx, 31, 0x1973B0u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x1973A8u, 0x1973B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973B0u;
label_1973b0:
    // 0x1973b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1973b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973b4: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x1973b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1973b8: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x1973b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1973bc: 0xc7ae0038  lwc1        $f14, 0x38($sp)
    ctx->pc = 0x1973bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1973c0: 0xc7af003c  lwc1        $f15, 0x3C($sp)
    ctx->pc = 0x1973c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1973c4: 0xc067274  jal         func_19C9D0
    ctx->pc = 0x1973C4u;
    SET_GPR_U32(ctx, 31, 0x1973CCu);
    ctx->pc = 0x19C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9D0u, 0x1973C4u, 0x1973CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973CCu;
label_1973cc:
    // 0x1973cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1973ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1973d0: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x1973d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1973d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1973d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1973d8: 0xc065d40  jal         func_197500
    ctx->pc = 0x1973D8u;
    SET_GPR_U32(ctx, 31, 0x1973E0u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x1973D8u, 0x1973E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973E0u;
label_1973e0:
    // 0x1973e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1973e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1973e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1973e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1973e8: 0xc06730c  jal         func_19CC30
    ctx->pc = 0x1973E8u;
    SET_GPR_U32(ctx, 31, 0x1973F0u);
    ctx->pc = 0x19CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC30u, 0x1973E8u, 0x1973F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1973F0u;
label_1973f0:
    // 0x1973f0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1973f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x1973f4: 0x246360c0  addiu       $v1, $v1, 0x60C0
    ctx->pc = 0x1973f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24768));
    // 0x1973f8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1973f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1973fc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1973fcu;
    { uint32_t bits = FAST_READ32(0x4E60C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197400: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x197400u;
    { uint32_t bits = FAST_READ32(0x4E60C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197404: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x197404u;
    { uint32_t bits = FAST_READ32(0x4E60C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197408: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x197408u;
    { uint32_t bits = FAST_READ32(0x4E60CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19740c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x19740cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x197410: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x197410u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x197414: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x197414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x197418: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x197418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19741c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197420: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197424: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197428: 0xc065d40  jal         func_197500
    ctx->pc = 0x197428u;
    SET_GPR_U32(ctx, 31, 0x197430u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197428u, 0x197430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197430u;
label_197430:
    // 0x197430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197434: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x197434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197438: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x197438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19743c: 0xc7ae0028  lwc1        $f14, 0x28($sp)
    ctx->pc = 0x19743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x197440: 0xc7af002c  lwc1        $f15, 0x2C($sp)
    ctx->pc = 0x197440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x197444: 0xc067274  jal         func_19C9D0
    ctx->pc = 0x197444u;
    SET_GPR_U32(ctx, 31, 0x19744Cu);
    ctx->pc = 0x19C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9D0u, 0x197444u, 0x19744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19744Cu;
label_19744c:
    // 0x19744c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19744cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197450: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x197450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x197454: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197458: 0xc065d40  jal         func_197500
    ctx->pc = 0x197458u;
    SET_GPR_U32(ctx, 31, 0x197460u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x197458u, 0x197460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197460u;
label_197460:
    // 0x197460: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197464: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x197464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197468: 0xc06730c  jal         func_19CC30
    ctx->pc = 0x197468u;
    SET_GPR_U32(ctx, 31, 0x197470u);
    ctx->pc = 0x19CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC30u, 0x197468u, 0x197470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197470u;
label_197470:
    // 0x197470: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x197470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x197474: 0x246360d0  addiu       $v1, $v1, 0x60D0
    ctx->pc = 0x197474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24784));
    // 0x197478: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x197478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19747c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x19747cu;
    { uint32_t bits = FAST_READ32(0x4E60D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197480: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x197480u;
    { uint32_t bits = FAST_READ32(0x4E60D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197484: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x197484u;
    { uint32_t bits = FAST_READ32(0x4E60D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197488: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x197488u;
    { uint32_t bits = FAST_READ32(0x4E60DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19748c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x19748cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x197490: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x197490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x197494: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x197494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x197498: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x197498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19749c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1974a0: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x1974a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1974a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1974a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1974a8: 0xc065d40  jal         func_197500
    ctx->pc = 0x1974A8u;
    SET_GPR_U32(ctx, 31, 0x1974B0u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x1974A8u, 0x1974B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974B0u;
label_1974b0:
    // 0x1974b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1974b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974b4: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x1974b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1974b8: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x1974b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1974bc: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x1974bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1974c0: 0xc7af001c  lwc1        $f15, 0x1C($sp)
    ctx->pc = 0x1974c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1974c4: 0xc067274  jal         func_19C9D0
    ctx->pc = 0x1974C4u;
    SET_GPR_U32(ctx, 31, 0x1974CCu);
    ctx->pc = 0x19C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9D0u, 0x1974C4u, 0x1974CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974CCu;
label_1974cc:
    // 0x1974cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1974ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1974d0: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x1974d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1974d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1974d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1974d8: 0xc065d40  jal         func_197500
    ctx->pc = 0x1974D8u;
    SET_GPR_U32(ctx, 31, 0x1974E0u);
    ctx->pc = 0x197500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197500u, 0x1974D8u, 0x1974E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974E0u;
label_1974e0:
    // 0x1974e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1974e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1974e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1974e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1974e8: 0xc06730c  jal         func_19CC30
    ctx->pc = 0x1974E8u;
    SET_GPR_U32(ctx, 31, 0x1974F0u);
    ctx->pc = 0x19CC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CC30u, 0x1974E8u, 0x1974F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1974F0u;
label_1974f0:
    // 0x1974f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1974f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1974f4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1974f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1974f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1974F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1974F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197500u;
}
