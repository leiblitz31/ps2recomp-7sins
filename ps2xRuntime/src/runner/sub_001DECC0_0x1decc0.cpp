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

// Function: sub_001DECC0
// Address: 0x1decc0 - 0x1dfc70
void sub_001DECC0_0x1decc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DECC0_0x1decc0");
#endif

    switch (ctx->pc) {
        case 0x1deda0u: goto label_1deda0;
        case 0x1dedacu: goto label_1dedac;
        case 0x1def60u: goto label_1def60;
        case 0x1def8cu: goto label_1def8c;
        case 0x1defa4u: goto label_1defa4;
        case 0x1df004u: goto label_1df004;
        case 0x1df01cu: goto label_1df01c;
        case 0x1df070u: goto label_1df070;
        case 0x1df08cu: goto label_1df08c;
        case 0x1df0d4u: goto label_1df0d4;
        case 0x1df0fcu: goto label_1df0fc;
        case 0x1df110u: goto label_1df110;
        case 0x1df138u: goto label_1df138;
        case 0x1df148u: goto label_1df148;
        case 0x1df170u: goto label_1df170;
        case 0x1df1acu: goto label_1df1ac;
        case 0x1df1d0u: goto label_1df1d0;
        case 0x1df1e0u: goto label_1df1e0;
        case 0x1df204u: goto label_1df204;
        case 0x1df214u: goto label_1df214;
        case 0x1df238u: goto label_1df238;
        case 0x1df278u: goto label_1df278;
        case 0x1df2f0u: goto label_1df2f0;
        case 0x1df30cu: goto label_1df30c;
        case 0x1df410u: goto label_1df410;
        case 0x1df428u: goto label_1df428;
        case 0x1df490u: goto label_1df490;
        case 0x1df4a8u: goto label_1df4a8;
        case 0x1df4b8u: goto label_1df4b8;
        case 0x1df4d8u: goto label_1df4d8;
        case 0x1df4e8u: goto label_1df4e8;
        case 0x1df504u: goto label_1df504;
        case 0x1df514u: goto label_1df514;
        case 0x1df52cu: goto label_1df52c;
        case 0x1df698u: goto label_1df698;
        case 0x1df6a4u: goto label_1df6a4;
        case 0x1df6b8u: goto label_1df6b8;
        case 0x1df7a4u: goto label_1df7a4;
        case 0x1df80cu: goto label_1df80c;
        case 0x1df820u: goto label_1df820;
        case 0x1df830u: goto label_1df830;
        case 0x1df854u: goto label_1df854;
        case 0x1df864u: goto label_1df864;
        case 0x1df890u: goto label_1df890;
        case 0x1df8acu: goto label_1df8ac;
        case 0x1df8b8u: goto label_1df8b8;
        case 0x1df8dcu: goto label_1df8dc;
        case 0x1df92cu: goto label_1df92c;
        case 0x1df93cu: goto label_1df93c;
        case 0x1df954u: goto label_1df954;
        case 0x1df964u: goto label_1df964;
        case 0x1df994u: goto label_1df994;
        case 0x1df9acu: goto label_1df9ac;
        case 0x1df9c4u: goto label_1df9c4;
        case 0x1df9e4u: goto label_1df9e4;
        case 0x1dfa08u: goto label_1dfa08;
        case 0x1dfa58u: goto label_1dfa58;
        case 0x1dfa70u: goto label_1dfa70;
        case 0x1dfa88u: goto label_1dfa88;
        case 0x1dfa9cu: goto label_1dfa9c;
        case 0x1dfab8u: goto label_1dfab8;
        case 0x1dfaccu: goto label_1dfacc;
        case 0x1dfae8u: goto label_1dfae8;
        case 0x1dfb14u: goto label_1dfb14;
        case 0x1dfb30u: goto label_1dfb30;
        case 0x1dfb58u: goto label_1dfb58;
        case 0x1dfb6cu: goto label_1dfb6c;
        case 0x1dfb88u: goto label_1dfb88;
        case 0x1dfbc0u: goto label_1dfbc0;
        case 0x1dfbd0u: goto label_1dfbd0;
        case 0x1dfbecu: goto label_1dfbec;
        case 0x1dfc08u: goto label_1dfc08;
        case 0x1dfc20u: goto label_1dfc20;
        default: break;
    }

    ctx->pc = 0x1decc0u;

    // 0x1decc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1decc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1decc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1decc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1decc8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1decc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1deccc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1decccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1decd0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1decd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1decd4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1decd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1decd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1decd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1decdc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1decdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1dece0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dece4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dece8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dece8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1decec: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1dececu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1decf0: 0xe7ac0110  swc1        $f12, 0x110($sp)
    ctx->pc = 0x1decf0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1decf4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1decf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1decf8: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x1decf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1decfc: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1decfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ded00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ded00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ded04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DED04u;
    {
        const bool branch_taken_0x1ded04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ded04) {
            ctx->pc = 0x1DED20u;
            goto label_1ded20;
        }
    }
    ctx->pc = 0x1DED0Cu;
    // 0x1ded0c: 0xc78c8288  lwc1        $f12, -0x7D78($gp)
    ctx->pc = 0x1ded0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ded10: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x1ded10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ded14: 0x46016000  add.s       $f0, $f12, $f1
    ctx->pc = 0x1ded14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x1ded18: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1ded18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ded1c: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x1ded1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
label_1ded20:
    // 0x1ded20: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ded20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ded24: 0xc44d00e8  lwc1        $f13, 0xE8($v0)
    ctx->pc = 0x1ded24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ded28: 0xc7ac0110  lwc1        $f12, 0x110($sp)
    ctx->pc = 0x1ded28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ded2c: 0x460d6036  c.le.s      $f12, $f13
    ctx->pc = 0x1ded2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ded30: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1DED30u;
    {
        const bool branch_taken_0x1ded30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ded30) {
            ctx->pc = 0x1DED6Cu;
            goto label_1ded6c;
        }
    }
    ctx->pc = 0x1DED38u;
    // 0x1ded38: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ded38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ded3c: 0xa04000ec  sb          $zero, 0xEC($v0)
    ctx->pc = 0x1ded3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ded40: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ded40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ded44: 0xa04000ed  sb          $zero, 0xED($v0)
    ctx->pc = 0x1ded44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 237), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ded48: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1ded48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ded4c: 0xa08000ee  sb          $zero, 0xEE($a0)
    ctx->pc = 0x1ded4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 238), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ded50: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ded50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ded54: 0xa04000ef  sb          $zero, 0xEF($v0)
    ctx->pc = 0x1ded54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 239), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ded58: 0xc7818290  lwc1        $f1, -0x7D70($gp)
    ctx->pc = 0x1ded58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ded5c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1ded5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ded60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ded60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ded64: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ded64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ded68: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1ded68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_1ded6c:
    // 0x1ded6c: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x1ded6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ded70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ded70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ded74: 0x0  nop
    ctx->pc = 0x1ded74u;
    // NOP
    // 0x1ded78: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ded78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ded7c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1DED7Cu;
    {
        const bool branch_taken_0x1ded7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ded7c) {
            ctx->pc = 0x1DEDA0u;
            goto label_1deda0;
        }
    }
    ctx->pc = 0x1DED84u;
    // 0x1ded84: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1ded84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ded88: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x1ded88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ded8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DED8Cu;
    {
        const bool branch_taken_0x1ded8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ded8c) {
            ctx->pc = 0x1DEDA0u;
            goto label_1deda0;
        }
    }
    ctx->pc = 0x1DED94u;
    // 0x1ded94: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1ded94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ded98: 0xc078ee0  jal         func_1E3B80
    ctx->pc = 0x1DED98u;
    SET_GPR_U32(ctx, 31, 0x1DEDA0u);
    ctx->pc = 0x1E3B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3B80u, 0x1DED98u, 0x1DEDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDA0u;
