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

// Function: sub_0039CD80
// Address: 0x39cd80 - 0x39cdc8
void sub_0039CD80_0x39cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CD80_0x39cd80");
#endif

    switch (ctx->pc) {
        case 0x39cda4u: goto label_39cda4;
        default: break;
    }

    ctx->pc = 0x39cd80u;

    // 0x39cd80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39cd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39cd84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39cd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39cd88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39cd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39cd8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x39cd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39cd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cd98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39cd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd9c: 0xc0e3f3c  jal         func_38FCF0
    ctx->pc = 0x39CD9Cu;
    SET_GPR_U32(ctx, 31, 0x39CDA4u);
    ctx->pc = 0x39CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD9Cu;
    // 0x39cda0: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FCF0u, 0x39CD9Cu, 0x39CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CDA4u;
label_39cda4:
    // 0x39cda4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x39cda4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cda8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cdac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39cdacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cdb0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x39cdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x39cdb4: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x39cdb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x39cdb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39cdb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39cdbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39cdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x39CDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDC0u;
        // 0x39cdc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CDC8u;
}
