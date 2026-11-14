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

// Function: sub_001DBDD0
// Address: 0x1dbdd0 - 0x1dc610
void sub_001DBDD0_0x1dbdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBDD0_0x1dbdd0");
#endif

    switch (ctx->pc) {
        case 0x1dbe70u: goto label_1dbe70;
        case 0x1dc058u: goto label_1dc058;
        case 0x1dc070u: goto label_1dc070;
        case 0x1dc080u: goto label_1dc080;
        case 0x1dc098u: goto label_1dc098;
        case 0x1dc0a8u: goto label_1dc0a8;
        case 0x1dc0c0u: goto label_1dc0c0;
        case 0x1dc168u: goto label_1dc168;
        case 0x1dc17cu: goto label_1dc17c;
        case 0x1dc190u: goto label_1dc190;
        case 0x1dc1a4u: goto label_1dc1a4;
        case 0x1dc1b0u: goto label_1dc1b0;
        case 0x1dc1c0u: goto label_1dc1c0;
        case 0x1dc1f0u: goto label_1dc1f0;
        case 0x1dc208u: goto label_1dc208;
        case 0x1dc21cu: goto label_1dc21c;
        case 0x1dc234u: goto label_1dc234;
        case 0x1dc248u: goto label_1dc248;
        case 0x1dc258u: goto label_1dc258;
        case 0x1dc270u: goto label_1dc270;
        case 0x1dc284u: goto label_1dc284;
        case 0x1dc29cu: goto label_1dc29c;
        case 0x1dc2b8u: goto label_1dc2b8;
        case 0x1dc2d0u: goto label_1dc2d0;
        case 0x1dc2e8u: goto label_1dc2e8;
        case 0x1dc2f8u: goto label_1dc2f8;
        case 0x1dc328u: goto label_1dc328;
        case 0x1dc340u: goto label_1dc340;
        case 0x1dc354u: goto label_1dc354;
        case 0x1dc36cu: goto label_1dc36c;
        case 0x1dc380u: goto label_1dc380;
        case 0x1dc390u: goto label_1dc390;
        case 0x1dc3a8u: goto label_1dc3a8;
        case 0x1dc3bcu: goto label_1dc3bc;
        case 0x1dc3d4u: goto label_1dc3d4;
        case 0x1dc3f0u: goto label_1dc3f0;
        case 0x1dc408u: goto label_1dc408;
        case 0x1dc428u: goto label_1dc428;
        case 0x1dc448u: goto label_1dc448;
        case 0x1dc478u: goto label_1dc478;
        case 0x1dc490u: goto label_1dc490;
        case 0x1dc4a8u: goto label_1dc4a8;
        case 0x1dc4c0u: goto label_1dc4c0;
        case 0x1dc4e4u: goto label_1dc4e4;
        case 0x1dc4f4u: goto label_1dc4f4;
        case 0x1dc518u: goto label_1dc518;
        case 0x1dc528u: goto label_1dc528;
        case 0x1dc54cu: goto label_1dc54c;
        case 0x1dc55cu: goto label_1dc55c;
        case 0x1dc580u: goto label_1dc580;
        case 0x1dc590u: goto label_1dc590;
        case 0x1dc5b4u: goto label_1dc5b4;
        case 0x1dc5ccu: goto label_1dc5cc;
        case 0x1dc5f0u: goto label_1dc5f0;
        default: break;
    }

    ctx->pc = 0x1dbdd0u;

    // 0x1dbdd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1dbdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1dbdd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dbdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dbdd8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1dbdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1dbddc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dbddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dbde0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dbde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dbde4: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1dbde4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dbde8: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1dbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1dbdec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbdecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbdf0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbdf4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dbdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dbdf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbdf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbdfc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1dbdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe00: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x1dbe00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x1dbe04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbe04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbe08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe0c: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1dbe0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1dbe10: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe14: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1dbe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbe18: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1dbe18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe1c: 0xe4a0009c  swc1        $f0, 0x9C($a1)
    ctx->pc = 0x1dbe1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 156), bits); }
    // 0x1dbe20: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x1dbe20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe24: 0xc4e0009c  lwc1        $f0, 0x9C($a3)
    ctx->pc = 0x1dbe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbe28: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe2c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x1dbe2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x1dbe30: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x1dbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x1dbe34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbe34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbe38: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1dbe38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe3c: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x1dbe3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x1dbe40: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x1dbe40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x1dbe44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbe44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbe48: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe4c: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1dbe4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x1dbe50: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x1dbe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
    // 0x1dbe54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1dbe54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbe58: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x1dbe58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe5c: 0xe4e000ac  swc1        $f0, 0xAC($a3)
    ctx->pc = 0x1dbe5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 172), bits); }
    // 0x1dbe60: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1dbe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dbe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbe68: 0xc077184  jal         func_1DC610
    ctx->pc = 0x1DBE68u;
    SET_GPR_U32(ctx, 31, 0x1DBE70u);
    ctx->pc = 0x1DC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC610u, 0x1DBE68u, 0x1DBE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE70u;
