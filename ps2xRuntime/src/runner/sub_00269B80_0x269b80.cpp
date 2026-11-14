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

// Function: sub_00269B80
// Address: 0x269b80 - 0x269be0
void sub_00269B80_0x269b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269B80_0x269b80");
#endif

    switch (ctx->pc) {
        case 0x269b9cu: goto label_269b9c;
        case 0x269bacu: goto label_269bac;
        case 0x269bc0u: goto label_269bc0;
        default: break;
    }

    ctx->pc = 0x269b80u;

    // 0x269b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x269b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x269b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x269b8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x269b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x269b90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x269b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269b94: 0xc09a690  jal         func_269A40
    ctx->pc = 0x269B94u;
    SET_GPR_U32(ctx, 31, 0x269B9Cu);
    ctx->pc = 0x269A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269A40u, 0x269B94u, 0x269B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B9Cu;
label_269b9c:
    // 0x269b9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ba0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x269ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269ba4: 0xc09a610  jal         func_269840
    ctx->pc = 0x269BA4u;
    SET_GPR_U32(ctx, 31, 0x269BACu);
    ctx->pc = 0x269840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269840u, 0x269BA4u, 0x269BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269BACu;
label_269bac:
    // 0x269bac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x269bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269bb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x269bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269bb4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x269bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269bb8: 0xc09a6f8  jal         func_269BE0
    ctx->pc = 0x269BB8u;
    SET_GPR_U32(ctx, 31, 0x269BC0u);
    ctx->pc = 0x269BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269BE0u, 0x269BB8u, 0x269BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269BC0u;
label_269bc0:
    // 0x269bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x269bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269bc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x269bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x269bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x269BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269BD4u;
    // 0x269bd4: 0x0  nop
    ctx->pc = 0x269bd4u;
    // NOP
    // 0x269bd8: 0x0  nop
    ctx->pc = 0x269bd8u;
    // NOP
    // 0x269bdc: 0x0  nop
    ctx->pc = 0x269bdcu;
    // NOP
    ctx->pc = 0x269be0u;
}
