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

// Function: sub_0024FB60
// Address: 0x24fb60 - 0x24fbc0
void sub_0024FB60_0x24fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FB60_0x24fb60");
#endif

    switch (ctx->pc) {
        case 0x24fb88u: goto label_24fb88;
        case 0x24fb9cu: goto label_24fb9c;
        default: break;
    }

    ctx->pc = 0x24fb60u;

    // 0x24fb60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24fb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24fb64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24fb68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24fb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24fb6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24fb70: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24fb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24fb74: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24fb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24fb78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24fb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24fb7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24fb7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb80: 0xc093b70  jal         func_24EDC0
    ctx->pc = 0x24FB80u;
    SET_GPR_U32(ctx, 31, 0x24FB88u);
    ctx->pc = 0x24EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24EDC0u, 0x24FB80u, 0x24FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB88u;
label_24fb88:
    // 0x24fb88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24fb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fb8c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x24fb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x24fb90: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24fb94: 0xc093ef0  jal         func_24FBC0
    ctx->pc = 0x24FB94u;
    SET_GPR_U32(ctx, 31, 0x24FB9Cu);
    ctx->pc = 0x24FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBC0u, 0x24FB94u, 0x24FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FB9Cu;
label_24fb9c:
    // 0x24fb9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24fb9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24fba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24fba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24fba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fba8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24fba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24fbac: 0x3e00008  jr          $ra
    ctx->pc = 0x24FBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FBB4u;
    // 0x24fbb4: 0x0  nop
    ctx->pc = 0x24fbb4u;
    // NOP
    // 0x24fbb8: 0x0  nop
    ctx->pc = 0x24fbb8u;
    // NOP
    // 0x24fbbc: 0x0  nop
    ctx->pc = 0x24fbbcu;
    // NOP
    ctx->pc = 0x24fbc0u;
}