label_1deda0:
    // 0x1deda0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1deda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1deda4: 0xc07947c  jal         func_1E51F0
    ctx->pc = 0x1DEDA4u;
    SET_GPR_U32(ctx, 31, 0x1DEDACu);
    ctx->pc = 0x1E51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E51F0u, 0x1DEDA4u, 0x1DEDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEDACu;
label_1dedac:
    // 0x1dedac: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1dedacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1dedb0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dedb4: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1dedb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dedb8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x1dedb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dedbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dedbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dedc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dedc4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEDC4u;
    {
        const bool branch_taken_0x1dedc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dedc4) {
            ctx->pc = 0x1DEDD0u;
            goto label_1dedd0;
        }
    }
    ctx->pc = 0x1DEDCCu;
    // 0x1dedcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dedccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dedd0:
    // 0x1dedd0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1dedd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dedd4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dedd8: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x1dedd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1deddc: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1deddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dede0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1dede0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dede4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1dede4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1dede8: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1dede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dedec: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1dedecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1dedf0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1dedf0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dedf4: 0x0  nop
    ctx->pc = 0x1dedf4u;
    // NOP
    // 0x1dedf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dedf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dedfc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEDFCu;
    {
        const bool branch_taken_0x1dedfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dedfc) {
            ctx->pc = 0x1DEE14u;
            goto label_1dee14;
        }
    }
    ctx->pc = 0x1DEE04u;
    // 0x1dee04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dee04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dee08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dee08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dee0c: 0x0  nop
    ctx->pc = 0x1dee0cu;
    // NOP
    // 0x1dee10: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1dee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1dee14:
    // 0x1dee14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dee14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dee18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dee18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dee1c: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1dee1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dee20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dee20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dee24: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1dee24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1dee28: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1dee28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dee2c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1dee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1dee30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dee30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dee34: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1dee34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dee38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1dee38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1dee3c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1dee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dee40: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x1dee40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1dee44: 0x8fb60100  lw          $s6, 0x100($sp)
    ctx->pc = 0x1dee44u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dee48: 0xc6c30044  lwc1        $f3, 0x44($s6)
    ctx->pc = 0x1dee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dee4c: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1dee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dee50: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dee54: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1dee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dee58: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1dee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dee5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1dee5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dee60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dee60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dee64: 0x0  nop
    ctx->pc = 0x1dee64u;
    // NOP
    // 0x1dee68: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dee68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dee6c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1dee6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1dee70: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1dee70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1dee74: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x1dee74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1dee78: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1dee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dee7c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dee7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1dee80: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dee84: 0x9045003c  lbu         $a1, 0x3C($v0)
    ctx->pc = 0x1dee84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1dee88: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DEE88u;
    {
        const bool branch_taken_0x1dee88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee88) {
            ctx->pc = 0x1DEEB4u;
            goto label_1deeb4;
        }
    }
    ctx->pc = 0x1DEE90u;
    // 0x1dee90: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1dee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dee94: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1dee94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dee98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1dee98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dee9c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1deea0: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x1deea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deea4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1deea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1deea8: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1deea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1deeac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DEEACu;
    {
        const bool branch_taken_0x1deeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deeac) {
            ctx->pc = 0x1DEED0u;
            goto label_1deed0;
        }
    }
    ctx->pc = 0x1DEEB4u;
label_1deeb4:
    // 0x1deeb4: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1deeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1deeb8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1deeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deebc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1deebcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1deec0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1deec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1deec4: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x1deec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1deec8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1deec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1deecc: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1deeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_1deed0:
    // 0x1deed0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1deed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1deed4: 0xc481007c  lwc1        $f1, 0x7C($a0)
    ctx->pc = 0x1deed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1deed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1deed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1deedc: 0x0  nop
    ctx->pc = 0x1deedcu;
    // NOP
    // 0x1deee0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1deee0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1deee4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEEE4u;
    {
        const bool branch_taken_0x1deee4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1deee4) {
            ctx->pc = 0x1DEEF8u;
            goto label_1deef8;
        }
    }
    ctx->pc = 0x1DEEECu;
    // 0x1deeec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1deeecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1deef0: 0x8fb60100  lw          $s6, 0x100($sp)
    ctx->pc = 0x1deef0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1deef4: 0xe6c0007c  swc1        $f0, 0x7C($s6)
    ctx->pc = 0x1deef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 124), bits); }
label_1deef8:
    // 0x1deef8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1deef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1deefc: 0xc441007c  lwc1        $f1, 0x7C($v0)
    ctx->pc = 0x1deefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1def00: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1def00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1def04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1def04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1def08: 0x0  nop
    ctx->pc = 0x1def08u;
    // NOP
    // 0x1def0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1def0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1def10: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEF10u;
    {
        const bool branch_taken_0x1def10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1def10) {
            ctx->pc = 0x1DEF28u;
            goto label_1def28;
        }
    }
    ctx->pc = 0x1DEF18u;
    // 0x1def18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1def18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1def1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1def1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1def20: 0x8fb70100  lw          $s7, 0x100($sp)
    ctx->pc = 0x1def20u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1def24: 0xe6e0007c  swc1        $f0, 0x7C($s7)
    ctx->pc = 0x1def24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 124), bits); }
label_1def28:
    // 0x1def28: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1def28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1def2c: 0xc7808354  lwc1        $f0, -0x7CAC($gp)
    ctx->pc = 0x1def2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1def30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1def30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1def34: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x1DEF34u;
    {
        const bool branch_taken_0x1def34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1def34) {
            ctx->pc = 0x1DEFCCu;
            goto label_1defcc;
        }
    }
    ctx->pc = 0x1DEF3Cu;
    // 0x1def3c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1def3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1def40: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1def40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1def44: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1def44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1def48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1def48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1def4c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DEF4Cu;
    {
        const bool branch_taken_0x1def4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1def4c) {
            ctx->pc = 0x1DEF78u;
            goto label_1def78;
        }
    }
    ctx->pc = 0x1DEF54u;
    // 0x1def54: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1def54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1def58: 0xc07975c  jal         func_1E5D70
    ctx->pc = 0x1DEF58u;
    SET_GPR_U32(ctx, 31, 0x1DEF60u);
    ctx->pc = 0x1E5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5D70u, 0x1DEF58u, 0x1DEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF60u;
label_1def60:
    // 0x1def60: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1def60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1def64: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x1def64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1def68: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1def68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1def6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1def6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1def70: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1def70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1def74: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x1def74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
