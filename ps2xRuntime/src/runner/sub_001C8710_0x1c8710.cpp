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

// Function: sub_001C8710
// Address: 0x1c8710 - 0x1c8f70
void sub_001C8710_0x1c8710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8710_0x1c8710");
#endif

    switch (ctx->pc) {
        case 0x1c87e0u: goto label_1c87e0;
        case 0x1c884cu: goto label_1c884c;
        case 0x1c88f8u: goto label_1c88f8;
        case 0x1c89d8u: goto label_1c89d8;
        case 0x1c89ecu: goto label_1c89ec;
        case 0x1c8a10u: goto label_1c8a10;
        case 0x1c8a58u: goto label_1c8a58;
        case 0x1c8a60u: goto label_1c8a60;
        case 0x1c8a80u: goto label_1c8a80;
        case 0x1c8aa4u: goto label_1c8aa4;
        case 0x1c8af4u: goto label_1c8af4;
        case 0x1c8b08u: goto label_1c8b08;
        case 0x1c8b2cu: goto label_1c8b2c;
        case 0x1c8b78u: goto label_1c8b78;
        case 0x1c8b90u: goto label_1c8b90;
        case 0x1c8bbcu: goto label_1c8bbc;
        case 0x1c8be8u: goto label_1c8be8;
        case 0x1c8c0cu: goto label_1c8c0c;
        case 0x1c8c3cu: goto label_1c8c3c;
        case 0x1c8c6cu: goto label_1c8c6c;
        case 0x1c8c90u: goto label_1c8c90;
        case 0x1c8d20u: goto label_1c8d20;
        case 0x1c8d70u: goto label_1c8d70;
        default: break;
    }

    ctx->pc = 0x1c8710u;

    // 0x1c8710: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c8710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c8714: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c8714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c8718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c8718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c871c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c8720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c8720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c8724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c8728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c8728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c872c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1c872cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1c8730: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x1c8730u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1c8734: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8738: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x1c8738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c873c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c873cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8740: 0x0  nop
    ctx->pc = 0x1c8740u;
    // NOP
    // 0x1c8744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8748: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x1C8748u;
    {
        const bool branch_taken_0x1c8748 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8748) {
            ctx->pc = 0x1C87F8u;
            goto label_1c87f8;
        }
    }
    ctx->pc = 0x1C8750u;
    // 0x1c8750: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8754: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x1c8754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8758: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1c8758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c875c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c875cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c8760: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c8760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x1c8764: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8768: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x1c8768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c876c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c876cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8770: 0x0  nop
    ctx->pc = 0x1c8770u;
    // NOP
    // 0x1c8774: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8778: 0x450001f4  bc1f        . + 4 + (0x1F4 << 2)
    ctx->pc = 0x1C8778u;
    {
        const bool branch_taken_0x1c8778 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8778) {
            ctx->pc = 0x1C8F4Cu;
            goto label_1c8f4c;
        }
    }
    ctx->pc = 0x1C8780u;
    // 0x1c8780: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8784: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1c8784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8788: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c878c: 0xc44000c0  lwc1        $f0, 0xC0($v0)
    ctx->pc = 0x1c878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8790: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8794: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x1c8794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x1c8798: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c879c: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x1c879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c87a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c87a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c87a4: 0x0  nop
    ctx->pc = 0x1c87a4u;
    // NOP
    // 0x1c87a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c87a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c87ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C87ACu;
    {
        const bool branch_taken_0x1c87ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c87ac) {
            ctx->pc = 0x1C87D0u;
            goto label_1c87d0;
        }
    }
    ctx->pc = 0x1C87B4u;
    // 0x1c87b4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c87b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c87b8: 0xc46100c0  lwc1        $f1, 0xC0($v1)
    ctx->pc = 0x1c87b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c87bc: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1c87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1c87c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c87c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c87c4: 0x0  nop
    ctx->pc = 0x1c87c4u;
    // NOP
    // 0x1c87c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c87c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c87cc: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x1c87ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
label_1c87d0:
    // 0x1c87d0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c87d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c87d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c87d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c87d8: 0xc07208c  jal         func_1C8230
    ctx->pc = 0x1C87D8u;
    SET_GPR_U32(ctx, 31, 0x1C87E0u);
    ctx->pc = 0x1C8230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8230u, 0x1C87D8u, 0x1C87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C87E0u;
