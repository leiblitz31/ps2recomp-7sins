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

// Function: sub_004649B0
// Address: 0x4649b0 - 0x464a40
void sub_004649B0_0x4649b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004649B0_0x4649b0");
#endif

    switch (ctx->pc) {
        case 0x4649c4u: goto label_4649c4;
        default: break;
    }

    ctx->pc = 0x4649b0u;

    // 0x4649b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4649b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4649b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4649b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4649b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4649b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4649bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4649BCu;
    {
        const bool branch_taken_0x4649bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4649bc) {
            ctx->pc = 0x4649D0u;
            goto label_4649d0;
        }
    }
    ctx->pc = 0x4649C4u;
label_4649c4:
    // 0x4649c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4649c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4649c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4649c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4649cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4649ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4649d0:
    // 0x4649d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4649d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4649d4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x4649d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4649d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4649D8u;
    {
        const bool branch_taken_0x4649d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4649d8) {
            ctx->pc = 0x464A00u;
            goto label_464a00;
        }
    }
    ctx->pc = 0x4649E0u;
    // 0x4649e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4649e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4649e4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x4649e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4649e8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4649e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4649ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4649ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4649f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4649f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4649f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4649f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4649f8: 0x1462fff2  bne         $v1, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4649F8u;
    {
        const bool branch_taken_0x4649f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4649f8) {
            ctx->pc = 0x4649C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4649c4;
        }
    }
    ctx->pc = 0x464A00u;
label_464a00:
    // 0x464a00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x464a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464a04: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x464a04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464a08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x464a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x464a0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x464a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464a10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x464a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x464a14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x464a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x464a18: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x464A18u;
    {
        const bool branch_taken_0x464a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x464a18) {
            ctx->pc = 0x464A2Cu;
            goto label_464a2c;
        }
    }
    ctx->pc = 0x464A20u;
    // 0x464a20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x464a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464a24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x464A24u;
    {
        const bool branch_taken_0x464a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464a24) {
            ctx->pc = 0x464A30u;
            goto label_464a30;
        }
    }
    ctx->pc = 0x464A2Cu;
label_464a2c:
    // 0x464a2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x464a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_464a30:
    // 0x464a30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x464a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x464a34: 0x3e00008  jr          $ra
    ctx->pc = 0x464A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x464A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464A3Cu;
    // 0x464a3c: 0x0  nop
    ctx->pc = 0x464a3cu;
    // NOP
    ctx->pc = 0x464a40u;
}
