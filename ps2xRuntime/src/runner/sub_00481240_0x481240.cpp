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

// Function: sub_00481240
// Address: 0x481240 - 0x481290
void sub_00481240_0x481240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481240_0x481240");
#endif

    switch (ctx->pc) {
        case 0x48126cu: goto label_48126c;
        default: break;
    }

    ctx->pc = 0x481240u;

    // 0x481240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x481240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x481244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x481244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x481248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48124c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48124cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x481250: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x481250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x481254: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x481254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x481258: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x481258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48125c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48125cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x481260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481264: 0xc0f52d0  jal         func_3D4B40
    ctx->pc = 0x481264u;
    SET_GPR_U32(ctx, 31, 0x48126Cu);
    ctx->pc = 0x3D4B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4B40u, 0x481264u, 0x48126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48126Cu;
label_48126c:
    // 0x48126c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x481270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481278: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x481278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48127c: 0x3e00008  jr          $ra
    ctx->pc = 0x48127Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48127Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481284u;
    // 0x481284: 0x0  nop
    ctx->pc = 0x481284u;
    // NOP
    // 0x481288: 0x0  nop
    ctx->pc = 0x481288u;
    // NOP
    // 0x48128c: 0x0  nop
    ctx->pc = 0x48128cu;
    // NOP
    ctx->pc = 0x481290u;
}
