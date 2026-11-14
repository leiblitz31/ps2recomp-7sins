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

// Function: sub_001EFA30
// Address: 0x1efa30 - 0x1f0160
void sub_001EFA30_0x1efa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFA30_0x1efa30");
#endif

    switch (ctx->pc) {
        case 0x1efa70u: goto label_1efa70;
        case 0x1efa84u: goto label_1efa84;
        case 0x1efa98u: goto label_1efa98;
        case 0x1efb00u: goto label_1efb00;
        case 0x1efb78u: goto label_1efb78;
        case 0x1efb98u: goto label_1efb98;
        case 0x1efbb8u: goto label_1efbb8;
        case 0x1efbd8u: goto label_1efbd8;
        case 0x1efbecu: goto label_1efbec;
        case 0x1efbf8u: goto label_1efbf8;
        case 0x1efc08u: goto label_1efc08;
        case 0x1efc74u: goto label_1efc74;
        case 0x1efc8cu: goto label_1efc8c;
        case 0x1efca4u: goto label_1efca4;
        case 0x1efcccu: goto label_1efccc;
        case 0x1efce4u: goto label_1efce4;
        case 0x1efd0cu: goto label_1efd0c;
        case 0x1efd28u: goto label_1efd28;
        case 0x1efd50u: goto label_1efd50;
        case 0x1efd64u: goto label_1efd64;
        case 0x1efd80u: goto label_1efd80;
        case 0x1efe00u: goto label_1efe00;
        case 0x1efe74u: goto label_1efe74;
        case 0x1efe9cu: goto label_1efe9c;
        case 0x1efea4u: goto label_1efea4;
        case 0x1eff18u: goto label_1eff18;
        case 0x1eff90u: goto label_1eff90;
        case 0x1effb8u: goto label_1effb8;
        case 0x1effc0u: goto label_1effc0;
        case 0x1f0034u: goto label_1f0034;
        case 0x1f0060u: goto label_1f0060;
        case 0x1f0078u: goto label_1f0078;
        case 0x1f00a0u: goto label_1f00a0;
        case 0x1f00b8u: goto label_1f00b8;
        case 0x1f00e4u: goto label_1f00e4;
        case 0x1f00f4u: goto label_1f00f4;
        case 0x1f0120u: goto label_1f0120;
        default: break;
    }

    ctx->pc = 0x1efa30u;

    // 0x1efa30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1efa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1efa34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1efa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1efa38: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1efa38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1efa3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1efa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1efa40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1efa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1efa44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1efa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1efa48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1efa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1efa4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1efa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1efa50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1efa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1efa54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1efa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1efa58: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1efa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x1efa5c: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x1efa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x1efa60: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1efa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efa64: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1efa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1efa68: 0xc07bd74  jal         func_1EF5D0
    ctx->pc = 0x1EFA68u;
    SET_GPR_U32(ctx, 31, 0x1EFA70u);
    ctx->pc = 0x1EF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5D0u, 0x1EFA68u, 0x1EFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA70u;
label_1efa70:
    // 0x1efa70: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1efa70u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1efa74: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1efa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efa78: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1efa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1efa7c: 0xc07be2c  jal         func_1EF8B0
    ctx->pc = 0x1EFA7Cu;
    SET_GPR_U32(ctx, 31, 0x1EFA84u);
    ctx->pc = 0x1EF8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B0u, 0x1EFA7Cu, 0x1EFA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA84u;
