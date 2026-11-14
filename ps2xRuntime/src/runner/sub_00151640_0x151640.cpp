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

// Function: sub_00151640
// Address: 0x151640 - 0x1516f0
void sub_00151640_0x151640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151640_0x151640");
#endif

    switch (ctx->pc) {
        case 0x151678u: goto label_151678;
        case 0x15168cu: goto label_15168c;
        case 0x15169cu: goto label_15169c;
        default: break;
    }

    ctx->pc = 0x151640u;

    // 0x151640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x151640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x151644: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x151644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x151648: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15164c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151658: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x151658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x15165c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x15165cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x151660: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x151660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151664: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x151664u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x151668: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x151668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15166c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15166cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151670: 0xc0e0c2e  jal         func_3830B8
    ctx->pc = 0x151670u;
    SET_GPR_U32(ctx, 31, 0x151678u);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x151670u, 0x151678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151678u;
label_151678:
    // 0x151678: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x151678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15167c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151684: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x151684u;
    SET_GPR_U32(ctx, 31, 0x15168Cu);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x151684u, 0x15168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15168Cu;
label_15168c:
    // 0x15168c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15168cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151690: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x151690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151694: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x151694u;
    SET_GPR_U32(ctx, 31, 0x15169Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x151694u, 0x15169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15169Cu;
label_15169c:
    // 0x15169c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15169Cu;
    {
        const bool branch_taken_0x15169c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15169c) {
            ctx->pc = 0x1516BCu;
            goto label_1516bc;
        }
    }
    ctx->pc = 0x1516A4u;
    // 0x1516a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1516a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1516a8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1516a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1516ac: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1516acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1516b0: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x1516b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1516b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1516B4u;
    {
        const bool branch_taken_0x1516b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1516b4) {
            ctx->pc = 0x1516C8u;
            goto label_1516c8;
        }
    }
    ctx->pc = 0x1516BCu;
label_1516bc:
    // 0x1516bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1516bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1516c0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1516c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1516c4: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1516c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1516c8:
    // 0x1516c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1516c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1516cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1516ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1516d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1516d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1516d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1516d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1516d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1516d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1516dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1516dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1516e0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1516e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1516e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1516E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1516E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1516ECu;
    // 0x1516ec: 0x0  nop
    ctx->pc = 0x1516ecu;
    // NOP
    ctx->pc = 0x1516f0u;
}