label_1def78:
    // 0x1def78: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1def78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1def7c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x1def7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1def80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1def80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def84: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DEF84u;
    SET_GPR_U32(ctx, 31, 0x1DEF8Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DEF84u, 0x1DEF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF8Cu;
label_1def8c:
    // 0x1def8c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1def8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1def90: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x1def90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1def94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1def94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1def98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def9c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DEF9Cu;
    SET_GPR_U32(ctx, 31, 0x1DEFA4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DEF9Cu, 0x1DEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEFA4u;
label_1defa4:
    // 0x1defa4: 0x8fb60100  lw          $s6, 0x100($sp)
    ctx->pc = 0x1defa4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1defa8: 0xa2c0009c  sb          $zero, 0x9C($s6)
    ctx->pc = 0x1defa8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x1defac: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1defacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1defb0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1defb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1defb4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1defb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1defb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1defb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1defbc: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1defbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1defc0: 0xe48000a0  swc1        $f0, 0xA0($a0)
    ctx->pc = 0x1defc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x1defc4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1DEFC4u;
    {
        const bool branch_taken_0x1defc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1defc4) {
            ctx->pc = 0x1DF0ACu;
            goto label_1df0ac;
        }
    }
    ctx->pc = 0x1DEFCCu;
label_1defcc:
    // 0x1defcc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1defccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1defd0: 0x9045009c  lbu         $a1, 0x9C($v0)
    ctx->pc = 0x1defd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1defd4: 0x14a0001c  bnez        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DEFD4u;
    {
        const bool branch_taken_0x1defd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1defd4) {
            ctx->pc = 0x1DF048u;
            goto label_1df048;
        }
    }
    ctx->pc = 0x1DEFDCu;
    // 0x1defdc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1defdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1defe0: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x1defe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1defe4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1defe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1defe8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1defe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1defec: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1DEFECu;
    {
        const bool branch_taken_0x1defec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1defec) {
            ctx->pc = 0x1DF0ACu;
            goto label_1df0ac;
        }
    }
    ctx->pc = 0x1DEFF4u;
    // 0x1deff4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1deff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1deff8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1deff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1deffc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DEFFCu;
    SET_GPR_U32(ctx, 31, 0x1DF004u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DEFFCu, 0x1DF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF004u;
label_1df004:
    // 0x1df004: 0x8fb60100  lw          $s6, 0x100($sp)
    ctx->pc = 0x1df004u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df008: 0x8ec50070  lw          $a1, 0x70($s6)
    ctx->pc = 0x1df008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x1df00c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df010: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1df010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df014: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DF014u;
    SET_GPR_U32(ctx, 31, 0x1DF01Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DF014u, 0x1DF01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF01Cu;
label_1df01c:
    // 0x1df01c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df020: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df024: 0xa045009c  sb          $a1, 0x9C($v0)
    ctx->pc = 0x1df024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 156), (uint8_t)GPR_U32(ctx, 5));
    // 0x1df028: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df02c: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1df02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df030: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1df030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1df034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1df038: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df03c: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1df03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1df040: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DF040u;
    {
        const bool branch_taken_0x1df040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df040) {
            ctx->pc = 0x1DF0ACu;
            goto label_1df0ac;
        }
    }
    ctx->pc = 0x1DF048u;
label_1df048:
    // 0x1df048: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df04c: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x1df04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df050: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1df050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df054: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1df054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df058: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF058u;
    {
        const bool branch_taken_0x1df058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df058) {
            ctx->pc = 0x1DF0ACu;
            goto label_1df0ac;
        }
    }
    ctx->pc = 0x1DF060u;
    // 0x1df060: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df064: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df068: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF068u;
    SET_GPR_U32(ctx, 31, 0x1DF070u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF068u, 0x1DF070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF070u;
label_1df070:
    // 0x1df070: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1df070u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df074: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df078: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x1df078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1df07c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1df07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df084: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DF084u;
    SET_GPR_U32(ctx, 31, 0x1DF08Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DF084u, 0x1DF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF08Cu;
label_1df08c:
    // 0x1df08c: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1df08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df090: 0xa0a0009c  sb          $zero, 0x9C($a1)
    ctx->pc = 0x1df090u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x1df094: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df098: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1df098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df09c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1df09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df0a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1df0a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1df0a4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x1df0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df0a8: 0xe4c000a0  swc1        $f0, 0xA0($a2)
    ctx->pc = 0x1df0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 160), bits); }
