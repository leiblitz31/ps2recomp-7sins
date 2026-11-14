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

// Function: sub_0031EBE0
// Address: 0x31ebe0 - 0x31ec20
void sub_0031EBE0_0x31ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EBE0_0x31ebe0");
#endif

    switch (ctx->pc) {
        case 0x31ec00u: goto label_31ec00;
        default: break;
    }

    ctx->pc = 0x31ebe0u;

    // 0x31ebe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ebe4: 0x8f82a5dc  lw          $v0, -0x5A24($gp)
    ctx->pc = 0x31ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944220)));
    // 0x31ebe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31ebec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ebf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EBF0u;
    {
        const bool branch_taken_0x31ebf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBF0u;
        // 0x31ebf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebf0) {
            ctx->pc = 0x31EC00u;
            goto label_31ec00;
        }
    }
    ctx->pc = 0x31EBF8u;
    // 0x31ebf8: 0xc0c7b18  jal         func_31EC60
    ctx->pc = 0x31EBF8u;
    SET_GPR_U32(ctx, 31, 0x31EC00u);
    ctx->pc = 0x31EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EBF8u;
    // 0x31ebfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EC60u, 0x31EBF8u, 0x31EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EC00u;
label_31ec00:
    // 0x31ec00: 0x8f83a5dc  lw          $v1, -0x5A24($gp)
    ctx->pc = 0x31ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944220)));
    // 0x31ec04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31ec04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ec08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31ec08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ec0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31ec10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ec10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ec14: 0xaf83a5dc  sw          $v1, -0x5A24($gp)
    ctx->pc = 0x31ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944220), GPR_U32(ctx, 3));
    // 0x31ec18: 0x3e00008  jr          $ra
    ctx->pc = 0x31EC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC18u;
        // 0x31ec1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EC20u;
}