label_1c87e0:
    // 0x1c87e0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c87e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c87e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c87e8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c87e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c87ec: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c87ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x1c87f0: 0x100001d6  b           . + 4 + (0x1D6 << 2)
    ctx->pc = 0x1C87F0u;
    {
        const bool branch_taken_0x1c87f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c87f0) {
            ctx->pc = 0x1C8F4Cu;
            goto label_1c8f4c;
        }
    }
    ctx->pc = 0x1C87F8u;
label_1c87f8:
    // 0x1c87f8: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1c87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1c87fc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1c87fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8800: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8804: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c8804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8808: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c880c: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c880cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x1c8810: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8814: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x1c8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8818: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c8818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c881c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c881cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8820: 0x0  nop
    ctx->pc = 0x1c8820u;
    // NOP
    // 0x1c8824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8828: 0x450101c8  bc1t        . + 4 + (0x1C8 << 2)
    ctx->pc = 0x1C8828u;
    {
        const bool branch_taken_0x1c8828 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8828) {
            ctx->pc = 0x1C8F4Cu;
            goto label_1c8f4c;
        }
    }
    ctx->pc = 0x1C8830u;
    // 0x1c8830: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1c8830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1c8834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8838: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c883c: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1c883cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x1c8840: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1c8840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8844: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C8844u;
    SET_GPR_U32(ctx, 31, 0x1C884Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C8844u, 0x1C884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C884Cu;
label_1c884c:
    // 0x1c884c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8850: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1c8850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1c8854: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1c8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c8858: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c8858u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c885c: 0xa010  mfhi        $s4
    ctx->pc = 0x1c885cu;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x1c8860: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1c8860u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8864: 0x0  nop
    ctx->pc = 0x1c8864u;
    // NOP
    // 0x1c8868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c8868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c886c: 0x46000004  c1          0x4
    ctx->pc = 0x1c886cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8870: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c8870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c8874: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x1c8874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x1c8878: 0x0  nop
    ctx->pc = 0x1c8878u;
    // NOP
    // 0x1c887c: 0x2e810006  sltiu       $at, $s4, 0x6
    ctx->pc = 0x1c887cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c8880: 0x102000e7  beqz        $at, . + 4 + (0xE7 << 2)
    ctx->pc = 0x1C8880u;
    {
        const bool branch_taken_0x1c8880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8880) {
            ctx->pc = 0x1C8C20u;
            goto label_1c8c20;
        }
    }
    ctx->pc = 0x1C8888u;
    // 0x1c8888: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c8888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c888c: 0x24848840  addiu       $a0, $a0, -0x77C0
    ctx->pc = 0x1c888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936640));
    // 0x1c8890: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1c8890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1c8894: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c8894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c8898: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c8898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c889c: 0x600008  jr          $v1
    ctx->pc = 0x1C889Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C88A4u: goto label_1c88a4;
            case 0x1C89B8u: goto label_1c89b8;
            case 0x1C8A4Cu: goto label_1c8a4c;
            case 0x1C8AD4u: goto label_1c8ad4;
            case 0x1C8B68u: goto label_1c8b68;
            case 0x1C8C20u: goto label_1c8c20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C889Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C88A4u;
label_1c88a4:
    // 0x1c88a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c88a8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1c88a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1c88ac: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1c88acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1c88b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c88b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C88B4u;
    {
        const bool branch_taken_0x1c88b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c88b4) {
            ctx->pc = 0x1C88D0u;
            goto label_1c88d0;
        }
    }
    ctx->pc = 0x1C88BCu;
    // 0x1c88bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c88bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c88c0: 0x0  nop
    ctx->pc = 0x1c88c0u;
    // NOP
    // 0x1c88c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c88c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c88c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C88C8u;
    {
        const bool branch_taken_0x1c88c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c88c8) {
            ctx->pc = 0x1C88ECu;
            goto label_1c88ec;
        }
    }
    ctx->pc = 0x1C88D0u;
