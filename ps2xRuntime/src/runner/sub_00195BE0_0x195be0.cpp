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

// Function: sub_00195BE0
// Address: 0x195be0 - 0x195c20
void sub_00195BE0_0x195be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195BE0_0x195be0");
#endif

    switch (ctx->pc) {
        case 0x195bfcu: goto label_195bfc;
        default: break;
    }

    ctx->pc = 0x195be0u;

    // 0x195be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x195bec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x195becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x195bf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195bf4: 0xc065708  jal         func_195C20
    ctx->pc = 0x195BF4u;
    SET_GPR_U32(ctx, 31, 0x195BFCu);
    ctx->pc = 0x195C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195C20u, 0x195BF4u, 0x195BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BFCu;
label_195bfc:
    // 0x195bfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x195bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195c00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x195c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x195c04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195c0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x195c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195c10: 0x3e00008  jr          $ra
    ctx->pc = 0x195C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195C18u;
    // 0x195c18: 0x0  nop
    ctx->pc = 0x195c18u;
    // NOP
    // 0x195c1c: 0x0  nop
    ctx->pc = 0x195c1cu;
    // NOP
    ctx->pc = 0x195c20u;
}
