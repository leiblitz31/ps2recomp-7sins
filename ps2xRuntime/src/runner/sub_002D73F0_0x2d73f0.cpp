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

// Function: sub_002D73F0
// Address: 0x2d73f0 - 0x2d78f0
void sub_002D73F0_0x2d73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D73F0_0x2d73f0");
#endif

    switch (ctx->pc) {
        case 0x2d7424u: goto label_2d7424;
        case 0x2d7440u: goto label_2d7440;
        case 0x2d749cu: goto label_2d749c;
        case 0x2d762cu: goto label_2d762c;
        case 0x2d7638u: goto label_2d7638;
        case 0x2d7660u: goto label_2d7660;
        case 0x2d7670u: goto label_2d7670;
        case 0x2d7680u: goto label_2d7680;
        case 0x2d76f0u: goto label_2d76f0;
        case 0x2d7750u: goto label_2d7750;
        case 0x2d77dcu: goto label_2d77dc;
        case 0x2d787cu: goto label_2d787c;
        case 0x2d78b0u: goto label_2d78b0;
        default: break;
    }

    ctx->pc = 0x2d73f0u;

    // 0x2d73f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d73f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d73f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d73f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d73f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d73f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d73fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d73fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d7404: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2d7404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2d7408: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2d7408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2d740c: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x2d740cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x2d7410: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x2d7410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x2d7414: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2d7414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7418: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2d7418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d741c: 0xc0b5a08  jal         func_2D6820
    ctx->pc = 0x2D741Cu;
    SET_GPR_U32(ctx, 31, 0x2D7424u);
    ctx->pc = 0x2D6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6820u, 0x2D741Cu, 0x2D7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7424u;
label_2d7424:
    // 0x2d7424: 0x14400127  bnez        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x2D7424u;
    {
        const bool branch_taken_0x2d7424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7424) {
            ctx->pc = 0x2D78C4u;
            goto label_2d78c4;
        }
    }
    ctx->pc = 0x2D742Cu;
    // 0x2d742c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2d742cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7430: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2d7430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7434: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x2d7434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7438: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x2D7438u;
    SET_GPR_U32(ctx, 31, 0x2D7440u);
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x2D7438u, 0x2D7440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7440u;
label_2d7440:
    // 0x2d7440: 0x14400120  bnez        $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x2D7440u;
    {
        const bool branch_taken_0x2d7440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d7440) {
            ctx->pc = 0x2D78C4u;
            goto label_2d78c4;
        }
    }
    ctx->pc = 0x2D7448u;
    // 0x2d7448: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d7448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d744c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d744cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7450: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d7450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7454: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7458: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d745c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2d745cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2d7460: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d7460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7464: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7468: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d7468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d746c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7470: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7470u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7474: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2d7474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2d7478: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d7478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d747c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7480: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7484: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7488: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d748c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2d748cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d7490: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2d7490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2d7494: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D7494u;
    SET_GPR_U32(ctx, 31, 0x2D749Cu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D7494u, 0x2D749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D749Cu;
label_2d749c:
    // 0x2d749c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d749cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d74a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d74a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d74a4: 0x0  nop
    ctx->pc = 0x2d74a4u;
    // NOP
    // 0x2d74a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d74a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d74ac: 0x45010058  bc1t        . + 4 + (0x58 << 2)
    ctx->pc = 0x2D74ACu;
    {
        const bool branch_taken_0x2d74ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d74ac) {
            ctx->pc = 0x2D7610u;
            goto label_2d7610;
        }
    }
    ctx->pc = 0x2D74B4u;
    // 0x2d74b4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2d74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d74b8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d74bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d74bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d74c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d74c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d74c4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2d74c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d74c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d74cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d74ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d74d0: 0x0  nop
    ctx->pc = 0x2d74d0u;
    // NOP
    // 0x2d74d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d74d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d74d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D74D8u;
    {
        const bool branch_taken_0x2d74d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d74d8) {
            ctx->pc = 0x2D74F0u;
            goto label_2d74f0;
        }
    }
    ctx->pc = 0x2D74E0u;
    // 0x2d74e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d74e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d74e4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d74e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d74e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D74E8u;
    {
        const bool branch_taken_0x2d74e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d74e8) {
            ctx->pc = 0x2D7504u;
            goto label_2d7504;
        }
    }
    ctx->pc = 0x2D74F0u;
