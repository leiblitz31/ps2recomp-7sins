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

// Function: sub_0029DE00
// Address: 0x29de00 - 0x29de90
void sub_0029DE00_0x29de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DE00_0x29de00");
#endif

    switch (ctx->pc) {
        case 0x29de38u: goto label_29de38;
        case 0x29de48u: goto label_29de48;
        default: break;
    }

    ctx->pc = 0x29de00u;

    // 0x29de00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29de04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29de08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29de0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29de10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29de10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29de14: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x29de14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x29de18: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29de1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29de20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29de20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29de24: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29de24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29de28: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x29de28u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29de2c: 0x8012  mflo        $s0
    ctx->pc = 0x29de2cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x29de30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29DE30u;
    {
        const bool branch_taken_0x29de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29de30) {
            ctx->pc = 0x29DE64u;
            goto label_29de64;
        }
    }
    ctx->pc = 0x29DE38u;
label_29de38:
    // 0x29de38: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29de38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29de3c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29de40: 0xc0a7484  jal         func_29D210
    ctx->pc = 0x29DE40u;
    SET_GPR_U32(ctx, 31, 0x29DE48u);
    ctx->pc = 0x29D210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D210u, 0x29DE40u, 0x29DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE48u;
label_29de48:
    // 0x29de48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29de4c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x29de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x29de50: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29de50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29de54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29de54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29de58: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x29de58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x29de5c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x29de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x29de60: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x29de60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_29de64:
    // 0x29de64: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29DE64u;
    {
        const bool branch_taken_0x29de64 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x29de64) {
            ctx->pc = 0x29DE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29de38;
        }
    }
    ctx->pc = 0x29DE6Cu;
    // 0x29de6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29de70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29de70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29de74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29de74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29de78: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29de78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29de7c: 0x3e00008  jr          $ra
    ctx->pc = 0x29DE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DE84u;
    // 0x29de84: 0x0  nop
    ctx->pc = 0x29de84u;
    // NOP
    // 0x29de88: 0x0  nop
    ctx->pc = 0x29de88u;
    // NOP
    // 0x29de8c: 0x0  nop
    ctx->pc = 0x29de8cu;
    // NOP
    ctx->pc = 0x29de90u;
}
