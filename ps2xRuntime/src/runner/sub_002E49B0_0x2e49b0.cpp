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

// Function: sub_002E49B0
// Address: 0x2e49b0 - 0x2e4a40
void sub_002E49B0_0x2e49b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E49B0_0x2e49b0");
#endif

    switch (ctx->pc) {
        case 0x2e49ecu: goto label_2e49ec;
        case 0x2e4a2cu: goto label_2e4a2c;
        default: break;
    }

    ctx->pc = 0x2e49b0u;

    // 0x2e49b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e49b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e49b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e49b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e49b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e49b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e49bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e49c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e49c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e49c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e49c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e49c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e49cc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e49d0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E49D0u;
    {
        const bool branch_taken_0x2e49d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e49d0) {
            ctx->pc = 0x2E4A04u;
            goto label_2e4a04;
        }
    }
    ctx->pc = 0x2E49D8u;
    // 0x2e49d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e49dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e49dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e49e0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e49e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e49e4: 0xc0b9324  jal         func_2E4C90
    ctx->pc = 0x2E49E4u;
    SET_GPR_U32(ctx, 31, 0x2E49ECu);
    ctx->pc = 0x2E4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4C90u, 0x2E49E4u, 0x2E49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E49ECu;
label_2e49ec:
    // 0x2e49ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e49ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e49f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2e49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e49f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2e49f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2e49f8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2e49f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2e49fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E49FCu;
    {
        const bool branch_taken_0x2e49fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e49fc) {
            ctx->pc = 0x2E4A2Cu;
            goto label_2e4a2c;
        }
    }
    ctx->pc = 0x2E4A04u;
label_2e4a04:
    // 0x2e4a04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4a08: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2e4a08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4a0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4a10: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e4a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4a14: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2e4a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4a18: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2e4a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e4a1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e4a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4a20: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2e4a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4a24: 0xc0b9290  jal         func_2E4A40
    ctx->pc = 0x2E4A24u;
    SET_GPR_U32(ctx, 31, 0x2E4A2Cu);
    ctx->pc = 0x2E4A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4A40u, 0x2E4A24u, 0x2E4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A2Cu;
label_2e4a2c:
    // 0x2e4a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4a30: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e4a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e4a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4A3Cu;
    // 0x2e4a3c: 0x0  nop
    ctx->pc = 0x2e4a3cu;
    // NOP
    ctx->pc = 0x2e4a40u;
}
