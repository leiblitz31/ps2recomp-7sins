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

// Function: sub_002213D0
// Address: 0x2213d0 - 0x221430
void sub_002213D0_0x2213d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002213D0_0x2213d0");
#endif

    switch (ctx->pc) {
        case 0x2213f8u: goto label_2213f8;
        case 0x22140cu: goto label_22140c;
        default: break;
    }

    ctx->pc = 0x2213d0u;

    // 0x2213d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2213d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2213d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2213d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2213d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2213d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2213dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2213dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2213e0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2213e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2213e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2213e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2213e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2213e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2213ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2213ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213f0: 0xc088538  jal         func_2214E0
    ctx->pc = 0x2213F0u;
    SET_GPR_U32(ctx, 31, 0x2213F8u);
    ctx->pc = 0x2214E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2214E0u, 0x2213F0u, 0x2213F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2213F8u;
label_2213f8:
    // 0x2213f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2213f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213fc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2213fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x221400: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x221400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221404: 0xc08850c  jal         func_221430
    ctx->pc = 0x221404u;
    SET_GPR_U32(ctx, 31, 0x22140Cu);
    ctx->pc = 0x221430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221430u, 0x221404u, 0x22140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22140Cu;
label_22140c:
    // 0x22140c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22140cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x221410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x221414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x221414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221418: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x221418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22141c: 0x3e00008  jr          $ra
    ctx->pc = 0x22141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221424u;
    // 0x221424: 0x0  nop
    ctx->pc = 0x221424u;
    // NOP
    // 0x221428: 0x0  nop
    ctx->pc = 0x221428u;
    // NOP
    // 0x22142c: 0x0  nop
    ctx->pc = 0x22142cu;
    // NOP
    ctx->pc = 0x221430u;
}
