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

// Function: sub_0039AA48
// Address: 0x39aa48 - 0x39aab8
void sub_0039AA48_0x39aa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AA48_0x39aa48");
#endif

    switch (ctx->pc) {
        case 0x39aa80u: goto label_39aa80;
        case 0x39aa94u: goto label_39aa94;
        default: break;
    }

    ctx->pc = 0x39aa48u;

    // 0x39aa48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39aa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39aa4c: 0x8f83bd60  lw          $v1, -0x42A0($gp)
    ctx->pc = 0x39aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
    // 0x39aa50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39aa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39aa54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x39aa58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39aa5c: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x39aa5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x39aa60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39aa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39aa64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39aa64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa68: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x39aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x39aa6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39aa70: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39AA70u;
    {
        const bool branch_taken_0x39aa70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39aa70) {
            ctx->pc = 0x39AA8Cu;
            goto label_39aa8c;
        }
    }
    ctx->pc = 0x39AA78u;
    // 0x39aa78: 0xc104284  jal         func_410A10
    ctx->pc = 0x39AA78u;
    SET_GPR_U32(ctx, 31, 0x39AA80u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x39AA78u, 0x39AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA80u;
label_39aa80:
    // 0x39aa80: 0x8f83bd60  lw          $v1, -0x42A0($gp)
    ctx->pc = 0x39aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
    // 0x39aa84: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x39aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x39aa88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_39aa8c:
    // 0x39aa8c: 0xc0e7848  jal         func_39E120
    ctx->pc = 0x39AA8Cu;
    SET_GPR_U32(ctx, 31, 0x39AA94u);
    ctx->pc = 0x39E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E120u, 0x39AA8Cu, 0x39AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA94u;
label_39aa94:
    // 0x39aa94: 0x8f83bd64  lw          $v1, -0x429C($gp)
    ctx->pc = 0x39aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950244)));
    // 0x39aa98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39aa98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39aa9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39aaa0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39aaa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39aaa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39aaa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39aaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39aaac: 0xaf83bd64  sw          $v1, -0x429C($gp)
    ctx->pc = 0x39aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950244), GPR_U32(ctx, 3));
    // 0x39aab0: 0x3e00008  jr          $ra
    ctx->pc = 0x39AAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AAB0u;
        // 0x39aab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AAB8u;
}
