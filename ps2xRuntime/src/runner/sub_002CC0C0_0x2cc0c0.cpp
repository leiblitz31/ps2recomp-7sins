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

// Function: sub_002CC0C0
// Address: 0x2cc0c0 - 0x2cc140
void sub_002CC0C0_0x2cc0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC0C0_0x2cc0c0");
#endif

    switch (ctx->pc) {
        case 0x2cc0e4u: goto label_2cc0e4;
        case 0x2cc128u: goto label_2cc128;
        default: break;
    }

    ctx->pc = 0x2cc0c0u;

    // 0x2cc0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc0c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cc0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cc0cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2cc0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc0d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc0d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cc0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc0d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cc0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc0dc: 0xc0b2c5c  jal         func_2CB170
    ctx->pc = 0x2CC0DCu;
    SET_GPR_U32(ctx, 31, 0x2CC0E4u);
    ctx->pc = 0x2CB170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB170u, 0x2CC0DCu, 0x2CC0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC0E4u;
label_2cc0e4:
    // 0x2cc0e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc0e8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2cc0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc0ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc0f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cc0f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc0f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cc0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc0fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc100: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cc100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cc104: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2cc104u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2cc108: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC108u;
    {
        const bool branch_taken_0x2cc108 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2cc108) {
            ctx->pc = 0x2CC118u;
            goto label_2cc118;
        }
    }
    ctx->pc = 0x2CC110u;
    // 0x2cc110: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2cc110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2cc114: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2cc114u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2cc118:
    // 0x2cc118: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2cc118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2cc11c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cc11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cc120: 0xc0b3f14  jal         func_2CFC50
    ctx->pc = 0x2CC120u;
    SET_GPR_U32(ctx, 31, 0x2CC128u);
    ctx->pc = 0x2CFC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC50u, 0x2CC120u, 0x2CC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC128u;
label_2cc128:
    // 0x2cc128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc12c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cc12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cc130: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC138u;
    // 0x2cc138: 0x0  nop
    ctx->pc = 0x2cc138u;
    // NOP
    // 0x2cc13c: 0x0  nop
    ctx->pc = 0x2cc13cu;
    // NOP
    ctx->pc = 0x2cc140u;
}
