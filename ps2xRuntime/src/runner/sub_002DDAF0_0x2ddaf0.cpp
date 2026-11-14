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

// Function: sub_002DDAF0
// Address: 0x2ddaf0 - 0x2ddd70
void sub_002DDAF0_0x2ddaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDAF0_0x2ddaf0");
#endif

    switch (ctx->pc) {
        case 0x2ddb30u: goto label_2ddb30;
        case 0x2ddb3cu: goto label_2ddb3c;
        case 0x2ddb4cu: goto label_2ddb4c;
        case 0x2ddb64u: goto label_2ddb64;
        case 0x2ddb74u: goto label_2ddb74;
        case 0x2ddb7cu: goto label_2ddb7c;
        case 0x2ddb88u: goto label_2ddb88;
        case 0x2ddb98u: goto label_2ddb98;
        case 0x2ddba8u: goto label_2ddba8;
        case 0x2ddbb4u: goto label_2ddbb4;
        case 0x2ddbc4u: goto label_2ddbc4;
        case 0x2ddbd4u: goto label_2ddbd4;
        case 0x2ddbecu: goto label_2ddbec;
        case 0x2ddc0cu: goto label_2ddc0c;
        case 0x2ddc38u: goto label_2ddc38;
        case 0x2ddc58u: goto label_2ddc58;
        case 0x2ddc6cu: goto label_2ddc6c;
        case 0x2ddc7cu: goto label_2ddc7c;
        case 0x2ddc90u: goto label_2ddc90;
        case 0x2ddca4u: goto label_2ddca4;
        case 0x2ddcb4u: goto label_2ddcb4;
        case 0x2ddcd0u: goto label_2ddcd0;
        case 0x2ddce0u: goto label_2ddce0;
        case 0x2ddcf0u: goto label_2ddcf0;
        case 0x2ddcfcu: goto label_2ddcfc;
        case 0x2ddd1cu: goto label_2ddd1c;
        case 0x2ddd38u: goto label_2ddd38;
        default: break;
    }

    ctx->pc = 0x2ddaf0u;

    // 0x2ddaf0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2ddaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2ddaf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ddaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ddaf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ddaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2ddafc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ddafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2ddb00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ddb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ddb04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ddb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ddb08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ddb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ddb0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ddb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ddb10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ddb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ddb14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ddb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ddb18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ddb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ddb1c: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x2ddb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x2ddb20: 0xafa600f0  sw          $a2, 0xF0($sp)
    ctx->pc = 0x2ddb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 6));
    // 0x2ddb24: 0xafa70100  sw          $a3, 0x100($sp)
    ctx->pc = 0x2ddb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 7));
    // 0x2ddb28: 0xc0434e0  jal         func_10D380
    ctx->pc = 0x2DDB28u;
    SET_GPR_U32(ctx, 31, 0x2DDB30u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x2DDB28u, 0x2DDB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB30u;
label_2ddb30:
    // 0x2ddb30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ddb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb34: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x2DDB34u;
    SET_GPR_U32(ctx, 31, 0x2DDB3Cu);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x2DDB34u, 0x2DDB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB3Cu;
label_2ddb3c:
    // 0x2ddb3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ddb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb40: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x2ddb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ddb44: 0xc044da4  jal         func_113690
    ctx->pc = 0x2DDB44u;
    SET_GPR_U32(ctx, 31, 0x2DDB4Cu);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x2DDB44u, 0x2DDB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB4Cu;
label_2ddb4c:
    // 0x2ddb4c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2ddb4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb50: 0x101e0079  beq         $zero, $fp, . + 4 + (0x79 << 2)
    ctx->pc = 0x2DDB50u;
    {
        const bool branch_taken_0x2ddb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 30));
        if (branch_taken_0x2ddb50) {
            ctx->pc = 0x2DDD38u;
            goto label_2ddd38;
        }
    }
    ctx->pc = 0x2DDB58u;
    // 0x2ddb58: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2ddb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2ddb5c: 0xc0b78e8  jal         func_2DE3A0
    ctx->pc = 0x2DDB5Cu;
    SET_GPR_U32(ctx, 31, 0x2DDB64u);
    ctx->pc = 0x2DE3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE3A0u, 0x2DDB5Cu, 0x2DDB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB64u;
label_2ddb64:
    // 0x2ddb64: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2ddb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2ddb68: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ddb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ddb6c: 0xc0b79bc  jal         func_2DE6F0
    ctx->pc = 0x2DDB6Cu;
    SET_GPR_U32(ctx, 31, 0x2DDB74u);
    ctx->pc = 0x2DE6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE6F0u, 0x2DDB6Cu, 0x2DDB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB74u;
