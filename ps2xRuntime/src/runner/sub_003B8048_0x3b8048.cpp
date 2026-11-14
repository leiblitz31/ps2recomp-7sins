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

// Function: sub_003B8048
// Address: 0x3b8048 - 0x3b80a0
void sub_003B8048_0x3b8048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8048_0x3b8048");
#endif

    switch (ctx->pc) {
        case 0x3b8068u: goto label_3b8068;
        case 0x3b807cu: goto label_3b807c;
        default: break;
    }

    ctx->pc = 0x3b8048u;

    // 0x3b8048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b8048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b804c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b804cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b8050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b8050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b8054: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b8054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b8058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b805c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b805cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8060: 0xc0ed340  jal         func_3B4D00
    ctx->pc = 0x3B8060u;
    SET_GPR_U32(ctx, 31, 0x3B8068u);
    ctx->pc = 0x3B8064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8060u;
    // 0x3b8064: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D00u, 0x3B8060u, 0x3B8068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8068u;
label_3b8068:
    // 0x3b8068: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8068u;
    {
        const bool branch_taken_0x3b8068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8068u;
        // 0x3b806c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8068) {
            ctx->pc = 0x3B8084u;
            goto label_3b8084;
        }
    }
    ctx->pc = 0x3B8070u;
    // 0x3b8070: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3b8070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b8074: 0xc0ed3b8  jal         func_3B4EE0
    ctx->pc = 0x3B8074u;
    SET_GPR_U32(ctx, 31, 0x3B807Cu);
    ctx->pc = 0x3B8078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8074u;
    // 0x3b8078: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4EE0u, 0x3B8074u, 0x3B807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B807Cu;
label_3b807c:
    // 0x3b807c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B807Cu;
    {
        const bool branch_taken_0x3b807c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B807Cu;
        // 0x3b8080: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b807c) {
            ctx->pc = 0x3B808Cu;
            goto label_3b808c;
        }
    }
    ctx->pc = 0x3B8084u;
label_3b8084:
    // 0x3b8084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b8084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8088: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b8088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b808c:
    // 0x3b808c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b808cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b8090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b8094: 0x3e00008  jr          $ra
    ctx->pc = 0x3B8094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8094u;
        // 0x3b8098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B809Cu;
    // 0x3b809c: 0x0  nop
    ctx->pc = 0x3b809cu;
    // NOP
    ctx->pc = 0x3b80a0u;
}
