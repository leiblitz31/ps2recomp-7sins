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

// Function: sub_0038AA60
// Address: 0x38aa60 - 0x38aac0
void sub_0038AA60_0x38aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038AA60_0x38aa60");
#endif

    switch (ctx->pc) {
        case 0x38aa94u: goto label_38aa94;
        default: break;
    }

    ctx->pc = 0x38aa60u;

    // 0x38aa60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38aa64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38aa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38aa68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38aa6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38aa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38aa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38aa74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38aa74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa78: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38aa7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38aa84: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x38aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
    // 0x38aa88: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x38aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x38aa8c: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x38AA8Cu;
    SET_GPR_U32(ctx, 31, 0x38AA94u);
    ctx->pc = 0x38AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA8Cu;
    // 0x38aa90: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x38AA8Cu, 0x38AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA94u;
label_38aa94:
    // 0x38aa94: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38aa98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38aa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38aa9c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x38aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x38aaa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38aaa4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x38aaa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38aaa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aaac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38aaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38aab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38aab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38aab4: 0x3e00008  jr          $ra
    ctx->pc = 0x38AAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAB4u;
        // 0x38aab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AABCu;
    // 0x38aabc: 0x0  nop
    ctx->pc = 0x38aabcu;
    // NOP
    ctx->pc = 0x38aac0u;
}
