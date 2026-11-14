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

// Function: sub_002BFC20
// Address: 0x2bfc20 - 0x2bfd90
void sub_002BFC20_0x2bfc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFC20_0x2bfc20");
#endif

    switch (ctx->pc) {
        case 0x2bfc48u: goto label_2bfc48;
        case 0x2bfc90u: goto label_2bfc90;
        case 0x2bfcacu: goto label_2bfcac;
        case 0x2bfce0u: goto label_2bfce0;
        case 0x2bfd28u: goto label_2bfd28;
        case 0x2bfd60u: goto label_2bfd60;
        case 0x2bfd6cu: goto label_2bfd6c;
        default: break;
    }

    ctx->pc = 0x2bfc20u;

    // 0x2bfc20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bfc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bfc24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bfc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bfc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bfc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bfc2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bfc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bfc30: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2bfc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2bfc34: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2bfc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2bfc38: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2bfc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x2bfc3c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2bfc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfc40: 0xc05f1b8  jal         func_17C6E0
    ctx->pc = 0x2BFC40u;
    SET_GPR_U32(ctx, 31, 0x2BFC48u);
    ctx->pc = 0x17C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6E0u, 0x2BFC40u, 0x2BFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC48u;
label_2bfc48:
    // 0x2bfc48: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2bfc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfc4c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2bfc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bfc50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bfc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bfc54: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x2bfc54u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2bfc58: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFC58u;
    {
        const bool branch_taken_0x2bfc58 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2bfc58) {
            ctx->pc = 0x2BFC68u;
            goto label_2bfc68;
        }
    }
    ctx->pc = 0x2BFC60u;
    // 0x2bfc60: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2bfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2bfc64: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x2bfc64u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_2bfc68:
    // 0x2bfc68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfc6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2bfc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfc70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bfc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfc74: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bfc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bfc78: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2BFC78u;
    {
        const bool branch_taken_0x2bfc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bfc78) {
            ctx->pc = 0x2BFD3Cu;
            goto label_2bfd3c;
        }
    }
    ctx->pc = 0x2BFC80u;
    // 0x2bfc80: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x2bfc80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfc84: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2bfc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfc88: 0xc05f314  jal         func_17CC50
    ctx->pc = 0x2BFC88u;
    SET_GPR_U32(ctx, 31, 0x2BFC90u);
    ctx->pc = 0x17CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC50u, 0x2BFC88u, 0x2BFC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC90u;
label_2bfc90:
    // 0x2bfc90: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BFC90u;
    {
        const bool branch_taken_0x2bfc90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfc90) {
            ctx->pc = 0x2BFCC4u;
            goto label_2bfcc4;
        }
    }
    ctx->pc = 0x2BFC98u;
    // 0x2bfc98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bfc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfc9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bfc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfca0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2bfca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfca4: 0xc074514  jal         func_1D1450
    ctx->pc = 0x2BFCA4u;
    SET_GPR_U32(ctx, 31, 0x2BFCACu);
    ctx->pc = 0x1D1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1450u, 0x2BFCA4u, 0x2BFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCACu;
label_2bfcac:
    // 0x2bfcac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2bfcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfcb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2bfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bfcb4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bfcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bfcb8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2bfcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2bfcbc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2BFCBCu;
    {
        const bool branch_taken_0x2bfcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfcbc) {
            ctx->pc = 0x2BFD60u;
            goto label_2bfd60;
        }
    }
    ctx->pc = 0x2BFCC4u;
label_2bfcc4:
    // 0x2bfcc4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2bfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfcc8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfccc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2bfcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfcd0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2bfcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bfcd4: 0x2445fffc  addiu       $a1, $v0, -0x4
    ctx->pc = 0x2bfcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2bfcd8: 0xc074514  jal         func_1D1450
    ctx->pc = 0x2BFCD8u;
    SET_GPR_U32(ctx, 31, 0x2BFCE0u);
    ctx->pc = 0x1D1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1450u, 0x2BFCD8u, 0x2BFCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCE0u;
label_2bfce0:
    // 0x2bfce0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2bfce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfce4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2bfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bfce8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2bfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bfcec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2bfcecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2bfcf0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2bfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfcf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2bfcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfcf8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2bfcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2bfcfc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfd00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2bfd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfd04: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bfd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfd08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2bfd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bfd0c: 0xa3a00038  sb          $zero, 0x38($sp)
    ctx->pc = 0x2bfd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfd10: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2bfd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfd14: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x2bfd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2bfd18: 0x2446fffc  addiu       $a2, $v0, -0x4
    ctx->pc = 0x2bfd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2bfd1c: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2bfd1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2bfd20: 0xc0603bc  jal         func_180EF0
    ctx->pc = 0x2BFD20u;
    SET_GPR_U32(ctx, 31, 0x2BFD28u);
    ctx->pc = 0x180EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180EF0u, 0x2BFD20u, 0x2BFD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD28u;
label_2bfd28:
    // 0x2bfd28: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2bfd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfd2c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2bfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfd30: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2bfd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2bfd34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BFD34u;
    {
        const bool branch_taken_0x2bfd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd34) {
            ctx->pc = 0x2BFD60u;
            goto label_2bfd60;
        }
    }
    ctx->pc = 0x2BFD3Cu;
label_2bfd3c:
    // 0x2bfd3c: 0xa3a00034  sb          $zero, 0x34($sp)
    ctx->pc = 0x2bfd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfd40: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2bfd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfd44: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2bfd44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfd48: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2bfd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfd4c: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x2bfd4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2bfd50: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2bfd50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfd54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bfd54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd58: 0xc0602f4  jal         func_180BD0
    ctx->pc = 0x2BFD58u;
    SET_GPR_U32(ctx, 31, 0x2BFD60u);
    ctx->pc = 0x180BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180BD0u, 0x2BFD58u, 0x2BFD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD60u;
label_2bfd60:
    // 0x2bfd60: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2bfd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfd64: 0xc05f1b8  jal         func_17C6E0
    ctx->pc = 0x2BFD64u;
    SET_GPR_U32(ctx, 31, 0x2BFD6Cu);
    ctx->pc = 0x17C6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6E0u, 0x2BFD64u, 0x2BFD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD6Cu;
label_2bfd6c:
    // 0x2bfd6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2bfd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2bfd70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bfd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfd74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bfd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfd78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bfd78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfd7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfd80: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2bfd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bfd84: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFD8Cu;
    // 0x2bfd8c: 0x0  nop
    ctx->pc = 0x2bfd8cu;
    // NOP
    ctx->pc = 0x2bfd90u;
}
