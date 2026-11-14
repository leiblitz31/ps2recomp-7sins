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

// Function: sub_0017C640
// Address: 0x17c640 - 0x17c680
void sub_0017C640_0x17c640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C640_0x17c640");
#endif

    switch (ctx->pc) {
        case 0x17c65cu: goto label_17c65c;
        default: break;
    }

    ctx->pc = 0x17c640u;

    // 0x17c640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17c644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17c644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17c648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17c648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17c64c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17c650: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c654: 0xc05f1a0  jal         func_17C680
    ctx->pc = 0x17C654u;
    SET_GPR_U32(ctx, 31, 0x17C65Cu);
    ctx->pc = 0x17C680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C680u, 0x17C654u, 0x17C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C65Cu;
label_17c65c:
    // 0x17c65c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c660: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17c660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17c664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17c668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c66c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17c66cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c670: 0x3e00008  jr          $ra
    ctx->pc = 0x17C670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C678u;
    // 0x17c678: 0x0  nop
    ctx->pc = 0x17c678u;
    // NOP
    // 0x17c67c: 0x0  nop
    ctx->pc = 0x17c67cu;
    // NOP
    ctx->pc = 0x17c680u;
}
