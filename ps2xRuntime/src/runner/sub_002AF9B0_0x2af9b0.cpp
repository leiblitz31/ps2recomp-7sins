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

// Function: sub_002AF9B0
// Address: 0x2af9b0 - 0x2afa40
void sub_002AF9B0_0x2af9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF9B0_0x2af9b0");
#endif

    switch (ctx->pc) {
        case 0x2af9ecu: goto label_2af9ec;
        case 0x2afa2cu: goto label_2afa2c;
        default: break;
    }

    ctx->pc = 0x2af9b0u;

    // 0x2af9b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2af9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2af9b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af9b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2af9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2af9bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2af9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2af9c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2af9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af9c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2af9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af9c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2af9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af9cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2af9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2af9d0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AF9D0u;
    {
        const bool branch_taken_0x2af9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2af9d0) {
            ctx->pc = 0x2AFA04u;
            goto label_2afa04;
        }
    }
    ctx->pc = 0x2AF9D8u;
    // 0x2af9d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2af9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af9dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2af9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2af9e0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2af9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af9e4: 0xc0abf34  jal         func_2AFCD0
    ctx->pc = 0x2AF9E4u;
    SET_GPR_U32(ctx, 31, 0x2AF9ECu);
    ctx->pc = 0x2AFCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFCD0u, 0x2AF9E4u, 0x2AF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF9ECu;
label_2af9ec:
    // 0x2af9ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2af9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af9f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2af9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2af9f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2af9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2af9f8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2af9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2af9fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AF9FCu;
    {
        const bool branch_taken_0x2af9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af9fc) {
            ctx->pc = 0x2AFA2Cu;
            goto label_2afa2c;
        }
    }
    ctx->pc = 0x2AFA04u;
label_2afa04:
    // 0x2afa04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2afa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afa08: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2afa08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2afa0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2afa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2afa10: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2afa10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2afa14: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2afa14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2afa18: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2afa18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2afa1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2afa1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afa20: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2afa20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afa24: 0xc0abe90  jal         func_2AFA40
    ctx->pc = 0x2AFA24u;
    SET_GPR_U32(ctx, 31, 0x2AFA2Cu);
    ctx->pc = 0x2AFA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFA40u, 0x2AFA24u, 0x2AFA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFA2Cu;
label_2afa2c:
    // 0x2afa2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2afa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2afa30: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2afa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2afa34: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AFA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AFA3Cu;
    // 0x2afa3c: 0x0  nop
    ctx->pc = 0x2afa3cu;
    // NOP
    ctx->pc = 0x2afa40u;
}