label_2ddb74:
    // 0x2ddb74: 0xc090864  jal         func_242190
    ctx->pc = 0x2DDB74u;
    SET_GPR_U32(ctx, 31, 0x2DDB7Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2DDB74u, 0x2DDB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB7Cu;
label_2ddb7c:
    // 0x2ddb7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ddb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb80: 0xc090590  jal         func_241640
    ctx->pc = 0x2DDB80u;
    SET_GPR_U32(ctx, 31, 0x2DDB88u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2DDB80u, 0x2DDB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB88u;
label_2ddb88:
    // 0x2ddb88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ddb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb8c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ddb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ddb90: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2DDB90u;
    SET_GPR_U32(ctx, 31, 0x2DDB98u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2DDB90u, 0x2DDB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB98u;
label_2ddb98:
    // 0x2ddb98: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ddb98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddb9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ddb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddba0: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2DDBA0u;
    SET_GPR_U32(ctx, 31, 0x2DDBA8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2DDBA0u, 0x2DDBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBA8u;
label_2ddba8:
    // 0x2ddba8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ddba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbac: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2DDBACu;
    {
        const bool branch_taken_0x2ddbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddbac) {
            ctx->pc = 0x2DDC70u;
            goto label_2ddc70;
        }
    }
    ctx->pc = 0x2DDBB4u;
label_2ddbb4:
    // 0x2ddbb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ddbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ddbb8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2ddbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2ddbbc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DDBBCu;
    SET_GPR_U32(ctx, 31, 0x2DDBC4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DDBBCu, 0x2DDBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBC4u;
label_2ddbc4:
    // 0x2ddbc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ddbc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ddbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbcc: 0xc094178  jal         func_2505E0
    ctx->pc = 0x2DDBCCu;
    SET_GPR_U32(ctx, 31, 0x2DDBD4u);
    ctx->pc = 0x2505E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2505E0u, 0x2DDBCCu, 0x2DDBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBD4u;
label_2ddbd4:
    // 0x2ddbd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ddbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ddbd8: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DDBD8u;
    {
        const bool branch_taken_0x2ddbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ddbd8) {
            ctx->pc = 0x2DDC6Cu;
            goto label_2ddc6c;
        }
    }
    ctx->pc = 0x2DDBE0u;
    // 0x2ddbe0: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2ddbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2ddbe4: 0xc0913ec  jal         func_244FB0
    ctx->pc = 0x2DDBE4u;
    SET_GPR_U32(ctx, 31, 0x2DDBECu);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x2DDBE4u, 0x2DDBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBECu;
label_2ddbec:
    // 0x2ddbec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2ddbecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbf0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DDBF0u;
    {
        const bool branch_taken_0x2ddbf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddbf0) {
            ctx->pc = 0x2DDC18u;
            goto label_2ddc18;
        }
    }
    ctx->pc = 0x2DDBF8u;
    // 0x2ddbf8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ddbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddbfc: 0x2405055d  addiu       $a1, $zero, 0x55D
    ctx->pc = 0x2ddbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1373));
    // 0x2ddc00: 0x2786a550  addiu       $a2, $gp, -0x5AB0
    ctx->pc = 0x2ddc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944080));
    // 0x2ddc04: 0xc041a50  jal         func_106940
    ctx->pc = 0x2DDC04u;
    SET_GPR_U32(ctx, 31, 0x2DDC0Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2DDC04u, 0x2DDC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC0Cu;
label_2ddc0c:
    // 0x2ddc0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ddc0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DDC10u;
    {
        const bool branch_taken_0x2ddc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddc10) {
            ctx->pc = 0x2DDC1Cu;
            goto label_2ddc1c;
        }
    }
    ctx->pc = 0x2DDC18u;
label_2ddc18:
    // 0x2ddc18: 0x2792a550  addiu       $s2, $gp, -0x5AB0
    ctx->pc = 0x2ddc18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944080));
