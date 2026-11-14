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

// Function: sub_001CD0C0
// Address: 0x1cd0c0 - 0x1cd440
void sub_001CD0C0_0x1cd0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD0C0_0x1cd0c0");
#endif

    switch (ctx->pc) {
        case 0x1cd120u: goto label_1cd120;
        case 0x1cd138u: goto label_1cd138;
        case 0x1cd150u: goto label_1cd150;
        case 0x1cd15cu: goto label_1cd15c;
        case 0x1cd174u: goto label_1cd174;
        case 0x1cd188u: goto label_1cd188;
        case 0x1cd1a0u: goto label_1cd1a0;
        case 0x1cd1d4u: goto label_1cd1d4;
        case 0x1cd1e8u: goto label_1cd1e8;
        case 0x1cd230u: goto label_1cd230;
        case 0x1cd240u: goto label_1cd240;
        case 0x1cd24cu: goto label_1cd24c;
        case 0x1cd264u: goto label_1cd264;
        case 0x1cd278u: goto label_1cd278;
        case 0x1cd2acu: goto label_1cd2ac;
        case 0x1cd2b8u: goto label_1cd2b8;
        case 0x1cd2d0u: goto label_1cd2d0;
        case 0x1cd364u: goto label_1cd364;
        case 0x1cd370u: goto label_1cd370;
        case 0x1cd388u: goto label_1cd388;
        case 0x1cd3c0u: goto label_1cd3c0;
        case 0x1cd3ccu: goto label_1cd3cc;
        case 0x1cd3e4u: goto label_1cd3e4;
        case 0x1cd404u: goto label_1cd404;
        default: break;
    }

    ctx->pc = 0x1cd0c0u;

    // 0x1cd0c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1cd0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1cd0c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cd0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cd0c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cd0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1cd0cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cd0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cd0d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cd0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cd0d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cd0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cd0d8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1cd0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1cd0dc: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x1cd0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x1cd0e0: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x1cd0e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1cd0e4: 0xe7ad00c0  swc1        $f13, 0xC0($sp)
    ctx->pc = 0x1cd0e4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1cd0e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd0ec: 0x8c4300c8  lw          $v1, 0xC8($v0)
    ctx->pc = 0x1cd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1cd0f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd0f4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD0F4u;
    {
        const bool branch_taken_0x1cd0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cd0f4) {
            ctx->pc = 0x1CD10Cu;
            goto label_1cd10c;
        }
    }
    ctx->pc = 0x1CD0FCu;
    // 0x1cd0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd100: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1cd100u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cd104: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CD104u;
    {
        const bool branch_taken_0x1cd104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd104) {
            ctx->pc = 0x1CD110u;
            goto label_1cd110;
        }
    }
    ctx->pc = 0x1CD10Cu;
