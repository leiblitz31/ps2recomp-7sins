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

// Function: sub_0039CF68
// Address: 0x39cf68 - 0x39cf98
void sub_0039CF68_0x39cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CF68_0x39cf68");
#endif

    switch (ctx->pc) {
        case 0x39cf7cu: goto label_39cf7c;
        case 0x39cf88u: goto label_39cf88;
        default: break;
    }

    ctx->pc = 0x39cf68u;

    // 0x39cf68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39cf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39cf6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39cf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39cf70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cf74: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x39CF74u;
    SET_GPR_U32(ctx, 31, 0x39CF7Cu);
    ctx->pc = 0x39CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF74u;
    // 0x39cf78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x39CF74u, 0x39CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF7Cu;
label_39cf7c:
    // 0x39cf7c: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x39cf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x39cf80: 0xc0e40e6  jal         func_390398
    ctx->pc = 0x39CF80u;
    SET_GPR_U32(ctx, 31, 0x39CF88u);
    ctx->pc = 0x39CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CF80u;
    // 0x39cf84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390398u, 0x39CF80u, 0x39CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CF88u;
label_39cf88:
    // 0x39cf88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39cf88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cf8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cf90: 0x3e00008  jr          $ra
    ctx->pc = 0x39CF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CF90u;
        // 0x39cf94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CF98u;
}