label_1df0ac:
    // 0x1df0ac: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x1DF0ACu;
    {
        const bool branch_taken_0x1df0ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df0ac) {
            ctx->pc = 0x1DF178u;
            goto label_1df178;
        }
    }
    ctx->pc = 0x1DF0B4u;
    // 0x1df0b4: 0xc78182d0  lwc1        $f1, -0x7D30($gp)
    ctx->pc = 0x1df0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df0b8: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1df0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df0bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1df0bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1df0c0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1df0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1df0c4: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x1df0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df0c8: 0x8ce40028  lw          $a0, 0x28($a3)
    ctx->pc = 0x1df0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1df0cc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF0CCu;
    SET_GPR_U32(ctx, 31, 0x1DF0D4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF0CCu, 0x1DF0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0D4u;
label_1df0d4:
    // 0x1df0d4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df0d8: 0x8c960068  lw          $s6, 0x68($a0)
    ctx->pc = 0x1df0d8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1df0dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0e0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1df0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0e4: 0xc7ac00e8  lwc1        $f12, 0xE8($sp)
    ctx->pc = 0x1df0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df0e8: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1df0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df0ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1df0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df0f4: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DF0F4u;
    SET_GPR_U32(ctx, 31, 0x1DF0FCu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DF0F4u, 0x1DF0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0FCu;
label_1df0fc:
    // 0x1df0fc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df100: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x1df100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df104: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1df104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df108: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF108u;
    SET_GPR_U32(ctx, 31, 0x1DF110u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF108u, 0x1DF110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF110u;
label_1df110:
    // 0x1df110: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df114: 0x8c66006c  lw          $a2, 0x6C($v1)
    ctx->pc = 0x1df114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1df118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df11c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1df11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df120: 0xc7ac00e8  lwc1        $f12, 0xE8($sp)
    ctx->pc = 0x1df120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df124: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1df124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df12c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1df12cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df130: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DF130u;
    SET_GPR_U32(ctx, 31, 0x1DF138u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DF130u, 0x1DF138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF138u;
label_1df138:
    // 0x1df138: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df13c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df140: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF140u;
    SET_GPR_U32(ctx, 31, 0x1DF148u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF140u, 0x1DF148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF148u;
label_1df148:
    // 0x1df148: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1df148u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df14c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df150: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x1df150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1df154: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1df154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df158: 0xc7ac00e8  lwc1        $f12, 0xE8($sp)
    ctx->pc = 0x1df158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df15c: 0xc7ad00e8  lwc1        $f13, 0xE8($sp)
    ctx->pc = 0x1df15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1df164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df168: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DF168u;
    SET_GPR_U32(ctx, 31, 0x1DF170u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DF168u, 0x1DF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF170u;
label_1df170:
    // 0x1df170: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1DF170u;
    {
        const bool branch_taken_0x1df170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df170) {
            ctx->pc = 0x1DF238u;
            goto label_1df238;
        }
    }
    ctx->pc = 0x1DF178u;
label_1df178:
    // 0x1df178: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1df178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1df17c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1df17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1df180: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1df180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df184: 0xc7818278  lwc1        $f1, -0x7D88($gp)
    ctx->pc = 0x1df184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1df188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df18c: 0x0  nop
    ctx->pc = 0x1df18cu;
    // NOP
    // 0x1df190: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1df190u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1df194: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1df194u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1df198: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1df198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1df19c: 0x8fb00100  lw          $s0, 0x100($sp)
    ctx->pc = 0x1df19cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df1a0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1df1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1df1a4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF1A4u;
    SET_GPR_U32(ctx, 31, 0x1DF1ACu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF1A4u, 0x1DF1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1ACu;
label_1df1ac:
    // 0x1df1ac: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df1b0: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1df1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1df1b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1b8: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x1df1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df1bc: 0xc7ad00e4  lwc1        $f13, 0xE4($sp)
    ctx->pc = 0x1df1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df1c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1df1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df1c8: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DF1C8u;
    SET_GPR_U32(ctx, 31, 0x1DF1D0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DF1C8u, 0x1DF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1D0u;
label_1df1d0:
    // 0x1df1d0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df1d4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df1d8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF1D8u;
    SET_GPR_U32(ctx, 31, 0x1DF1E0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF1D8u, 0x1DF1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1E0u;
label_1df1e0:
    // 0x1df1e0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df1e4: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1df1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1df1e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1ec: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x1df1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df1f0: 0xc7ad00e4  lwc1        $f13, 0xE4($sp)
    ctx->pc = 0x1df1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1df1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df1fc: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DF1FCu;
    SET_GPR_U32(ctx, 31, 0x1DF204u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DF1FCu, 0x1DF204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF204u;
label_1df204:
    // 0x1df204: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df208: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df20c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF20Cu;
    SET_GPR_U32(ctx, 31, 0x1DF214u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF20Cu, 0x1DF214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF214u;
label_1df214:
    // 0x1df214: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df218: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x1df218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1df21c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df220: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x1df220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df224: 0xc7ad00e4  lwc1        $f13, 0xE4($sp)
    ctx->pc = 0x1df224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df22c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1df22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df230: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DF230u;
    SET_GPR_U32(ctx, 31, 0x1DF238u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DF230u, 0x1DF238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF238u;
label_1df238:
    // 0x1df238: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1df238u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df23c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df240: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1df240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df244: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1df244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df248: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1df248u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1df24c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1df24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1df250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df254: 0x0  nop
    ctx->pc = 0x1df254u;
    // NOP
    // 0x1df258: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1df258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df25c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF25Cu;
    {
        const bool branch_taken_0x1df25c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df25c) {
            ctx->pc = 0x1DF26Cu;
            goto label_1df26c;
        }
    }
    ctx->pc = 0x1DF264u;
    // 0x1df264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df268: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1df268u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1df26c:
    // 0x1df26c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df270: 0xc0794b8  jal         func_1E52E0
    ctx->pc = 0x1DF270u;
    SET_GPR_U32(ctx, 31, 0x1DF278u);
    ctx->pc = 0x1E52E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52E0u, 0x1DF270u, 0x1DF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF278u;
label_1df278:
    // 0x1df278: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df27c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1df27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df280: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1df280u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1df284: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1df284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1df288: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1df288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df28c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1df28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1df290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df294: 0x0  nop
    ctx->pc = 0x1df294u;
    // NOP
    // 0x1df298: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1df298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df29c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF29Cu;
    {
        const bool branch_taken_0x1df29c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df29c) {
            ctx->pc = 0x1DF2BCu;
            goto label_1df2bc;
        }
    }
    ctx->pc = 0x1DF2A4u;
    // 0x1df2a4: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x1df2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x1df2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df2ac: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df2b0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1df2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1df2b4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1DF2B4u;
    {
        const bool branch_taken_0x1df2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df2b4) {
            ctx->pc = 0x1DF400u;
            goto label_1df400;
        }
    }
    ctx->pc = 0x1DF2BCu;
label_1df2bc:
    // 0x1df2bc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df2c0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1df2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df2c4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1df2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df2c8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1df2c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1df2cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1df2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1df2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df2d4: 0x0  nop
    ctx->pc = 0x1df2d4u;
    // NOP
    // 0x1df2d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1df2d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df2dc: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x1DF2DCu;
    {
        const bool branch_taken_0x1df2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df2dc) {
            ctx->pc = 0x1DF3A8u;
            goto label_1df3a8;
        }
    }
    ctx->pc = 0x1DF2E4u;
    // 0x1df2e4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df2e8: 0xc0794e8  jal         func_1E53A0
    ctx->pc = 0x1DF2E8u;
    SET_GPR_U32(ctx, 31, 0x1DF2F0u);
    ctx->pc = 0x1E53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E53A0u, 0x1DF2E8u, 0x1DF2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF2F0u;
label_1df2f0:
    // 0x1df2f0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1df2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1df2f4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df2f8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df2fc: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x1df2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df300: 0xc44d0078  lwc1        $f13, 0x78($v0)
    ctx->pc = 0x1df300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df304: 0xc079534  jal         func_1E54D0
    ctx->pc = 0x1DF304u;
    SET_GPR_U32(ctx, 31, 0x1DF30Cu);
    ctx->pc = 0x1E54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D0u, 0x1DF304u, 0x1DF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF30Cu;
label_1df30c:
    // 0x1df30c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1df30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1df310: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x1DF310u;
    {
        const bool branch_taken_0x1df310 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df310) {
            ctx->pc = 0x1DF348u;
            goto label_1df348;
        }
    }
    ctx->pc = 0x1DF318u;
    // 0x1df318: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1df318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df31c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1df31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1df320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df324: 0x0  nop
    ctx->pc = 0x1df324u;
    // NOP
    // 0x1df328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1df328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df32c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF32Cu;
    {
        const bool branch_taken_0x1df32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df32c) {
            ctx->pc = 0x1DF348u;
            goto label_1df348;
        }
    }
    ctx->pc = 0x1DF334u;
    // 0x1df334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1df334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df338: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df33c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1df33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1df340: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1DF340u;
    {
        const bool branch_taken_0x1df340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df340) {
            ctx->pc = 0x1DF400u;
            goto label_1df400;
        }
    }
    ctx->pc = 0x1DF348u;
label_1df348:
    // 0x1df348: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1df348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1df34c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1df34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1df350: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x1df350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df354: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df358: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x1df358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df35c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1df35cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df360: 0x0  nop
    ctx->pc = 0x1df360u;
    // NOP
    // 0x1df364: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1df364u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1df368: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1df368u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1df36c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1df36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1df370: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df374: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x1df374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df378: 0x3c024274  lui         $v0, 0x4274
    ctx->pc = 0x1df378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17012 << 16));
    // 0x1df37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df380: 0x0  nop
    ctx->pc = 0x1df380u;
    // NOP
    // 0x1df384: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1df384u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df388: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1DF388u;
    {
        const bool branch_taken_0x1df388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df388) {
            ctx->pc = 0x1DF400u;
            goto label_1df400;
        }
    }
    ctx->pc = 0x1DF390u;
    // 0x1df390: 0x3c024274  lui         $v0, 0x4274
    ctx->pc = 0x1df390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17012 << 16));
    // 0x1df394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df398: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df39c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1df39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1df3a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DF3A0u;
    {
        const bool branch_taken_0x1df3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df3a0) {
            ctx->pc = 0x1DF400u;
            goto label_1df400;
        }
    }
    ctx->pc = 0x1DF3A8u;