label_2d74f0:
    // 0x2d74f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d74f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d74f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d74f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d74f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d74f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d74fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d7500: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2d7500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2d7504:
    // 0x2d7504: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2d7504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7508: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d7508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d750c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d750cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7510: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7514: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2d7514u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d7518: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d7518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d751c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d751cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7520: 0x0  nop
    ctx->pc = 0x2d7520u;
    // NOP
    // 0x2d7524: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d7524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7528: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7528u;
    {
        const bool branch_taken_0x2d7528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7528) {
            ctx->pc = 0x2D7540u;
            goto label_2d7540;
        }
    }
    ctx->pc = 0x2D7530u;
    // 0x2d7530: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7530u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d7534: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d7534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d7538: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7538u;
    {
        const bool branch_taken_0x2d7538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7538) {
            ctx->pc = 0x2D7554u;
            goto label_2d7554;
        }
    }
    ctx->pc = 0x2D7540u;
label_2d7540:
    // 0x2d7540: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d7540u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7544: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7544u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d7548: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d7548u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d754c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d7550: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d7550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2d7554:
    // 0x2d7554: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D7554u;
    {
        const bool branch_taken_0x2d7554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d7554) {
            ctx->pc = 0x2D7610u;
            goto label_2d7610;
        }
    }
    ctx->pc = 0x2D755Cu;
    // 0x2d755c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2d755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7560: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d7560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d7564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7568: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d7568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d756c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2d756cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d7570: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d7570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d7574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7578: 0x0  nop
    ctx->pc = 0x2d7578u;
    // NOP
    // 0x2d757c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d757cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7580: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7580u;
    {
        const bool branch_taken_0x2d7580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7580) {
            ctx->pc = 0x2D7598u;
            goto label_2d7598;
        }
    }
    ctx->pc = 0x2D7588u;
    // 0x2d7588: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d758c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d758cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d7590: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D7590u;
    {
        const bool branch_taken_0x2d7590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7590) {
            ctx->pc = 0x2D75ACu;
            goto label_2d75ac;
        }
    }
    ctx->pc = 0x2D7598u;
label_2d7598:
    // 0x2d7598: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d7598u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d759c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d759cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d75a0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d75a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d75a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d75a8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2d75a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2d75ac:
    // 0x2d75ac: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2d75acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d75b0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2d75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2d75b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d75b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d75b8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d75b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d75bc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2d75bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d75c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d75c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d75c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d75c8: 0x0  nop
    ctx->pc = 0x2d75c8u;
    // NOP
    // 0x2d75cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d75ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d75d0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D75D0u;
    {
        const bool branch_taken_0x2d75d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d75d0) {
            ctx->pc = 0x2D75E8u;
            goto label_2d75e8;
        }
    }
    ctx->pc = 0x2D75D8u;
    // 0x2d75d8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d75d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d75dc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d75dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d75e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D75E0u;
    {
        const bool branch_taken_0x2d75e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d75e0) {
            ctx->pc = 0x2D75FCu;
            goto label_2d75fc;
        }
    }
    ctx->pc = 0x2D75E8u;
label_2d75e8:
    // 0x2d75e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d75e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d75ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d75ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d75f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d75f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d75f4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d75f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d75f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2d75fc:
    // 0x2d75fc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D75FCu;
    {
        const bool branch_taken_0x2d75fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d75fc) {
            ctx->pc = 0x2D7610u;
            goto label_2d7610;
        }
    }
    ctx->pc = 0x2D7604u;
    // 0x2d7604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7608: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2D7608u;
    {
        const bool branch_taken_0x2d7608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7608) {
            ctx->pc = 0x2D78C8u;
            goto label_2d78c8;
        }
    }
    ctx->pc = 0x2D7610u;
label_2d7610:
    // 0x2d7610: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d7610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7614: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2D7614u;
    {
        const bool branch_taken_0x2d7614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7614) {
            ctx->pc = 0x2D78B8u;
            goto label_2d78b8;
        }
    }
    ctx->pc = 0x2D761Cu;
    // 0x2d761c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d761cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7620: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2d7620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7624: 0xc068ea0  jal         func_1A3A80
    ctx->pc = 0x2D7624u;
    SET_GPR_U32(ctx, 31, 0x2D762Cu);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x2D7624u, 0x2D762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D762Cu;
