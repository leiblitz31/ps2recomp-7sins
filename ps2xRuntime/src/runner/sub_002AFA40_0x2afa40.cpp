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

// Function: sub_002AFA40
// Address: 0x2afa40 - 0x2afb50
void sub_002AFA40_0x2afa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AFA40_0x2afa40");
#endif

    switch (ctx->pc) {
        case 0x2afa74u: goto label_2afa74;
        case 0x2afa88u: goto label_2afa88;
        case 0x2afaacu: goto label_2afaac;
        case 0x2afac8u: goto label_2afac8;
        case 0x2afae0u: goto label_2afae0;
        case 0x2afb08u: goto label_2afb08;
        case 0x2afb18u: goto label_2afb18;
        case 0x2afb34u: goto label_2afb34;
        default: break;
    }

    ctx->pc = 0x2afa40u;

    // 0x2afa40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2afa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2afa44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2afa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2afa48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2afa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2afa4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2afa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2afa50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2afa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2afa54: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2afa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2afa58: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2afa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2afa5c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2afa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2afa60: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2afa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2afa64: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2afa64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2afa68: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2afa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afa6c: 0xc0abf24  jal         func_2AFC90
    ctx->pc = 0x2AFA6Cu;
    SET_GPR_U32(ctx, 31, 0x2AFA74u);
    ctx->pc = 0x2AFC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFC90u, 0x2AFA6Cu, 0x2AFA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA74u;
label_2afa74:
    // 0x2afa74: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2afa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2afa78: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2afa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2afa7c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2afa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2afa80: 0xc041954  jal         func_106550
    ctx->pc = 0x2AFA80u;
    SET_GPR_U32(ctx, 31, 0x2AFA88u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2AFA80u, 0x2AFA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA88u;
label_2afa88:
    // 0x2afa88: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2afa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2afa8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2afa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2afa90: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2afa90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2afa94: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2afa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afa98: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2afa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2afa9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2afa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afaa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2afaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afaa4: 0xc0ac254  jal         func_2B0950
    ctx->pc = 0x2AFAA4u;
    SET_GPR_U32(ctx, 31, 0x2AFAACu);
    ctx->pc = 0x2B0950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0950u, 0x2AFAA4u, 0x2AFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFAACu;
label_2afaac:
    // 0x2afaac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2afaacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afab0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2afab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afab4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2afab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2afab8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2afab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2afabc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2afabcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afac0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2AFAC0u;
    SET_GPR_U32(ctx, 31, 0x2AFAC8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2AFAC0u, 0x2AFAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFAC8u;
label_2afac8:
    // 0x2afac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2afac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2afaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afad0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2afad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2afad4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2afad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2afad8: 0xc0abf08  jal         func_2AFC20
    ctx->pc = 0x2AFAD8u;
    SET_GPR_U32(ctx, 31, 0x2AFAE0u);
    ctx->pc = 0x2AFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFC20u, 0x2AFAD8u, 0x2AFAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFAE0u;
label_2afae0:
    // 0x2afae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2afae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afae4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2afae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2afae8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AFAE8u;
    {
        const bool branch_taken_0x2afae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afae8) {
            ctx->pc = 0x2AFB0Cu;
            goto label_2afb0c;
        }
    }
    ctx->pc = 0x2AFAF0u;
    // 0x2afaf0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2afaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afaf4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2afaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2afaf8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2afaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2afafc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2afafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb00: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2AFB00u;
    SET_GPR_U32(ctx, 31, 0x2AFB08u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2AFB00u, 0x2AFB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB08u;
label_2afb08:
    // 0x2afb08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2afb08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2afb0c:
    // 0x2afb0c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2afb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afb10: 0xc0abee8  jal         func_2AFBA0
    ctx->pc = 0x2AFB10u;
    SET_GPR_U32(ctx, 31, 0x2AFB18u);
    ctx->pc = 0x2AFBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFBA0u, 0x2AFB10u, 0x2AFB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB18u;
label_2afb18:
    // 0x2afb18: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2afb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2afb1c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2afb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2afb20: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2afb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2afb24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2afb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2afb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afb2c: 0xc0abed4  jal         func_2AFB50
    ctx->pc = 0x2AFB2Cu;
    SET_GPR_U32(ctx, 31, 0x2AFB34u);
    ctx->pc = 0x2AFB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFB50u, 0x2AFB2Cu, 0x2AFB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFB34u;
label_2afb34:
    // 0x2afb34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2afb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afb38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2afb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afb3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2afb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2afb40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2afb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afb44: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2afb44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2afb48: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFB50u;
}