label_1df3a8:
    // 0x1df3a8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1df3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1df3ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1df3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1df3b0: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x1df3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df3b4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df3b8: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x1df3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df3bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1df3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df3c0: 0x0  nop
    ctx->pc = 0x1df3c0u;
    // NOP
    // 0x1df3c4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1df3c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1df3c8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1df3c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1df3cc: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1df3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1df3d0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df3d4: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x1df3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df3d8: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x1df3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df3e0: 0x0  nop
    ctx->pc = 0x1df3e0u;
    // NOP
    // 0x1df3e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1df3e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df3e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF3E8u;
    {
        const bool branch_taken_0x1df3e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df3e8) {
            ctx->pc = 0x1DF400u;
            goto label_1df400;
        }
    }
    ctx->pc = 0x1DF3F0u;
    // 0x1df3f0: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x1df3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x1df3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df3f8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df3fc: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1df3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_1df400:
    // 0x1df400: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df404: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df408: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF408u;
    SET_GPR_U32(ctx, 31, 0x1DF410u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF408u, 0x1DF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF410u;
label_1df410:
    // 0x1df410: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df414: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x1df414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1df418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df41c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1df41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df420: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DF420u;
    SET_GPR_U32(ctx, 31, 0x1DF428u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DF420u, 0x1DF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF428u;
label_1df428:
    // 0x1df428: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1df428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1df42c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1df42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df430: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1df430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df434: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1df434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1df438: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1df438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1df43c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1df43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1df440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1df440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df444: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1df444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df448: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1df448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1df44c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1df44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1df450: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df454: 0xc4430074  lwc1        $f3, 0x74($v0)
    ctx->pc = 0x1df454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1df458: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x1df458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df45c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df460: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x1df460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1df464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df468: 0x0  nop
    ctx->pc = 0x1df468u;
    // NOP
    // 0x1df46c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1df46cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1df470: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1df470u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1df474: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1df474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1df478: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df47c: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1df47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1df480: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1df480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1df484: 0xc46c0078  lwc1        $f12, 0x78($v1)
    ctx->pc = 0x1df484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df488: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1DF488u;
    SET_GPR_U32(ctx, 31, 0x1DF490u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1DF488u, 0x1DF490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF490u;
label_1df490:
    // 0x1df490: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df494: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1df494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1df498: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df49c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df4a0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF4A0u;
    SET_GPR_U32(ctx, 31, 0x1DF4A8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF4A0u, 0x1DF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4A8u;
label_1df4a8:
    // 0x1df4a8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1df4a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4ac: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df4b0: 0xc0794e8  jal         func_1E53A0
    ctx->pc = 0x1DF4B0u;
    SET_GPR_U32(ctx, 31, 0x1DF4B8u);
    ctx->pc = 0x1E53A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E53A0u, 0x1DF4B0u, 0x1DF4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4B8u;
label_1df4b8:
    // 0x1df4b8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df4bc: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x1df4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1df4c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1df4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4c4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1df4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1df4c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1df4c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1df4cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1df4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df4d0: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1DF4D0u;
    SET_GPR_U32(ctx, 31, 0x1DF4D8u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1DF4D0u, 0x1DF4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4D8u;
label_1df4d8:
    // 0x1df4d8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df4dc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df4e0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF4E0u;
    SET_GPR_U32(ctx, 31, 0x1DF4E8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF4E0u, 0x1DF4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF4E8u;
label_1df4e8:
    // 0x1df4e8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df4ec: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1df4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1df4f0: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x1df4f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1df4f4: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1df4f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1df4f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df4fc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DF4FCu;
    SET_GPR_U32(ctx, 31, 0x1DF504u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DF4FCu, 0x1DF504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF504u;
label_1df504:
    // 0x1df504: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df508: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df50c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF50Cu;
    SET_GPR_U32(ctx, 31, 0x1DF514u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF50Cu, 0x1DF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF514u;
label_1df514:
    // 0x1df514: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df518: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1df518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1df51c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df520: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1df520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df524: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DF524u;
    SET_GPR_U32(ctx, 31, 0x1DF52Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DF524u, 0x1DF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF52Cu;
label_1df52c:
    // 0x1df52c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df530: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1df530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df534: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1df534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df538: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1df538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df53c: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x1DF53Cu;
    {
        const bool branch_taken_0x1df53c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df53c) {
            ctx->pc = 0x1DF658u;
            goto label_1df658;
        }
    }
    ctx->pc = 0x1DF544u;
    // 0x1df544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df548: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df54c: 0xa043003c  sb          $v1, 0x3C($v0)
    ctx->pc = 0x1df54cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x1df550: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df554: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x1df554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df558: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1df558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df55c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1df55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1df560: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df564: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x1df564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x1df568: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df56c: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x1df56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1df570: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DF570u;
    {
        const bool branch_taken_0x1df570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df570) {
            ctx->pc = 0x1DF658u;
            goto label_1df658;
        }
    }
    ctx->pc = 0x1DF578u;
    // 0x1df578: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1df578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df57c: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1df57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df580: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1df580u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df584: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x1DF584u;
    {
        const bool branch_taken_0x1df584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df584) {
            ctx->pc = 0x1DF634u;
            goto label_1df634;
        }
    }
    ctx->pc = 0x1DF58Cu;
    // 0x1df58c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1df58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df590: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1df590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df594: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1df594u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1df598: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x1df598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df59c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1df59cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1df5a0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1df5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1df5a4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df5a8: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1df5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df5ac: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df5b0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1df5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1df5b4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1df5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1df5b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1df5b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df5bc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1df5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df5c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1df5c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df5c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1df5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1df5c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df5cc: 0x0  nop
    ctx->pc = 0x1df5ccu;
    // NOP
    // 0x1df5d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1df5d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df5d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF5D4u;
    {
        const bool branch_taken_0x1df5d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df5d4) {
            ctx->pc = 0x1DF5ECu;
            goto label_1df5ec;
        }
    }
    ctx->pc = 0x1DF5DCu;
    // 0x1df5dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1df5dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1df5e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1df5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1df5e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF5E4u;
    {
        const bool branch_taken_0x1df5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df5e4) {
            ctx->pc = 0x1DF600u;
            goto label_1df600;
        }
    }
    ctx->pc = 0x1DF5ECu;
label_1df5ec:
    // 0x1df5ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1df5ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1df5f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1df5f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1df5f4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1df5f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1df5f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1df5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1df5fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1df5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1df600:
    // 0x1df600: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df604: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1df604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1df608: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df60c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1df60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1df610: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1df610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1df614: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1df614u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1df618: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF618u;
    {
        const bool branch_taken_0x1df618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df618) {
            ctx->pc = 0x1DF658u;
            goto label_1df658;
        }
    }
    ctx->pc = 0x1DF620u;
    // 0x1df620: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1df620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1df624: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df628: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1df628u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1df62c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DF62Cu;
    {
        const bool branch_taken_0x1df62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df62c) {
            ctx->pc = 0x1DF658u;
            goto label_1df658;
        }
    }
    ctx->pc = 0x1DF634u;
label_1df634:
    // 0x1df634: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1df634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df638: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1df638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1df63c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1df63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df640: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x1df640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df644: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1df644u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1df648: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df64c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1df64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1df650: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df654: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1df654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
label_1df658:
    // 0x1df658: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df65c: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x1df65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df660: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1df660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df664: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1df664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df668: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF668u;
    {
        const bool branch_taken_0x1df668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df668) {
            ctx->pc = 0x1DF688u;
            goto label_1df688;
        }
    }
    ctx->pc = 0x1DF670u;
    // 0x1df670: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df674: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x1df674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df678: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1df678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df67c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1df67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1df680: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df684: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x1df684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_1df688:
    // 0x1df688: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1df688u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df68c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1df68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df690: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1DF690u;
    {
        const bool branch_taken_0x1df690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df690) {
            ctx->pc = 0x1DF8CCu;
            goto label_1df8cc;
        }
    }
    ctx->pc = 0x1DF698u;
