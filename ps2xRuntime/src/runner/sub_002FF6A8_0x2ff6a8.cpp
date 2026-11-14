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

// Function: sub_002FF6A8
// Address: 0x2ff6a8 - 0x2ff6e0
void sub_002FF6A8_0x2ff6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF6A8_0x2ff6a8");
#endif

    switch (ctx->pc) {
        case 0x2ff6c0u: goto label_2ff6c0;
        default: break;
    }

    ctx->pc = 0x2ff6a8u;

    // 0x2ff6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff6ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ff6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ff6b0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF6B0u;
    {
        const bool branch_taken_0x2ff6b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6B0u;
        // 0x2ff6b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff6b0) {
            ctx->pc = 0x2FF6D0u;
            goto label_2ff6d0;
        }
    }
    ctx->pc = 0x2FF6B8u;
    // 0x2ff6b8: 0xc0bfd70  jal         func_2FF5C0
    ctx->pc = 0x2FF6B8u;
    SET_GPR_U32(ctx, 31, 0x2FF6C0u);
    ctx->pc = 0x2FF6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6B8u;
    // 0x2ff6bc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF5C0u, 0x2FF6B8u, 0x2FF6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6C0u;
label_2ff6c0:
    // 0x2ff6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff6c4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ff6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ff6c8: 0x80bfd70  j           func_2FF5C0
    ctx->pc = 0x2FF6C8u;
    ctx->pc = 0x2FF6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6C8u;
    // 0x2ff6cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF5C0u;
    sub_002FF5C0_0x2ff5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FF6D0u;
label_2ff6d0:
    // 0x2ff6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff6d4: 0x80bfd70  j           func_2FF5C0
    ctx->pc = 0x2FF6D4u;
    ctx->pc = 0x2FF6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6D4u;
    // 0x2ff6d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF5C0u;
    sub_002FF5C0_0x2ff5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FF6DCu;
    // 0x2ff6dc: 0x0  nop
    ctx->pc = 0x2ff6dcu;
    // NOP
    ctx->pc = 0x2ff6e0u;
}
