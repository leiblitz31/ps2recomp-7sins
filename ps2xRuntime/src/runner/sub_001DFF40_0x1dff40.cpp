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

// Function: sub_001DFF40
// Address: 0x1dff40 - 0x1e02b0
void sub_001DFF40_0x1dff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFF40_0x1dff40");
#endif

    switch (ctx->pc) {
        case 0x1dff80u: goto label_1dff80;
        case 0x1dff90u: goto label_1dff90;
        case 0x1dffa0u: goto label_1dffa0;
        case 0x1dffb0u: goto label_1dffb0;
        case 0x1dffc0u: goto label_1dffc0;
        case 0x1dffd0u: goto label_1dffd0;
        case 0x1dffe0u: goto label_1dffe0;
        case 0x1e0020u: goto label_1e0020;
        case 0x1e0068u: goto label_1e0068;
        case 0x1e0080u: goto label_1e0080;
        case 0x1e00a0u: goto label_1e00a0;
        case 0x1e00c0u: goto label_1e00c0;
        case 0x1e00e0u: goto label_1e00e0;
        case 0x1e00fcu: goto label_1e00fc;
        case 0x1e0114u: goto label_1e0114;
        case 0x1e0130u: goto label_1e0130;
        case 0x1e0148u: goto label_1e0148;
        case 0x1e0164u: goto label_1e0164;
        case 0x1e017cu: goto label_1e017c;
        case 0x1e0198u: goto label_1e0198;
        case 0x1e01b0u: goto label_1e01b0;
        case 0x1e01ccu: goto label_1e01cc;
        case 0x1e01e4u: goto label_1e01e4;
        case 0x1e0200u: goto label_1e0200;
        case 0x1e0218u: goto label_1e0218;
        case 0x1e0234u: goto label_1e0234;
        case 0x1e024cu: goto label_1e024c;
        case 0x1e0268u: goto label_1e0268;
        case 0x1e0278u: goto label_1e0278;
        default: break;
    }

    ctx->pc = 0x1dff40u;

    // 0x1dff40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1dff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1dff44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1dff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1dff48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1dff4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1dff50: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dff54: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dff58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dff5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dff60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dff64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dff68: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1dff68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1dff6c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1dff6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x1dff70: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dff74: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x1dff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x1dff78: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1DFF78u;
    SET_GPR_U32(ctx, 31, 0x1DFF80u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1DFF78u, 0x1DFF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF80u;
label_1dff80:
    // 0x1dff80: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dff84: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1dff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1dff88: 0xc07815c  jal         func_1E0570
    ctx->pc = 0x1DFF88u;
    SET_GPR_U32(ctx, 31, 0x1DFF90u);
    ctx->pc = 0x1E0570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0570u, 0x1DFF88u, 0x1DFF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF90u;
label_1dff90:
    // 0x1dff90: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dff94: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1dff94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1dff98: 0xc078104  jal         func_1E0410
    ctx->pc = 0x1DFF98u;
    SET_GPR_U32(ctx, 31, 0x1DFFA0u);
    ctx->pc = 0x1E0410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0410u, 0x1DFF98u, 0x1DFFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFA0u;
label_1dffa0:
    // 0x1dffa0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dffa4: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1dffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1dffa8: 0xc0780ac  jal         func_1E02B0
    ctx->pc = 0x1DFFA8u;
    SET_GPR_U32(ctx, 31, 0x1DFFB0u);
    ctx->pc = 0x1E02B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E02B0u, 0x1DFFA8u, 0x1DFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFB0u;
label_1dffb0:
    // 0x1dffb0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dffb4: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1dffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1dffb8: 0xc056254  jal         func_158950
    ctx->pc = 0x1DFFB8u;
    SET_GPR_U32(ctx, 31, 0x1DFFC0u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1DFFB8u, 0x1DFFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFC0u;
label_1dffc0:
    // 0x1dffc0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dffc4: 0x244400d4  addiu       $a0, $v0, 0xD4
    ctx->pc = 0x1dffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x1dffc8: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1DFFC8u;
    SET_GPR_U32(ctx, 31, 0x1DFFD0u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1DFFC8u, 0x1DFFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFD0u;
label_1dffd0:
    // 0x1dffd0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dffd4: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1dffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1dffd8: 0xc056254  jal         func_158950
    ctx->pc = 0x1DFFD8u;
    SET_GPR_U32(ctx, 31, 0x1DFFE0u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1DFFD8u, 0x1DFFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFE0u;
label_1dffe0:
    // 0x1dffe0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dffe4: 0xac40010c  sw          $zero, 0x10C($v0)
    ctx->pc = 0x1dffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
    // 0x1dffe8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dffec: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1dffecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1dfff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dfff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfff4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dfff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dfff8: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1dfff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1dfffc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1dfffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e0000: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0004: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1e0004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1e0008: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e0008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e000c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0010: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1e0010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1e0014: 0x24450108  addiu       $a1, $v0, 0x108
    ctx->pc = 0x1e0014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x1e0018: 0xc11c208  jal         func_470820
    ctx->pc = 0x1E0018u;
    SET_GPR_U32(ctx, 31, 0x1E0020u);
    ctx->pc = 0x470820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470820u, 0x1E0018u, 0x1E0020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0020u;
label_1e0020:
    // 0x1e0020: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e0020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0024: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1e0024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1e0028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e002c: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1e002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0030: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0030u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0034: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x1e0034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1e0038: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e0038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e003c: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1e003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1e0040: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0044: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x1e0044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0048: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0048u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e004c: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x1e004cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x1e0050: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e0050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0054: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0058: 0x246400fc  addiu       $a0, $v1, 0xFC
    ctx->pc = 0x1e0058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 252));
    // 0x1e005c: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x1e005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1e0060: 0xc11c208  jal         func_470820
    ctx->pc = 0x1E0060u;
    SET_GPR_U32(ctx, 31, 0x1E0068u);
    ctx->pc = 0x470820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470820u, 0x1E0060u, 0x1E0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0068u;
label_1e0068:
    // 0x1e0068: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e006c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e0070: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e0070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e0074: 0x24a58040  addiu       $a1, $a1, -0x7FC0
    ctx->pc = 0x1e0074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934592));
    // 0x1e0078: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E0078u;
    SET_GPR_U32(ctx, 31, 0x1E0080u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E0078u, 0x1E0080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0080u;
label_1e0080:
    // 0x1e0080: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e0080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0084: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1e0084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x1e0088: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e008c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e0090: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e0090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e0094: 0x24a58058  addiu       $a1, $a1, -0x7FA8
    ctx->pc = 0x1e0094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934616));
    // 0x1e0098: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E0098u;
    SET_GPR_U32(ctx, 31, 0x1E00A0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E0098u, 0x1E00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00A0u;
label_1e00a0:
    // 0x1e00a0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e00a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e00a4: 0xac62006c  sw          $v0, 0x6C($v1)
    ctx->pc = 0x1e00a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
    // 0x1e00a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e00ac: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e00acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e00b0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e00b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e00b4: 0x24a58070  addiu       $a1, $a1, -0x7F90
    ctx->pc = 0x1e00b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934640));
    // 0x1e00b8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E00B8u;
    SET_GPR_U32(ctx, 31, 0x1E00C0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E00B8u, 0x1E00C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00C0u;
label_1e00c0:
    // 0x1e00c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1e00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e00c4: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x1e00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
    // 0x1e00c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e00cc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e00ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e00d0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e00d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e00d4: 0x24a58088  addiu       $a1, $a1, -0x7F78
    ctx->pc = 0x1e00d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934664));
    // 0x1e00d8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E00D8u;
    SET_GPR_U32(ctx, 31, 0x1E00E0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E00D8u, 0x1E00E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00E0u;
label_1e00e0:
    // 0x1e00e0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1e00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1e00e4: 0x27b700ac  addiu       $s7, $sp, 0xAC
    ctx->pc = 0x1e00e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x1e00e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e00ec: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e00f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1e00f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00f4: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E00F4u;
    SET_GPR_U32(ctx, 31, 0x1E00FCu);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E00F4u, 0x1E00FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00FCu;
label_1e00fc:
    // 0x1e00fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0100: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e0100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e0104: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e0104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e0108: 0x24a58098  addiu       $a1, $a1, -0x7F68
    ctx->pc = 0x1e0108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934680));
    // 0x1e010c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E010Cu;
    SET_GPR_U32(ctx, 31, 0x1E0114u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E010Cu, 0x1E0114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0114u;
label_1e0114:
    // 0x1e0114: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1e0118: 0x27b600a8  addiu       $s6, $sp, 0xA8
    ctx->pc = 0x1e0118u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1e011c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0120: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e0124: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1e0124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0128: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E0128u;
    SET_GPR_U32(ctx, 31, 0x1E0130u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E0128u, 0x1E0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0130u;
label_1e0130:
    // 0x1e0130: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0134: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e0134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e0138: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e0138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e013c: 0x24a580a8  addiu       $a1, $a1, -0x7F58
    ctx->pc = 0x1e013cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934696));
    // 0x1e0140: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E0140u;
    SET_GPR_U32(ctx, 31, 0x1E0148u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E0140u, 0x1E0148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0148u;
label_1e0148:
    // 0x1e0148: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1e0148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1e014c: 0x27b500a4  addiu       $s5, $sp, 0xA4
    ctx->pc = 0x1e014cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1e0150: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0154: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e0154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e0158: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e0158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e015c: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E015Cu;
    SET_GPR_U32(ctx, 31, 0x1E0164u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E015Cu, 0x1E0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0164u;
label_1e0164:
    // 0x1e0164: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0168: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e0168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e016c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e016cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e0170: 0x24a580b8  addiu       $a1, $a1, -0x7F48
    ctx->pc = 0x1e0170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934712));
    // 0x1e0174: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E0174u;
    SET_GPR_U32(ctx, 31, 0x1E017Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E0174u, 0x1E017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E017Cu;
label_1e017c:
    // 0x1e017c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1e017cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1e0180: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x1e0180u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e0184: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0188: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e0188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e018c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e018cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0190: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E0190u;
    SET_GPR_U32(ctx, 31, 0x1E0198u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E0190u, 0x1E0198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0198u;
label_1e0198:
    // 0x1e0198: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e019c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e019cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e01a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e01a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e01a4: 0x24a580c8  addiu       $a1, $a1, -0x7F38
    ctx->pc = 0x1e01a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934728));
    // 0x1e01a8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E01A8u;
    SET_GPR_U32(ctx, 31, 0x1E01B0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E01A8u, 0x1E01B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01B0u;
label_1e01b0:
    // 0x1e01b0: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x1e01b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x1e01b4: 0x27b3009c  addiu       $s3, $sp, 0x9C
    ctx->pc = 0x1e01b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1e01b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e01bc: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e01bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e01c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e01c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01c4: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E01C4u;
    SET_GPR_U32(ctx, 31, 0x1E01CCu);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E01C4u, 0x1E01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01CCu;
label_1e01cc:
    // 0x1e01cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e01d0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e01d4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e01d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e01d8: 0x24a580d8  addiu       $a1, $a1, -0x7F28
    ctx->pc = 0x1e01d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934744));
    // 0x1e01dc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E01DCu;
    SET_GPR_U32(ctx, 31, 0x1E01E4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E01DCu, 0x1E01E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01E4u;
label_1e01e4:
    // 0x1e01e4: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1e01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1e01e8: 0x27b20098  addiu       $s2, $sp, 0x98
    ctx->pc = 0x1e01e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e01ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e01f0: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e01f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e01f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e01f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01f8: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E01F8u;
    SET_GPR_U32(ctx, 31, 0x1E0200u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E01F8u, 0x1E0200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0200u;
label_1e0200:
    // 0x1e0200: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0204: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e0204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e0208: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e0208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e020c: 0x24a580e8  addiu       $a1, $a1, -0x7F18
    ctx->pc = 0x1e020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934760));
    // 0x1e0210: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E0210u;
    SET_GPR_U32(ctx, 31, 0x1E0218u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E0210u, 0x1E0218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0218u;
label_1e0218:
    // 0x1e0218: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x1e0218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x1e021c: 0x27b10094  addiu       $s1, $sp, 0x94
    ctx->pc = 0x1e021cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x1e0220: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0224: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e0224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e0228: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e022c: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E022Cu;
    SET_GPR_U32(ctx, 31, 0x1E0234u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E022Cu, 0x1E0234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0234u;
label_1e0234:
    // 0x1e0234: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0238: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e0238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e023c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e023cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e0240: 0x24a580f8  addiu       $a1, $a1, -0x7F08
    ctx->pc = 0x1e0240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934776));
    // 0x1e0244: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1E0244u;
    SET_GPR_U32(ctx, 31, 0x1E024Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1E0244u, 0x1E024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E024Cu;
label_1e024c:
    // 0x1e024c: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x1e024cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x1e0250: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x1e0250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e0254: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e0258: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e025c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e025cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0260: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E0260u;
    SET_GPR_U32(ctx, 31, 0x1E0268u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E0260u, 0x1E0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0268u;
label_1e0268:
    // 0x1e0268: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e0268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e026c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e026cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0270: 0xc078e50  jal         func_1E3940
    ctx->pc = 0x1E0270u;
    SET_GPR_U32(ctx, 31, 0x1E0278u);
    ctx->pc = 0x1E3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3940u, 0x1E0270u, 0x1E0278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0278u;
label_1e0278:
    // 0x1e0278: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e0278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e027c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e027cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e0280: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e0280u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e0284: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e0284u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e0288: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e0288u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e028c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e028cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e0290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e0294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e029c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e029cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e02a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1e02a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e02a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E02A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E02A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E02ACu;
    // 0x1e02ac: 0x0  nop
    ctx->pc = 0x1e02acu;
    // NOP
    ctx->pc = 0x1e02b0u;
}
