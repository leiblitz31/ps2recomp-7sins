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

// Function: sub_0024E940
// Address: 0x24e940 - 0x24ecc0
void sub_0024E940_0x24e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E940_0x24e940");
#endif

    switch (ctx->pc) {
        case 0x24e9a4u: goto label_24e9a4;
        case 0x24e9b0u: goto label_24e9b0;
        case 0x24e9c4u: goto label_24e9c4;
        case 0x24ea04u: goto label_24ea04;
        case 0x24ea14u: goto label_24ea14;
        case 0x24ea28u: goto label_24ea28;
        case 0x24ea3cu: goto label_24ea3c;
        case 0x24ea5cu: goto label_24ea5c;
        case 0x24ea68u: goto label_24ea68;
        case 0x24ea84u: goto label_24ea84;
        case 0x24ea9cu: goto label_24ea9c;
        case 0x24eab4u: goto label_24eab4;
        case 0x24eac4u: goto label_24eac4;
        case 0x24ead4u: goto label_24ead4;
        case 0x24eae0u: goto label_24eae0;
        case 0x24eaf0u: goto label_24eaf0;
        case 0x24eb00u: goto label_24eb00;
        case 0x24eb0cu: goto label_24eb0c;
        case 0x24eb1cu: goto label_24eb1c;
        case 0x24eb2cu: goto label_24eb2c;
        case 0x24eb48u: goto label_24eb48;
        case 0x24eb5cu: goto label_24eb5c;
        case 0x24ec08u: goto label_24ec08;
        case 0x24ec30u: goto label_24ec30;
        case 0x24ec3cu: goto label_24ec3c;
        case 0x24ec64u: goto label_24ec64;
        case 0x24ec74u: goto label_24ec74;
        case 0x24ec8cu: goto label_24ec8c;
        default: break;
    }

    ctx->pc = 0x24e940u;

    // 0x24e940: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x24e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x24e944: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24e944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24e948: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x24e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x24e94c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x24e950: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24e950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24e954: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24e954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24e958: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24e95c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24e95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24e960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24e960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24e964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24e964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24e968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24e96c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x24e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x24e970: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x24e970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x24e974: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x24e974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24e978: 0x10030005  beq         $zero, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E978u;
    {
        const bool branch_taken_0x24e978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x24e978) {
            ctx->pc = 0x24E990u;
            goto label_24e990;
        }
    }
    ctx->pc = 0x24E980u;
    // 0x24e980: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x24e980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24e984: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x24e984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x24e988: 0x14030003  bne         $zero, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E988u;
    {
        const bool branch_taken_0x24e988 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 3));
        if (branch_taken_0x24e988) {
            ctx->pc = 0x24E998u;
            goto label_24e998;
        }
    }
    ctx->pc = 0x24E990u;
label_24e990:
    // 0x24e990: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x24E990u;
    {
        const bool branch_taken_0x24e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e990) {
            ctx->pc = 0x24EC8Cu;
            goto label_24ec8c;
        }
    }
    ctx->pc = 0x24E998u;
label_24e998:
    // 0x24e998: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x24e998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x24e99c: 0xc042230  jal         func_1088C0
    ctx->pc = 0x24E99Cu;
    SET_GPR_U32(ctx, 31, 0x24E9A4u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x24E99Cu, 0x24E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9A4u;
label_24e9a4:
    // 0x24e9a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24e9a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x24E9A8u;
    {
        const bool branch_taken_0x24e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e9a8) {
            ctx->pc = 0x24EA18u;
            goto label_24ea18;
        }
    }
    ctx->pc = 0x24E9B0u;
