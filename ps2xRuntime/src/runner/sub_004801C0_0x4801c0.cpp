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

// Function: sub_004801C0
// Address: 0x4801c0 - 0x480200
void sub_004801C0_0x4801c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004801C0_0x4801c0");
#endif

    switch (ctx->pc) {
        case 0x4801dcu: goto label_4801dc;
        default: break;
    }

    ctx->pc = 0x4801c0u;

    // 0x4801c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4801c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4801c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4801c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4801c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4801c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4801cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4801ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4801d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4801d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4801d4: 0xc120080  jal         func_480200
    ctx->pc = 0x4801D4u;
    SET_GPR_U32(ctx, 31, 0x4801DCu);
    ctx->pc = 0x480200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480200u, 0x4801D4u, 0x4801DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4801DCu;
label_4801dc:
    // 0x4801dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4801dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4801e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4801e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4801e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4801e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4801e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4801e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4801ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4801ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4801f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4801F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4801F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4801F8u;
    // 0x4801f8: 0x0  nop
    ctx->pc = 0x4801f8u;
    // NOP
    // 0x4801fc: 0x0  nop
    ctx->pc = 0x4801fcu;
    // NOP
    ctx->pc = 0x480200u;
}
