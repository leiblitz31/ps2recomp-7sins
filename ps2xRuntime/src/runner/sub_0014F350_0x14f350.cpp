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

// Function: sub_0014F350
// Address: 0x14f350 - 0x14f3b0
void sub_0014F350_0x14f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F350_0x14f350");
#endif

    switch (ctx->pc) {
        case 0x14f36cu: goto label_14f36c;
        case 0x14f37cu: goto label_14f37c;
        case 0x14f390u: goto label_14f390;
        default: break;
    }

    ctx->pc = 0x14f350u;

    // 0x14f350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f35c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14f360: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14f360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f364: 0xc041010  jal         func_104040
    ctx->pc = 0x14F364u;
    SET_GPR_U32(ctx, 31, 0x14F36Cu);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x14F364u, 0x14F36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F36Cu;
label_14f36c:
    // 0x14f36c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14f36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f370: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f374: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x14F374u;
    SET_GPR_U32(ctx, 31, 0x14F37Cu);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x14F374u, 0x14F37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F37Cu;
label_14f37c:
    // 0x14f37c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f380: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14f384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f388: 0xc053cec  jal         func_14F3B0
    ctx->pc = 0x14F388u;
    SET_GPR_U32(ctx, 31, 0x14F390u);
    ctx->pc = 0x14F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F3B0u, 0x14F388u, 0x14F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F390u;
label_14f390:
    // 0x14f390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f398: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14f398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f39c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F3A4u;
    // 0x14f3a4: 0x0  nop
    ctx->pc = 0x14f3a4u;
    // NOP
    // 0x14f3a8: 0x0  nop
    ctx->pc = 0x14f3a8u;
    // NOP
    // 0x14f3ac: 0x0  nop
    ctx->pc = 0x14f3acu;
    // NOP
    ctx->pc = 0x14f3b0u;
}