label_24e9b0:
    // 0x24e9b0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24e9b4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24e9b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24e9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9bc: 0xc064774  jal         func_191DD0
    ctx->pc = 0x24E9BCu;
    SET_GPR_U32(ctx, 31, 0x24E9C4u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x24E9BCu, 0x24E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9C4u;
label_24e9c4:
    // 0x24e9c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24e9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e9c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24e9cc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x24e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24e9d0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24E9D0u;
    {
        const bool branch_taken_0x24e9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e9d0) {
            ctx->pc = 0x24EA14u;
            goto label_24ea14;
        }
    }
    ctx->pc = 0x24E9D8u;
    // 0x24e9d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24e9dc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x24e9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x24e9e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24E9E0u;
    {
        const bool branch_taken_0x24e9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e9e0) {
            ctx->pc = 0x24EA14u;
            goto label_24ea14;
        }
    }
    ctx->pc = 0x24E9E8u;
    // 0x24e9e8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x24e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x24e9ec: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x24e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x24e9f0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x24e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24e9f4: 0x8fa5010c  lw          $a1, 0x10C($sp)
    ctx->pc = 0x24e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x24e9f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24e9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e9fc: 0xc092cd4  jal         func_24B350
    ctx->pc = 0x24E9FCu;
    SET_GPR_U32(ctx, 31, 0x24EA04u);
    ctx->pc = 0x24B350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B350u, 0x24E9FCu, 0x24EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA04u;
label_24ea04:
    // 0x24ea04: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x24ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x24ea08: 0x27a5010c  addiu       $a1, $sp, 0x10C
    ctx->pc = 0x24ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x24ea0c: 0xc042128  jal         func_1084A0
    ctx->pc = 0x24EA0Cu;
    SET_GPR_U32(ctx, 31, 0x24EA14u);
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x24EA0Cu, 0x24EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA14u;
label_24ea14:
    // 0x24ea14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24ea14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_24ea18:
    // 0x24ea18: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24ea1c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24ea20: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24EA20u;
    SET_GPR_U32(ctx, 31, 0x24EA28u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24EA20u, 0x24EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA28u;
label_24ea28:
    // 0x24ea28: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x24ea28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x24ea2c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24ea30: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24ea34: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x24EA34u;
    SET_GPR_U32(ctx, 31, 0x24EA3Cu);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24EA34u, 0x24EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA3Cu;
label_24ea3c:
    // 0x24ea3c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x24ea3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24ea40: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x24ea40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24ea44: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x24ea44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24ea48: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x24EA48u;
    {
        const bool branch_taken_0x24ea48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ea48) {
            ctx->pc = 0x24E9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e9b0;
        }
    }
    ctx->pc = 0x24EA50u;
    // 0x24ea50: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x24ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x24ea54: 0xc042290  jal         func_108A40
    ctx->pc = 0x24EA54u;
    SET_GPR_U32(ctx, 31, 0x24EA5Cu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x24EA54u, 0x24EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA5Cu;
label_24ea5c:
    // 0x24ea5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24ea5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x24EA60u;
    {
        const bool branch_taken_0x24ea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ea60) {
            ctx->pc = 0x24EAB8u;
            goto label_24eab8;
        }
    }
    ctx->pc = 0x24EA68u;
label_24ea68:
    // 0x24ea68: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x24ea68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24ea6c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x24ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24ea70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24ea70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x24ea74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ea78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24ea78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ea7c: 0xc0924d4  jal         func_249350
    ctx->pc = 0x24EA7Cu;
    SET_GPR_U32(ctx, 31, 0x24EA84u);
    ctx->pc = 0x249350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249350u, 0x24EA7Cu, 0x24EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA84u;
label_24ea84:
    // 0x24ea84: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x24ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24ea88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24ea88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea8c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x24ea8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24ea90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24ea90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ea94: 0xc0924d4  jal         func_249350
    ctx->pc = 0x24EA94u;
    SET_GPR_U32(ctx, 31, 0x24EA9Cu);
    ctx->pc = 0x249350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249350u, 0x24EA94u, 0x24EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA9Cu;
