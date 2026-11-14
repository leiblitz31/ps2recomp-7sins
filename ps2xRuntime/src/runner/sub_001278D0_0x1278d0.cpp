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

// Function: sub_001278D0
// Address: 0x1278d0 - 0x127970
void sub_001278D0_0x1278d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001278D0_0x1278d0");
#endif

    switch (ctx->pc) {
        case 0x1278ecu: goto label_1278ec;
        case 0x127900u: goto label_127900;
        default: break;
    }

    ctx->pc = 0x1278d0u;

    // 0x1278d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1278d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1278d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1278d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1278d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1278d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1278dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1278dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1278e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1278e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1278E4u;
    {
        const bool branch_taken_0x1278e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1278e4) {
            ctx->pc = 0x127904u;
            goto label_127904;
        }
    }
    ctx->pc = 0x1278ECu;
label_1278ec:
    // 0x1278ec: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1278ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1278f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1278f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1278f4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1278f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1278f8: 0xc049e5c  jal         func_127970
    ctx->pc = 0x1278F8u;
    SET_GPR_U32(ctx, 31, 0x127900u);
    ctx->pc = 0x127970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127970u, 0x1278F8u, 0x127900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127900u;
label_127900:
    // 0x127900: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x127900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_127904:
    // 0x127904: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x127904u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x127908: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x127908u;
    {
        const bool branch_taken_0x127908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x127908) {
            ctx->pc = 0x1278ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1278ec;
        }
    }
    ctx->pc = 0x127910u;
    // 0x127910: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127914: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x127914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127918: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x127918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x12791c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127920: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x127920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x127924: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x127924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127928: 0xac640040  sw          $a0, 0x40($v1)
    ctx->pc = 0x127928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 4));
    // 0x12792c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12792cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127930: 0xa0600054  sb          $zero, 0x54($v1)
    ctx->pc = 0x127930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x127934: 0x300400ff  andi        $a0, $zero, 0xFF
    ctx->pc = 0x127934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x127938: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x127938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12793c: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x12793cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x127940: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x127940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x127944: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x127944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127948: 0xa0640044  sb          $a0, 0x44($v1)
    ctx->pc = 0x127948u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 4));
    // 0x12794c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127950: 0xa0600055  sb          $zero, 0x55($v1)
    ctx->pc = 0x127950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x127954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12795c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12795cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x127960: 0x3e00008  jr          $ra
    ctx->pc = 0x127960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127968u;
    // 0x127968: 0x0  nop
    ctx->pc = 0x127968u;
    // NOP
    // 0x12796c: 0x0  nop
    ctx->pc = 0x12796cu;
    // NOP
    ctx->pc = 0x127970u;
}