label_1dbe70:
    // 0x1dbe70: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe74: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1dbe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1dbe78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dbe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbe7c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBE7Cu;
    {
        const bool branch_taken_0x1dbe7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dbe7c) {
            ctx->pc = 0x1DBE98u;
            goto label_1dbe98;
        }
    }
    ctx->pc = 0x1DBE84u;
    // 0x1dbe84: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x1dbe84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe88: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1dbe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbe8c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1dbe8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1dbe90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBE90u;
    {
        const bool branch_taken_0x1dbe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbe90) {
            ctx->pc = 0x1DBEA8u;
            goto label_1dbea8;
        }
    }
    ctx->pc = 0x1DBE98u;
label_1dbe98:
    // 0x1dbe98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbe9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1dbe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbea0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1dbea0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1dbea4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1dbea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1dbea8:
    // 0x1dbea8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1dbea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbeac: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbeb0: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x1dbeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x1dbeb4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbeb8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1dbeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1dbebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbec0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBEC0u;
    {
        const bool branch_taken_0x1dbec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dbec0) {
            ctx->pc = 0x1DBEDCu;
            goto label_1dbedc;
        }
    }
    ctx->pc = 0x1DBEC8u;
    // 0x1dbec8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbecc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1dbeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbed0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1dbed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1dbed4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBED4u;
    {
        const bool branch_taken_0x1dbed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbed4) {
            ctx->pc = 0x1DBEECu;
            goto label_1dbeec;
        }
    }
    ctx->pc = 0x1DBEDCu;