label_1c88d0:
    // 0x1c88d0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1c88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c88d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c88d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c88d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c88d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c88dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c88dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c88e0: 0x0  nop
    ctx->pc = 0x1c88e0u;
    // NOP
    // 0x1c88e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c88e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c88e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c88e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c88ec:
    // 0x1c88ec: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c88ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c88f0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C88F0u;
    SET_GPR_U32(ctx, 31, 0x1C88F8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C88F0u, 0x1C88F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88F8u;
label_1c88f8:
    // 0x1c88f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C88F8u;
    {
        const bool branch_taken_0x1c88f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c88f8) {
            ctx->pc = 0x1C8914u;
            goto label_1c8914;
        }
    }
    ctx->pc = 0x1C8900u;
    // 0x1c8900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8904: 0x0  nop
    ctx->pc = 0x1c8904u;
    // NOP
    // 0x1c8908: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c8908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c890c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C890Cu;
    {
        const bool branch_taken_0x1c890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c890c) {
            ctx->pc = 0x1C8930u;
            goto label_1c8930;
        }
    }
    ctx->pc = 0x1C8914u;
label_1c8914:
    // 0x1c8914: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1c8914u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c8918: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1c8918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c891c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c891cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c8920: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c8920u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8924: 0x0  nop
    ctx->pc = 0x1c8924u;
    // NOP
    // 0x1c8928: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c8928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c892c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c892cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c8930:
    // 0x1c8930: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8938: 0x0  nop
    ctx->pc = 0x1c8938u;
    // NOP
    // 0x1c893c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1c893cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c8940: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x1c8940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8944: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c8944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8948: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c894c: 0x46000004  c1          0x4
    ctx->pc = 0x1c894cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8950: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1c8950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c8954: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c8954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8958: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c8958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c895c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1c895cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1c8960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8964: 0x0  nop
    ctx->pc = 0x1c8964u;
    // NOP
    // 0x1c8968: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1c8968u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c896c: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x1c896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8970: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c8970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8978: 0x46000004  c1          0x4
    ctx->pc = 0x1c8978u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c897c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1c897cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1c8980: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1c8980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1c8984: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c8988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c8988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c898c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1c898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8990: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c8990u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c8994: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1c8994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1c8998: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c8998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c899c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c899cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c89a0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1c89a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c89a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c89a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c89a8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c89ac: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c89acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x1c89b0: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x1C89B0u;
    {
        const bool branch_taken_0x1c89b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c89b0) {
            ctx->pc = 0x1C8C20u;
            goto label_1c8c20;
        }
    }
    ctx->pc = 0x1C89B8u;
label_1c89b8:
    // 0x1c89b8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c89bc: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x1c89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c89c0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1c89c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c89c4: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C89C4u;
    {
        const bool branch_taken_0x1c89c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c89c4) {
            ctx->pc = 0x1C8A4Cu;
            goto label_1c8a4c;
        }
    }
    ctx->pc = 0x1C89CCu;
    // 0x1c89cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c89ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C89D0u;
    {
        const bool branch_taken_0x1c89d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c89d0) {
            ctx->pc = 0x1C8A20u;
            goto label_1c8a20;
        }
    }
    ctx->pc = 0x1C89D8u;
label_1c89d8:
    // 0x1c89d8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c89d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c89dc: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c89dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c89e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c89e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c89e4: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C89E4u;
    SET_GPR_U32(ctx, 31, 0x1C89ECu);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C89E4u, 0x1C89ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C89ECu;
label_1c89ec:
    // 0x1c89ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1c89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c89f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c89f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c89f4: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C89F4u;
    {
        const bool branch_taken_0x1c89f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c89f4) {
            ctx->pc = 0x1C8A1Cu;
            goto label_1c8a1c;
        }
    }
    ctx->pc = 0x1C89FCu;
    // 0x1c89fc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c89fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8a00: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8a04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c8a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a08: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8A08u;
    SET_GPR_U32(ctx, 31, 0x1C8A10u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8A08u, 0x1C8A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A10u;
label_1c8a10:
    // 0x1c8a10: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1c8a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c8a14: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8A14u;
    {
        const bool branch_taken_0x1c8a14 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1c8a14) {
            ctx->pc = 0x1C8A30u;
            goto label_1c8a30;
        }
    }
    ctx->pc = 0x1C8A1Cu;