label_2d762c:
    // 0x2d762c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d762cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7630: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2D7630u;
    {
        const bool branch_taken_0x2d7630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7630) {
            ctx->pc = 0x2D78A4u;
            goto label_2d78a4;
        }
    }
    ctx->pc = 0x2D7638u;
label_2d7638:
    // 0x2d7638: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2d7638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d763c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7640: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2d7640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d7644: 0x10620096  beq         $v1, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2D7644u;
    {
        const bool branch_taken_0x2d7644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d7644) {
            ctx->pc = 0x2D78A0u;
            goto label_2d78a0;
        }
    }
    ctx->pc = 0x2D764Cu;
    // 0x2d764c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d764cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7650: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2d7650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2d7654: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d7654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d7658: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D7658u;
    SET_GPR_U32(ctx, 31, 0x2D7660u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D7658u, 0x2D7660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7660u;
label_2d7660:
    // 0x2d7660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d7660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7668: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2D7668u;
    SET_GPR_U32(ctx, 31, 0x2D7670u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2D7668u, 0x2D7670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7670u;
label_2d7670:
    // 0x2d7670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7674: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d7674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d7678: 0xc121e84  jal         func_487A10
    ctx->pc = 0x2D7678u;
    SET_GPR_U32(ctx, 31, 0x2D7680u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2D7678u, 0x2D7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7680u;
label_2d7680:
    // 0x2d7680: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x2d7680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2d7684: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d7684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7688: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d768c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7690: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2d7690u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d7694: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d7694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d7698: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d7698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d769c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d76a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2d76a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d76a4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2d76a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2d76a8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d76ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d76acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d76b0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2d76b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d76b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d76b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d76b8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2d76b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d76bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d76c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d76c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d76c4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2d76c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d76c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d76c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d76cc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d76ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d76d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d76d4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d76d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d76d8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2d76d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d76dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d76dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d76e0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2d76e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d76e4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2d76e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2d76e8: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D76E8u;
    SET_GPR_U32(ctx, 31, 0x2D76F0u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D76E8u, 0x2D76F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D76F0u;
label_2d76f0:
    // 0x2d76f0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d76f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d76f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d76f8: 0x0  nop
    ctx->pc = 0x2d76f8u;
    // NOP
    // 0x2d76fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d76fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7700: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x2D7700u;
    {
        const bool branch_taken_0x2d7700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7700) {
            ctx->pc = 0x2D7834u;
            goto label_2d7834;
        }
    }
    ctx->pc = 0x2D7708u;
    // 0x2d7708: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d7708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d770c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d770cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7710: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2d7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7714: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7718: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2d7718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d771c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7720: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7724: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2d7724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7728: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d772c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d772cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d7730: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d7730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7734: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7738: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2d7738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d773c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d773cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7740: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2d7740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d7744: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2d7744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2d7748: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D7748u;
    SET_GPR_U32(ctx, 31, 0x2D7750u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D7748u, 0x2D7750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7750u;
label_2d7750:
    // 0x2d7750: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d7750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d7754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7758: 0x0  nop
    ctx->pc = 0x2d7758u;
    // NOP
    // 0x2d775c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d775cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7760: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x2D7760u;
    {
        const bool branch_taken_0x2d7760 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7760) {
            ctx->pc = 0x2D7834u;
            goto label_2d7834;
        }
    }
    ctx->pc = 0x2D7768u;
    // 0x2d7768: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d7768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d776c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7770: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d7770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7774: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7778: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7778u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d777c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2d777cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2d7780: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d7780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7784: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7788: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d7788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d778c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7790: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7794: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2d7794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2d7798: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d779c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d77a0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2d77a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d77a4: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2d77a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d77a8: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2d77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d77ac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2d77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d77b0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d77b4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2d77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d77b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d77b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d77bc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2d77bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d77c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2d77c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d77c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d77c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d77c8: 0x0  nop
    ctx->pc = 0x2d77c8u;
    // NOP
    // 0x2d77cc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2d77ccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2d77d0: 0x4603131d  msub.s      $f12, $f2, $f3
    ctx->pc = 0x2d77d0u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2d77d4: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x2D77D4u;
    SET_GPR_U32(ctx, 31, 0x2D77DCu);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x2D77D4u, 0x2D77DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D77DCu;
label_2d77dc:
    // 0x2d77dc: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x2d77dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d77e0: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x2d77e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d77e4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2d77e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d77e8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2d77e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d77ec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2d77ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d77f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d77f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d77f4: 0x0  nop
    ctx->pc = 0x2d77f4u;
    // NOP
    // 0x2d77f8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2d77f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x2d77fc: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x2d77fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x2d7800: 0x46010044  c1          0x10044
    ctx->pc = 0x2d7800u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2d7804: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d7804u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d7808: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2d7808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2d780c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2d780cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7810: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2d7810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2d7814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7818: 0x0  nop
    ctx->pc = 0x2d7818u;
    // NOP
    // 0x2d781c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d781cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7820: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D7820u;
    {
        const bool branch_taken_0x2d7820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7820) {
            ctx->pc = 0x2D7834u;
            goto label_2d7834;
        }
    }
    ctx->pc = 0x2D7828u;
    // 0x2d7828: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d782c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2D782Cu;
    {
        const bool branch_taken_0x2d782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d782c) {
            ctx->pc = 0x2D78C8u;
            goto label_2d78c8;
        }
    }
    ctx->pc = 0x2D7834u;
label_2d7834:
    // 0x2d7834: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7838: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d7838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d783c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2d783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7840: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7844: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2d7844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2d7848: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d7848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d784c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7850: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2d7850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7854: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d7858: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2d7858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2d785c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2d785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7860: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7864: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2d7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7868: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2d7868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d786c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2d786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d7870: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2d7870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2d7874: 0xc104d24  jal         func_413490
    ctx->pc = 0x2D7874u;
    SET_GPR_U32(ctx, 31, 0x2D787Cu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2D7874u, 0x2D787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D787Cu;
label_2d787c:
    // 0x2d787c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2d787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2d7880: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7884: 0x0  nop
    ctx->pc = 0x2d7884u;
    // NOP
    // 0x2d7888: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d7888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d788c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D788Cu;
    {
        const bool branch_taken_0x2d788c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d788c) {
            ctx->pc = 0x2D78A0u;
            goto label_2d78a0;
        }
    }
    ctx->pc = 0x2D7894u;
    // 0x2d7894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7898: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D7898u;
    {
        const bool branch_taken_0x2d7898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7898) {
            ctx->pc = 0x2D78C8u;
            goto label_2d78c8;
        }
    }
    ctx->pc = 0x2D78A0u;
