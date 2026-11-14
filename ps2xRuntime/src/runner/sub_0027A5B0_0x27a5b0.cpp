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

// Function: sub_0027A5B0
// Address: 0x27a5b0 - 0x27a640
void sub_0027A5B0_0x27a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A5B0_0x27a5b0");
#endif

    switch (ctx->pc) {
        case 0x27a5ecu: goto label_27a5ec;
        case 0x27a62cu: goto label_27a62c;
        default: break;
    }

    ctx->pc = 0x27a5b0u;

    // 0x27a5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27a5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27a5b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27a5bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x27a5c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a5c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a5c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a5cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x27a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27a5d0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27A5D0u;
    {
        const bool branch_taken_0x27a5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a5d0) {
            ctx->pc = 0x27A604u;
            goto label_27a604;
        }
    }
    ctx->pc = 0x27A5D8u;
    // 0x27a5d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a5dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x27a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a5e0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x27a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a5e4: 0xc09ea34  jal         func_27A8D0
    ctx->pc = 0x27A5E4u;
    SET_GPR_U32(ctx, 31, 0x27A5ECu);
    ctx->pc = 0x27A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A8D0u, 0x27A5E4u, 0x27A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A5ECu;
label_27a5ec:
    // 0x27a5ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a5f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27a5f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x27a5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x27a5f8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27a5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x27a5fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A5FCu;
    {
        const bool branch_taken_0x27a5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a5fc) {
            ctx->pc = 0x27A62Cu;
            goto label_27a62c;
        }
    }
    ctx->pc = 0x27A604u;
label_27a604:
    // 0x27a604: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a608: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x27a608u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x27a60c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a610: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27a610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a614: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x27a614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a618: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x27a618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27a61c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27a61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a620: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x27a620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a624: 0xc09e990  jal         func_27A640
    ctx->pc = 0x27A624u;
    SET_GPR_U32(ctx, 31, 0x27A62Cu);
    ctx->pc = 0x27A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A640u, 0x27A624u, 0x27A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A62Cu;
label_27a62c:
    // 0x27a62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a630: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27a634: 0x3e00008  jr          $ra
    ctx->pc = 0x27A634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A63Cu;
    // 0x27a63c: 0x0  nop
    ctx->pc = 0x27a63cu;
    // NOP
    ctx->pc = 0x27a640u;
}
