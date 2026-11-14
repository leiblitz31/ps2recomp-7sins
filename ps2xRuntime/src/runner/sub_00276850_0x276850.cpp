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

// Function: sub_00276850
// Address: 0x276850 - 0x276cc0
void sub_00276850_0x276850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276850_0x276850");
#endif

    switch (ctx->pc) {
        case 0x276868u: goto label_276868;
        case 0x2768b8u: goto label_2768b8;
        case 0x2768f8u: goto label_2768f8;
        case 0x276910u: goto label_276910;
        case 0x276920u: goto label_276920;
        case 0x276940u: goto label_276940;
        case 0x276968u: goto label_276968;
        case 0x27698cu: goto label_27698c;
        case 0x2769b0u: goto label_2769b0;
        case 0x2769d4u: goto label_2769d4;
        case 0x2769fcu: goto label_2769fc;
        case 0x276a20u: goto label_276a20;
        case 0x276a44u: goto label_276a44;
        case 0x276a68u: goto label_276a68;
        case 0x276a90u: goto label_276a90;
        case 0x276ab4u: goto label_276ab4;
        case 0x276ad8u: goto label_276ad8;
        case 0x276afcu: goto label_276afc;
        case 0x276b24u: goto label_276b24;
        case 0x276b48u: goto label_276b48;
        case 0x276b6cu: goto label_276b6c;
        case 0x276b90u: goto label_276b90;
        case 0x276bb8u: goto label_276bb8;
        case 0x276bdcu: goto label_276bdc;
        case 0x276c00u: goto label_276c00;
        case 0x276c18u: goto label_276c18;
        case 0x276c30u: goto label_276c30;
        case 0x276c8cu: goto label_276c8c;
        case 0x276cacu: goto label_276cac;
        default: break;
    }

    ctx->pc = 0x276850u;

    // 0x276850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276858: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x276858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27685c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27685cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276860: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x276860u;
    SET_GPR_U32(ctx, 31, 0x276868u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x276860u, 0x276868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276868u;
label_276868:
    // 0x276868: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x276868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x27686c: 0x24635d90  addiu       $v1, $v1, 0x5D90
    ctx->pc = 0x27686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23952));
    // 0x276870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276874: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x276874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x276878: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27687c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27687cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276880: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x276880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276884: 0x3e00008  jr          $ra
    ctx->pc = 0x276884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27688Cu;
    // 0x27688c: 0x0  nop
    ctx->pc = 0x27688cu;
    // NOP
    // 0x276890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x276890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x276894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x276894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x276898: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x276898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27689c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2768a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2768a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2768a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2768a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2768a8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2768a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2768ac: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2768acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2768b0: 0xc09d248  jal         func_274920
    ctx->pc = 0x2768B0u;
    SET_GPR_U32(ctx, 31, 0x2768B8u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2768B0u, 0x2768B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768B8u;
label_2768b8:
    // 0x2768b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2768b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2768bc: 0x104300d8  beq         $v0, $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2768BCu;
    {
        const bool branch_taken_0x2768bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2768bc) {
            ctx->pc = 0x276C20u;
            goto label_276c20;
        }
    }
    ctx->pc = 0x2768C4u;
    // 0x2768c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2768c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2768c8: 0x104300d9  beq         $v0, $v1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2768C8u;
    {
        const bool branch_taken_0x2768c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2768c8) {
            ctx->pc = 0x276C30u;
            goto label_276c30;
        }
    }
    ctx->pc = 0x2768D0u;
    // 0x2768d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2768d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2768d4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2768D4u;
    {
        const bool branch_taken_0x2768d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2768d4) {
            ctx->pc = 0x2768E4u;
            goto label_2768e4;
        }
    }
    ctx->pc = 0x2768DCu;
    // 0x2768dc: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x2768DCu;
    {
        const bool branch_taken_0x2768dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2768dc) {
            ctx->pc = 0x276C30u;
            goto label_276c30;
        }
    }
    ctx->pc = 0x2768E4u;