label_1c8a1c:
    // 0x1c8a1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c8a1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c8a20:
    // 0x1c8a20: 0x8f83bb44  lw          $v1, -0x44BC($gp)
    ctx->pc = 0x1c8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c8a24: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1c8a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c8a28: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C8A28u;
    {
        const bool branch_taken_0x1c8a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a28) {
            ctx->pc = 0x1C89D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c89d8;
        }
    }
    ctx->pc = 0x1C8A30u;
label_1c8a30:
    // 0x1c8a30: 0x8f83bb44  lw          $v1, -0x44BC($gp)
    ctx->pc = 0x1c8a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c8a34: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x1c8a34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c8a38: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8A38u;
    {
        const bool branch_taken_0x1c8a38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a38) {
            ctx->pc = 0x1C8A4Cu;
            goto label_1c8a4c;
        }
    }
    ctx->pc = 0x1C8A40u;
    // 0x1c8a40: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1c8a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a44: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1C8A44u;
    {
        const bool branch_taken_0x1c8a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a44) {
            ctx->pc = 0x1C8C28u;
            goto label_1c8c28;
        }
    }
    ctx->pc = 0x1C8A4Cu;
label_1c8a4c:
    // 0x1c8a4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c8a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C8A50u;
    {
        const bool branch_taken_0x1c8a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8a50) {
            ctx->pc = 0x1C8AB4u;
            goto label_1c8ab4;
        }
    }
    ctx->pc = 0x1C8A58u;
label_1c8a58:
    // 0x1c8a58: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C8A58u;
    SET_GPR_U32(ctx, 31, 0x1C8A60u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C8A58u, 0x1C8A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A60u;
label_1c8a60:
    // 0x1c8a60: 0x8f83bb44  lw          $v1, -0x44BC($gp)
    ctx->pc = 0x1c8a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c8a64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c8a64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c8a68: 0x8010  mfhi        $s0
    ctx->pc = 0x1c8a68u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1c8a6c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8a70: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a78: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8A78u;
    SET_GPR_U32(ctx, 31, 0x1C8A80u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8A78u, 0x1C8A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8A80u;
label_1c8a80:
    // 0x1c8a80: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1c8a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c8a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8a88: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8A88u;
    {
        const bool branch_taken_0x1c8a88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8a88) {
            ctx->pc = 0x1C8AB0u;
            goto label_1c8ab0;
        }
    }
    ctx->pc = 0x1C8A90u;
    // 0x1c8a90: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8a94: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8a98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8a9c: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C8AA4u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8A9Cu, 0x1C8AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8AA4u;
label_1c8aa4:
    // 0x1c8aa4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1c8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c8aa8: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8AA8u;
    {
        const bool branch_taken_0x1c8aa8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c8aa8) {
            ctx->pc = 0x1C8AC0u;
            goto label_1c8ac0;
        }
    }
    ctx->pc = 0x1C8AB0u;
label_1c8ab0:
    // 0x1c8ab0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c8ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c8ab4:
    // 0x1c8ab4: 0x2a630064  slti        $v1, $s3, 0x64
    ctx->pc = 0x1c8ab4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c8ab8: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C8AB8u;
    {
        const bool branch_taken_0x1c8ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ab8) {
            ctx->pc = 0x1C8A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8a58;
        }
    }
    ctx->pc = 0x1C8AC0u;
label_1c8ac0:
    // 0x1c8ac0: 0x2a610064  slti        $at, $s3, 0x64
    ctx->pc = 0x1c8ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c8ac4: 0x10200056  beqz        $at, . + 4 + (0x56 << 2)
    ctx->pc = 0x1C8AC4u;
    {
        const bool branch_taken_0x1c8ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ac4) {
            ctx->pc = 0x1C8C20u;
            goto label_1c8c20;
        }
    }
    ctx->pc = 0x1C8ACCu;
    // 0x1c8acc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1C8ACCu;
    {
        const bool branch_taken_0x1c8acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8acc) {
            ctx->pc = 0x1C8C28u;
            goto label_1c8c28;
        }
    }
    ctx->pc = 0x1C8AD4u;
label_1c8ad4:
    // 0x1c8ad4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8ad8: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1c8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c8adc: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x1c8adcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c8ae0: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C8AE0u;
    {
        const bool branch_taken_0x1c8ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8ae0) {
            ctx->pc = 0x1C8B68u;
            goto label_1c8b68;
        }
    }
    ctx->pc = 0x1C8AE8u;
    // 0x1c8ae8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c8ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8aec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C8AECu;
    {
        const bool branch_taken_0x1c8aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8aec) {
            ctx->pc = 0x1C8B3Cu;
            goto label_1c8b3c;
        }
    }
    ctx->pc = 0x1C8AF4u;
