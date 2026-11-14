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

// Function: sub_00259E80
// Address: 0x259e80 - 0x259ff0
void sub_00259E80_0x259e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259E80_0x259e80");
#endif

    switch (ctx->pc) {
        case 0x259ea4u: goto label_259ea4;
        case 0x259ebcu: goto label_259ebc;
        case 0x259ed0u: goto label_259ed0;
        case 0x259ee8u: goto label_259ee8;
        case 0x259ef8u: goto label_259ef8;
        case 0x259f0cu: goto label_259f0c;
        case 0x259f24u: goto label_259f24;
        case 0x259f64u: goto label_259f64;
        case 0x259f84u: goto label_259f84;
        case 0x259fccu: goto label_259fcc;
        default: break;
    }

    ctx->pc = 0x259e80u;

    // 0x259e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x259e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x259e84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x259e88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x259e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x259e8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x259e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x259e90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x259e90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x259e94: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x259e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x259e98: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x259e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259e9c: 0xc05ce40  jal         func_173900
    ctx->pc = 0x259E9Cu;
    SET_GPR_U32(ctx, 31, 0x259EA4u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x259E9Cu, 0x259EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EA4u;
label_259ea4:
    // 0x259ea4: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x259EA4u;
    {
        const bool branch_taken_0x259ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ea4) {
            ctx->pc = 0x259FCCu;
            goto label_259fcc;
        }
    }
    ctx->pc = 0x259EACu;
    // 0x259eac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x259eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259eb0: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x259eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x259eb4: 0xc098024  jal         func_260090
    ctx->pc = 0x259EB4u;
    SET_GPR_U32(ctx, 31, 0x259EBCu);
    ctx->pc = 0x260090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260090u, 0x259EB4u, 0x259EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EBCu;
label_259ebc:
    // 0x259ebc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x259ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259ec0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x259ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x259ec4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x259ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x259ec8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x259EC8u;
    SET_GPR_U32(ctx, 31, 0x259ED0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x259EC8u, 0x259ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259ED0u;
label_259ed0:
    // 0x259ed0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x259ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ed4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259ED4u;
    {
        const bool branch_taken_0x259ed4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x259ed4) {
            ctx->pc = 0x259EE8u;
            goto label_259ee8;
        }
    }
    ctx->pc = 0x259EDCu;
    // 0x259edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x259edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259ee0: 0xc091084  jal         func_244210
    ctx->pc = 0x259EE0u;
    SET_GPR_U32(ctx, 31, 0x259EE8u);
    ctx->pc = 0x244210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244210u, 0x259EE0u, 0x259EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EE8u;
label_259ee8:
    // 0x259ee8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x259ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259eec: 0x8c44012c  lw          $a0, 0x12C($v0)
    ctx->pc = 0x259eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x259ef0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x259EF0u;
    SET_GPR_U32(ctx, 31, 0x259EF8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x259EF0u, 0x259EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259EF8u;
label_259ef8:
    // 0x259ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f00: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x259f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x259f04: 0xc0967fc  jal         func_259FF0
    ctx->pc = 0x259F04u;
    SET_GPR_U32(ctx, 31, 0x259F0Cu);
    ctx->pc = 0x259FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259FF0u, 0x259F04u, 0x259F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F0Cu;
label_259f0c:
    // 0x259f0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x259f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259f10: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x259f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x259f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x259f1c: 0xc0967fc  jal         func_259FF0
    ctx->pc = 0x259F1Cu;
    SET_GPR_U32(ctx, 31, 0x259F24u);
    ctx->pc = 0x259FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259FF0u, 0x259F1Cu, 0x259F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F24u;
label_259f24:
    // 0x259f24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x259f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259f28: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x259f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x259f2c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x259f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x259f30: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x259F30u;
    {
        const bool branch_taken_0x259f30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x259f30) {
            ctx->pc = 0x259F8Cu;
            goto label_259f8c;
        }
    }
    ctx->pc = 0x259F38u;
    // 0x259f38: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x259f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259f3c: 0x90630113  lbu         $v1, 0x113($v1)
    ctx->pc = 0x259f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 275)));
    // 0x259f40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x259f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259f44: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x259F44u;
    {
        const bool branch_taken_0x259f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259f44) {
            ctx->pc = 0x259FCCu;
            goto label_259fcc;
        }
    }
    ctx->pc = 0x259F4Cu;
    // 0x259f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x259f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259f50: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x259f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259f54: 0xa0430113  sb          $v1, 0x113($v0)
    ctx->pc = 0x259f54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 275), (uint8_t)GPR_U32(ctx, 3));
    // 0x259f58: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x259f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259f5c: 0xc096da0  jal         func_25B680
    ctx->pc = 0x259F5Cu;
    SET_GPR_U32(ctx, 31, 0x259F64u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x259F5Cu, 0x259F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F64u;
label_259f64:
    // 0x259f64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x259f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259f68: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x259f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x259f6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x259f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x259f70: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x259f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x259f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x259f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259f78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x259f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259f7c: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x259F7Cu;
    SET_GPR_U32(ctx, 31, 0x259F84u);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x259F7Cu, 0x259F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259F84u;
label_259f84:
    // 0x259f84: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x259F84u;
    {
        const bool branch_taken_0x259f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259f84) {
            ctx->pc = 0x259FCCu;
            goto label_259fcc;
        }
    }
    ctx->pc = 0x259F8Cu;
label_259f8c:
    // 0x259f8c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x259f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259f90: 0x90630113  lbu         $v1, 0x113($v1)
    ctx->pc = 0x259f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 275)));
    // 0x259f94: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x259f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x259f98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x259f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259f9c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x259F9Cu;
    {
        const bool branch_taken_0x259f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x259f9c) {
            ctx->pc = 0x259FCCu;
            goto label_259fcc;
        }
    }
    ctx->pc = 0x259FA4u;
    // 0x259fa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x259fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259fa8: 0xa0400113  sb          $zero, 0x113($v0)
    ctx->pc = 0x259fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 275), (uint8_t)GPR_U32(ctx, 0));
    // 0x259fac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x259facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259fb0: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x259fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x259fb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x259fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259fb8: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x259fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x259fbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x259fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259fc0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x259fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259fc4: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x259FC4u;
    SET_GPR_U32(ctx, 31, 0x259FCCu);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x259FC4u, 0x259FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259FCCu;
label_259fcc:
    // 0x259fcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x259fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259fd0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x259fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259fd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x259fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259fd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x259fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x259fdc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x259fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x259fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x259FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259FE8u;
    // 0x259fe8: 0x0  nop
    ctx->pc = 0x259fe8u;
    // NOP
    // 0x259fec: 0x0  nop
    ctx->pc = 0x259fecu;
    // NOP
    ctx->pc = 0x259ff0u;
}