label_2768e4:
    // 0x2768e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2768e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2768e8: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2768e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2768ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2768ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2768f0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2768F0u;
    SET_GPR_U32(ctx, 31, 0x2768F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2768F0u, 0x2768F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2768F8u;
label_2768f8:
    // 0x2768f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2768f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2768fc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2768fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276900: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x276900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x276904: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x276904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x276908: 0xc085538  jal         func_2154E0
    ctx->pc = 0x276908u;
    SET_GPR_U32(ctx, 31, 0x276910u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x276908u, 0x276910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276910u;
label_276910:
    // 0x276910: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x276910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276918: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x276918u;
    SET_GPR_U32(ctx, 31, 0x276920u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x276918u, 0x276920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276920u;
label_276920:
    // 0x276920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276924: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x276924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276928: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x276928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27692c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x27692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276930: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x276930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x276934: 0x24a5d220  addiu       $a1, $a1, -0x2DE0
    ctx->pc = 0x276934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955552));
    // 0x276938: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x276938u;
    SET_GPR_U32(ctx, 31, 0x276940u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x276938u, 0x276940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276940u;
label_276940:
    // 0x276940: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x276940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x276944: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x276944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276948: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x276948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27694c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x27694cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276950: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x276950u;
    {
        const bool branch_taken_0x276950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276950) {
            ctx->pc = 0x2769B8u;
            goto label_2769b8;
        }
    }
    ctx->pc = 0x276958u;
    // 0x276958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27695c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27695cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276960: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276960u;
    SET_GPR_U32(ctx, 31, 0x276968u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276960u, 0x276968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276968u;
label_276968:
    // 0x276968: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27696c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x27696cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276970: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x276970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276974: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x276974u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276978: 0x0  nop
    ctx->pc = 0x276978u;
    // NOP
    // 0x27697c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276980: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276984: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276984u;
    SET_GPR_U32(ctx, 31, 0x27698Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276984u, 0x27698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27698Cu;
label_27698c:
    // 0x27698c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276990: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276994: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x276994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x276998: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27699c: 0xc7b4005c  lwc1        $f20, 0x5C($sp)
    ctx->pc = 0x27699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2769a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2769a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2769a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769a8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2769A8u;
    SET_GPR_U32(ctx, 31, 0x2769B0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2769A8u, 0x2769B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769B0u;
label_2769b0:
    // 0x2769b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2769b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2769b4: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x2769b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2769b8:
    // 0x2769b8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2769b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2769bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2769bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2769c0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2769c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2769c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2769c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2769c8: 0x24a5d240  addiu       $a1, $a1, -0x2DC0
    ctx->pc = 0x2769c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955584));
    // 0x2769cc: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x2769CCu;
    SET_GPR_U32(ctx, 31, 0x2769D4u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x2769CCu, 0x2769D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769D4u;
label_2769d4:
    // 0x2769d4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2769d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2769d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2769d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2769dc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2769dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2769e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2769e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2769e4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2769E4u;
    {
        const bool branch_taken_0x2769e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2769e4) {
            ctx->pc = 0x276A4Cu;
            goto label_276a4c;
        }
    }
    ctx->pc = 0x2769ECu;
    // 0x2769ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2769ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2769f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2769f4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2769F4u;
    SET_GPR_U32(ctx, 31, 0x2769FCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2769F4u, 0x2769FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2769FCu;
label_2769fc:
    // 0x2769fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2769fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276a00: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x276a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a04: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x276a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a08: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x276a08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276a0c: 0x0  nop
    ctx->pc = 0x276a0cu;
    // NOP
    // 0x276a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x276a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276a18: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276A18u;
    SET_GPR_U32(ctx, 31, 0x276A20u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276A18u, 0x276A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A20u;
label_276a20:
    // 0x276a20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276a24: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a28: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x276a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x276a2c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x276a30: 0xc7b4005c  lwc1        $f20, 0x5C($sp)
    ctx->pc = 0x276a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x276a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276a3c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276A3Cu;
    SET_GPR_U32(ctx, 31, 0x276A44u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276A3Cu, 0x276A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A44u;
label_276a44:
    // 0x276a44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276a48: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x276a48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_276a4c:
    // 0x276a4c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x276a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276a50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x276a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276a54: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276a58: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x276a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x276a5c: 0x24a5d260  addiu       $a1, $a1, -0x2DA0
    ctx->pc = 0x276a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955616));
    // 0x276a60: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x276A60u;
    SET_GPR_U32(ctx, 31, 0x276A68u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x276A60u, 0x276A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A68u;
label_276a68:
    // 0x276a68: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x276a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x276a6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x276a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276a70: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x276a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a74: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x276a74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276a78: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x276A78u;
    {
        const bool branch_taken_0x276a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276a78) {
            ctx->pc = 0x276AE0u;
            goto label_276ae0;
        }
    }
    ctx->pc = 0x276A80u;
    // 0x276a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276a84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276a88: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276A88u;
    SET_GPR_U32(ctx, 31, 0x276A90u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276A88u, 0x276A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276A90u;
label_276a90:
    // 0x276a90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276a94: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x276a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276a98: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x276a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276a9c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x276a9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276aa0: 0x0  nop
    ctx->pc = 0x276aa0u;
    // NOP
    // 0x276aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276aa8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276aac: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276AACu;
    SET_GPR_U32(ctx, 31, 0x276AB4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276AACu, 0x276AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AB4u;
label_276ab4:
    // 0x276ab4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276ab8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276abc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x276abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x276ac0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x276ac4: 0xc7b4005c  lwc1        $f20, 0x5C($sp)
    ctx->pc = 0x276ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276acc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276ad0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276AD0u;
    SET_GPR_U32(ctx, 31, 0x276AD8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276AD0u, 0x276AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AD8u;
label_276ad8:
    // 0x276ad8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276adc: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x276adcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_276ae0:
    // 0x276ae0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x276ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276ae4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x276ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276ae8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276aec: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x276aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x276af0: 0x24a5d280  addiu       $a1, $a1, -0x2D80
    ctx->pc = 0x276af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955648));
    // 0x276af4: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x276AF4u;
    SET_GPR_U32(ctx, 31, 0x276AFCu);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x276AF4u, 0x276AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276AFCu;
label_276afc:
    // 0x276afc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x276afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x276b00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x276b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276b04: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x276b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x276b08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276b0c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x276B0Cu;
    {
        const bool branch_taken_0x276b0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276b0c) {
            ctx->pc = 0x276B74u;
            goto label_276b74;
        }
    }
    ctx->pc = 0x276B14u;
    // 0x276b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x276b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276b1c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276B1Cu;
    SET_GPR_U32(ctx, 31, 0x276B24u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276B1Cu, 0x276B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B24u;
label_276b24:
    // 0x276b24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276b28: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x276b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276b2c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x276b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b30: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x276b30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276b34: 0x0  nop
    ctx->pc = 0x276b34u;
    // NOP
    // 0x276b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b3c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x276b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276b40: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276B40u;
    SET_GPR_U32(ctx, 31, 0x276B48u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276B40u, 0x276B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B48u;
label_276b48:
    // 0x276b48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276b4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b50: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x276b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x276b54: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x276b58: 0xc7b4005c  lwc1        $f20, 0x5C($sp)
    ctx->pc = 0x276b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276b60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x276b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276b64: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276B64u;
    SET_GPR_U32(ctx, 31, 0x276B6Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276B64u, 0x276B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B6Cu;
label_276b6c:
    // 0x276b6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276b70: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x276b70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_276b74:
    // 0x276b74: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x276b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276b78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x276b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x276b7c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276b80: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x276b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x276b84: 0x24a5d2a0  addiu       $a1, $a1, -0x2D60
    ctx->pc = 0x276b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955680));
    // 0x276b88: 0xc049b6c  jal         func_126DB0
    ctx->pc = 0x276B88u;
    SET_GPR_U32(ctx, 31, 0x276B90u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x276B88u, 0x276B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276B90u;
label_276b90:
    // 0x276b90: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x276b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x276b94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x276b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276b98: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x276b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276b9c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x276b9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276ba0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x276BA0u;
    {
        const bool branch_taken_0x276ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x276ba0) {
            ctx->pc = 0x276C08u;
            goto label_276c08;
        }
    }
    ctx->pc = 0x276BA8u;
    // 0x276ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x276bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276bb0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276BB0u;
    SET_GPR_U32(ctx, 31, 0x276BB8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276BB0u, 0x276BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BB8u;
label_276bb8:
    // 0x276bb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276bbc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x276bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276bc0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x276bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276bc4: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x276bc4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x276bc8: 0x0  nop
    ctx->pc = 0x276bc8u;
    // NOP
    // 0x276bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x276bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276bd4: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276BD4u;
    SET_GPR_U32(ctx, 31, 0x276BDCu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276BD4u, 0x276BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276BDCu;
label_276bdc:
    // 0x276bdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276be0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x276be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276be4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x276be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x276be8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x276bec: 0xc7b4005c  lwc1        $f20, 0x5C($sp)
    ctx->pc = 0x276becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x276bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276bf8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x276BF8u;
    SET_GPR_U32(ctx, 31, 0x276C00u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x276BF8u, 0x276C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C00u;
label_276c00:
    // 0x276c00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x276c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x276c04: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x276c04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_276c08:
    // 0x276c08: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x276c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276c0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276c10: 0xc09d250  jal         func_274940
    ctx->pc = 0x276C10u;
    SET_GPR_U32(ctx, 31, 0x276C18u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x276C10u, 0x276C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C18u;
label_276c18:
    // 0x276c18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276C18u;
    {
        const bool branch_taken_0x276c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276c18) {
            ctx->pc = 0x276C30u;
            goto label_276c30;
        }
    }
    ctx->pc = 0x276C20u;
label_276c20:
    // 0x276c20: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x276c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276c24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x276c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276c28: 0xc09d250  jal         func_274940
    ctx->pc = 0x276C28u;
    SET_GPR_U32(ctx, 31, 0x276C30u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x276C28u, 0x276C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C30u;
label_276c30:
    // 0x276c30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x276c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276c34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x276c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276c38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x276c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276c3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x276c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276c40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x276c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x276c44: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x276c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x276c48: 0x3e00008  jr          $ra
    ctx->pc = 0x276C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276C50u;
    // 0x276c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276c58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x276c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x276c5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x276c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x276c60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276c64: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x276C64u;
    {
        const bool branch_taken_0x276c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276c64) {
            ctx->pc = 0x276CACu;
            goto label_276cac;
        }
    }
    ctx->pc = 0x276C6Cu;
    // 0x276c6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x276c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x276c70: 0x24635d90  addiu       $v1, $v1, 0x5D90
    ctx->pc = 0x276c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23952));
    // 0x276c74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276c78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x276c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x276c7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x276c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c84: 0xc09d150  jal         func_274540
    ctx->pc = 0x276C84u;
    SET_GPR_U32(ctx, 31, 0x276C8Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x276C84u, 0x276C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276C8Cu;
label_276c8c:
    // 0x276c8c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x276c8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276c90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x276c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x276c94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x276c94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x276c98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276C98u;
    {
        const bool branch_taken_0x276c98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x276c98) {
            ctx->pc = 0x276CACu;
            goto label_276cac;
        }
    }
    ctx->pc = 0x276CA0u;
    // 0x276ca0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x276ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276ca4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x276CA4u;
    SET_GPR_U32(ctx, 31, 0x276CACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x276CA4u, 0x276CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CACu;
label_276cac:
    // 0x276cac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276cb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276cb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x276CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276CC0u;
}
