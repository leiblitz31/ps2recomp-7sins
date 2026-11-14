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

// Function: sub_00148A40
// Address: 0x148a40 - 0x148b90
void sub_00148A40_0x148a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148A40_0x148a40");
#endif

    switch (ctx->pc) {
        case 0x148a68u: goto label_148a68;
        case 0x148a84u: goto label_148a84;
        case 0x148ab8u: goto label_148ab8;
        case 0x148ac4u: goto label_148ac4;
        default: break;
    }

    ctx->pc = 0x148a40u;

    // 0x148a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x148a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x148a44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x148a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x148a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x148a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148a50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x148a54: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x148a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x148a58: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x148a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a60: 0xc08d95c  jal         func_236570
    ctx->pc = 0x148A60u;
    SET_GPR_U32(ctx, 31, 0x148A68u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x148A60u, 0x148A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148A68u;
label_148a68:
    // 0x148a68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x148a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148a70: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x148a70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x148a74: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148a78: 0x8c70003c  lw          $s0, 0x3C($v1)
    ctx->pc = 0x148a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x148a7c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x148A7Cu;
    {
        const bool branch_taken_0x148a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a7c) {
            ctx->pc = 0x148AF0u;
            goto label_148af0;
        }
    }
    ctx->pc = 0x148A84u;
label_148a84:
    // 0x148a84: 0x2e010008  sltiu       $at, $s0, 0x8
    ctx->pc = 0x148a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x148a88: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x148A88u;
    {
        const bool branch_taken_0x148a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148a88) {
            ctx->pc = 0x148AE8u;
            goto label_148ae8;
        }
    }
    ctx->pc = 0x148A90u;
    // 0x148a90: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x148a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x148a94: 0x248482a0  addiu       $a0, $a0, -0x7D60
    ctx->pc = 0x148a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935200));
    // 0x148a98: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x148a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x148aa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148aa4: 0x600008  jr          $v1
    ctx->pc = 0x148AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148AACu: goto label_148aac;
            case 0x148AE8u: goto label_148ae8;
            case 0x148AECu: goto label_148aec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148AA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x148AACu;
label_148aac:
    // 0x148aac: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148ab0: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x148AB0u;
    SET_GPR_U32(ctx, 31, 0x148AB8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x148AB0u, 0x148AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148AB8u;
label_148ab8:
    // 0x148ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148abc: 0xc08d5d8  jal         func_235760
    ctx->pc = 0x148ABCu;
    SET_GPR_U32(ctx, 31, 0x148AC4u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x148ABCu, 0x148AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148AC4u;
label_148ac4:
    // 0x148ac4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x148ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x148ac8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x148ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x148acc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x148accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148ad0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x148ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148ad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x148ad8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x148AD8u;
    {
        const bool branch_taken_0x148ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x148ad8) {
            ctx->pc = 0x148AECu;
            goto label_148aec;
        }
    }
    ctx->pc = 0x148AE0u;
    // 0x148ae0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x148AE0u;
    {
        const bool branch_taken_0x148ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ae0) {
            ctx->pc = 0x148B1Cu;
            goto label_148b1c;
        }
    }
    ctx->pc = 0x148AE8u;
label_148ae8:
    // 0x148ae8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x148ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148aec:
    // 0x148aec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x148aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_148af0:
    // 0x148af0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x148af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x148af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148af8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x148AF8u;
    {
        const bool branch_taken_0x148af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x148af8) {
            ctx->pc = 0x148B14u;
            goto label_148b14;
        }
    }
    ctx->pc = 0x148B00u;
    // 0x148b00: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148b04: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x148b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x148b08: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x148b08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x148b0c: 0x1020ffdd  beqz        $at, . + 4 + (-0x23 << 2)
    ctx->pc = 0x148B0Cu;
    {
        const bool branch_taken_0x148b0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148b0c) {
            ctx->pc = 0x148A84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148a84;
        }
    }
    ctx->pc = 0x148B14u;
label_148b14:
    // 0x148b14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x148B14u;
    {
        const bool branch_taken_0x148b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148b14) {
            ctx->pc = 0x148B6Cu;
            goto label_148b6c;
        }
    }
    ctx->pc = 0x148B1Cu;
label_148b1c:
    // 0x148b1c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148b20: 0xac700034  sw          $s0, 0x34($v1)
    ctx->pc = 0x148b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
    // 0x148b24: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148b28: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x148b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x148b2c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148b30: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x148b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x148b34: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x148b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148b38: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148b3c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x148b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x148b40: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148b44: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x148b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x148b48: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148b4c: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x148b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x148b50: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x148b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x148b54: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x148B54u;
    {
        const bool branch_taken_0x148b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148b54) {
            ctx->pc = 0x148B6Cu;
            goto label_148b6c;
        }
    }
    ctx->pc = 0x148B5Cu;
    // 0x148b5c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148b60: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x148b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x148b64: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x148b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148b68: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x148b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_148b6c:
    // 0x148b6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x148b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148b7c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x148b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x148b80: 0x3e00008  jr          $ra
    ctx->pc = 0x148B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148B88u;
    // 0x148b88: 0x0  nop
    ctx->pc = 0x148b88u;
    // NOP
    // 0x148b8c: 0x0  nop
    ctx->pc = 0x148b8cu;
    // NOP
    ctx->pc = 0x148b90u;
}