label_2d78a0:
    // 0x2d78a0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d78a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d78a4:
    // 0x2d78a4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2d78a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d78a8: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2D78A8u;
    SET_GPR_U32(ctx, 31, 0x2D78B0u);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2D78A8u, 0x2D78B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D78B0u;
label_2d78b0:
    // 0x2d78b0: 0x1602ff61  bne         $s0, $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x2D78B0u;
    {
        const bool branch_taken_0x2d78b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d78b0) {
            ctx->pc = 0x2D7638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7638;
        }
    }
    ctx->pc = 0x2D78B8u;
label_2d78b8:
    // 0x2d78b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d78bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D78BCu;
    {
        const bool branch_taken_0x2d78bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d78bc) {
            ctx->pc = 0x2D78C8u;
            goto label_2d78c8;
        }
    }
    ctx->pc = 0x2D78C4u;
label_2d78c4:
    // 0x2d78c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d78c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d78c8:
    // 0x2d78c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d78c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d78cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d78ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d78d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d78d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d78d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d78d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d78d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2d78d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d78dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D78DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D78DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D78E4u;
    // 0x2d78e4: 0x0  nop
    ctx->pc = 0x2d78e4u;
    // NOP
    // 0x2d78e8: 0x0  nop
    ctx->pc = 0x2d78e8u;
    // NOP
    // 0x2d78ec: 0x0  nop
    ctx->pc = 0x2d78ecu;
    // NOP
    ctx->pc = 0x2d78f0u;
}
