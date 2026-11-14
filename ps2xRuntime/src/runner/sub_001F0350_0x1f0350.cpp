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

// Function: sub_001F0350
// Address: 0x1f0350 - 0x1f0570
void sub_001F0350_0x1f0350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0350_0x1f0350");
#endif

    ctx->pc = 0x1f0350u;

    // 0x1f0350: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f0350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f0354: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f0354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f0358: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1f0358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1f035c: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1f035cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1f0360: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1f0360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x1f0364: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f0364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0368: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0368u;
    {
        const bool branch_taken_0x1f0368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0368) {
            ctx->pc = 0x1F0388u;
            goto label_1f0388;
        }
    }
    ctx->pc = 0x1F0370u;
    // 0x1f0370: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0374: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0374u;
    {
        const bool branch_taken_0x1f0374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0374) {
            ctx->pc = 0x1F0388u;
            goto label_1f0388;
        }
    }
    ctx->pc = 0x1F037Cu;
    // 0x1f037c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1f037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0380: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0380u;
    {
        const bool branch_taken_0x1f0380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0380) {
            ctx->pc = 0x1F0394u;
            goto label_1f0394;
        }
    }
    ctx->pc = 0x1F0388u;
label_1f0388:
    // 0x1f0388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f038c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1F038Cu;
    {
        const bool branch_taken_0x1f038c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f038c) {
            ctx->pc = 0x1F0564u;
            goto label_1f0564;
        }
    }
    ctx->pc = 0x1F0394u;
label_1f0394:
    // 0x1f0394: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0398: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1f0398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f039c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f03a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1f03a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f03a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f03a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f03a8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f03a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f03ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f03acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f03b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f03b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f03b4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f03b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f03b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f03b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f03bc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F03BCu;
    {
        const bool branch_taken_0x1f03bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f03bc) {
            ctx->pc = 0x1F03E0u;
            goto label_1f03e0;
        }
    }
    ctx->pc = 0x1F03C4u;
    // 0x1f03c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1f03c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1f03c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f03c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f03cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f03d0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1f03d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1f03d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f03d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03d8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1F03D8u;
    {
        const bool branch_taken_0x1f03d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f03d8) {
            ctx->pc = 0x1F0564u;
            goto label_1f0564;
        }
    }
    ctx->pc = 0x1F03E0u;
label_1f03e0:
    // 0x1f03e0: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1f03e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1f03e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f03e8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f03e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f03ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1f03ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f03f0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f03f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f03f4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f03f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f03f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f03fc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f03fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0400: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1f0400u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1f0404: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f0404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f0408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f040c: 0x0  nop
    ctx->pc = 0x1f040cu;
    // NOP
    // 0x1f0410: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f0410u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0414: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f0414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f0418: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1f0418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f041c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1f041cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1f0420: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f0420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0424: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1f0424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0428: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f0428u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1f042c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f042cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f0430: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0434: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1f0434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0438: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x1f0438u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x1f043c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1f043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0440: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f0440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0444: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f0444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0448: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1f0448u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1f044c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1f044cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1f0450: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f0450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0454: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1f0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0458: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1f0458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f045c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1f045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0460: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1f0460u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1f0464: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0468: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f0468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f046c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0470: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1f0470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f0474: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1f0474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0478: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1f0478u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f047c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0480: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1f0480u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1f0484: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f0484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1f0488: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f048c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1f048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0490: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1f0490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0494: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f0494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f0498: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1f0498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f049c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f04a0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1f04a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f04a4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f04a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f04a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f04a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f04ac: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f04acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f04b0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f04b4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1f04b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f04b8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1f04b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f04bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f04bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f04c0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1f04c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f04c4: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x1f04c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f04c8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1f04c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f04cc: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1f04ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f04d0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1f04d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f04d4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1f04d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f04d8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1f04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f04dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f04dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f04e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f04e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f04e4: 0x0  nop
    ctx->pc = 0x1f04e4u;
    // NOP
    // 0x1f04e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1f04e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1f04ec: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1f04ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1f04f0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1f04f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f04f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f04f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f04f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f04f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f04fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1f04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0500: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f0500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0508: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0508u;
    {
        const bool branch_taken_0x1f0508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0508) {
            ctx->pc = 0x1F0530u;
            goto label_1f0530;
        }
    }
    ctx->pc = 0x1F0510u;
    // 0x1f0510: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f0510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0514: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f0514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0518: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f0518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f051c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f051cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0520: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0524: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f0524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f0528: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0528u;
    {
        const bool branch_taken_0x1f0528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0528) {
            ctx->pc = 0x1F0548u;
            goto label_1f0548;
        }
    }
    ctx->pc = 0x1F0530u;
label_1f0530:
    // 0x1f0530: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f0530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0534: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f0534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0538: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f0538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f053c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f053cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f0540: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1f0540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0544: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f0544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f0548:
    // 0x1f0548: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1f0548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f054c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0550: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1f0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0554: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0558: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1f0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f055c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f055cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f0560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0564:
    // 0x1f0564: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f0564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f0568: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0570u;
}
