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

// Function: sub_001DDCB0
// Address: 0x1ddcb0 - 0x1dde20
void sub_001DDCB0_0x1ddcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDCB0_0x1ddcb0");
#endif

    switch (ctx->pc) {
        case 0x1ddd18u: goto label_1ddd18;
        case 0x1ddd24u: goto label_1ddd24;
        default: break;
    }

    ctx->pc = 0x1ddcb0u;

    // 0x1ddcb0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ddcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ddcb4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ddcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ddcb8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ddcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ddcbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ddcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ddcc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ddcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ddcc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ddcc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ddcc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ddcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ddccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ddcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ddcd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ddcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ddcd4: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1ddcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1ddcd8: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x1ddcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x1ddcdc: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x1ddcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x1ddce0: 0xa3a700b0  sb          $a3, 0xB0($sp)
    ctx->pc = 0x1ddce0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ddce4: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x1ddce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ddce8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDCE8u;
    {
        const bool branch_taken_0x1ddce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddce8) {
            ctx->pc = 0x1DDCFCu;
            goto label_1ddcfc;
        }
    }
    ctx->pc = 0x1DDCF0u;
    // 0x1ddcf0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1ddcf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddcf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDCF4u;
    {
        const bool branch_taken_0x1ddcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddcf4) {
            ctx->pc = 0x1DDD00u;
            goto label_1ddd00;
        }
    }
    ctx->pc = 0x1DDCFCu;
label_1ddcfc:
    // 0x1ddcfc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ddcfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ddd00:
    // 0x1ddd00: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x1ddd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1ddd04: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1ddd04u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddd08: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1ddd08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ddd0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ddd0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd10: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1DDD10u;
    {
        const bool branch_taken_0x1ddd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd10) {
            ctx->pc = 0x1DDDE0u;
            goto label_1ddde0;
        }
    }
    ctx->pc = 0x1DDD18u;
label_1ddd18:
    // 0x1ddd18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ddd18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd1c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1DDD1Cu;
    {
        const bool branch_taken_0x1ddd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd1c) {
            ctx->pc = 0x1DDDD0u;
            goto label_1dddd0;
        }
    }
    ctx->pc = 0x1DDD24u;
label_1ddd24:
    // 0x1ddd24: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ddd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ddd28: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1ddd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ddd2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ddd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddd30: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x1ddd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1ddd34: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x1ddd34u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddd38: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ddd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ddd3c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1ddd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1ddd40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ddd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddd44: 0x101042  srl         $v0, $s0, 1
    ctx->pc = 0x1ddd44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1ddd48: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x1ddd48u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddd4c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1ddd4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1ddd50: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1DDD50u;
    {
        const bool branch_taken_0x1ddd50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd50) {
            ctx->pc = 0x1DDDCCu;
            goto label_1dddcc;
        }
    }
    ctx->pc = 0x1DDD58u;
    // 0x1ddd58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ddd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ddd5c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ddd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ddd60: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1ddd60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddd64: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DDD64u;
    {
        const bool branch_taken_0x1ddd64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd64) {
            ctx->pc = 0x1DDDCCu;
            goto label_1dddcc;
        }
    }
    ctx->pc = 0x1DDD6Cu;
    // 0x1ddd6c: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1ddd6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1ddd70: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DDD70u;
    {
        const bool branch_taken_0x1ddd70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd70) {
            ctx->pc = 0x1DDDCCu;
            goto label_1dddcc;
        }
    }
    ctx->pc = 0x1DDD78u;
    // 0x1ddd78: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ddd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ddd7c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1ddd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ddd80: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x1ddd80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddd84: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDD84u;
    {
        const bool branch_taken_0x1ddd84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd84) {
            ctx->pc = 0x1DDDCCu;
            goto label_1dddcc;
        }
    }
    ctx->pc = 0x1DDD8Cu;
    // 0x1ddd8c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ddd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ddd90: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1ddd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1ddd94: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1ddd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ddd98: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ddd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ddd9c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ddd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ddda0: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x1ddda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ddda4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ddda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddda8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1ddda8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dddac: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1dddacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dddb0: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x1dddb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1dddb4: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x1dddb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1dddb8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DDDB8u;
    {
        const bool branch_taken_0x1dddb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dddb8) {
            ctx->pc = 0x1DDDCCu;
            goto label_1dddcc;
        }
    }
    ctx->pc = 0x1DDDC0u;
    // 0x1dddc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dddc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DDDC4u;
    {
        const bool branch_taken_0x1dddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dddc4) {
            ctx->pc = 0x1DDDF0u;
            goto label_1dddf0;
        }
    }
    ctx->pc = 0x1DDDCCu;
label_1dddcc:
    // 0x1dddcc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dddccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1dddd0:
    // 0x1dddd0: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1dddd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1dddd4: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1DDDD4u;
    {
        const bool branch_taken_0x1dddd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dddd4) {
            ctx->pc = 0x1DDD24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddd24;
        }
    }
    ctx->pc = 0x1DDDDCu;
    // 0x1ddddc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ddddcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ddde0:
    // 0x1ddde0: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x1ddde0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ddde4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1DDDE4u;
    {
        const bool branch_taken_0x1ddde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddde4) {
            ctx->pc = 0x1DDD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddd18;
        }
    }
    ctx->pc = 0x1DDDECu;
    // 0x1dddec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dddecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dddf0:
    // 0x1dddf0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1dddf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dddf4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dddf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dddf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dddf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dddfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dddfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dde00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dde00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dde04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dde04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dde08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dde08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dde0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dde0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dde10: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1dde10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dde14: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDE1Cu;
    // 0x1dde1c: 0x0  nop
    ctx->pc = 0x1dde1cu;
    // NOP
    ctx->pc = 0x1dde20u;
}
