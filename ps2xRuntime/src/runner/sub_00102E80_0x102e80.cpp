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

// Function: sub_00102E80
// Address: 0x102e80 - 0x102ed0
void sub_00102E80_0x102e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102E80_0x102e80");
#endif

    switch (ctx->pc) {
        case 0x102ea4u: goto label_102ea4;
        default: break;
    }

    ctx->pc = 0x102e80u;

    // 0x102e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x102e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102e88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x102e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x102e8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x102e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x102e90: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x102e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x102e94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x102e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102e98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x102e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102e9c: 0xc040bb4  jal         func_102ED0
    ctx->pc = 0x102E9Cu;
    SET_GPR_U32(ctx, 31, 0x102EA4u);
    ctx->pc = 0x102ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102ED0u, 0x102E9Cu, 0x102EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102EA4u;
label_102ea4:
    // 0x102ea4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x102ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102ea8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102eac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x102eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x102eb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x102eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102eb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x102eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x102ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x102EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102EC4u;
    // 0x102ec4: 0x0  nop
    ctx->pc = 0x102ec4u;
    // NOP
    // 0x102ec8: 0x0  nop
    ctx->pc = 0x102ec8u;
    // NOP
    // 0x102ecc: 0x0  nop
    ctx->pc = 0x102eccu;
    // NOP
    ctx->pc = 0x102ed0u;
}