label_1df698:
    // 0x1df698: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1df698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df69c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1DF69Cu;
    {
        const bool branch_taken_0x1df69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df69c) {
            ctx->pc = 0x1DF898u;
            goto label_1df898;
        }
    }
    ctx->pc = 0x1DF6A4u;
label_1df6a4:
    // 0x1df6a4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df6a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df6ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1df6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df6b0: 0xc079a38  jal         func_1E68E0
    ctx->pc = 0x1DF6B0u;
    SET_GPR_U32(ctx, 31, 0x1DF6B8u);
    ctx->pc = 0x1E68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E68E0u, 0x1DF6B0u, 0x1DF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF6B8u;
label_1df6b8:
    // 0x1df6b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF6B8u;
    {
        const bool branch_taken_0x1df6b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1df6b8) {
            ctx->pc = 0x1DF6D4u;
            goto label_1df6d4;
        }
    }
    ctx->pc = 0x1DF6C0u;
    // 0x1df6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df6c4: 0x0  nop
    ctx->pc = 0x1df6c4u;
    // NOP
    // 0x1df6c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1df6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1df6cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF6CCu;
    {
        const bool branch_taken_0x1df6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df6cc) {
            ctx->pc = 0x1DF6F0u;
            goto label_1df6f0;
        }
    }
    ctx->pc = 0x1DF6D4u;
label_1df6d4:
    // 0x1df6d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1df6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1df6d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1df6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1df6dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1df6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1df6e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1df6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df6e4: 0x0  nop
    ctx->pc = 0x1df6e4u;
    // NOP
    // 0x1df6e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1df6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1df6ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1df6ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1df6f0:
    // 0x1df6f0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1df6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1df6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df6f8: 0x0  nop
    ctx->pc = 0x1df6f8u;
    // NOP
    // 0x1df6fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1df6fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1df700: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1df700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1df704: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1df704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1df708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1df708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df70c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1df70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df710: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1df710u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df714: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF714u;
    {
        const bool branch_taken_0x1df714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df714) {
            ctx->pc = 0x1DF720u;
            goto label_1df720;
        }
    }
    ctx->pc = 0x1DF71Cu;
    // 0x1df71c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1df71cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1df720:
    // 0x1df720: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1df720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df724: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1df724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1df728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df72c: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x1DF72Cu;
    {
        const bool branch_taken_0x1df72c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df72c) {
            ctx->pc = 0x1DF890u;
            goto label_1df890;
        }
    }
    ctx->pc = 0x1DF734u;
    // 0x1df734: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1df734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df738: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1df738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1df73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df740: 0x0  nop
    ctx->pc = 0x1df740u;
    // NOP
    // 0x1df744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1df744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df748: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x1DF748u;
    {
        const bool branch_taken_0x1df748 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df748) {
            ctx->pc = 0x1DF890u;
            goto label_1df890;
        }
    }
    ctx->pc = 0x1DF750u;
    // 0x1df750: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df754: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1df754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df758: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1df758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df75c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1df75cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1df760: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1df760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1df764: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1df764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df768: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1df768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df76c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1df76cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1df770: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1df770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1df774: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1df774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1df778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df77c: 0x0  nop
    ctx->pc = 0x1df77cu;
    // NOP
    // 0x1df780: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1df780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df784: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF784u;
    {
        const bool branch_taken_0x1df784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df784) {
            ctx->pc = 0x1DF7ACu;
            goto label_1df7ac;
        }
    }
    ctx->pc = 0x1DF78Cu;
    // 0x1df78c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df790: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df794: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1df794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1df798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df79c: 0xc079994  jal         func_1E6650
    ctx->pc = 0x1DF79Cu;
    SET_GPR_U32(ctx, 31, 0x1DF7A4u);
    ctx->pc = 0x1E6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6650u, 0x1DF79Cu, 0x1DF7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7A4u;
label_1df7a4:
    // 0x1df7a4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1DF7A4u;
    {
        const bool branch_taken_0x1df7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df7a4) {
            ctx->pc = 0x1DF890u;
            goto label_1df890;
        }
    }
    ctx->pc = 0x1DF7ACu;
label_1df7ac:
    // 0x1df7ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1df7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1df7b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1df7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1df7b4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1df7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df7b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1df7b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df7bc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1df7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1df7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df7c4: 0x0  nop
    ctx->pc = 0x1df7c4u;
    // NOP
    // 0x1df7c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1df7c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df7cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF7CCu;
    {
        const bool branch_taken_0x1df7cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df7cc) {
            ctx->pc = 0x1DF7E4u;
            goto label_1df7e4;
        }
    }
    ctx->pc = 0x1DF7D4u;
    // 0x1df7d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1df7d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1df7d8: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1df7d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1df7dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF7DCu;
    {
        const bool branch_taken_0x1df7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df7dc) {
            ctx->pc = 0x1DF7F8u;
            goto label_1df7f8;
        }
    }
    ctx->pc = 0x1DF7E4u;
label_1df7e4:
    // 0x1df7e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1df7e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1df7e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1df7e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1df7ec: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1df7ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1df7f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1df7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1df7f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1df7f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1df7f8:
    // 0x1df7f8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df7fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df800: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1df800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df804: 0xc079994  jal         func_1E6650
    ctx->pc = 0x1DF804u;
    SET_GPR_U32(ctx, 31, 0x1DF80Cu);
    ctx->pc = 0x1E6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6650u, 0x1DF804u, 0x1DF80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF80Cu;
label_1df80c:
    // 0x1df80c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df810: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1df810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1df814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df818: 0xc077fb8  jal         func_1DFEE0
    ctx->pc = 0x1DF818u;
    SET_GPR_U32(ctx, 31, 0x1DF820u);
    ctx->pc = 0x1DFEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFEE0u, 0x1DF818u, 0x1DF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF820u;
