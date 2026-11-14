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

// Function: sub_00270080
// Address: 0x270080 - 0x2700e0
void sub_00270080_0x270080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270080_0x270080");
#endif

    switch (ctx->pc) {
        case 0x27009cu: goto label_27009c;
        case 0x2700acu: goto label_2700ac;
        case 0x2700c0u: goto label_2700c0;
        default: break;
    }

    ctx->pc = 0x270080u;

    // 0x270080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x270084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x270084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x270088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27008c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x270090: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x270090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270094: 0xc0513f8  jal         func_144FE0
    ctx->pc = 0x270094u;
    SET_GPR_U32(ctx, 31, 0x27009Cu);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x270094u, 0x27009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27009Cu;
label_27009c:
    // 0x27009c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27009cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2700a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2700a4: 0xc09c064  jal         func_270190
    ctx->pc = 0x2700A4u;
    SET_GPR_U32(ctx, 31, 0x2700ACu);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x2700A4u, 0x2700ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700ACu;
label_2700ac:
    // 0x2700ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2700acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2700b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2700b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2700b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700b8: 0xc09c038  jal         func_2700E0
    ctx->pc = 0x2700B8u;
    SET_GPR_U32(ctx, 31, 0x2700C0u);
    ctx->pc = 0x2700E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2700E0u, 0x2700B8u, 0x2700C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2700C0u;
label_2700c0:
    // 0x2700c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2700c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2700c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2700c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2700c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2700c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2700cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2700CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2700CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2700D4u;
    // 0x2700d4: 0x0  nop
    ctx->pc = 0x2700d4u;
    // NOP
    // 0x2700d8: 0x0  nop
    ctx->pc = 0x2700d8u;
    // NOP
    // 0x2700dc: 0x0  nop
    ctx->pc = 0x2700dcu;
    // NOP
    ctx->pc = 0x2700e0u;
}
