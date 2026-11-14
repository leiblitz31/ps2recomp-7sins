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

// Function: sub_0015E9B0
// Address: 0x15e9b0 - 0x15ecc0
void sub_0015E9B0_0x15e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E9B0_0x15e9b0");
#endif

    switch (ctx->pc) {
        case 0x15ea10u: goto label_15ea10;
        case 0x15ea6cu: goto label_15ea6c;
        case 0x15eaa4u: goto label_15eaa4;
        case 0x15eabcu: goto label_15eabc;
        case 0x15eae0u: goto label_15eae0;
        case 0x15eaf4u: goto label_15eaf4;
        case 0x15eb2cu: goto label_15eb2c;
        case 0x15eb64u: goto label_15eb64;
        case 0x15eb94u: goto label_15eb94;
        case 0x15ebc4u: goto label_15ebc4;
        case 0x15ec0cu: goto label_15ec0c;
        case 0x15ec50u: goto label_15ec50;
        case 0x15ec80u: goto label_15ec80;
        default: break;
    }

    ctx->pc = 0x15e9b0u;

    // 0x15e9b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15e9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15e9b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15e9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15e9b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15e9bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15e9c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e9c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e9c8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x15e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x15e9cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15e9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e9d0: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x15e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x15e9d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e9d8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x15E9D8u;
    {
        const bool branch_taken_0x15e9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9d8) {
            ctx->pc = 0x15EA44u;
            goto label_15ea44;
        }
    }
    ctx->pc = 0x15E9E0u;
    // 0x15e9e0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15e9e4: 0x8c6300e8  lw          $v1, 0xE8($v1)
    ctx->pc = 0x15e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x15e9e8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x15E9E8u;
    {
        const bool branch_taken_0x15e9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9e8) {
            ctx->pc = 0x15EA44u;
            goto label_15ea44;
        }
    }
    ctx->pc = 0x15E9F0u;
    // 0x15e9f0: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x15e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x15e9f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15e9f8: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x15e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x15e9fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15ea00: 0x8c4600e8  lw          $a2, 0xE8($v0)
    ctx->pc = 0x15ea00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x15ea04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ea04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea08: 0xc0aff64  jal         func_2BFD90
    ctx->pc = 0x15EA08u;
    SET_GPR_U32(ctx, 31, 0x15EA10u);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x15EA08u, 0x15EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA10u;
label_15ea10:
    // 0x15ea10: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15ea10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15ea14: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x15ea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ea18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ea18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ea1c: 0x0  nop
    ctx->pc = 0x15ea1cu;
    // NOP
    // 0x15ea20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15ea20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ea24: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x15EA24u;
    {
        const bool branch_taken_0x15ea24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ea24) {
            ctx->pc = 0x15EA3Cu;
            goto label_15ea3c;
        }
    }
    ctx->pc = 0x15EA2Cu;
    // 0x15ea2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ea2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ea30: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x15ea30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15ea34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15EA34u;
    {
        const bool branch_taken_0x15ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea34) {
            ctx->pc = 0x15EA40u;
            goto label_15ea40;
        }
    }
    ctx->pc = 0x15EA3Cu;