label_1c8af4:
    // 0x1c8af4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8af8: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b00: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8B00u;
    SET_GPR_U32(ctx, 31, 0x1C8B08u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8B00u, 0x1C8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B08u;
label_1c8b08:
    // 0x1c8b08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c8b0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8b10: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8B10u;
    {
        const bool branch_taken_0x1c8b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8b10) {
            ctx->pc = 0x1C8B38u;
            goto label_1c8b38;
        }
    }
    ctx->pc = 0x1C8B18u;
    // 0x1c8b18: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8b1c: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8b20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b24: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8B24u;
    SET_GPR_U32(ctx, 31, 0x1C8B2Cu);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8B24u, 0x1C8B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B2Cu;
label_1c8b2c:
    // 0x1c8b2c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c8b30: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8B30u;
    {
        const bool branch_taken_0x1c8b30 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1c8b30) {
            ctx->pc = 0x1C8B4Cu;
            goto label_1c8b4c;
        }
    }
    ctx->pc = 0x1C8B38u;
label_1c8b38:
    // 0x1c8b38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c8b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c8b3c:
    // 0x1c8b3c: 0x8f82bb44  lw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c8b40: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1c8b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8b44: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C8B44u;
    {
        const bool branch_taken_0x1c8b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b44) {
            ctx->pc = 0x1C8AF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8af4;
        }
    }
    ctx->pc = 0x1C8B4Cu;
label_1c8b4c:
    // 0x1c8b4c: 0x8f82bb44  lw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c8b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c8b50: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1c8b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8b54: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8B54u;
    {
        const bool branch_taken_0x1c8b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b54) {
            ctx->pc = 0x1C8B68u;
            goto label_1c8b68;
        }
    }
    ctx->pc = 0x1C8B5Cu;
    // 0x1c8b5c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1c8b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b60: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C8B60u;
    {
        const bool branch_taken_0x1c8b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b60) {
            ctx->pc = 0x1C8C28u;
            goto label_1c8c28;
        }
    }
    ctx->pc = 0x1C8B68u;
label_1c8b68:
    // 0x1c8b68: 0x8f82bb44  lw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c8b6c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1c8b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c8b70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8B70u;
    {
        const bool branch_taken_0x1c8b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8b70) {
            ctx->pc = 0x1C8B7Cu;
            goto label_1c8b7c;
        }
    }
    ctx->pc = 0x1C8B78u;
label_1c8b78:
    // 0x1c8b78: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1c8b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1c8b7c:
    // 0x1c8b7c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8b80: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8b84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8b88: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8B88u;
    SET_GPR_U32(ctx, 31, 0x1C8B90u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8B88u, 0x1C8B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8B90u;
label_1c8b90:
    // 0x1c8b90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c8b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8b94: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8b98: 0xc44000c0  lwc1        $f0, 0xC0($v0)
    ctx->pc = 0x1c8b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8b9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c8b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8ba0: 0x4501fff5  bc1t        . + 4 + (-0xB << 2)
    ctx->pc = 0x1C8BA0u;
    {
        const bool branch_taken_0x1c8ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8ba0) {
            ctx->pc = 0x1C8B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8b78;
        }
    }
    ctx->pc = 0x1C8BA8u;
    // 0x1c8ba8: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x1c8ba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1c8bac: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8BACu;
    {
        const bool branch_taken_0x1c8bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8bac) {
            ctx->pc = 0x1C8BBCu;
            goto label_1c8bbc;
        }
    }
    ctx->pc = 0x1C8BB4u;
    // 0x1c8bb4: 0x8f82bb44  lw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c8bb8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1c8bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c8bbc:
    // 0x1c8bbc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c8bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c8bc0: 0x8f82bb44  lw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c8bc4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c8bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8bc8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8BC8u;
    {
        const bool branch_taken_0x1c8bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8bc8) {
            ctx->pc = 0x1C8BD4u;
            goto label_1c8bd4;
        }
    }
    ctx->pc = 0x1C8BD0u;
    // 0x1c8bd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c8bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8bd4:
    // 0x1c8bd4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8bd8: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8bdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8be0: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8BE0u;
    SET_GPR_U32(ctx, 31, 0x1C8BE8u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8BE0u, 0x1C8BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8BE8u;
label_1c8be8:
    // 0x1c8be8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c8bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8bf0: 0x1462fff2  bne         $v1, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C8BF0u;
    {
        const bool branch_taken_0x1c8bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c8bf0) {
            ctx->pc = 0x1C8BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8bbc;
        }
    }
    ctx->pc = 0x1C8BF8u;
    // 0x1c8bf8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8bfc: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c04: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8C04u;
    SET_GPR_U32(ctx, 31, 0x1C8C0Cu);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8C04u, 0x1C8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C0Cu;
