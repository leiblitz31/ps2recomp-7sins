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

// Function: sub_00115B40
// Address: 0x115b40 - 0x115b90
void sub_00115B40_0x115b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115B40_0x115b40");
#endif

    switch (ctx->pc) {
        case 0x115b64u: goto label_115b64;
        default: break;
    }

    ctx->pc = 0x115b40u;

    // 0x115b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x115b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115b48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x115b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x115b4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x115b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x115b50: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x115b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x115b54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115b58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x115b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115b5c: 0xc0456e4  jal         func_115B90
    ctx->pc = 0x115B5Cu;
    SET_GPR_U32(ctx, 31, 0x115B64u);
    ctx->pc = 0x115B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B90u, 0x115B5Cu, 0x115B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B64u;
label_115b64:
    // 0x115b64: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x115b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115b68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x115b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115b6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x115b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x115b70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x115b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115b78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x115b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x115b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x115B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115B84u;
    // 0x115b84: 0x0  nop
    ctx->pc = 0x115b84u;
    // NOP
    // 0x115b88: 0x0  nop
    ctx->pc = 0x115b88u;
    // NOP
    // 0x115b8c: 0x0  nop
    ctx->pc = 0x115b8cu;
    // NOP
    ctx->pc = 0x115b90u;
}
