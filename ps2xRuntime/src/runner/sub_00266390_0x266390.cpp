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

// Function: sub_00266390
// Address: 0x266390 - 0x2663f0
void sub_00266390_0x266390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266390_0x266390");
#endif

    switch (ctx->pc) {
        case 0x2663acu: goto label_2663ac;
        case 0x2663bcu: goto label_2663bc;
        case 0x2663d0u: goto label_2663d0;
        default: break;
    }

    ctx->pc = 0x266390u;

    // 0x266390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x266394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26639c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2663a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2663a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2663a4: 0xc041a60  jal         func_106980
    ctx->pc = 0x2663A4u;
    SET_GPR_U32(ctx, 31, 0x2663ACu);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2663A4u, 0x2663ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663ACu;
label_2663ac:
    // 0x2663ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2663acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2663b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2663b4: 0xc041a14  jal         func_106850
    ctx->pc = 0x2663B4u;
    SET_GPR_U32(ctx, 31, 0x2663BCu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2663B4u, 0x2663BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663BCu;
label_2663bc:
    // 0x2663bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2663bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2663c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2663c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2663c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2663c8: 0xc0998fc  jal         func_2663F0
    ctx->pc = 0x2663C8u;
    SET_GPR_U32(ctx, 31, 0x2663D0u);
    ctx->pc = 0x2663F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2663F0u, 0x2663C8u, 0x2663D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2663D0u;
label_2663d0:
    // 0x2663d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2663d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2663d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2663d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2663d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2663d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2663dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2663DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2663DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2663E4u;
    // 0x2663e4: 0x0  nop
    ctx->pc = 0x2663e4u;
    // NOP
    // 0x2663e8: 0x0  nop
    ctx->pc = 0x2663e8u;
    // NOP
    // 0x2663ec: 0x0  nop
    ctx->pc = 0x2663ecu;
    // NOP
    ctx->pc = 0x2663f0u;
}