label_1c8c0c:
    // 0x1c8c0c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c8c10: 0x1840ffea  blez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1C8C10u;
    {
        const bool branch_taken_0x1c8c10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c8c10) {
            ctx->pc = 0x1C8BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8bbc;
        }
    }
    ctx->pc = 0x1C8C18u;
    // 0x1c8c18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8C18u;
    {
        const bool branch_taken_0x1c8c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c18) {
            ctx->pc = 0x1C8C28u;
            goto label_1c8c28;
        }
    }
    ctx->pc = 0x1C8C20u;
label_1c8c20:
    // 0x1c8c20: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1C8C20u;
    {
        const bool branch_taken_0x1c8c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c20) {
            ctx->pc = 0x1C8F4Cu;
            goto label_1c8f4c;
        }
    }
    ctx->pc = 0x1C8C28u;
label_1c8c28:
    // 0x1c8c28: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8c2c: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8c30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c34: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8C34u;
    SET_GPR_U32(ctx, 31, 0x1C8C3Cu);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8C34u, 0x1C8C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C3Cu;
label_1c8c3c:
    // 0x1c8c3c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c8c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8c40: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1c8c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c8c44: 0x8f82bb44  lw          $v0, -0x44BC($gp)
    ctx->pc = 0x1c8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949700)));
    // 0x1c8c48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c8c4c: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1c8c4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c8c50: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8C50u;
    {
        const bool branch_taken_0x1c8c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c50) {
            ctx->pc = 0x1C8C7Cu;
            goto label_1c8c7c;
        }
    }
    ctx->pc = 0x1C8C58u;
    // 0x1c8c58: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8c5c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1c8c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c8c60: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8c64: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8C64u;
    SET_GPR_U32(ctx, 31, 0x1C8C6Cu);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8C64u, 0x1C8C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C6Cu;
label_1c8c6c:
    // 0x1c8c6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c8c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8c70: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1c8c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1c8c74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C8C74u;
    {
        const bool branch_taken_0x1c8c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c74) {
            ctx->pc = 0x1C8CA8u;
            goto label_1c8ca8;
        }
    }
    ctx->pc = 0x1C8C7Cu;
label_1c8c7c:
    // 0x1c8c7c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8c80: 0x8c4400d4  lw          $a0, 0xD4($v0)
    ctx->pc = 0x1c8c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x1c8c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8c88: 0xc0719cc  jal         func_1C6730
    ctx->pc = 0x1C8C88u;
    SET_GPR_U32(ctx, 31, 0x1C8C90u);
    ctx->pc = 0x1C6730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6730u, 0x1C8C88u, 0x1C8C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C90u;