label_1df820:
    // 0x1df820: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df824: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df828: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DF828u;
    SET_GPR_U32(ctx, 31, 0x1DF830u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DF828u, 0x1DF830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF830u;
label_1df830:
    // 0x1df830: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1df830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df834: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1df834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df838: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1df838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df83c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1df83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1df840: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df844: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1df844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1df848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df84c: 0xc077fb8  jal         func_1DFEE0
    ctx->pc = 0x1DF84Cu;
    SET_GPR_U32(ctx, 31, 0x1DF854u);
    ctx->pc = 0x1DFEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFEE0u, 0x1DF84Cu, 0x1DF854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF854u;
label_1df854:
    // 0x1df854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df858: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df85c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DF85Cu;
    SET_GPR_U32(ctx, 31, 0x1DF864u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DF85Cu, 0x1DF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF864u;
label_1df864:
    // 0x1df864: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1df864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df868: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1df868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df86c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1df86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df870: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1df870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1df874: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1df874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df878: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df87c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1df87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df880: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x1df880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1df884: 0xc7ad00c4  lwc1        $f13, 0xC4($sp)
    ctx->pc = 0x1df884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1df888: 0xc079a60  jal         func_1E6980
    ctx->pc = 0x1DF888u;
    SET_GPR_U32(ctx, 31, 0x1DF890u);
    ctx->pc = 0x1E6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6980u, 0x1DF888u, 0x1DF890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF890u;
label_1df890:
    // 0x1df890: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x1df890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1df894: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1df894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df898:
    // 0x1df898: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df89c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1df89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1df8a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1df8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8a4: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1DF8A4u;
    SET_GPR_U32(ctx, 31, 0x1DF8ACu);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1DF8A4u, 0x1DF8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8ACu;
label_1df8ac:
    // 0x1df8ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1df8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8b0: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1DF8B0u;
    SET_GPR_U32(ctx, 31, 0x1DF8B8u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1DF8B0u, 0x1DF8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8B8u;
label_1df8b8:
    // 0x1df8b8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1df8b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1df8bc: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x1DF8BCu;
    {
        const bool branch_taken_0x1df8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df8bc) {
            ctx->pc = 0x1DF6A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df6a4;
        }
    }
    ctx->pc = 0x1DF8C4u;
    // 0x1df8c4: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x1df8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1df8c8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1df8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1df8cc:
    // 0x1df8cc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df8d0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1df8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1df8d4: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1DF8D4u;
    SET_GPR_U32(ctx, 31, 0x1DF8DCu);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1DF8D4u, 0x1DF8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8DCu;
label_1df8dc:
    // 0x1df8dc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1df8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1df8e0: 0x1440ff6d  bnez        $v0, . + 4 + (-0x93 << 2)
    ctx->pc = 0x1DF8E0u;
    {
        const bool branch_taken_0x1df8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df8e0) {
            ctx->pc = 0x1DF698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df698;
        }
    }
    ctx->pc = 0x1DF8E8u;
    // 0x1df8e8: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF8E8u;
    {
        const bool branch_taken_0x1df8e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df8e8) {
            ctx->pc = 0x1DF8FCu;
            goto label_1df8fc;
        }
    }
    ctx->pc = 0x1DF8F0u;
    // 0x1df8f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df8f4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x1DF8F4u;
    {
        const bool branch_taken_0x1df8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df8f4) {
            ctx->pc = 0x1DFC38u;
            goto label_1dfc38;
        }
    }
    ctx->pc = 0x1DF8FCu;
label_1df8fc:
    // 0x1df8fc: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x1df8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x1df900: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1df900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1df904: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x1df904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1df908: 0xc781bb5c  lwc1        $f1, -0x44A4($gp)
    ctx->pc = 0x1df908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df90c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1df90cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df910: 0x0  nop
    ctx->pc = 0x1df910u;
    // NOP
    // 0x1df914: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1df914u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1df918: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1df918u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1df91c: 0xe780bb5c  swc1        $f0, -0x44A4($gp)
    ctx->pc = 0x1df91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949724), bits); }
    // 0x1df920: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1df920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df924: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1DF924u;
    {
        const bool branch_taken_0x1df924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df924) {
            ctx->pc = 0x1DFC0Cu;
            goto label_1dfc0c;
        }
    }
    ctx->pc = 0x1DF92Cu;