label_15ea3c:
    // 0x15ea3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15ea3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ea40:
    // 0x15ea40: 0x325300ff  andi        $s3, $s2, 0xFF
    ctx->pc = 0x15ea40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_15ea44:
    // 0x15ea44: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ea48: 0x8c640090  lw          $a0, 0x90($v1)
    ctx->pc = 0x15ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x15ea4c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x15ea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15ea50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15ea50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15ea54: 0x1460008e  bnez        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x15EA54u;
    {
        const bool branch_taken_0x15ea54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ea54) {
            ctx->pc = 0x15EC90u;
            goto label_15ec90;
        }
    }
    ctx->pc = 0x15EA5Cu;
    // 0x15ea5c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x15ea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x15ea60: 0x24c63370  addiu       $a2, $a2, 0x3370
    ctx->pc = 0x15ea60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13168));
    // 0x15ea64: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x15ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ea68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15ea6c:
    // 0x15ea6c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15ea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15ea70: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15ea74: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x15ea74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x15ea78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15ea7c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x15ea80: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x15ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x15ea84: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x15ea84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x15ea88: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15EA88u;
    {
        const bool branch_taken_0x15ea88 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x15ea88) {
            ctx->pc = 0x15EA6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ea6c;
        }
    }
    ctx->pc = 0x15EA90u;
    // 0x15ea90: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ea94: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x15ea98: 0x24a53310  addiu       $a1, $a1, 0x3310
    ctx->pc = 0x15ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13072));
    // 0x15ea9c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x15EA9Cu;
    SET_GPR_U32(ctx, 31, 0x15EAA4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15EA9Cu, 0x15EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EAA4u;
label_15eaa4:
    // 0x15eaa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15eaa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eaa8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15eaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15eaac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x15eab0: 0x24a53390  addiu       $a1, $a1, 0x3390
    ctx->pc = 0x15eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13200));
    // 0x15eab4: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x15EAB4u;
    SET_GPR_U32(ctx, 31, 0x15EABCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15EAB4u, 0x15EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EABCu;
label_15eabc:
    // 0x15eabc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15eabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eac0: 0x8f82bab0  lw          $v0, -0x4550($gp)
    ctx->pc = 0x15eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949552)));
    // 0x15eac4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15EAC4u;
    {
        const bool branch_taken_0x15eac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eac4) {
            ctx->pc = 0x15EAF4u;
            goto label_15eaf4;
        }
    }
    ctx->pc = 0x15EACCu;
    // 0x15eacc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ead0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ead4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ead4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ead8: 0xc08c910  jal         func_232440
    ctx->pc = 0x15EAD8u;
    SET_GPR_U32(ctx, 31, 0x15EAE0u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x15EAD8u, 0x15EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EAE0u;
label_15eae0:
    // 0x15eae0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15eae4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15eae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15eae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eaec: 0xc08c910  jal         func_232440
    ctx->pc = 0x15EAECu;
    SET_GPR_U32(ctx, 31, 0x15EAF4u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x15EAECu, 0x15EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EAF4u;
label_15eaf4:
    // 0x15eaf4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15eaf8: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x15eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x15eafc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x15EAFCu;
    {
        const bool branch_taken_0x15eafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eafc) {
            ctx->pc = 0x15EBA4u;
            goto label_15eba4;
        }
    }
    ctx->pc = 0x15EB04u;
    // 0x15eb04: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x15EB04u;
    {
        const bool branch_taken_0x15eb04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb04) {
            ctx->pc = 0x15EBA4u;
            goto label_15eba4;
        }
    }
    ctx->pc = 0x15EB0Cu;
    // 0x15eb0c: 0x8f82bab0  lw          $v0, -0x4550($gp)
    ctx->pc = 0x15eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949552)));
    // 0x15eb10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15EB10u;
    {
        const bool branch_taken_0x15eb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb10) {
            ctx->pc = 0x15EB34u;
            goto label_15eb34;
        }
    }
    ctx->pc = 0x15EB18u;
    // 0x15eb18: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15eb1c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15eb20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15eb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb24: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x15EB24u;
    SET_GPR_U32(ctx, 31, 0x15EB2Cu);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15EB24u, 0x15EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB2Cu;
label_15eb2c:
    // 0x15eb2c: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x15EB2Cu;
    {
        const bool branch_taken_0x15eb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eb2c) {
            ctx->pc = 0x15EC94u;
            goto label_15ec94;
        }
    }
    ctx->pc = 0x15EB34u;
label_15eb34:
    // 0x15eb34: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15eb38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15eb38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15eb3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15eb40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15eb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15eb44: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15eb48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15eb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb4c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15eb50: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x15eb50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15eb54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15eb54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15eb58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb5c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15EB5Cu;
    SET_GPR_U32(ctx, 31, 0x15EB64u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15EB5Cu, 0x15EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB64u;
label_15eb64:
    // 0x15eb64: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15eb68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15eb68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15eb6c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15eb70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15eb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15eb74: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15eb78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15eb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb7c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15eb7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15eb80: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x15eb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15eb84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15eb84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15eb88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eb8c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15EB8Cu;
    SET_GPR_U32(ctx, 31, 0x15EB94u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15EB8Cu, 0x15EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB94u;
label_15eb94:
    // 0x15eb94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eb98: 0xaf83bab0  sw          $v1, -0x4550($gp)
    ctx->pc = 0x15eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949552), GPR_U32(ctx, 3));
    // 0x15eb9c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x15EB9Cu;
    {
        const bool branch_taken_0x15eb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eb9c) {
            ctx->pc = 0x15EC94u;
            goto label_15ec94;
        }
    }
    ctx->pc = 0x15EBA4u;