label_1efa84:
    // 0x1efa84: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1efa84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1efa88: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1efa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efa8c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1efa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1efa90: 0xc07bd98  jal         func_1EF660
    ctx->pc = 0x1EFA90u;
    SET_GPR_U32(ctx, 31, 0x1EFA98u);
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1EFA90u, 0x1EFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA98u;
label_1efa98:
    // 0x1efa98: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1efa98u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1efa9c: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1efa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1efaa0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1efaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1efaa4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1efaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efaa8: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1efaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efaac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1efaacu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1efab0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1efab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1efab4: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1efab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1efab8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1efab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1efabc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1efabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efac0: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1efac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efac4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1efac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1efac8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1efac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1efacc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efad0: 0x0  nop
    ctx->pc = 0x1efad0u;
    // NOP
    // 0x1efad4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1efad4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1efad8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1efad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1efadc: 0xa3a000bf  sb          $zero, 0xBF($sp)
    ctx->pc = 0x1efadcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efae4: 0x0  nop
    ctx->pc = 0x1efae4u;
    // NOP
    // 0x1efae8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1efae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1efaec: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1efaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efaf0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1efaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1efaf4: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1efaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1efaf8: 0xc07bd0c  jal         func_1EF430
    ctx->pc = 0x1EFAF8u;
    SET_GPR_U32(ctx, 31, 0x1EFB00u);
    ctx->pc = 0x1EF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF430u, 0x1EFAF8u, 0x1EFB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB00u;
label_1efb00:
    // 0x1efb00: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1efb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efb04: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1efb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efb08: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1efb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1efb0c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x1efb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efb10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1efb10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efb14: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1efb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1efb18: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1efb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efb1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1efb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efb20: 0x45010183  bc1t        . + 4 + (0x183 << 2)
    ctx->pc = 0x1EFB20u;
    {
        const bool branch_taken_0x1efb20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efb20) {
            ctx->pc = 0x1F0130u;
            goto label_1f0130;
        }
    }
    ctx->pc = 0x1EFB28u;
    // 0x1efb28: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1efb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1efb2c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1efb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1efb30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1efb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1efb34: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EFB34u;
    {
        const bool branch_taken_0x1efb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1efb34) {
            ctx->pc = 0x1EFBC4u;
            goto label_1efbc4;
        }
    }
    ctx->pc = 0x1EFB3Cu;
    // 0x1efb3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1efb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1efb40: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EFB40u;
    {
        const bool branch_taken_0x1efb40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1efb40) {
            ctx->pc = 0x1EFBA4u;
            goto label_1efba4;
        }
    }
    ctx->pc = 0x1EFB48u;
    // 0x1efb48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efb4c: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EFB4Cu;
    {
        const bool branch_taken_0x1efb4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1efb4c) {
            ctx->pc = 0x1EFB84u;
            goto label_1efb84;
        }
    }
    ctx->pc = 0x1EFB54u;
    // 0x1efb54: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFB54u;
    {
        const bool branch_taken_0x1efb54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb54) {
            ctx->pc = 0x1EFB64u;
            goto label_1efb64;
        }
    }
    ctx->pc = 0x1EFB5Cu;
    // 0x1efb5c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1EFB5Cu;
    {
        const bool branch_taken_0x1efb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb5c) {
            ctx->pc = 0x1EFBDCu;
            goto label_1efbdc;
        }
    }
    ctx->pc = 0x1EFB64u;
label_1efb64:
    // 0x1efb64: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1efb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efb68: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1efb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1efb6c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1efb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1efb70: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EFB70u;
    SET_GPR_U32(ctx, 31, 0x1EFB78u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EFB70u, 0x1EFB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB78u;
label_1efb78:
    // 0x1efb78: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1efb78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efb7c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EFB7Cu;
    {
        const bool branch_taken_0x1efb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb7c) {
            ctx->pc = 0x1EFBDCu;
            goto label_1efbdc;
        }
    }
    ctx->pc = 0x1EFB84u;
label_1efb84:
    // 0x1efb84: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1efb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efb88: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1efb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1efb8c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1efb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1efb90: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EFB90u;
    SET_GPR_U32(ctx, 31, 0x1EFB98u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EFB90u, 0x1EFB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB98u;
label_1efb98:
    // 0x1efb98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1efb98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efb9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EFB9Cu;
    {
        const bool branch_taken_0x1efb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb9c) {
            ctx->pc = 0x1EFBDCu;
            goto label_1efbdc;
        }
    }
    ctx->pc = 0x1EFBA4u;