label_1c8c90:
    // 0x1c8c90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1c8c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8c94: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1c8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1c8c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8c9c: 0x0  nop
    ctx->pc = 0x1c8c9cu;
    // NOP
    // 0x1c8ca0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8ca4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1c8ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1c8ca8:
    // 0x1c8ca8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1c8ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8cac: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1c8cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8cb0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c8cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8cb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c8cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8cbc: 0x0  nop
    ctx->pc = 0x1c8cbcu;
    // NOP
    // 0x1c8cc0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c8cc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c8cc4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8cc8: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1c8cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x1c8ccc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8cd0: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1c8cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8cd4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1c8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1c8cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8cdc: 0x0  nop
    ctx->pc = 0x1c8cdcu;
    // NOP
    // 0x1c8ce0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8ce0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8ce4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8CE4u;
    {
        const bool branch_taken_0x1c8ce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8ce4) {
            ctx->pc = 0x1C8D08u;
            goto label_1c8d08;
        }
    }
    ctx->pc = 0x1C8CECu;
    // 0x1c8cec: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8cf0: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x1c8cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8cf4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1c8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1c8cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8cfc: 0x0  nop
    ctx->pc = 0x1c8cfcu;
    // NOP
    // 0x1c8d00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c8d04: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c8d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_1c8d08:
    // 0x1c8d08: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8d0c: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1c8d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8d10: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c8d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8d14: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1c8d14u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c8d18: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x1C8D18u;
    SET_GPR_U32(ctx, 31, 0x1C8D20u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x1C8D18u, 0x1C8D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D20u;
label_1c8d20:
    // 0x1c8d20: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8d24: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x1c8d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
    // 0x1c8d28: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8d2c: 0xc44100ec  lwc1        $f1, 0xEC($v0)
    ctx->pc = 0x1c8d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8d30: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1c8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1c8d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8d38: 0x0  nop
    ctx->pc = 0x1c8d38u;
    // NOP
    // 0x1c8d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8d40: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8D40u;
    {
        const bool branch_taken_0x1c8d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8d40) {
            ctx->pc = 0x1C8D68u;
            goto label_1c8d68;
        }
    }
    ctx->pc = 0x1C8D48u;
    // 0x1c8d48: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8d4c: 0xc44100ec  lwc1        $f1, 0xEC($v0)
    ctx->pc = 0x1c8d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8d50: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1c8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1c8d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8d58: 0x0  nop
    ctx->pc = 0x1c8d58u;
    // NOP
    // 0x1c8d5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c8d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c8d60: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8d64: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x1c8d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_1c8d68:
    // 0x1c8d68: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1C8D68u;
    SET_GPR_U32(ctx, 31, 0x1C8D70u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1C8D68u, 0x1C8D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8D70u;
label_1c8d70:
    // 0x1c8d70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8D70u;
    {
        const bool branch_taken_0x1c8d70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1c8d70) {
            ctx->pc = 0x1C8D8Cu;
            goto label_1c8d8c;
        }
    }
    ctx->pc = 0x1C8D78u;
    // 0x1c8d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8d7c: 0x0  nop
    ctx->pc = 0x1c8d7cu;
    // NOP
    // 0x1c8d80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c8d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8d84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8D84u;
    {
        const bool branch_taken_0x1c8d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8d84) {
            ctx->pc = 0x1C8DA8u;
            goto label_1c8da8;
        }
    }
    ctx->pc = 0x1C8D8Cu;