label_24ea9c:
    // 0x24ea9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x24ea9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24eaa0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24EAA0u;
    {
        const bool branch_taken_0x24eaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24eaa0) {
            ctx->pc = 0x24EAB4u;
            goto label_24eab4;
        }
    }
    ctx->pc = 0x24EAA8u;
    // 0x24eaa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24eaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eaac: 0xc0941d8  jal         func_250760
    ctx->pc = 0x24EAACu;
    SET_GPR_U32(ctx, 31, 0x24EAB4u);
    ctx->pc = 0x250760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250760u, 0x24EAACu, 0x24EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAB4u;
label_24eab4:
    // 0x24eab4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x24eab4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_24eab8:
    // 0x24eab8: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x24eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x24eabc: 0xc042288  jal         func_108A20
    ctx->pc = 0x24EABCu;
    SET_GPR_U32(ctx, 31, 0x24EAC4u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x24EABCu, 0x24EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAC4u;
label_24eac4:
    // 0x24eac4: 0x1642ffe8  bne         $s2, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x24EAC4u;
    {
        const bool branch_taken_0x24eac4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x24eac4) {
            ctx->pc = 0x24EA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ea68;
        }
    }
    ctx->pc = 0x24EACCu;
    // 0x24eacc: 0xc090864  jal         func_242190
    ctx->pc = 0x24EACCu;
    SET_GPR_U32(ctx, 31, 0x24EAD4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x24EACCu, 0x24EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAD4u;
label_24ead4:
    // 0x24ead4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24ead4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ead8: 0xc090590  jal         func_241640
    ctx->pc = 0x24EAD8u;
    SET_GPR_U32(ctx, 31, 0x24EAE0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x24EAD8u, 0x24EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAE0u;
label_24eae0:
    // 0x24eae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24eae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eae4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x24eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24eae8: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x24EAE8u;
    SET_GPR_U32(ctx, 31, 0x24EAF0u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x24EAE8u, 0x24EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAF0u;
label_24eaf0:
    // 0x24eaf0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24eaf0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eaf4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x24eaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eaf8: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x24EAF8u;
    SET_GPR_U32(ctx, 31, 0x24EB00u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x24EAF8u, 0x24EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB00u;
label_24eb00:
    // 0x24eb00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24eb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb04: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x24EB04u;
    {
        const bool branch_taken_0x24eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb04) {
            ctx->pc = 0x24EC68u;
            goto label_24ec68;
        }
    }
    ctx->pc = 0x24EB0Cu;
label_24eb0c:
    // 0x24eb0c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24eb10: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x24eb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x24eb14: 0xc090864  jal         func_242190
    ctx->pc = 0x24EB14u;
    SET_GPR_U32(ctx, 31, 0x24EB1Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x24EB14u, 0x24EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB1Cu;
label_24eb1c:
    // 0x24eb1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24eb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb20: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x24eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24eb24: 0xc090870  jal         func_2421C0
    ctx->pc = 0x24EB24u;
    SET_GPR_U32(ctx, 31, 0x24EB2Cu);
    ctx->pc = 0x2421C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421C0u, 0x24EB24u, 0x24EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB2Cu;
label_24eb2c:
    // 0x24eb2c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x24eb2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24eb30: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x24EB30u;
    {
        const bool branch_taken_0x24eb30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24eb30) {
            ctx->pc = 0x24EC64u;
            goto label_24ec64;
        }
    }
    ctx->pc = 0x24EB38u;
    // 0x24eb38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24eb3c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x24eb40: 0xc085538  jal         func_2154E0
    ctx->pc = 0x24EB40u;
    SET_GPR_U32(ctx, 31, 0x24EB48u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x24EB40u, 0x24EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB48u;
label_24eb48:
    // 0x24eb48: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x24eb48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb4c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x24eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x24eb50: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24eb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb54: 0xc090f80  jal         func_243E00
    ctx->pc = 0x24EB54u;
    SET_GPR_U32(ctx, 31, 0x24EB5Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x24EB54u, 0x24EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB5Cu;
label_24eb5c:
    // 0x24eb5c: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x24eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x24eb60: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x24eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x24eb64: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24eb68: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eb6c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24eb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eb70: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x24eb70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x24eb74: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x24eb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24eb78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x24eb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x24eb7c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24eb80: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x24eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eb84: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x24eb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eb88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24eb88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24eb8c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x24eb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x24eb90: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24eb94: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x24eb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eb98: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x24eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eb9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24eb9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24eba0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x24eba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x24eba4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24eba8: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x24eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ebac: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x24ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ebb0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24ebb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24ebb4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x24ebb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x24ebb8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24ebbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ebbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ebc0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x24ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ebc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24ebc4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24ebc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ebc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x24ebcc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24ebccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24ebd0: 0x0  nop
    ctx->pc = 0x24ebd0u;
    // NOP
    // 0x24ebd4: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x24ebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x24ebd8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24ebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24ebdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24ebdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ebe0: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x24ebe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ebe4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24ebe4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24ebe8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24ebe8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x24ebec: 0x441e0000  mfc1        $fp, $f0
    ctx->pc = 0x24ebecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x24ebf0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24ebf4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24ebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24ebf8: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x24ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x24ebfc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x24ebfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ec00: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x24EC00u;
    SET_GPR_U32(ctx, 31, 0x24EC08u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x24EC00u, 0x24EC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC08u;
label_24ec08:
    // 0x24ec08: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x24ec08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ec0c: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x24EC0Cu;
    {
        const bool branch_taken_0x24ec0c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ec0c) {
            ctx->pc = 0x24EC64u;
            goto label_24ec64;
        }
    }
    ctx->pc = 0x24EC14u;
    // 0x24ec14: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x24ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24ec18: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x24ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24ec1c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24EC1Cu;
    {
        const bool branch_taken_0x24ec1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ec1c) {
            ctx->pc = 0x24EC64u;
            goto label_24ec64;
        }
    }
    ctx->pc = 0x24EC24u;
    // 0x24ec24: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x24ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x24ec28: 0xc094d24  jal         func_253490
    ctx->pc = 0x24EC28u;
    SET_GPR_U32(ctx, 31, 0x24EC30u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x24EC28u, 0x24EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC30u;
label_24ec30:
    // 0x24ec30: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x24ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24ec34: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x24EC34u;
    SET_GPR_U32(ctx, 31, 0x24EC3Cu);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x24EC34u, 0x24EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC3Cu;
label_24ec3c:
    // 0x24ec3c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x24ec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x24ec40: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x24ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x24ec44: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x24ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ec48: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x24ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ec4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24ec4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ec50: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x24ec50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x24ec54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24ec54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ec58: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x24ec58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x24ec5c: 0xc090f14  jal         func_243C50
    ctx->pc = 0x24EC5Cu;
    SET_GPR_U32(ctx, 31, 0x24EC64u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x24EC5Cu, 0x24EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC64u;
label_24ec64:
    // 0x24ec64: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x24ec64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_24ec68:
    // 0x24ec68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x24ec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ec6c: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x24EC6Cu;
    SET_GPR_U32(ctx, 31, 0x24EC74u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x24EC6Cu, 0x24EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC74u;
label_24ec74:
    // 0x24ec74: 0x1602ffa5  bne         $s0, $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x24EC74u;
    {
        const bool branch_taken_0x24ec74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ec74) {
            ctx->pc = 0x24EB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24eb0c;
        }
    }
    ctx->pc = 0x24EC7Cu;
    // 0x24ec7c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x24ec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x24ec80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24ec84: 0xc0420a0  jal         func_108280
    ctx->pc = 0x24EC84u;
    SET_GPR_U32(ctx, 31, 0x24EC8Cu);
    ctx->pc = 0x108280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108280u, 0x24EC84u, 0x24EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EC8Cu;
label_24ec8c:
    // 0x24ec8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24ec8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24ec90: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24ec90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24ec94: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24ec94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24ec98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24ec98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24ec9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24ec9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24eca0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24eca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24eca4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24eca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24eca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24eca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ecac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24ecacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ecb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24ecb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ecb4: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x24ecb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x24ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x24ECB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ECB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24ECC0u;
}
