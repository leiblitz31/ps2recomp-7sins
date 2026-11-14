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

// Function: sub_00216310
// Address: 0x216310 - 0x216480
void sub_00216310_0x216310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216310_0x216310");
#endif

    switch (ctx->pc) {
        case 0x216338u: goto label_216338;
        case 0x216378u: goto label_216378;
        default: break;
    }

    ctx->pc = 0x216310u;

    // 0x216310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216314: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x216314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x216318: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x216318u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21631c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216320: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x216320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216324: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x216324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216328: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x216328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21632c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21632cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x216330: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x216330u;
    {
        const bool branch_taken_0x216330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216330) {
            ctx->pc = 0x216450u;
            goto label_216450;
        }
    }
    ctx->pc = 0x216338u;
label_216338:
    // 0x216338: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x216338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21633c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x21633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216340: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x216340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x216344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x216344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216348: 0x0  nop
    ctx->pc = 0x216348u;
    // NOP
    // 0x21634c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21634cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x216350: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x216350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x216354: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x216354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216358: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x216358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21635c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21635cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x216360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x216360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216364: 0x0  nop
    ctx->pc = 0x216364u;
    // NOP
    // 0x216368: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x216368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21636c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x21636cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x216370: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x216370u;
    {
        const bool branch_taken_0x216370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216370) {
            ctx->pc = 0x216430u;
            goto label_216430;
        }
    }
    ctx->pc = 0x216378u;
label_216378:
    // 0x216378: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x216378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21637c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x21637cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216380: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x216380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x216384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x216384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216388: 0x0  nop
    ctx->pc = 0x216388u;
    // NOP
    // 0x21638c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21638cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x216390: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x216390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x216394: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x216394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x216398: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x216398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21639c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2163a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2163a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2163a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2163a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2163a8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2163a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2163ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2163acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2163b0: 0x0  nop
    ctx->pc = 0x2163b0u;
    // NOP
    // 0x2163b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2163b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2163b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2163B8u;
    {
        const bool branch_taken_0x2163b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2163b8) {
            ctx->pc = 0x2163D0u;
            goto label_2163d0;
        }
    }
    ctx->pc = 0x2163C0u;
    // 0x2163c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2163c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2163c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2163c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2163c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2163C8u;
    {
        const bool branch_taken_0x2163c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2163c8) {
            ctx->pc = 0x2163E4u;
            goto label_2163e4;
        }
    }
    ctx->pc = 0x2163D0u;
label_2163d0:
    // 0x2163d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2163d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2163d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2163d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2163d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2163d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2163dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2163dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2163e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2163e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2163e4:
    // 0x2163e4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2163e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2163e8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2163e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2163ec: 0x1810  mfhi        $v1
    ctx->pc = 0x2163ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2163f0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2163F0u;
    {
        const bool branch_taken_0x2163f0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2163f0) {
            ctx->pc = 0x21640Cu;
            goto label_21640c;
        }
    }
    ctx->pc = 0x2163F8u;
    // 0x2163f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2163f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2163fc: 0x0  nop
    ctx->pc = 0x2163fcu;
    // NOP
    // 0x216400: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216404: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x216404u;
    {
        const bool branch_taken_0x216404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216404) {
            ctx->pc = 0x216428u;
            goto label_216428;
        }
    }
    ctx->pc = 0x21640Cu;
label_21640c:
    // 0x21640c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x21640cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x216410: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x216410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x216414: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x216414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x216418: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x216418u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21641c: 0x0  nop
    ctx->pc = 0x21641cu;
    // NOP
    // 0x216420: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x216420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x216424: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x216424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_216428:
    // 0x216428: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x216428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21642c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x21642cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_216430:
    // 0x216430: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x216430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216434: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x216434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216438: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x216438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x21643c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21643cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216440: 0x0  nop
    ctx->pc = 0x216440u;
    // NOP
    // 0x216444: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x216444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216448: 0x4500ffcb  bc1f        . + 4 + (-0x35 << 2)
    ctx->pc = 0x216448u;
    {
        const bool branch_taken_0x216448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216448) {
            ctx->pc = 0x216378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216378;
        }
    }
    ctx->pc = 0x216450u;
label_216450:
    // 0x216450: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x216450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216454: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x216454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216458: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x216458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x21645c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21645cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216460: 0x0  nop
    ctx->pc = 0x216460u;
    // NOP
    // 0x216464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x216464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216468: 0x4500ffb3  bc1f        . + 4 + (-0x4D << 2)
    ctx->pc = 0x216468u;
    {
        const bool branch_taken_0x216468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216468) {
            ctx->pc = 0x216338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216338;
        }
    }
    ctx->pc = 0x216470u;
    // 0x216470: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x216470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x216474: 0x3e00008  jr          $ra
    ctx->pc = 0x216474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21647Cu;
    // 0x21647c: 0x0  nop
    ctx->pc = 0x21647cu;
    // NOP
    ctx->pc = 0x216480u;
}