label_2ddc1c:
    // 0x2ddc1c: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x2ddc1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc20: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2ddc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x2ddc24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ddc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc28: 0x2785a558  addiu       $a1, $gp, -0x5AA8
    ctx->pc = 0x2ddc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944088));
    // 0x2ddc2c: 0x27a600cc  addiu       $a2, $sp, 0xCC
    ctx->pc = 0x2ddc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2ddc30: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x2DDC30u;
    SET_GPR_U32(ctx, 31, 0x2DDC38u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x2DDC30u, 0x2DDC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC38u;
label_2ddc38:
    // 0x2ddc38: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x2ddc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2ddc3c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2ddc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ddc40: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DDC40u;
    {
        const bool branch_taken_0x2ddc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ddc40) {
            ctx->pc = 0x2DDC6Cu;
            goto label_2ddc6c;
        }
    }
    ctx->pc = 0x2DDC48u;
    // 0x2ddc48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ddc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ddc4c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ddc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ddc50: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DDC50u;
    SET_GPR_U32(ctx, 31, 0x2DDC58u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DDC50u, 0x2DDC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC58u;
label_2ddc58:
    // 0x2ddc58: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x2ddc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x2ddc5c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2ddc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2ddc60: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2ddc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2ddc64: 0xc0b7818  jal         func_2DE060
    ctx->pc = 0x2DDC64u;
    SET_GPR_U32(ctx, 31, 0x2DDC6Cu);
    ctx->pc = 0x2DE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE060u, 0x2DDC64u, 0x2DDC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC6Cu;
label_2ddc6c:
    // 0x2ddc6c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2ddc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2ddc70:
    // 0x2ddc70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ddc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddc74: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2DDC74u;
    SET_GPR_U32(ctx, 31, 0x2DDC7Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2DDC74u, 0x2DDC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC7Cu;
label_2ddc7c:
    // 0x2ddc7c: 0x1602ffcd  bne         $s0, $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2DDC7Cu;
    {
        const bool branch_taken_0x2ddc7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ddc7c) {
            ctx->pc = 0x2DDBB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ddbb4;
        }
    }
    ctx->pc = 0x2DDC84u;
    // 0x2ddc84: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2ddc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2ddc88: 0xc0b780c  jal         func_2DE030
    ctx->pc = 0x2DDC88u;
    SET_GPR_U32(ctx, 31, 0x2DDC90u);
    ctx->pc = 0x2DE030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE030u, 0x2DDC88u, 0x2DDC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDC90u;
label_2ddc90:
    // 0x2ddc90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ddc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ddc94: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DDC94u;
    {
        const bool branch_taken_0x2ddc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddc94) {
            ctx->pc = 0x2DDD28u;
            goto label_2ddd28;
        }
    }
    ctx->pc = 0x2DDC9Cu;
    // 0x2ddc9c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2DDC9Cu;
    SET_GPR_U32(ctx, 31, 0x2DDCA4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2DDC9Cu, 0x2DDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCA4u;
label_2ddca4:
    // 0x2ddca4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2ddca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2ddca8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2ddca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2ddcac: 0xc0b77fc  jal         func_2DDFF0
    ctx->pc = 0x2DDCACu;
    SET_GPR_U32(ctx, 31, 0x2DDCB4u);
    ctx->pc = 0x2DDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDFF0u, 0x2DDCACu, 0x2DDCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCB4u;
label_2ddcb4:
    // 0x2ddcb4: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2ddcb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ddcb8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2ddcb8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2ddcbc: 0x9810  mfhi        $s3
    ctx->pc = 0x2ddcbcu;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x2ddcc0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2ddcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2ddcc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ddcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcc8: 0xc0b77e4  jal         func_2DDF90
    ctx->pc = 0x2DDCC8u;
    SET_GPR_U32(ctx, 31, 0x2DDCD0u);
    ctx->pc = 0x2DDF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF90u, 0x2DDCC8u, 0x2DDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCD0u;
label_2ddcd0:
    // 0x2ddcd0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ddcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddcd4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2ddcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ddcd8: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x2DDCD8u;
    SET_GPR_U32(ctx, 31, 0x2DDCE0u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x2DDCD8u, 0x2DDCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCE0u;
label_2ddce0:
    // 0x2ddce0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2ddce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2ddce4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ddce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddce8: 0xc0b77e4  jal         func_2DDF90
    ctx->pc = 0x2DDCE8u;
    SET_GPR_U32(ctx, 31, 0x2DDCF0u);
    ctx->pc = 0x2DDF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF90u, 0x2DDCE8u, 0x2DDCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCF0u;
label_2ddcf0:
    // 0x2ddcf0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ddcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddcf4: 0xc091008  jal         func_244020
    ctx->pc = 0x2DDCF4u;
    SET_GPR_U32(ctx, 31, 0x2DDCFCu);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x2DDCF4u, 0x2DDCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCFCu;
label_2ddcfc:
    // 0x2ddcfc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2ddcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2ddd00: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ddd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ddd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ddd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddd08: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2ddd08u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ddd0c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2ddd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2ddd10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ddd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ddd14: 0xc0b775c  jal         func_2DDD70
    ctx->pc = 0x2DDD14u;
    SET_GPR_U32(ctx, 31, 0x2DDD1Cu);
    ctx->pc = 0x2DDD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDD70u, 0x2DDD14u, 0x2DDD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD1Cu;
label_2ddd1c:
    // 0x2ddd1c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2ddd1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddd20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDD20u;
    {
        const bool branch_taken_0x2ddd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddd20) {
            ctx->pc = 0x2DDD3Cu;
            goto label_2ddd3c;
        }
    }
    ctx->pc = 0x2DDD28u;
label_2ddd28:
    // 0x2ddd28: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x2ddd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2ddd2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ddd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ddd30: 0xc0b775c  jal         func_2DDD70
    ctx->pc = 0x2DDD30u;
    SET_GPR_U32(ctx, 31, 0x2DDD38u);
    ctx->pc = 0x2DDD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDD70u, 0x2DDD30u, 0x2DDD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDD38u;
label_2ddd38:
    // 0x2ddd38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ddd38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ddd3c:
    // 0x2ddd3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ddd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ddd40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ddd40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ddd44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ddd44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ddd48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ddd48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ddd4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ddd4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ddd50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ddd50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ddd54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ddd54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddd58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ddd58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddd5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ddd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddd60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ddd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddd64: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2ddd64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ddd68: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDD70u;
}
