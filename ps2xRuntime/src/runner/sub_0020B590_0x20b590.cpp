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

// Function: sub_0020B590
// Address: 0x20b590 - 0x20b5f0
void sub_0020B590_0x20b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B590_0x20b590");
#endif

    switch (ctx->pc) {
        case 0x20b5acu: goto label_20b5ac;
        case 0x20b5bcu: goto label_20b5bc;
        case 0x20b5d0u: goto label_20b5d0;
        default: break;
    }

    ctx->pc = 0x20b590u;

    // 0x20b590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20b594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20b598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b59c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20b5a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20b5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b5a4: 0xc082dbc  jal         func_20B6F0
    ctx->pc = 0x20B5A4u;
    SET_GPR_U32(ctx, 31, 0x20B5ACu);
    ctx->pc = 0x20B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6F0u, 0x20B5A4u, 0x20B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5ACu;
label_20b5ac:
    // 0x20b5ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b5b4: 0xc082da8  jal         func_20B6A0
    ctx->pc = 0x20B5B4u;
    SET_GPR_U32(ctx, 31, 0x20B5BCu);
    ctx->pc = 0x20B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6A0u, 0x20B5B4u, 0x20B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5BCu;
label_20b5bc:
    // 0x20b5bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b5c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20b5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20b5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5c8: 0xc082d7c  jal         func_20B5F0
    ctx->pc = 0x20B5C8u;
    SET_GPR_U32(ctx, 31, 0x20B5D0u);
    ctx->pc = 0x20B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B5F0u, 0x20B5C8u, 0x20B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B5D0u;
label_20b5d0:
    // 0x20b5d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b5d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b5d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x20b5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20b5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x20B5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B5E4u;
    // 0x20b5e4: 0x0  nop
    ctx->pc = 0x20b5e4u;
    // NOP
    // 0x20b5e8: 0x0  nop
    ctx->pc = 0x20b5e8u;
    // NOP
    // 0x20b5ec: 0x0  nop
    ctx->pc = 0x20b5ecu;
    // NOP
    ctx->pc = 0x20b5f0u;
}
