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

// Function: sub_001BCCC0
// Address: 0x1bccc0 - 0x1bce20
void sub_001BCCC0_0x1bccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCCC0_0x1bccc0");
#endif

    switch (ctx->pc) {
        case 0x1bcd00u: goto label_1bcd00;
        case 0x1bcd10u: goto label_1bcd10;
        case 0x1bcd1cu: goto label_1bcd1c;
        case 0x1bcd50u: goto label_1bcd50;
        case 0x1bcd70u: goto label_1bcd70;
        case 0x1bcd84u: goto label_1bcd84;
        case 0x1bcda4u: goto label_1bcda4;
        case 0x1bcdb8u: goto label_1bcdb8;
        case 0x1bcdccu: goto label_1bcdcc;
        case 0x1bcde4u: goto label_1bcde4;
        default: break;
    }

    ctx->pc = 0x1bccc0u;

    // 0x1bccc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1bccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1bccc4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1bccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1bccc8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bcccc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bccd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bccd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bccd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bccdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bcce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bcce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bcce4: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1bcce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1bcce8: 0xa3a500a0  sb          $a1, 0xA0($sp)
    ctx->pc = 0x1bcce8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bccec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bccecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccf0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bccf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bccf4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bccf8: 0xc06f510  jal         func_1BD440
    ctx->pc = 0x1BCCF8u;
    SET_GPR_U32(ctx, 31, 0x1BCD00u);
    ctx->pc = 0x1BD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD440u, 0x1BCCF8u, 0x1BCD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD00u;
label_1bcd00:
    // 0x1bcd00: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1bcd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bcd04: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bcd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bcd08: 0xc06ef1c  jal         func_1BBC70
    ctx->pc = 0x1BCD08u;
    SET_GPR_U32(ctx, 31, 0x1BCD10u);
    ctx->pc = 0x1BBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBC70u, 0x1BCD08u, 0x1BCD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD10u;
label_1bcd10:
    // 0x1bcd10: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1bcd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1bcd14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BCD14u;
    {
        const bool branch_taken_0x1bcd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd14) {
            ctx->pc = 0x1BCD5Cu;
            goto label_1bcd5c;
        }
    }
    ctx->pc = 0x1BCD1Cu;
label_1bcd1c:
    // 0x1bcd1c: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1bcd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1bcd20: 0x80420003  lb          $v0, 0x3($v0)
    ctx->pc = 0x1bcd20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1bcd24: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1bcd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bcd28: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bcd28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1bcd2c: 0x83a200a0  lb          $v0, 0xA0($sp)
    ctx->pc = 0x1bcd2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bcd30: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1bcd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1bcd34: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1bcd34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1bcd38: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCD38u;
    {
        const bool branch_taken_0x1bcd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcd38) {
            ctx->pc = 0x1BCD50u;
            goto label_1bcd50;
        }
    }
    ctx->pc = 0x1BCD40u;
    // 0x1bcd40: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bcd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bcd44: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x1bcd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1bcd48: 0xc06f440  jal         func_1BD100
    ctx->pc = 0x1BCD48u;
    SET_GPR_U32(ctx, 31, 0x1BCD50u);
    ctx->pc = 0x1BD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD100u, 0x1BCD48u, 0x1BCD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD50u;
label_1bcd50:
    // 0x1bcd50: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1bcd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1bcd54: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x1bcd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1bcd58: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1bcd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_1bcd5c:
    // 0x1bcd5c: 0x8fb6008c  lw          $s6, 0x8C($sp)
    ctx->pc = 0x1bcd5cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1bcd60: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1bcd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bcd64: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1bcd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1bcd68: 0xc06f438  jal         func_1BD0E0
    ctx->pc = 0x1BCD68u;
    SET_GPR_U32(ctx, 31, 0x1BCD70u);
    ctx->pc = 0x1BD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD0E0u, 0x1BCD68u, 0x1BCD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD70u;
label_1bcd70:
    // 0x1bcd70: 0x16c2ffea  bne         $s6, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1BCD70u;
    {
        const bool branch_taken_0x1bcd70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bcd70) {
            ctx->pc = 0x1BCD1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcd1c;
        }
    }
    ctx->pc = 0x1BCD78u;
    // 0x1bcd78: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bcd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bcd7c: 0xc06f428  jal         func_1BD0A0
    ctx->pc = 0x1BCD7Cu;
    SET_GPR_U32(ctx, 31, 0x1BCD84u);
    ctx->pc = 0x1BD0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD0A0u, 0x1BCD7Cu, 0x1BCD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD84u;
label_1bcd84:
    // 0x1bcd84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bcd84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd88: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCD88u;
    {
        const bool branch_taken_0x1bcd88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd88) {
            ctx->pc = 0x1BCDB0u;
            goto label_1bcdb0;
        }
    }
    ctx->pc = 0x1BCD90u;
    // 0x1bcd90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bcd90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bcd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bcd98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1bcd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bcd9c: 0xc06f3a0  jal         func_1BCE80
    ctx->pc = 0x1BCD9Cu;
    SET_GPR_U32(ctx, 31, 0x1BCDA4u);
    ctx->pc = 0x1BCE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCE80u, 0x1BCD9Cu, 0x1BCDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDA4u;
label_1bcda4:
    // 0x1bcda4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1bcda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcda8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BCDA8u;
    {
        const bool branch_taken_0x1bcda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcda8) {
            ctx->pc = 0x1BCDE8u;
            goto label_1bcde8;
        }
    }
    ctx->pc = 0x1BCDB0u;
label_1bcdb0:
    // 0x1bcdb0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1BCDB0u;
    SET_GPR_U32(ctx, 31, 0x1BCDB8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1BCDB0u, 0x1BCDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDB8u;
label_1bcdb8:
    // 0x1bcdb8: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x1bcdb8u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bcdbc: 0x2810  mfhi        $a1
    ctx->pc = 0x1bcdbcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1bcdc0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bcdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bcdc4: 0xc06f388  jal         func_1BCE20
    ctx->pc = 0x1BCDC4u;
    SET_GPR_U32(ctx, 31, 0x1BCDCCu);
    ctx->pc = 0x1BCE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCE20u, 0x1BCDC4u, 0x1BCDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDCCu;
label_1bcdcc:
    // 0x1bcdcc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1bcdccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcdd0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1bcdd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1bcdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1bcdd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1bcdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bcddc: 0xc06f3a0  jal         func_1BCE80
    ctx->pc = 0x1BCDDCu;
    SET_GPR_U32(ctx, 31, 0x1BCDE4u);
    ctx->pc = 0x1BCE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCE80u, 0x1BCDDCu, 0x1BCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDE4u;
label_1bcde4:
    // 0x1bcde4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1bcde4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcde8:
    // 0x1bcde8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bcde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bcdec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bcdecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bcdf0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bcdf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bcdf4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bcdf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bcdf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bcdf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bcdfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bcdfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bce00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bce00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bce04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bce04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bce08: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1bce0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCE14u;
    // 0x1bce14: 0x0  nop
    ctx->pc = 0x1bce14u;
    // NOP
    // 0x1bce18: 0x0  nop
    ctx->pc = 0x1bce18u;
    // NOP
    // 0x1bce1c: 0x0  nop
    ctx->pc = 0x1bce1cu;
    // NOP
    ctx->pc = 0x1bce20u;
}