label_1c8d8c:
    // 0x1c8d8c: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1c8d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1c8d90: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1c8d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c8d94: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c8d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c8d98: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c8d98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8d9c: 0x0  nop
    ctx->pc = 0x1c8d9cu;
    // NOP
    // 0x1c8da0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c8da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8da4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c8da4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c8da8:
    // 0x1c8da8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c8da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c8dac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8db0: 0x0  nop
    ctx->pc = 0x1c8db0u;
    // NOP
    // 0x1c8db4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c8db4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c8db8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c8dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8dc0: 0x0  nop
    ctx->pc = 0x1c8dc0u;
    // NOP
    // 0x1c8dc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c8dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8dc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8dd0: 0x0  nop
    ctx->pc = 0x1c8dd0u;
    // NOP
    // 0x1c8dd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c8dd8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1c8dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1c8ddc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1c8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1c8de0: 0x24847790  addiu       $a0, $a0, 0x7790
    ctx->pc = 0x1c8de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30608));
    // 0x1c8de4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1c8de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c8de8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1c8de8u;
    { uint32_t bits = FAST_READ32(0x4E7790u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c8dec: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1c8decu;
    { uint32_t bits = FAST_READ32(0x4E7794u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c8df0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1c8df0u;
    { uint32_t bits = FAST_READ32(0x4E7798u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8df4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1c8df4u;
    { uint32_t bits = FAST_READ32(0x4E779Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8df8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1c8df8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c8dfc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1c8dfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1c8e00: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1c8e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1c8e04: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1c8e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1c8e08: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8e0c: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1c8e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1c8e10: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C8E10u;
    {
        const bool branch_taken_0x1c8e10 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1c8e10) {
            ctx->pc = 0x1C8E2Cu;
            goto label_1c8e2c;
        }
    }
    ctx->pc = 0x1C8E18u;
    // 0x1c8e18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8e18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8e1c: 0x0  nop
    ctx->pc = 0x1c8e1cu;
    // NOP
    // 0x1c8e20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c8e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8e24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8E24u;
    {
        const bool branch_taken_0x1c8e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e24) {
            ctx->pc = 0x1C8E48u;
            goto label_1c8e48;
        }
    }
    ctx->pc = 0x1C8E2Cu;
label_1c8e2c:
    // 0x1c8e2c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1c8e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1c8e30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c8e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c8e34: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1c8e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c8e38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c8e38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8e3c: 0x0  nop
    ctx->pc = 0x1c8e3cu;
    // NOP
    // 0x1c8e40: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c8e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c8e44: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c8e44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c8e48:
    // 0x1c8e48: 0xc780831c  lwc1        $f0, -0x7CE4($gp)
    ctx->pc = 0x1c8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c8e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c8e50: 0x46000044  c1          0x44
    ctx->pc = 0x1c8e50u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8e54: 0xc780831c  lwc1        $f0, -0x7CE4($gp)
    ctx->pc = 0x1c8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e58: 0x46000004  c1          0x4
    ctx->pc = 0x1c8e58u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c8e5c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c8e5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c8e60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c8e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8e64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8e68: 0x0  nop
    ctx->pc = 0x1c8e68u;
    // NOP
    // 0x1c8e6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8e70: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c8e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c8e74: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8e78: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x1c8e7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c8e80: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1c8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1c8e84: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1c8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8e88: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1c8e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c8e8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c8e90: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e94: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1c8e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8e98: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8e9c: 0xc46000ec  lwc1        $f0, 0xEC($v1)
    ctx->pc = 0x1c8e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8ea0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c8ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c8ea4: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1c8ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1c8ea8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8eac: 0xc46100ec  lwc1        $f1, 0xEC($v1)
    ctx->pc = 0x1c8eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8eb0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8eb4: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c8eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8eb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c8eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8ebc: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c8ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x1c8ec0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8ec4: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x1c8ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8ec8: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x1c8ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x1c8ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ed0: 0x0  nop
    ctx->pc = 0x1c8ed0u;
    // NOP
    // 0x1c8ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8ed8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8ED8u;
    {
        const bool branch_taken_0x1c8ed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8ed8) {
            ctx->pc = 0x1C8EFCu;
            goto label_1c8efc;
        }
    }
    ctx->pc = 0x1C8EE0u;
    // 0x1c8ee0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c8ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8ee4: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1c8ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8ee8: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x1c8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x1c8eec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8eecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8ef0: 0x0  nop
    ctx->pc = 0x1c8ef0u;
    // NOP
    // 0x1c8ef4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c8ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c8ef8: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x1c8ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
label_1c8efc:
    // 0x1c8efc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8f00: 0xc46100c0  lwc1        $f1, 0xC0($v1)
    ctx->pc = 0x1c8f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8f04: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8f08: 0xc46000e8  lwc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c8f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8f0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c8f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c8f10: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1c8f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x1c8f14: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c8f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8f18: 0xc46100e8  lwc1        $f1, 0xE8($v1)
    ctx->pc = 0x1c8f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c8f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f20: 0x0  nop
    ctx->pc = 0x1c8f20u;
    // NOP
    // 0x1c8f24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8f28: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8F28u;
    {
        const bool branch_taken_0x1c8f28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c8f28) {
            ctx->pc = 0x1C8F4Cu;
            goto label_1c8f4c;
        }
    }
    ctx->pc = 0x1C8F30u;
    // 0x1c8f30: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c8f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8f34: 0xc48100e8  lwc1        $f1, 0xE8($a0)
    ctx->pc = 0x1c8f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8f38: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x1c8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
    // 0x1c8f3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c8f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f40: 0x0  nop
    ctx->pc = 0x1c8f40u;
    // NOP
    // 0x1c8f44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c8f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c8f48: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x1c8f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
label_1c8f4c:
    // 0x1c8f4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c8f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8f50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c8f50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8f54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c8f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8f58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c8f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8f5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c8f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c8f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f64: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1c8f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c8f68: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F70u;
}
