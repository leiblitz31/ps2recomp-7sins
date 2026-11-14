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

// Function: sub_00229100
// Address: 0x229100 - 0x229180
void sub_00229100_0x229100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229100_0x229100");
#endif

    switch (ctx->pc) {
        case 0x229128u: goto label_229128;
        case 0x229138u: goto label_229138;
        default: break;
    }

    ctx->pc = 0x229100u;

    // 0x229100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x229100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x229104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x229104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x229108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x229108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22910c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229110: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x229110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x229114: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x229114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x229118: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x229118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22911c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x22911cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229120: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x229120u;
    {
        const bool branch_taken_0x229120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229120) {
            ctx->pc = 0x22914Cu;
            goto label_22914c;
        }
    }
    ctx->pc = 0x229128u;
label_229128:
    // 0x229128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22912c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x22912cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229130: 0xc08a490  jal         func_229240
    ctx->pc = 0x229130u;
    SET_GPR_U32(ctx, 31, 0x229138u);
    ctx->pc = 0x229240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229240u, 0x229130u, 0x229138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229138u;
label_229138:
    // 0x229138: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22913c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229140: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x229140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x229144: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x229144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x229148: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x229148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22914c:
    // 0x22914c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22914cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229150: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x229150u;
    {
        const bool branch_taken_0x229150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229150) {
            ctx->pc = 0x229128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229128;
        }
    }
    ctx->pc = 0x229158u;
    // 0x229158: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x229158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22915c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22915cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229168: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x229168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22916c: 0x3e00008  jr          $ra
    ctx->pc = 0x22916Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22916Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229174u;
    // 0x229174: 0x0  nop
    ctx->pc = 0x229174u;
    // NOP
    // 0x229178: 0x0  nop
    ctx->pc = 0x229178u;
    // NOP
    // 0x22917c: 0x0  nop
    ctx->pc = 0x22917cu;
    // NOP
    ctx->pc = 0x229180u;
}
