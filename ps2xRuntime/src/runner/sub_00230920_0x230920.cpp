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

// Function: sub_00230920
// Address: 0x230920 - 0x230960
void sub_00230920_0x230920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230920_0x230920");
#endif

    switch (ctx->pc) {
        case 0x23093cu: goto label_23093c;
        default: break;
    }

    ctx->pc = 0x230920u;

    // 0x230920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x230928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23092c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23092cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x230930: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x230930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230934: 0xc08b51c  jal         func_22D470
    ctx->pc = 0x230934u;
    SET_GPR_U32(ctx, 31, 0x23093Cu);
    ctx->pc = 0x22D470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D470u, 0x230934u, 0x23093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23093Cu;
label_23093c:
    // 0x23093c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23093cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230940: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x230940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x230944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x230944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x230948: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23094c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230954: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x230954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x230958: 0x3e00008  jr          $ra
    ctx->pc = 0x230958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230960u;
}