label_1dbedc:
    // 0x1dbedc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbee0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1dbee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbee4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1dbee4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1dbee8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1dbee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1dbeec:
    // 0x1dbeec: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1dbeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbef0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbef4: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x1dbef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x1dbef8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbefc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1dbefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbf00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf04: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x1dbf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x1dbf08: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf0c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1dbf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbf10: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf14: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x1dbf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x1dbf18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf20: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x1dbf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x1dbf24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf28: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf2c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x1dbf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x1dbf30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf34: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf38: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x1dbf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x1dbf3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf40: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf44: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x1dbf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x1dbf48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dbf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbf4c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf50: 0xa0430018  sb          $v1, 0x18($v0)
    ctx->pc = 0x1dbf50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbf54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dbf54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbf58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf5c: 0xa0430019  sb          $v1, 0x19($v0)
    ctx->pc = 0x1dbf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbf60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf64: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf68: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1dbf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1dbf6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf70: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf74: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1dbf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1dbf78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf80: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1dbf80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1dbf84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbf84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbf88: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf8c: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1dbf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1dbf90: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1dbf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbf94: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbf98: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1dbf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x1dbf9c: 0xc7808044  lwc1        $f0, -0x7FBC($gp)
    ctx->pc = 0x1dbf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbfa0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbfa4: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x1dbfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x1dbfa8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbfac: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x1dbfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbfb0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbfb4: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x1dbfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x1dbfb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dbfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbfc0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbfc4: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x1dbfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x1dbfc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dbfcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbfccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbfd0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbfd4: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x1dbfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x1dbfd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dbfdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbfdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbfe0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbfe4: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x1dbfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x1dbfe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dbfec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dbfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbff0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dbff4: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x1dbff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x1dbff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dbff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dbffc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dbffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc000: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x1dc000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x1dc004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc008: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc00c: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1dc00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1dc010: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1dc010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1dc014: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1dc014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1dc018: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1dc018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1dc01c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1dc01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1dc020: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1dc020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1dc024: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1dc024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1dc028: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1dc028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1dc02c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1dc02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1dc030: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dc030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc034: 0x36310004  ori         $s1, $s1, 0x4
    ctx->pc = 0x1dc034u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
    // 0x1dc038: 0x36310008  ori         $s1, $s1, 0x8
    ctx->pc = 0x1dc038u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x1dc03c: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x1dc03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1dc040: 0xdf8297f8  ld          $v0, -0x6808($gp)
    ctx->pc = 0x1dc040u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940664)));
    // 0x1dc044: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1dc044u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1dc048: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc04c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc050: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC050u;
    SET_GPR_U32(ctx, 31, 0x1DC058u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC050u, 0x1DC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC058u;
label_1dc058:
    // 0x1dc058: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc05c: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1dc05cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1dc060: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc064: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1dc064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dc068: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1DC068u;
    SET_GPR_U32(ctx, 31, 0x1DC070u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1DC068u, 0x1DC070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC070u;
label_1dc070:
    // 0x1dc070: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc074: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc078: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC078u;
    SET_GPR_U32(ctx, 31, 0x1DC080u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC078u, 0x1DC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC080u;
label_1dc080:
    // 0x1dc080: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc084: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1dc084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1dc088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc08c: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x1dc08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1dc090: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1DC090u;
    SET_GPR_U32(ctx, 31, 0x1DC098u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1DC090u, 0x1DC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC098u;
label_1dc098:
    // 0x1dc098: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc09c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc0a0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC0A0u;
    SET_GPR_U32(ctx, 31, 0x1DC0A8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC0A0u, 0x1DC0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC0A8u;
label_1dc0a8:
    // 0x1dc0a8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc0ac: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x1dc0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1dc0b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc0b4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1dc0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dc0b8: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1DC0B8u;
    SET_GPR_U32(ctx, 31, 0x1DC0C0u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1DC0B8u, 0x1DC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC0C0u;
label_1dc0c0:
    // 0x1dc0c0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dc0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dc0c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1dc0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dc0c8: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1dc0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc0cc: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1dc0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc0d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc0d4: 0x0  nop
    ctx->pc = 0x1dc0d4u;
    // NOP
    // 0x1dc0d8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dc0d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dc0dc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1dc0dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1dc0e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1dc0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1dc0e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dc0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dc0e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1dc0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dc0ec: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x1dc0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc0f0: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x1dc0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc0f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc0f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc0f8: 0x0  nop
    ctx->pc = 0x1dc0f8u;
    // NOP
    // 0x1dc0fc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dc0fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dc100: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1dc100u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1dc104: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dc104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1dc108: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dc108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dc10c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1dc10cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dc110: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1dc110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc114: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1dc114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc11c: 0x0  nop
    ctx->pc = 0x1dc11cu;
    // NOP
    // 0x1dc120: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dc120u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dc124: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1dc124u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1dc128: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1dc128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1dc12c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1dc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1dc130: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1dc130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dc134: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x1dc134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dc138: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1dc138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc140: 0x0  nop
    ctx->pc = 0x1dc140u;
    // NOP
    // 0x1dc144: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1dc144u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1dc148: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1dc148u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1dc14c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1dc14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1dc150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dc150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc154: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc158: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1dc158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dc15c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1dc15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dc160: 0xc056708  jal         func_159C20
    ctx->pc = 0x1DC160u;
    SET_GPR_U32(ctx, 31, 0x1DC168u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1DC160u, 0x1DC168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC168u;
label_1dc168:
    // 0x1dc168: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc16c: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1dc16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1dc170: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1dc170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dc174: 0xc056708  jal         func_159C20
    ctx->pc = 0x1DC174u;
    SET_GPR_U32(ctx, 31, 0x1DC17Cu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1DC174u, 0x1DC17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC17Cu;
label_1dc17c:
    // 0x1dc17c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc180: 0x244400e4  addiu       $a0, $v0, 0xE4
    ctx->pc = 0x1dc180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x1dc184: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1dc184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dc188: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x1DC188u;
    SET_GPR_U32(ctx, 31, 0x1DC190u);
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1DC188u, 0x1DC190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC190u;
label_1dc190:
    // 0x1dc190: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc194: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1dc194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1dc198: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1dc198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dc19c: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x1DC19Cu;
    SET_GPR_U32(ctx, 31, 0x1DC1A4u);
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1DC19Cu, 0x1DC1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC1A4u;
label_1dc1a4:
    // 0x1dc1a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dc1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1a8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1DC1A8u;
    {
        const bool branch_taken_0x1dc1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc1a8) {
            ctx->pc = 0x1DC2C0u;
            goto label_1dc2c0;
        }
    }
    ctx->pc = 0x1DC1B0u;
label_1dc1b0:
    // 0x1dc1b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc1b4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc1b8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC1B8u;
    SET_GPR_U32(ctx, 31, 0x1DC1C0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC1B8u, 0x1DC1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC1C0u;
label_1dc1c0:
    // 0x1dc1c0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1dc1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1dc1c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1dc1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1dc1cc: 0x24a57f60  addiu       $a1, $a1, 0x7F60
    ctx->pc = 0x1dc1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32608));
    // 0x1dc1d0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1dc1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dc1d4: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x1dc1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1dc1d8: 0x27a80088  addiu       $t0, $sp, 0x88
    ctx->pc = 0x1dc1d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1dc1dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc1dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc1e0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1dc1e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dc1e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1e8: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1DC1E8u;
    SET_GPR_U32(ctx, 31, 0x1DC1F0u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1DC1E8u, 0x1DC1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC1F0u;
label_1dc1f0:
    // 0x1dc1f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dc1f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc1f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc1f8: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1dc1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dc1fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc200: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DC200u;
    SET_GPR_U32(ctx, 31, 0x1DC208u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DC200u, 0x1DC208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC208u;
label_1dc208:
    // 0x1dc208: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1dc208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1dc20c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc210: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc214: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC214u;
    SET_GPR_U32(ctx, 31, 0x1DC21Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC214u, 0x1DC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC21Cu;
label_1dc21c:
    // 0x1dc21c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dc21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc220: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc224: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1dc224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dc228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc22c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DC22Cu;
    SET_GPR_U32(ctx, 31, 0x1DC234u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DC22Cu, 0x1DC234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC234u;
label_1dc234:
    // 0x1dc234: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc23c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc240: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC240u;
    SET_GPR_U32(ctx, 31, 0x1DC248u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC240u, 0x1DC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC248u;
label_1dc248:
    // 0x1dc248: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc24c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc250: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC250u;
    SET_GPR_U32(ctx, 31, 0x1DC258u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC250u, 0x1DC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC258u;
label_1dc258:
    // 0x1dc258: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dc258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc25c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc260: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1dc260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dc264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc268: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DC268u;
    SET_GPR_U32(ctx, 31, 0x1DC270u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DC268u, 0x1DC270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC270u;
label_1dc270:
    // 0x1dc270: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc27c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DC27Cu;
    SET_GPR_U32(ctx, 31, 0x1DC284u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DC27Cu, 0x1DC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC284u;
label_1dc284:
    // 0x1dc284: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dc284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dc288: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc28c: 0x244400e4  addiu       $a0, $v0, 0xE4
    ctx->pc = 0x1dc28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x1dc290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc294: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DC294u;
    SET_GPR_U32(ctx, 31, 0x1DC29Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DC294u, 0x1DC29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC29Cu;
label_1dc29c:
    // 0x1dc29c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1dc29cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dc2a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dc2a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dc2a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc2a8: 0x244400e4  addiu       $a0, $v0, 0xE4
    ctx->pc = 0x1dc2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x1dc2ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2b0: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DC2B0u;
    SET_GPR_U32(ctx, 31, 0x1DC2B8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DC2B0u, 0x1DC2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC2B8u;
label_1dc2b8:
    // 0x1dc2b8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1dc2b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dc2bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dc2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dc2c0:
    // 0x1dc2c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc2c4: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1dc2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dc2c8: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DC2C8u;
    SET_GPR_U32(ctx, 31, 0x1DC2D0u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DC2C8u, 0x1DC2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC2D0u;
label_1dc2d0:
    // 0x1dc2d0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dc2d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dc2d4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1DC2D4u;
    {
        const bool branch_taken_0x1dc2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc2d4) {
            ctx->pc = 0x1DC1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc1b0;
        }
    }
    ctx->pc = 0x1DC2DCu;
    // 0x1dc2dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dc2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc2e0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1DC2E0u;
    {
        const bool branch_taken_0x1dc2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc2e0) {
            ctx->pc = 0x1DC3F8u;
            goto label_1dc3f8;
        }
    }
    ctx->pc = 0x1DC2E8u;
label_1dc2e8:
    // 0x1dc2e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc2ec: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc2f0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC2F0u;
    SET_GPR_U32(ctx, 31, 0x1DC2F8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC2F0u, 0x1DC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC2F8u;
label_1dc2f8:
    // 0x1dc2f8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1dc2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1dc2fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc300: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1dc300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1dc304: 0x24a57f60  addiu       $a1, $a1, 0x7F60
    ctx->pc = 0x1dc304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32608));
    // 0x1dc308: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1dc308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dc30c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1dc30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dc310: 0x27a80088  addiu       $t0, $sp, 0x88
    ctx->pc = 0x1dc310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1dc314: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc318: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1dc318u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc31c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dc31cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc320: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1DC320u;
    SET_GPR_U32(ctx, 31, 0x1DC328u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1DC320u, 0x1DC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC328u;
label_1dc328:
    // 0x1dc328: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dc328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc32c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc330: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1dc330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1dc334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc338: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DC338u;
    SET_GPR_U32(ctx, 31, 0x1DC340u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DC338u, 0x1DC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC340u;
label_1dc340:
    // 0x1dc340: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1dc340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1dc344: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc348: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc34c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC34Cu;
    SET_GPR_U32(ctx, 31, 0x1DC354u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC34Cu, 0x1DC354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC354u;
label_1dc354:
    // 0x1dc354: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dc354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc358: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc35c: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1dc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1dc360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc364: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DC364u;
    SET_GPR_U32(ctx, 31, 0x1DC36Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DC364u, 0x1DC36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC36Cu;
label_1dc36c:
    // 0x1dc36c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc370: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc378: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DC378u;
    SET_GPR_U32(ctx, 31, 0x1DC380u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DC378u, 0x1DC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC380u;
label_1dc380:
    // 0x1dc380: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc384: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc388: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC388u;
    SET_GPR_U32(ctx, 31, 0x1DC390u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC388u, 0x1DC390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC390u;
label_1dc390:
    // 0x1dc390: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dc390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc394: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc398: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1dc398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1dc39c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DC3A0u;
    SET_GPR_U32(ctx, 31, 0x1DC3A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DC3A0u, 0x1DC3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3A8u;
label_1dc3a8:
    // 0x1dc3a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc3ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc3acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc3b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dc3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3b4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DC3B4u;
    SET_GPR_U32(ctx, 31, 0x1DC3BCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DC3B4u, 0x1DC3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3BCu;
label_1dc3bc:
    // 0x1dc3bc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dc3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dc3c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc3c4: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1dc3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1dc3c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3cc: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DC3CCu;
    SET_GPR_U32(ctx, 31, 0x1DC3D4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DC3CCu, 0x1DC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3D4u;
label_1dc3d4:
    // 0x1dc3d4: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1dc3d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dc3d8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dc3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dc3dc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc3e0: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1dc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1dc3e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3e8: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DC3E8u;
    SET_GPR_U32(ctx, 31, 0x1DC3F0u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DC3E8u, 0x1DC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC3F0u;
label_1dc3f0:
    // 0x1dc3f0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1dc3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1dc3f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dc3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dc3f8:
    // 0x1dc3f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc3fc: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1dc3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1dc400: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DC400u;
    SET_GPR_U32(ctx, 31, 0x1DC408u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DC400u, 0x1DC408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC408u;
label_1dc408:
    // 0x1dc408: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dc408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dc40c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1DC40Cu;
    {
        const bool branch_taken_0x1dc40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc40c) {
            ctx->pc = 0x1DC2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc2e8;
        }
    }
    ctx->pc = 0x1DC414u;
    // 0x1dc414: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1dc414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dc418: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1dc418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dc41c: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x1dc41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1dc420: 0xc11c208  jal         func_470820
    ctx->pc = 0x1DC420u;
    SET_GPR_U32(ctx, 31, 0x1DC428u);
    ctx->pc = 0x470820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470820u, 0x1DC420u, 0x1DC428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC428u;
label_1dc428:
    // 0x1dc428: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1dc428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc42c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1dc42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1dc430: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1dc430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc434: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1dc434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1dc438: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc43c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc440: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC440u;
    SET_GPR_U32(ctx, 31, 0x1DC448u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC440u, 0x1DC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC448u;
label_1dc448:
    // 0x1dc448: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1dc448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1dc44c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc450: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1dc450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1dc454: 0x24a57f80  addiu       $a1, $a1, 0x7F80
    ctx->pc = 0x1dc454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32640));
    // 0x1dc458: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1dc458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1dc45c: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x1dc45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1dc460: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x1dc460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dc464: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc468: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1dc468u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc46c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dc46cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc470: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1DC470u;
    SET_GPR_U32(ctx, 31, 0x1DC478u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1DC470u, 0x1DC478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC478u;
label_1dc478:
    // 0x1dc478: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc47c: 0xac620104  sw          $v0, 0x104($v1)
    ctx->pc = 0x1dc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 2));
    // 0x1dc480: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc484: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc488: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC488u;
    SET_GPR_U32(ctx, 31, 0x1DC490u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC488u, 0x1DC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC490u;
label_1dc490:
    // 0x1dc490: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc494: 0x8c650104  lw          $a1, 0x104($v1)
    ctx->pc = 0x1dc494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1dc498: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc49c: 0xc78c82d8  lwc1        $f12, -0x7D28($gp)
    ctx->pc = 0x1dc49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc4a0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DC4A0u;
    SET_GPR_U32(ctx, 31, 0x1DC4A8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DC4A0u, 0x1DC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4A8u;
label_1dc4a8:
    // 0x1dc4a8: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x1dc4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc4ac: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1dc4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1dc4b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc4b4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc4b8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC4B8u;
    SET_GPR_U32(ctx, 31, 0x1DC4C0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC4B8u, 0x1DC4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4C0u;
label_1dc4c0:
    // 0x1dc4c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc4c4: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1dc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1dc4c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4cc: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1dc4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc4d0: 0xc7ad00ac  lwc1        $f13, 0xAC($sp)
    ctx->pc = 0x1dc4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dc4d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc4d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4dc: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DC4DCu;
    SET_GPR_U32(ctx, 31, 0x1DC4E4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DC4DCu, 0x1DC4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4E4u;
label_1dc4e4:
    // 0x1dc4e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc4e8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc4ec: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC4ECu;
    SET_GPR_U32(ctx, 31, 0x1DC4F4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC4ECu, 0x1DC4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4F4u;
label_1dc4f4:
    // 0x1dc4f4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc4f8: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x1dc4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1dc4fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc500: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1dc500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc504: 0xc7ad00ac  lwc1        $f13, 0xAC($sp)
    ctx->pc = 0x1dc504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dc508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc50c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc510: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DC510u;
    SET_GPR_U32(ctx, 31, 0x1DC518u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DC510u, 0x1DC518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC518u;
label_1dc518:
    // 0x1dc518: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc51c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc520: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC520u;
    SET_GPR_U32(ctx, 31, 0x1DC528u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC520u, 0x1DC528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC528u;
label_1dc528:
    // 0x1dc528: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc52c: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x1dc52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1dc530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc534: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1dc534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc538: 0xc7ad00ac  lwc1        $f13, 0xAC($sp)
    ctx->pc = 0x1dc538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dc53c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc540: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc544: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DC544u;
    SET_GPR_U32(ctx, 31, 0x1DC54Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DC544u, 0x1DC54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC54Cu;
label_1dc54c:
    // 0x1dc54c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc550: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc554: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC554u;
    SET_GPR_U32(ctx, 31, 0x1DC55Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC554u, 0x1DC55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC55Cu;
label_1dc55c:
    // 0x1dc55c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc560: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1dc560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1dc564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc568: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1dc568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc56c: 0xc7ad00ac  lwc1        $f13, 0xAC($sp)
    ctx->pc = 0x1dc56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dc570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc574: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc578: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DC578u;
    SET_GPR_U32(ctx, 31, 0x1DC580u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DC578u, 0x1DC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC580u;
label_1dc580:
    // 0x1dc580: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1dc580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc584: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dc584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dc588: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC588u;
    SET_GPR_U32(ctx, 31, 0x1DC590u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC588u, 0x1DC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC590u;
label_1dc590:
    // 0x1dc590: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc594: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x1dc594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1dc598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc59c: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1dc59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc5a0: 0xc7ad00ac  lwc1        $f13, 0xAC($sp)
    ctx->pc = 0x1dc5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dc5a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc5ac: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DC5ACu;
    SET_GPR_U32(ctx, 31, 0x1DC5B4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DC5ACu, 0x1DC5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC5B4u;
label_1dc5b4:
    // 0x1dc5b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5b8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1dc5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc5bc: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x1dc5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1dc5c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5c4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DC5C4u;
    SET_GPR_U32(ctx, 31, 0x1DC5CCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DC5C4u, 0x1DC5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC5CCu;
label_1dc5cc:
    // 0x1dc5cc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1dc5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc5d0: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x1dc5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1dc5d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5d8: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x1dc5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc5dc: 0xc7ad00ac  lwc1        $f13, 0xAC($sp)
    ctx->pc = 0x1dc5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dc5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc5e8: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DC5E8u;
    SET_GPR_U32(ctx, 31, 0x1DC5F0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DC5E8u, 0x1DC5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC5F0u;
label_1dc5f0:
    // 0x1dc5f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dc5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc5f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1dc5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc5f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dc5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc5fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dc5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc600: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1dc600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dc604: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1dc604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dc608: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC610u;
}
