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

// Function: sub_002DFDA0
// Address: 0x2dfda0 - 0x2dff40
void sub_002DFDA0_0x2dfda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFDA0_0x2dfda0");
#endif

    switch (ctx->pc) {
        case 0x2dfdd4u: goto label_2dfdd4;
        case 0x2dfde0u: goto label_2dfde0;
        case 0x2dfe0cu: goto label_2dfe0c;
        case 0x2dfe18u: goto label_2dfe18;
        case 0x2dfe30u: goto label_2dfe30;
        case 0x2dfe4cu: goto label_2dfe4c;
        case 0x2dfe60u: goto label_2dfe60;
        case 0x2dfe70u: goto label_2dfe70;
        case 0x2dfe88u: goto label_2dfe88;
        case 0x2dff1cu: goto label_2dff1c;
        default: break;
    }

    ctx->pc = 0x2dfda0u;

    // 0x2dfda0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dfda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dfda4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dfda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dfda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dfda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dfdac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dfdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dfdb0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2dfdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2dfdb4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2dfdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2dfdb8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2dfdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x2dfdbc: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x2dfdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x2dfdc0: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x2dfdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x2dfdc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2dfdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfdc8: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2dfdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2dfdcc: 0xc0b7f04  jal         func_2DFC10
    ctx->pc = 0x2DFDCCu;
    SET_GPR_U32(ctx, 31, 0x2DFDD4u);
    ctx->pc = 0x2DFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFC10u, 0x2DFDCCu, 0x2DFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDD4u;
label_2dfdd4:
    // 0x2dfdd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdd8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2DFDD8u;
    {
        const bool branch_taken_0x2dfdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfdd8) {
            ctx->pc = 0x2DFE3Cu;
            goto label_2dfe3c;
        }
    }
    ctx->pc = 0x2DFDE0u;
label_2dfde0:
    // 0x2dfde0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dfde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfde4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2dfde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2dfde8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2dfde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfdec: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DFDECu;
    {
        const bool branch_taken_0x2dfdec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dfdec) {
            ctx->pc = 0x2DFE38u;
            goto label_2dfe38;
        }
    }
    ctx->pc = 0x2DFDF4u;
    // 0x2dfdf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dfdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfdf8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DFDF8u;
    {
        const bool branch_taken_0x2dfdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfdf8) {
            ctx->pc = 0x2DFE1Cu;
            goto label_2dfe1c;
        }
    }
    ctx->pc = 0x2DFE00u;
    // 0x2dfe00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dfe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfe04: 0xc0b7ef8  jal         func_2DFBE0
    ctx->pc = 0x2DFE04u;
    SET_GPR_U32(ctx, 31, 0x2DFE0Cu);
    ctx->pc = 0x2DFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBE0u, 0x2DFE04u, 0x2DFE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE0Cu;
label_2dfe0c:
    // 0x2dfe0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2dfe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfe10: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2DFE10u;
    SET_GPR_U32(ctx, 31, 0x2DFE18u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2DFE10u, 0x2DFE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE18u;
label_2dfe18:
    // 0x2dfe18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2dfe18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2dfe1c:
    // 0x2dfe1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2dfe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfe20: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2dfe20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2dfe24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dfe24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe28: 0xc0b80b0  jal         func_2E02C0
    ctx->pc = 0x2DFE28u;
    SET_GPR_U32(ctx, 31, 0x2DFE30u);
    ctx->pc = 0x2E02C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E02C0u, 0x2DFE28u, 0x2DFE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE30u;
label_2dfe30:
    // 0x2dfe30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DFE30u;
    {
        const bool branch_taken_0x2dfe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfe30) {
            ctx->pc = 0x2DFE54u;
            goto label_2dfe54;
        }
    }
    ctx->pc = 0x2DFE38u;
label_2dfe38:
    // 0x2dfe38: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2dfe38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2dfe3c:
    // 0x2dfe3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2dfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfe40: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2dfe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2dfe44: 0xc0b7ef0  jal         func_2DFBC0
    ctx->pc = 0x2DFE44u;
    SET_GPR_U32(ctx, 31, 0x2DFE4Cu);
    ctx->pc = 0x2DFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBC0u, 0x2DFE44u, 0x2DFE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE4Cu;
label_2dfe4c:
    // 0x2dfe4c: 0x1602ffe4  bne         $s0, $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2DFE4Cu;
    {
        const bool branch_taken_0x2dfe4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dfe4c) {
            ctx->pc = 0x2DFDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dfde0;
        }
    }
    ctx->pc = 0x2DFE54u;
label_2dfe54:
    // 0x2dfe54: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2dfe54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dfe58: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2DFE58u;
    SET_GPR_U32(ctx, 31, 0x2DFE60u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2DFE58u, 0x2DFE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE60u;
label_2dfe60:
    // 0x2dfe60: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2dfe60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2dfe64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dfe64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe68: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2DFE68u;
    SET_GPR_U32(ctx, 31, 0x2DFE70u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2DFE68u, 0x2DFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE70u;
label_2dfe70:
    // 0x2dfe70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dfe70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe74: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFE74u;
    {
        const bool branch_taken_0x2dfe74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfe74) {
            ctx->pc = 0x2DFE8Cu;
            goto label_2dfe8c;
        }
    }
    ctx->pc = 0x2DFE7Cu;
    // 0x2dfe7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfe80: 0xc0b7b8c  jal         func_2DEE30
    ctx->pc = 0x2DFE80u;
    SET_GPR_U32(ctx, 31, 0x2DFE88u);
    ctx->pc = 0x2DEE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEE30u, 0x2DFE80u, 0x2DFE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE88u;
label_2dfe88:
    // 0x2dfe88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dfe88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfe8c:
    // 0x2dfe8c: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x2dfe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
    // 0x2dfe90: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2dfe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfe94: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2dfe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2dfe98: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2dfe98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2dfe9c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2dfe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dfea0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2dfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2dfea4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2dfea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2dfea8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2dfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dfeac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dfeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfeb0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2dfeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2dfeb4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2dfeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2dfeb8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2dfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dfebc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2dfebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfec0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2dfec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2dfec4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2dfec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2dfec8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2dfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dfecc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dfeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfed0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2dfed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2dfed4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2dfed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2dfed8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2dfed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dfedc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dfedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfee0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2dfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2dfee4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2dfee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2dfee8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2dfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dfeec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2dfeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dfef0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2dfef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2dfef4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2dfef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2dfef8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2dfef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dfefc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dfefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dff00: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2dff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2dff04: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2dff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2dff08: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2dff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dff0c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x2dff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2dff10: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2dff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2dff14: 0xc0b7fd0  jal         func_2DFF40
    ctx->pc = 0x2DFF14u;
    SET_GPR_U32(ctx, 31, 0x2DFF1Cu);
    ctx->pc = 0x2DFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF40u, 0x2DFF14u, 0x2DFF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF1Cu;
label_2dff1c:
    // 0x2dff1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dff1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dff20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dff20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dff24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dff24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dff28: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2dff28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2dff2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFF34u;
    // 0x2dff34: 0x0  nop
    ctx->pc = 0x2dff34u;
    // NOP
    // 0x2dff38: 0x0  nop
    ctx->pc = 0x2dff38u;
    // NOP
    // 0x2dff3c: 0x0  nop
    ctx->pc = 0x2dff3cu;
    // NOP
    ctx->pc = 0x2dff40u;
}
