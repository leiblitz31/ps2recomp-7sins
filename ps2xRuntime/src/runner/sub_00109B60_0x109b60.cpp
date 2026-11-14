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

// Function: sub_00109B60
// Address: 0x109b60 - 0x109bb0
void sub_00109B60_0x109b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109B60_0x109b60");
#endif

    switch (ctx->pc) {
        case 0x109b7cu: goto label_109b7c;
        case 0x109b8cu: goto label_109b8c;
        default: break;
    }

    ctx->pc = 0x109b60u;

    // 0x109b60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x109b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109b68: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x109b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x109b6c: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x109b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x109b70: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x109b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109b74: 0xc041874  jal         func_1061D0
    ctx->pc = 0x109B74u;
    SET_GPR_U32(ctx, 31, 0x109B7Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x109B74u, 0x109B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B7Cu;
label_109b7c:
    // 0x109b7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x109b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109b80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b84: 0xc04276c  jal         func_109DB0
    ctx->pc = 0x109B84u;
    SET_GPR_U32(ctx, 31, 0x109B8Cu);
    ctx->pc = 0x109DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109DB0u, 0x109B84u, 0x109B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B8Cu;
label_109b8c:
    // 0x109b8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x109b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x109b90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x109b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x109b94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x109b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x109b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109b9c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x109b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x109ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x109BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109BA8u;
    // 0x109ba8: 0x0  nop
    ctx->pc = 0x109ba8u;
    // NOP
    // 0x109bac: 0x0  nop
    ctx->pc = 0x109bacu;
    // NOP
    ctx->pc = 0x109bb0u;
}
