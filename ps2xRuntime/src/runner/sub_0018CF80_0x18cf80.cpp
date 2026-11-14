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

// Function: sub_0018CF80
// Address: 0x18cf80 - 0x18cfe0
void sub_0018CF80_0x18cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CF80_0x18cf80");
#endif

    switch (ctx->pc) {
        case 0x18cfa4u: goto label_18cfa4;
        case 0x18cfc0u: goto label_18cfc0;
        default: break;
    }

    ctx->pc = 0x18cf80u;

    // 0x18cf80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18cf84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18cf88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18cf8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18cf90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x18cf94: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18cf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18cf98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cf9c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x18CF9Cu;
    SET_GPR_U32(ctx, 31, 0x18CFA4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x18CF9Cu, 0x18CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFA4u;
label_18cfa4:
    // 0x18cfa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18cfa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cfa8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CFA8u;
    {
        const bool branch_taken_0x18cfa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cfa8) {
            ctx->pc = 0x18CFC4u;
            goto label_18cfc4;
        }
    }
    ctx->pc = 0x18CFB0u;
    // 0x18cfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cfb4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cfb8: 0xc0633f8  jal         func_18CFE0
    ctx->pc = 0x18CFB8u;
    SET_GPR_U32(ctx, 31, 0x18CFC0u);
    ctx->pc = 0x18CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CFE0u, 0x18CFB8u, 0x18CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFC0u;
label_18cfc0:
    // 0x18cfc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18cfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18cfc4:
    // 0x18cfc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18cfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cfc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18cfc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cfcc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18cfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18cfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x18CFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CFD8u;
    // 0x18cfd8: 0x0  nop
    ctx->pc = 0x18cfd8u;
    // NOP
    // 0x18cfdc: 0x0  nop
    ctx->pc = 0x18cfdcu;
    // NOP
    ctx->pc = 0x18cfe0u;
}
