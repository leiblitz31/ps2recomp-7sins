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

// Function: sub_002E3F90
// Address: 0x2e3f90 - 0x2e4070
void sub_002E3F90_0x2e3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3F90_0x2e3f90");
#endif

    switch (ctx->pc) {
        case 0x2e3fd8u: goto label_2e3fd8;
        case 0x2e4014u: goto label_2e4014;
        case 0x2e4020u: goto label_2e4020;
        default: break;
    }

    ctx->pc = 0x2e3f90u;

    // 0x2e3f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e3f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e3f9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e3f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e3fa0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3fa4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e3fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e3fa8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3fac: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e3facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e3fb0: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3FB0u;
    {
        const bool branch_taken_0x2e3fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e3fb0) {
            ctx->pc = 0x2E3FD0u;
            goto label_2e3fd0;
        }
    }
    ctx->pc = 0x2E3FB8u;
    // 0x2e3fb8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3fbc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2e3fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e3fc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e3fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3fc4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2e3fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2e3fc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E3FC8u;
    {
        const bool branch_taken_0x2e3fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3fc8) {
            ctx->pc = 0x2E4008u;
            goto label_2e4008;
        }
    }
    ctx->pc = 0x2E3FD0u;
label_2e3fd0:
    // 0x2e3fd0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2E3FD0u;
    SET_GPR_U32(ctx, 31, 0x2E3FD8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2E3FD0u, 0x2E3FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3FD8u;
label_2e3fd8:
    // 0x2e3fd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3fdc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2e3fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e3fe0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e3fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3fe4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e3fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e3fe8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2e3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e3fec: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e3fecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e3ff0: 0x2010  mfhi        $a0
    ctx->pc = 0x2e3ff0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2e3ff4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3ff8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e3ffc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2e3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e4000: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e4000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4004: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2e4004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_2e4008:
    // 0x2e4008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e4008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e400c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E400Cu;
    {
        const bool branch_taken_0x2e400c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e400c) {
            ctx->pc = 0x2E402Cu;
            goto label_2e402c;
        }
    }
    ctx->pc = 0x2E4014u;
label_2e4014:
    // 0x2e4014: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e4014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4018: 0xc0b91ec  jal         func_2E47B0
    ctx->pc = 0x2E4018u;
    SET_GPR_U32(ctx, 31, 0x2E4020u);
    ctx->pc = 0x2E47B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E47B0u, 0x2E4018u, 0x2E4020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4020u;
label_2e4020:
    // 0x2e4020: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4020u;
    {
        const bool branch_taken_0x2e4020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4020) {
            ctx->pc = 0x2E4040u;
            goto label_2e4040;
        }
    }
    ctx->pc = 0x2E4028u;
    // 0x2e4028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e4028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e402c:
    // 0x2e402c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e402cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4030: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2e4030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e4034: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2e4034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e4038: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E4038u;
    {
        const bool branch_taken_0x2e4038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4038) {
            ctx->pc = 0x2E4014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4014;
        }
    }
    ctx->pc = 0x2E4040u;
label_2e4040:
    // 0x2e4040: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e4040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4044: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2e4044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e4048: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2e4048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e404c: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x2e404cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
    // 0x2e4050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4058: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e4058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e405c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E405Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E405Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4064u;
    // 0x2e4064: 0x0  nop
    ctx->pc = 0x2e4064u;
    // NOP
    // 0x2e4068: 0x0  nop
    ctx->pc = 0x2e4068u;
    // NOP
    // 0x2e406c: 0x0  nop
    ctx->pc = 0x2e406cu;
    // NOP
    ctx->pc = 0x2e4070u;
}