label_15eba4:
    // 0x15eba4: 0x8f82bab0  lw          $v0, -0x4550($gp)
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949552)));
    // 0x15eba8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15EBA8u;
    {
        const bool branch_taken_0x15eba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eba8) {
            ctx->pc = 0x15EBCCu;
            goto label_15ebcc;
        }
    }
    ctx->pc = 0x15EBB0u;
    // 0x15ebb0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ebb4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ebb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ebb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ebbc: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x15EBBCu;
    SET_GPR_U32(ctx, 31, 0x15EBC4u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15EBBCu, 0x15EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBC4u;
label_15ebc4:
    // 0x15ebc4: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x15EBC4u;
    {
        const bool branch_taken_0x15ebc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ebc4) {
            ctx->pc = 0x15EC94u;
            goto label_15ec94;
        }
    }
    ctx->pc = 0x15EBCCu;
label_15ebcc:
    // 0x15ebcc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ebd0: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x15ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x15ebd4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15EBD4u;
    {
        const bool branch_taken_0x15ebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ebd4) {
            ctx->pc = 0x15EC14u;
            goto label_15ec14;
        }
    }
    ctx->pc = 0x15EBDCu;
    // 0x15ebdc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ebe0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ebe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ebe4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15ebe8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15ebe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ebec: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15ebf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ebf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ebf4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15ebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15ebf8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x15ebf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ebfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ebfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ec00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec04: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15EC04u;
    SET_GPR_U32(ctx, 31, 0x15EC0Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15EC04u, 0x15EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC0Cu;
label_15ec0c:
    // 0x15ec0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15EC0Cu;
    {
        const bool branch_taken_0x15ec0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec0c) {
            ctx->pc = 0x15EC50u;
            goto label_15ec50;
        }
    }
    ctx->pc = 0x15EC14u;
label_15ec14:
    // 0x15ec14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ec14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ec18: 0x0  nop
    ctx->pc = 0x15ec18u;
    // NOP
    // 0x15ec1c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15ec1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15ec20: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ec24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ec24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ec28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15ec2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15ec2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ec30: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15ec34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ec34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15ec38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ec3c: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x15ec3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15ec40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ec40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ec44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec48: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15EC48u;
    SET_GPR_U32(ctx, 31, 0x15EC50u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15EC48u, 0x15EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC50u;
label_15ec50:
    // 0x15ec50: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ec54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ec54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ec58: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15ec5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15ec5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ec60: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15ec64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15ec64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec68: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15ec68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15ec6c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x15ec6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ec70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ec70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ec74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec78: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15EC78u;
    SET_GPR_U32(ctx, 31, 0x15EC80u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15EC78u, 0x15EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC80u;
label_15ec80:
    // 0x15ec80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ec84: 0xaf83bab0  sw          $v1, -0x4550($gp)
    ctx->pc = 0x15ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949552), GPR_U32(ctx, 3));
    // 0x15ec88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15EC88u;
    {
        const bool branch_taken_0x15ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec88) {
            ctx->pc = 0x15EC94u;
            goto label_15ec94;
        }
    }
    ctx->pc = 0x15EC90u;
label_15ec90:
    // 0x15ec90: 0xaf80bab0  sw          $zero, -0x4550($gp)
    ctx->pc = 0x15ec90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949552), GPR_U32(ctx, 0));
label_15ec94:
    // 0x15ec94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15ec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ec98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15ec98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ec9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ec9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15eca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15eca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15eca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15eca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eca8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x15eca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15ecac: 0x3e00008  jr          $ra
    ctx->pc = 0x15ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ECB4u;
    // 0x15ecb4: 0x0  nop
    ctx->pc = 0x15ecb4u;
    // NOP
    // 0x15ecb8: 0x0  nop
    ctx->pc = 0x15ecb8u;
    // NOP
    // 0x15ecbc: 0x0  nop
    ctx->pc = 0x15ecbcu;
    // NOP
    ctx->pc = 0x15ecc0u;
}