label_1cd10c:
    // 0x1cd10c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cd10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd110:
    // 0x1cd110: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x1cd110u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1cd114: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1cd114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd118: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CD118u;
    SET_GPR_U32(ctx, 31, 0x1CD120u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CD118u, 0x1CD120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD120u;
label_1cd120:
    // 0x1cd120: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cd120u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd124: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd128: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cd128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cd12c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd130: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CD130u;
    SET_GPR_U32(ctx, 31, 0x1CD138u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CD130u, 0x1CD138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD138u;
label_1cd138:
    // 0x1cd138: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cd138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd13c: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x1cd13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1cd140: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x1cd140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cd144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd148: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CD148u;
    SET_GPR_U32(ctx, 31, 0x1CD150u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CD148u, 0x1CD150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD150u;
label_1cd150:
    // 0x1cd150: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1cd150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd154: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CD154u;
    SET_GPR_U32(ctx, 31, 0x1CD15Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CD154u, 0x1CD15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD15Cu;
label_1cd15c:
    // 0x1cd15c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cd15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd160: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd164: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cd164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cd168: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cd168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cd16c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CD16Cu;
    SET_GPR_U32(ctx, 31, 0x1CD174u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CD16Cu, 0x1CD174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD174u;
label_1cd174:
    // 0x1cd174: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cd174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd178: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd17c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cd17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd180: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CD180u;
    SET_GPR_U32(ctx, 31, 0x1CD188u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CD180u, 0x1CD188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD188u;
label_1cd188:
    // 0x1cd188: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd18c: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cd18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1cd190: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1cd190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cd194: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x1cd194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1cd198: 0xc073998  jal         func_1CE660
    ctx->pc = 0x1CD198u;
    SET_GPR_U32(ctx, 31, 0x1CD1A0u);
    ctx->pc = 0x1CE660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE660u, 0x1CD198u, 0x1CD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1A0u;
label_1cd1a0:
    // 0x1cd1a0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1cd1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd1a4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1cd1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1cd1a8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1cd1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd1ac: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1cd1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1cd1b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd1b4: 0x0  nop
    ctx->pc = 0x1cd1b4u;
    // NOP
    // 0x1cd1b8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1cd1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1cd1bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd1c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cd1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cd1c4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1cd1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cd1c8: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x1cd1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1cd1cc: 0xc104d64  jal         func_413590
    ctx->pc = 0x1CD1CCu;
    SET_GPR_U32(ctx, 31, 0x1CD1D4u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x1CD1CCu, 0x1CD1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD1D4u;
label_1cd1d4:
    // 0x1cd1d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cd1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd1d8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1cd1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd1dc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD1DCu;
    {
        const bool branch_taken_0x1cd1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1dc) {
            ctx->pc = 0x1CD204u;
            goto label_1cd204;
        }
    }
    ctx->pc = 0x1CD1E4u;
    // 0x1cd1e4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cd1e8:
    // 0x1cd1e8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cd1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cd1ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cd1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cd1f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cd1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cd1f4: 0x0  nop
    ctx->pc = 0x1cd1f4u;
    // NOP
    // 0x1cd1f8: 0x0  nop
    ctx->pc = 0x1cd1f8u;
    // NOP
    // 0x1cd1fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CD1FCu;
    {
        const bool branch_taken_0x1cd1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1fc) {
            ctx->pc = 0x1CD1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd1e8;
        }
    }
    ctx->pc = 0x1CD204u;
label_1cd204:
    // 0x1cd204: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1cd204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd208: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1cd208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1cd20c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1cd20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd210: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1cd210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1cd214: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1cd214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1cd218: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd21c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cd21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd220: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1cd220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd224: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x1cd224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1cd228: 0xc104d84  jal         func_413610
    ctx->pc = 0x1CD228u;
    SET_GPR_U32(ctx, 31, 0x1CD230u);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x1CD228u, 0x1CD230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD230u;
label_1cd230:
    // 0x1cd230: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cd230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd234: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1cd234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd238: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x1CD238u;
    SET_GPR_U32(ctx, 31, 0x1CD240u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x1CD238u, 0x1CD240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD240u;
label_1cd240:
    // 0x1cd240: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1cd240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd244: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CD244u;
    SET_GPR_U32(ctx, 31, 0x1CD24Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CD244u, 0x1CD24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD24Cu;
label_1cd24c:
    // 0x1cd24c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cd24cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd250: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd254: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cd254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cd258: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cd258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd25c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CD25Cu;
    SET_GPR_U32(ctx, 31, 0x1CD264u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CD25Cu, 0x1CD264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD264u;
label_1cd264:
    // 0x1cd264: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cd264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd268: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd26c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1cd26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cd270: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1CD270u;
    SET_GPR_U32(ctx, 31, 0x1CD278u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1CD270u, 0x1CD278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD278u;
label_1cd278:
    // 0x1cd278: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1cd278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1cd27c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd27cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd280: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1cd280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd284: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cd284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cd288: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1cd288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1cd28c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1cd28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1cd290: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd294: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1cd294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd298: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cd298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cd29c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1cd29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1cd2a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2a4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1CD2A4u;
    {
        const bool branch_taken_0x1cd2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd2a4) {
            ctx->pc = 0x1CD408u;
            goto label_1cd408;
        }
    }
    ctx->pc = 0x1CD2ACu;
label_1cd2ac:
    // 0x1cd2ac: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1cd2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd2b0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CD2B0u;
    SET_GPR_U32(ctx, 31, 0x1CD2B8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CD2B0u, 0x1CD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2B8u;
label_1cd2b8:
    // 0x1cd2b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cd2b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd2bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd2c0: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x1cd2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x1cd2c4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cd2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cd2c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CD2C8u;
    SET_GPR_U32(ctx, 31, 0x1CD2D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CD2C8u, 0x1CD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD2D0u;
label_1cd2d0:
    // 0x1cd2d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd2d4: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x1cd2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cd2d8: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x1cd2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cd2dc: 0xc78396b8  lwc1        $f3, -0x6948($gp)
    ctx->pc = 0x1cd2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cd2e0: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1cd2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd2e4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1cd2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd2e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd2e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd2ec: 0x0  nop
    ctx->pc = 0x1cd2ecu;
    // NOP
    // 0x1cd2f0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cd2f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cd2f4: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1cd2f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cd2f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd2f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd2fc: 0x0  nop
    ctx->pc = 0x1cd2fcu;
    // NOP
    // 0x1cd300: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cd300u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cd304: 0x4604285d  msub.s      $f1, $f5, $f4
    ctx->pc = 0x1cd304u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1cd308: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1cd308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cd30c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cd30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd310: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1cd310u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd314: 0xc7a50074  lwc1        $f5, 0x74($sp)
    ctx->pc = 0x1cd314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cd318: 0xc7a400c0  lwc1        $f4, 0xC0($sp)
    ctx->pc = 0x1cd318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cd31c: 0xc78396b8  lwc1        $f3, -0x6948($gp)
    ctx->pc = 0x1cd31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cd320: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1cd320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd324: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1cd324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd32c: 0x0  nop
    ctx->pc = 0x1cd32cu;
    // NOP
    // 0x1cd330: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cd330u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cd334: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1cd334u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1cd338: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd338u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd33c: 0x0  nop
    ctx->pc = 0x1cd33cu;
    // NOP
    // 0x1cd340: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cd340u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1cd344: 0x4604285d  msub.s      $f1, $f5, $f4
    ctx->pc = 0x1cd344u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1cd348: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1cd348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cd34c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd350: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x1cd350u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd35c: 0xc08c208  jal         func_230820
    ctx->pc = 0x1CD35Cu;
    SET_GPR_U32(ctx, 31, 0x1CD364u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1CD35Cu, 0x1CD364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD364u;
label_1cd364:
    // 0x1cd364: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1cd364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd368: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CD368u;
    SET_GPR_U32(ctx, 31, 0x1CD370u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CD368u, 0x1CD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD370u;
label_1cd370:
    // 0x1cd370: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cd370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd374: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd378: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x1cd378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x1cd37c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cd380: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CD380u;
    SET_GPR_U32(ctx, 31, 0x1CD388u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CD380u, 0x1CD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD388u;
label_1cd388:
    // 0x1cd388: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cd388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd38c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd390: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x1cd390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd394: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x1cd394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x1cd398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd39c: 0x0  nop
    ctx->pc = 0x1cd39cu;
    // NOP
    // 0x1cd3a0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1cd3a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd3a4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1cd3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd3a8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1cd3a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd3ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3b0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1cd3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cd3b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cd3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd3b8: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1CD3B8u;
    SET_GPR_U32(ctx, 31, 0x1CD3C0u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1CD3B8u, 0x1CD3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3C0u;
label_1cd3c0:
    // 0x1cd3c0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1cd3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd3c4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CD3C4u;
    SET_GPR_U32(ctx, 31, 0x1CD3CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CD3C4u, 0x1CD3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3CCu;
label_1cd3cc:
    // 0x1cd3cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cd3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3d0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd3d4: 0x26050009  addiu       $a1, $s0, 0x9
    ctx->pc = 0x1cd3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x1cd3d8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cd3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1cd3dc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CD3DCu;
    SET_GPR_U32(ctx, 31, 0x1CD3E4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CD3DCu, 0x1CD3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD3E4u;
label_1cd3e4:
    // 0x1cd3e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cd3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd3e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd3ec: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1cd3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cd3f0: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x1cd3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cd3f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd3f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cd3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd3fc: 0xc08c544  jal         func_231510
    ctx->pc = 0x1CD3FCu;
    SET_GPR_U32(ctx, 31, 0x1CD404u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1CD3FCu, 0x1CD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD404u;
label_1cd404:
    // 0x1cd404: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cd408:
    // 0x1cd408: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x1cd408u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cd40c: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1CD40Cu;
    {
        const bool branch_taken_0x1cd40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd40c) {
            ctx->pc = 0x1CD2ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd2ac;
        }
    }
    ctx->pc = 0x1CD414u;
    // 0x1cd414: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cd414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd418: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cd418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd41c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cd41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd420: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd428: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1cd428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1cd42c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD434u;
    // 0x1cd434: 0x0  nop
    ctx->pc = 0x1cd434u;
    // NOP
    // 0x1cd438: 0x0  nop
    ctx->pc = 0x1cd438u;
    // NOP
    // 0x1cd43c: 0x0  nop
    ctx->pc = 0x1cd43cu;
    // NOP
    ctx->pc = 0x1cd440u;
}
