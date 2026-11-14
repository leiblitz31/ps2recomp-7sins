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

// Function: sub_0022CFB0
// Address: 0x22cfb0 - 0x22d040
void sub_0022CFB0_0x22cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CFB0_0x22cfb0");
#endif

    switch (ctx->pc) {
        case 0x22cfe8u: goto label_22cfe8;
        case 0x22cff8u: goto label_22cff8;
        default: break;
    }

    ctx->pc = 0x22cfb0u;

    // 0x22cfb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22cfb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22cfb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22cfbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22cfc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22cfc4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x22cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x22cfc8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22cfcc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cfd0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22cfd4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x22cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22cfd8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x22cfd8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22cfdc: 0x8012  mflo        $s0
    ctx->pc = 0x22cfdcu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x22cfe0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22CFE0u;
    {
        const bool branch_taken_0x22cfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cfe0) {
            ctx->pc = 0x22D014u;
            goto label_22d014;
        }
    }
    ctx->pc = 0x22CFE8u;
label_22cfe8:
    // 0x22cfe8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x22cfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22cfec: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22cfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cff0: 0xc08b410  jal         func_22D040
    ctx->pc = 0x22CFF0u;
    SET_GPR_U32(ctx, 31, 0x22CFF8u);
    ctx->pc = 0x22D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D040u, 0x22CFF0u, 0x22CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CFF8u;
label_22cff8:
    // 0x22cff8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cffc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x22cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x22d000: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22d000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22d004: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d008: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x22d008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x22d00c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x22d010: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22d010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_22d014:
    // 0x22d014: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22D014u;
    {
        const bool branch_taken_0x22d014 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x22d014) {
            ctx->pc = 0x22CFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cfe8;
        }
    }
    ctx->pc = 0x22D01Cu;
    // 0x22d01c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d028: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x22d028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22d02c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D034u;
    // 0x22d034: 0x0  nop
    ctx->pc = 0x22d034u;
    // NOP
    // 0x22d038: 0x0  nop
    ctx->pc = 0x22d038u;
    // NOP
    // 0x22d03c: 0x0  nop
    ctx->pc = 0x22d03cu;
    // NOP
    ctx->pc = 0x22d040u;
}
