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

// Function: sub_001A7910
// Address: 0x1a7910 - 0x1a7970
void sub_001A7910_0x1a7910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7910_0x1a7910");
#endif

    switch (ctx->pc) {
        case 0x1a792cu: goto label_1a792c;
        case 0x1a793cu: goto label_1a793c;
        case 0x1a7950u: goto label_1a7950;
        default: break;
    }

    ctx->pc = 0x1a7910u;

    // 0x1a7910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a7914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a7918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a791c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a7920: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a7920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7924: 0xc056144  jal         func_158510
    ctx->pc = 0x1A7924u;
    SET_GPR_U32(ctx, 31, 0x1A792Cu);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x1A7924u, 0x1A792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A792Cu;
label_1a792c:
    // 0x1a792c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a792cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7930: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a7930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7934: 0xc05613c  jal         func_1584F0
    ctx->pc = 0x1A7934u;
    SET_GPR_U32(ctx, 31, 0x1A793Cu);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x1A7934u, 0x1A793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A793Cu;
label_1a793c:
    // 0x1a793c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7944: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a7944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7948: 0xc056758  jal         func_159D60
    ctx->pc = 0x1A7948u;
    SET_GPR_U32(ctx, 31, 0x1A7950u);
    ctx->pc = 0x159D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159D60u, 0x1A7948u, 0x1A7950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7950u;
label_1a7950:
    // 0x1a7950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a7950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7958: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a7958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a795c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A795Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A795Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7964u;
    // 0x1a7964: 0x0  nop
    ctx->pc = 0x1a7964u;
    // NOP
    // 0x1a7968: 0x0  nop
    ctx->pc = 0x1a7968u;
    // NOP
    // 0x1a796c: 0x0  nop
    ctx->pc = 0x1a796cu;
    // NOP
    ctx->pc = 0x1a7970u;
}