label_1efba4:
    // 0x1efba4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1efba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efba8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1efba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1efbac: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1efbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1efbb0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EFBB0u;
    SET_GPR_U32(ctx, 31, 0x1EFBB8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EFBB0u, 0x1EFBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBB8u;
label_1efbb8:
    // 0x1efbb8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1efbb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efbbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EFBBCu;
    {
        const bool branch_taken_0x1efbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efbbc) {
            ctx->pc = 0x1EFBDCu;
            goto label_1efbdc;
        }
    }
    ctx->pc = 0x1EFBC4u;
label_1efbc4:
    // 0x1efbc4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1efbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efbc8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1efbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1efbcc: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1efbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1efbd0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EFBD0u;
    SET_GPR_U32(ctx, 31, 0x1EFBD8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EFBD0u, 0x1EFBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBD8u;
label_1efbd8:
    // 0x1efbd8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1efbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1efbdc:
    // 0x1efbdc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1efbdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efbe0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1efbe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efbe4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EFBE4u;
    {
        const bool branch_taken_0x1efbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efbe4) {
            ctx->pc = 0x1EFC28u;
            goto label_1efc28;
        }
    }
    ctx->pc = 0x1EFBECu;
label_1efbec:
    // 0x1efbec: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1efbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efbf0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EFBF0u;
    SET_GPR_U32(ctx, 31, 0x1EFBF8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EFBF0u, 0x1EFBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBF8u;
label_1efbf8:
    // 0x1efbf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1efbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efbfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efc00: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1EFC00u;
    SET_GPR_U32(ctx, 31, 0x1EFC08u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1EFC00u, 0x1EFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC08u;
label_1efc08:
    // 0x1efc08: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1efc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1efc0c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFC0Cu;
    {
        const bool branch_taken_0x1efc0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efc0c) {
            ctx->pc = 0x1EFC24u;
            goto label_1efc24;
        }
    }
    ctx->pc = 0x1EFC14u;
    // 0x1efc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efc18: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1efc18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1efc1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFC1Cu;
    {
        const bool branch_taken_0x1efc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc1c) {
            ctx->pc = 0x1EFC28u;
            goto label_1efc28;
        }
    }
    ctx->pc = 0x1EFC24u;
label_1efc24:
    // 0x1efc24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1efc24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1efc28:
    // 0x1efc28: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFC28u;
    {
        const bool branch_taken_0x1efc28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efc28) {
            ctx->pc = 0x1EFC40u;
            goto label_1efc40;
        }
    }
    ctx->pc = 0x1EFC30u;
    // 0x1efc30: 0x2643000a  addiu       $v1, $s2, 0xA
    ctx->pc = 0x1efc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1efc34: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1efc34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1efc38: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1EFC38u;
    {
        const bool branch_taken_0x1efc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efc38) {
            ctx->pc = 0x1EFBECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efbec;
        }
    }
    ctx->pc = 0x1EFC40u;
