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

// Function: sub_0039CEC8
// Address: 0x39cec8 - 0x39cf10
void sub_0039CEC8_0x39cec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CEC8_0x39cec8");
#endif

    switch (ctx->pc) {
        case 0x39cee8u: goto label_39cee8;
        case 0x39cefcu: goto label_39cefc;
        default: break;
    }

    ctx->pc = 0x39cec8u;

    // 0x39cec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39cec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39cecc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39ced0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39ced0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39ced4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x39ced4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ced8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39ced8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cee0: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x39CEE0u;
    SET_GPR_U32(ctx, 31, 0x39CEE8u);
    ctx->pc = 0x39CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CEE0u;
    // 0x39cee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x39CEE0u, 0x39CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CEE8u;
label_39cee8:
    // 0x39cee8: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x39cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x39ceec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39ceecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cef0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x39cef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cef4: 0xc0e3ea4  jal         func_38FA90
    ctx->pc = 0x39CEF4u;
    SET_GPR_U32(ctx, 31, 0x39CEFCu);
    ctx->pc = 0x39CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CEF4u;
    // 0x39cef8: 0x24a70010  addiu       $a3, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FA90u, 0x39CEF4u, 0x39CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CEFCu;
label_39cefc:
    // 0x39cefc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39cefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39cf00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39cf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cf08: 0x3e00008  jr          $ra
    ctx->pc = 0x39CF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF08u;
        // 0x39cf0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CF10u;
}