label_1df92c:
    // 0x1df92c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df930: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df934: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF934u;
    SET_GPR_U32(ctx, 31, 0x1DF93Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF934u, 0x1DF93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF93Cu;
label_1df93c:
    // 0x1df93c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1df93cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df940: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df944: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1df944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1df948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df94c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DF94Cu;
    SET_GPR_U32(ctx, 31, 0x1DF954u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DF94Cu, 0x1DF954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF954u;
label_1df954:
    // 0x1df954: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1df954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df958: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1df958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df95c: 0xc08c49c  jal         func_231270
    ctx->pc = 0x1DF95Cu;
    SET_GPR_U32(ctx, 31, 0x1DF964u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1DF95Cu, 0x1DF964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF964u;
label_1df964:
    // 0x1df964: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1df964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1df968: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1df968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df96c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1df96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1df970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1df974: 0x0  nop
    ctx->pc = 0x1df974u;
    // NOP
    // 0x1df978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1df978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1df97c: 0x450000a2  bc1f        . + 4 + (0xA2 << 2)
    ctx->pc = 0x1DF97Cu;
    {
        const bool branch_taken_0x1df97c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df97c) {
            ctx->pc = 0x1DFC08u;
            goto label_1dfc08;
        }
    }
    ctx->pc = 0x1DF984u;
    // 0x1df984: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df988: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1df988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1df98c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DF98Cu;
    SET_GPR_U32(ctx, 31, 0x1DF994u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DF98Cu, 0x1DF994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF994u;
label_1df994:
    // 0x1df994: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1df994u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df998: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df99c: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1df99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1df9a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9a4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DF9A4u;
    SET_GPR_U32(ctx, 31, 0x1DF9ACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DF9A4u, 0x1DF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9ACu;
label_1df9ac:
    // 0x1df9ac: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x1df9acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1df9b0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df9b4: 0x244400d4  addiu       $a0, $v0, 0xD4
    ctx->pc = 0x1df9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x1df9b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9bc: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DF9BCu;
    SET_GPR_U32(ctx, 31, 0x1DF9C4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DF9BCu, 0x1DF9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9C4u;
label_1df9c4:
    // 0x1df9c4: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1df9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df9c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1df9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df9cc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1df9ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df9d0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1df9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1df9d4: 0x244400d4  addiu       $a0, $v0, 0xD4
    ctx->pc = 0x1df9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x1df9d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9dc: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DF9DCu;
    SET_GPR_U32(ctx, 31, 0x1DF9E4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DF9DCu, 0x1DF9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9E4u;
label_1df9e4:
    // 0x1df9e4: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x1df9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1df9e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1df9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1df9ec: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1df9ecu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1df9f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1df9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9f4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1df9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1df9f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1df9fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1df9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfa00: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DFA00u;
    SET_GPR_U32(ctx, 31, 0x1DFA08u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DFA00u, 0x1DFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA08u;
label_1dfa08:
    // 0x1dfa08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1dfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1dfa0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dfa0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dfa10: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dfa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfa14: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1dfa14u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1dfa18: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dfa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1dfa1c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1dfa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfa20: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dfa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfa24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dfa24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dfa28: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1dfa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1dfa2c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1dfa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfa30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dfa30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfa34: 0x0  nop
    ctx->pc = 0x1dfa34u;
    // NOP
    // 0x1dfa38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dfa38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dfa3c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1DFA3Cu;
    {
        const bool branch_taken_0x1dfa3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dfa3c) {
            ctx->pc = 0x1DFAD4u;
            goto label_1dfad4;
        }
    }
    ctx->pc = 0x1DFA44u;
    // 0x1dfa44: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1dfa44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfa48: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1dfa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1dfa4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa50: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DFA50u;
    SET_GPR_U32(ctx, 31, 0x1DFA58u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DFA50u, 0x1DFA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA58u;
label_1dfa58:
    // 0x1dfa58: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1dfa58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa5c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfa60: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1dfa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1dfa64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dfa64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa68: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DFA68u;
    SET_GPR_U32(ctx, 31, 0x1DFA70u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DFA68u, 0x1DFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA70u;
label_1dfa70:
    // 0x1dfa70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfa74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfa78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dfa78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dfa7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1dfa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa80: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DFA80u;
    SET_GPR_U32(ctx, 31, 0x1DFA88u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DFA80u, 0x1DFA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA88u;
label_1dfa88:
    // 0x1dfa88: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1dfa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfa8c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1dfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1dfa90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa94: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DFA94u;
    SET_GPR_U32(ctx, 31, 0x1DFA9Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DFA94u, 0x1DFA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA9Cu;
label_1dfa9c:
    // 0x1dfa9c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1dfa9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfaa0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1dfaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfaa4: 0x24a600c8  addiu       $a2, $a1, 0xC8
    ctx->pc = 0x1dfaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 200));
    // 0x1dfaa8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1dfaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfaac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dfaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfab0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DFAB0u;
    SET_GPR_U32(ctx, 31, 0x1DFAB8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DFAB0u, 0x1DFAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAB8u;
label_1dfab8:
    // 0x1dfab8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dfab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfabc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1dfabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfac0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dfac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfac4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DFAC4u;
    SET_GPR_U32(ctx, 31, 0x1DFACCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DFAC4u, 0x1DFACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFACCu;
label_1dfacc:
    // 0x1dfacc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1DFACCu;
    {
        const bool branch_taken_0x1dfacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfacc) {
            ctx->pc = 0x1DFC08u;
            goto label_1dfc08;
        }
    }
    ctx->pc = 0x1DFAD4u;
label_1dfad4:
    // 0x1dfad4: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1dfad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1dfad8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1dfad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dfadc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFADCu;
    {
        const bool branch_taken_0x1dfadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfadc) {
            ctx->pc = 0x1DFB04u;
            goto label_1dfb04;
        }
    }
    ctx->pc = 0x1DFAE4u;
    // 0x1dfae4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1dfae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1dfae8:
    // 0x1dfae8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1dfae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dfaec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1dfaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1dfaf0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dfaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dfaf4: 0x0  nop
    ctx->pc = 0x1dfaf4u;
    // NOP
    // 0x1dfaf8: 0x0  nop
    ctx->pc = 0x1dfaf8u;
    // NOP
    // 0x1dfafc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DFAFCu;
    {
        const bool branch_taken_0x1dfafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfafc) {
            ctx->pc = 0x1DFAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfae8;
        }
    }
    ctx->pc = 0x1DFB04u;
label_1dfb04:
    // 0x1dfb04: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dfb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfb08: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1dfb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1dfb0c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DFB0Cu;
    SET_GPR_U32(ctx, 31, 0x1DFB14u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DFB0Cu, 0x1DFB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB14u;
label_1dfb14:
    // 0x1dfb14: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1dfb14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb18: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dfb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfb1c: 0x244500c8  addiu       $a1, $v0, 0xC8
    ctx->pc = 0x1dfb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1dfb20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1dfb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dfb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb28: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DFB28u;
    SET_GPR_U32(ctx, 31, 0x1DFB30u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DFB28u, 0x1DFB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB30u;
label_1dfb30:
    // 0x1dfb30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dfb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfb34: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1dfb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1dfb38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dfb38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dfb3c: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dfb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfb40: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1dfb40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dfb44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1dfb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb48: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x1dfb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1dfb4c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dfb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfb50: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1DFB50u;
    SET_GPR_U32(ctx, 31, 0x1DFB58u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1DFB50u, 0x1DFB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB58u;
label_1dfb58:
    // 0x1dfb58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb5c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfb60: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1dfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1dfb64: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DFB64u;
    SET_GPR_U32(ctx, 31, 0x1DFB6Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DFB64u, 0x1DFB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB6Cu;
label_1dfb6c:
    // 0x1dfb6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1dfb6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb70: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x1dfb70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfb74: 0x24e200c8  addiu       $v0, $a3, 0xC8
    ctx->pc = 0x1dfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 200));
    // 0x1dfb78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dfb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb80: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DFB80u;
    SET_GPR_U32(ctx, 31, 0x1DFB88u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DFB80u, 0x1DFB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB88u;
label_1dfb88:
    // 0x1dfb88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dfb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfb8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dfb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfb90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dfb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dfb94: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dfb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfb98: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1dfb98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dfb9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dfb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfba0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dfba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dfba4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1dfba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfba8: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x1dfba8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dfbac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1dfbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dfbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfbb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dfbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfbb8: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DFBB8u;
    SET_GPR_U32(ctx, 31, 0x1DFBC0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DFBB8u, 0x1DFBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBC0u;
label_1dfbc0:
    // 0x1dfbc0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dfbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfbc4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1dfbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1dfbc8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DFBC8u;
    SET_GPR_U32(ctx, 31, 0x1DFBD0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DFBC8u, 0x1DFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBD0u;
label_1dfbd0:
    // 0x1dfbd0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1dfbd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbd4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1dfbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfbd8: 0x244500c8  addiu       $a1, $v0, 0xC8
    ctx->pc = 0x1dfbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1dfbdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1dfbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dfbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbe4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DFBE4u;
    SET_GPR_U32(ctx, 31, 0x1DFBECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DFBE4u, 0x1DFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFBECu;
label_1dfbec:
    // 0x1dfbec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dfbecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbf0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dfbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dfbf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1dfbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dfbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbfc: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1dfbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dfc00: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DFC00u;
    SET_GPR_U32(ctx, 31, 0x1DFC08u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DFC00u, 0x1DFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC08u;
label_1dfc08:
    // 0x1dfc08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dfc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dfc0c:
    // 0x1dfc0c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1dfc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfc10: 0x248200c8  addiu       $v0, $a0, 0xC8
    ctx->pc = 0x1dfc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x1dfc14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dfc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc18: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DFC18u;
    SET_GPR_U32(ctx, 31, 0x1DFC20u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DFC18u, 0x1DFC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFC20u;
label_1dfc20:
    // 0x1dfc20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dfc20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc24: 0x203282b  sltu        $a1, $s0, $v1
    ctx->pc = 0x1dfc24u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1dfc28: 0x14a0ff40  bnez        $a1, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x1DFC28u;
    {
        const bool branch_taken_0x1dfc28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc28) {
            ctx->pc = 0x1DF92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df92c;
        }
    }
    ctx->pc = 0x1DFC30u;
    // 0x1dfc30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dfc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfc34: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1dfc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1dfc38:
    // 0x1dfc38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1dfc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dfc3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1dfc3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfc40: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1dfc40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dfc44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1dfc44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dfc48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1dfc48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dfc4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1dfc4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dfc50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dfc50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfc54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dfc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfc58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dfc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfc5c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dfc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dfc60: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x1dfc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dfc64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFC6Cu;
    // 0x1dfc6c: 0x0  nop
    ctx->pc = 0x1dfc6cu;
    // NOP
    ctx->pc = 0x1dfc70u;
}