label_1efc40:
    // 0x1efc40: 0x16a00137  bnez        $s5, . + 4 + (0x137 << 2)
    ctx->pc = 0x1EFC40u;
    {
        const bool branch_taken_0x1efc40 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efc40) {
            ctx->pc = 0x1F0120u;
            goto label_1f0120;
        }
    }
    ctx->pc = 0x1EFC48u;
    // 0x1efc48: 0x16800135  bnez        $s4, . + 4 + (0x135 << 2)
    ctx->pc = 0x1EFC48u;
    {
        const bool branch_taken_0x1efc48 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efc48) {
            ctx->pc = 0x1F0120u;
            goto label_1f0120;
        }
    }
    ctx->pc = 0x1EFC50u;
    // 0x1efc50: 0x16600133  bnez        $s3, . + 4 + (0x133 << 2)
    ctx->pc = 0x1EFC50u;
    {
        const bool branch_taken_0x1efc50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efc50) {
            ctx->pc = 0x1F0120u;
            goto label_1f0120;
        }
    }
    ctx->pc = 0x1EFC58u;
    // 0x1efc58: 0x12200131  beqz        $s1, . + 4 + (0x131 << 2)
    ctx->pc = 0x1EFC58u;
    {
        const bool branch_taken_0x1efc58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc58) {
            ctx->pc = 0x1F0120u;
            goto label_1f0120;
        }
    }
    ctx->pc = 0x1EFC60u;
    // 0x1efc60: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1efc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efc64: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1efc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1efc68: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1efc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1efc6c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EFC6Cu;
    SET_GPR_U32(ctx, 31, 0x1EFC74u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EFC6Cu, 0x1EFC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC74u;
label_1efc74:
    // 0x1efc74: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x1efc74u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efc78: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1efc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efc7c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1efc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1efc80: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1efc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1efc84: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EFC84u;
    SET_GPR_U32(ctx, 31, 0x1EFC8Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EFC84u, 0x1EFC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC8Cu;
label_1efc8c:
    // 0x1efc8c: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1efc8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efc90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efc94: 0xa3a200bf  sb          $v0, 0xBF($sp)
    ctx->pc = 0x1efc94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 2));
    // 0x1efc98: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1efc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efc9c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EFC9Cu;
    SET_GPR_U32(ctx, 31, 0x1EFCA4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EFC9Cu, 0x1EFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCA4u;
label_1efca4:
    // 0x1efca4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1efca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1efca8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1efca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1efcac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1efcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1efcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1efcb8: 0x27a700bf  addiu       $a3, $sp, 0xBF
    ctx->pc = 0x1efcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 191));
    // 0x1efcbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1efcbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1efcc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcc4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1EFCC4u;
    SET_GPR_U32(ctx, 31, 0x1EFCCCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1EFCC4u, 0x1EFCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCCCu;
label_1efccc:
    // 0x1efccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efcccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efcd0: 0x0  nop
    ctx->pc = 0x1efcd0u;
    // NOP
    // 0x1efcd4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1efcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1efcd8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1efcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efcdc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EFCDCu;
    SET_GPR_U32(ctx, 31, 0x1EFCE4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EFCDCu, 0x1EFCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFCE4u;
label_1efce4:
    // 0x1efce4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1efce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1efce8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1efce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1efcec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1efcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efcf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1efcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1efcf8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1efcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1efcfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1efcfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1efd00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd04: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1EFD04u;
    SET_GPR_U32(ctx, 31, 0x1EFD0Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1EFD04u, 0x1EFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD0Cu;
label_1efd0c:
    // 0x1efd0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1efd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1efd10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd14: 0x0  nop
    ctx->pc = 0x1efd14u;
    // NOP
    // 0x1efd18: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1efd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1efd1c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1efd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efd20: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EFD20u;
    SET_GPR_U32(ctx, 31, 0x1EFD28u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EFD20u, 0x1EFD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD28u;
label_1efd28:
    // 0x1efd28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1efd28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1efd2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1efd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1efd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1efd38: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1efd38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1efd3c: 0xc7ad00b8  lwc1        $f13, 0xB8($sp)
    ctx->pc = 0x1efd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1efd40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1efd40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1efd44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd48: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1EFD48u;
    SET_GPR_U32(ctx, 31, 0x1EFD50u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1EFD48u, 0x1EFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD50u;
label_1efd50:
    // 0x1efd50: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1efd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1efd54: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1efd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1efd58: 0x2445001c  addiu       $a1, $v0, 0x1C
    ctx->pc = 0x1efd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1efd5c: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1EFD5Cu;
    SET_GPR_U32(ctx, 31, 0x1EFD64u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1EFD5Cu, 0x1EFD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD64u;
label_1efd64:
    // 0x1efd64: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1efd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1efd68: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1efd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1efd6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1efd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efd70: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EFD70u;
    {
        const bool branch_taken_0x1efd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1efd70) {
            ctx->pc = 0x1EFDF8u;
            goto label_1efdf8;
        }
    }
    ctx->pc = 0x1EFD78u;
    // 0x1efd78: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EFD78u;
    SET_GPR_U32(ctx, 31, 0x1EFD80u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EFD78u, 0x1EFD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFD80u;
label_1efd80:
    // 0x1efd80: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFD80u;
    {
        const bool branch_taken_0x1efd80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1efd80) {
            ctx->pc = 0x1EFD9Cu;
            goto label_1efd9c;
        }
    }
    ctx->pc = 0x1EFD88u;
    // 0x1efd88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efd88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd8c: 0x0  nop
    ctx->pc = 0x1efd8cu;
    // NOP
    // 0x1efd90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efd90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efd94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFD94u;
    {
        const bool branch_taken_0x1efd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd94) {
            ctx->pc = 0x1EFDB8u;
            goto label_1efdb8;
        }
    }
    ctx->pc = 0x1EFD9Cu;
label_1efd9c:
    // 0x1efd9c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1efd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1efda0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1efda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1efda4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1efda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1efda8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efda8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efdac: 0x0  nop
    ctx->pc = 0x1efdacu;
    // NOP
    // 0x1efdb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efdb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efdb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1efdb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1efdb8:
    // 0x1efdb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1efdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1efdbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efdbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efdc0: 0x0  nop
    ctx->pc = 0x1efdc0u;
    // NOP
    // 0x1efdc4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1efdc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1efdc8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1efdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1efdcc: 0xc44200b4  lwc1        $f2, 0xB4($v0)
    ctx->pc = 0x1efdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efdd0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1efdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efdd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efdd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efdd8: 0x0  nop
    ctx->pc = 0x1efdd8u;
    // NOP
    // 0x1efddc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1efddcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1efde0: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1efde0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1efde4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1efde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efde8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1efde8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1efdec: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1efdecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1efdf0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1EFDF0u;
    {
        const bool branch_taken_0x1efdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efdf0) {
            ctx->pc = 0x1EFE68u;
            goto label_1efe68;
        }
    }
    ctx->pc = 0x1EFDF8u;
label_1efdf8:
    // 0x1efdf8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EFDF8u;
    SET_GPR_U32(ctx, 31, 0x1EFE00u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EFDF8u, 0x1EFE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE00u;
label_1efe00:
    // 0x1efe00: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFE00u;
    {
        const bool branch_taken_0x1efe00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1efe00) {
            ctx->pc = 0x1EFE1Cu;
            goto label_1efe1c;
        }
    }
    ctx->pc = 0x1EFE08u;
    // 0x1efe08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efe08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe0c: 0x0  nop
    ctx->pc = 0x1efe0cu;
    // NOP
    // 0x1efe10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efe10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efe14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE14u;
    {
        const bool branch_taken_0x1efe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efe14) {
            ctx->pc = 0x1EFE38u;
            goto label_1efe38;
        }
    }
    ctx->pc = 0x1EFE1Cu;
label_1efe1c:
    // 0x1efe1c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1efe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1efe20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1efe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1efe24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1efe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1efe28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efe28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe2c: 0x0  nop
    ctx->pc = 0x1efe2cu;
    // NOP
    // 0x1efe30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efe30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efe34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1efe34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1efe38:
    // 0x1efe38: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1efe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1efe3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efe3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe40: 0x0  nop
    ctx->pc = 0x1efe40u;
    // NOP
    // 0x1efe44: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1efe44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1efe48: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1efe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1efe4c: 0xc44200b4  lwc1        $f2, 0xB4($v0)
    ctx->pc = 0x1efe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efe50: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1efe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efe54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe58: 0x0  nop
    ctx->pc = 0x1efe58u;
    // NOP
    // 0x1efe5c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1efe5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1efe60: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x1efe60u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1efe64: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1efe64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1efe68:
    // 0x1efe68: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1efe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1efe6c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EFE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EFE74u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EFE6Cu, 0x1EFE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE74u;
label_1efe74:
    // 0x1efe74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1efe74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1efe78: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1efe78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1efe7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1efe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efe80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1efe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe88: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x1efe88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1efe8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1efe8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1efe90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe94: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1EFE94u;
    SET_GPR_U32(ctx, 31, 0x1EFE9Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1EFE94u, 0x1EFE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE9Cu;
label_1efe9c:
    // 0x1efe9c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1EFEA4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EFE9Cu, 0x1EFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFEA4u;
label_1efea4:
    // 0x1efea4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFEA4u;
    {
        const bool branch_taken_0x1efea4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1efea4) {
            ctx->pc = 0x1EFEC0u;
            goto label_1efec0;
        }
    }
    ctx->pc = 0x1EFEACu;
    // 0x1efeac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efeb0: 0x0  nop
    ctx->pc = 0x1efeb0u;
    // NOP
    // 0x1efeb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efeb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efeb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFEB8u;
    {
        const bool branch_taken_0x1efeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efeb8) {
            ctx->pc = 0x1EFEDCu;
            goto label_1efedc;
        }
    }
    ctx->pc = 0x1EFEC0u;
label_1efec0:
    // 0x1efec0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1efec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1efec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1efec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1efec8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1efec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1efecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efeccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efed0: 0x0  nop
    ctx->pc = 0x1efed0u;
    // NOP
    // 0x1efed4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efed8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1efed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1efedc:
    // 0x1efedc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1efedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1efee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efee4: 0x0  nop
    ctx->pc = 0x1efee4u;
    // NOP
    // 0x1efee8: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1efee8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1efeec: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1efeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1efef0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1efef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1efef4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1efef8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1efef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efefc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efefcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff00: 0x0  nop
    ctx->pc = 0x1eff00u;
    // NOP
    // 0x1eff04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eff04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eff08: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eff08u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eff0c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1eff0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1eff10: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EFF10u;
    SET_GPR_U32(ctx, 31, 0x1EFF18u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EFF10u, 0x1EFF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF18u;
label_1eff18:
    // 0x1eff18: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFF18u;
    {
        const bool branch_taken_0x1eff18 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eff18) {
            ctx->pc = 0x1EFF34u;
            goto label_1eff34;
        }
    }
    ctx->pc = 0x1EFF20u;
    // 0x1eff20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eff20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff24: 0x0  nop
    ctx->pc = 0x1eff24u;
    // NOP
    // 0x1eff28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eff28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eff2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFF2Cu;
    {
        const bool branch_taken_0x1eff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eff2c) {
            ctx->pc = 0x1EFF50u;
            goto label_1eff50;
        }
    }
    ctx->pc = 0x1EFF34u;
label_1eff34:
    // 0x1eff34: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1eff34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1eff38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eff38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eff3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eff3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eff40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eff40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff44: 0x0  nop
    ctx->pc = 0x1eff44u;
    // NOP
    // 0x1eff48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eff48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eff4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1eff4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1eff50:
    // 0x1eff50: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1eff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1eff54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eff54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff58: 0x0  nop
    ctx->pc = 0x1eff58u;
    // NOP
    // 0x1eff5c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1eff5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1eff60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1eff60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1eff64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eff64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eff68: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1eff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1eff6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eff6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eff70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eff70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff74: 0x0  nop
    ctx->pc = 0x1eff74u;
    // NOP
    // 0x1eff78: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eff78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eff7c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eff7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eff80: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1eff80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1eff84: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1eff84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1eff88: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EFF88u;
    SET_GPR_U32(ctx, 31, 0x1EFF90u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EFF88u, 0x1EFF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFF90u;
label_1eff90:
    // 0x1eff90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eff90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eff94: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1eff94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eff98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1effa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1effa4: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1effa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1effa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1effa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1effacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effb0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1EFFB0u;
    SET_GPR_U32(ctx, 31, 0x1EFFB8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1EFFB0u, 0x1EFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFB8u;
label_1effb8:
    // 0x1effb8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EFFB8u;
    SET_GPR_U32(ctx, 31, 0x1EFFC0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EFFB8u, 0x1EFFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFC0u;
label_1effc0:
    // 0x1effc0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFFC0u;
    {
        const bool branch_taken_0x1effc0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1effc0) {
            ctx->pc = 0x1EFFDCu;
            goto label_1effdc;
        }
    }
    ctx->pc = 0x1EFFC8u;
    // 0x1effc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1effc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1effcc: 0x0  nop
    ctx->pc = 0x1effccu;
    // NOP
    // 0x1effd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1effd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1effd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFFD4u;
    {
        const bool branch_taken_0x1effd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1effd4) {
            ctx->pc = 0x1EFFF8u;
            goto label_1efff8;
        }
    }
    ctx->pc = 0x1EFFDCu;
label_1effdc:
    // 0x1effdc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1effdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1effe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1effe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1effe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1effe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1effe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1effe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1effec: 0x0  nop
    ctx->pc = 0x1effecu;
    // NOP
    // 0x1efff0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efff4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1efff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1efff8:
    // 0x1efff8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1efff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1efffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0000: 0x0  nop
    ctx->pc = 0x1f0000u;
    // NOP
    // 0x1f0004: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1f0004u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0008: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1f0008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f000c: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x1f000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0010: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1f0010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0018: 0x0  nop
    ctx->pc = 0x1f0018u;
    // NOP
    // 0x1f001c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1f001cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1f0020: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1f0020u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f0024: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1f0024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1f0028: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f002c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F002Cu;
    SET_GPR_U32(ctx, 31, 0x1F0034u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F002Cu, 0x1F0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0034u;
label_1f0034:
    // 0x1f0034: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f0034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0038: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f0038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f003c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f0040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0048: 0x27a700a8  addiu       $a3, $sp, 0xA8
    ctx->pc = 0x1f0048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1f004c: 0xc46d00ac  lwc1        $f13, 0xAC($v1)
    ctx->pc = 0x1f004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0050: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0054: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f0054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0058: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1F0058u;
    SET_GPR_U32(ctx, 31, 0x1F0060u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1F0058u, 0x1F0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0060u;
label_1f0060:
    // 0x1f0060: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0064: 0x0  nop
    ctx->pc = 0x1f0064u;
    // NOP
    // 0x1f0068: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f0068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f006c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1f006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f0070: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F0070u;
    SET_GPR_U32(ctx, 31, 0x1F0078u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F0070u, 0x1F0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0078u;
label_1f0078:
    // 0x1f0078: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f0078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f007c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f007cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0080: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f0080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0084: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1f0084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f0088: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x1f0088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f008c: 0xc7ad00b4  lwc1        $f13, 0xB4($sp)
    ctx->pc = 0x1f008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f0090: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0094: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f0094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0098: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1F0098u;
    SET_GPR_U32(ctx, 31, 0x1F00A0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1F0098u, 0x1F00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00A0u;
label_1f00a0:
    // 0x1f00a0: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1f00a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f00a4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1f00a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1f00a8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1f00a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1f00ac: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1f00acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f00b0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F00B0u;
    SET_GPR_U32(ctx, 31, 0x1F00B8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F00B0u, 0x1F00B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00B8u;
label_1f00b8:
    // 0x1f00b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f00b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f00bc: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f00c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f00c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f00c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f00c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f00c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f00c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f00cc: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1f00ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f00d0: 0xc46d00ac  lwc1        $f13, 0xAC($v1)
    ctx->pc = 0x1f00d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f00d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f00d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f00d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f00d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f00dc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1F00DCu;
    SET_GPR_U32(ctx, 31, 0x1F00E4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1F00DCu, 0x1F00E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00E4u;
label_1f00e4:
    // 0x1f00e4: 0xa3a000bf  sb          $zero, 0xBF($sp)
    ctx->pc = 0x1f00e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f00e8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1f00e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f00ec: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F00ECu;
    SET_GPR_U32(ctx, 31, 0x1F00F4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F00ECu, 0x1F00F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00F4u;
label_1f00f4:
    // 0x1f00f4: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1f00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1f00f8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1f00f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f00fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f00fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f0100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0104: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f0104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0108: 0x27a700bf  addiu       $a3, $sp, 0xBF
    ctx->pc = 0x1f0108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 191));
    // 0x1f010c: 0xc46c00ac  lwc1        $f12, 0xAC($v1)
    ctx->pc = 0x1f010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0110: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0110u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0114: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f0114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0118: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1F0118u;
    SET_GPR_U32(ctx, 31, 0x1F0120u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1F0118u, 0x1F0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0120u;
label_1f0120:
    // 0x1f0120: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1f0120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f0124: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f0124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0128: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1f0128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f012c: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x1f012cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_1f0130:
    // 0x1f0130: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f0130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0134: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f0134u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0138: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f0138u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f013c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f013cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0140: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f0140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0144: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f0144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f0148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f014c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f014cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0154: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1f0154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f0158: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0160u;
}
