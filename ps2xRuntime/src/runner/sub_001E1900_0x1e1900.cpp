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

// Function: sub_001E1900
// Address: 0x1e1900 - 0x1e1960
void sub_001E1900_0x1e1900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1900_0x1e1900");
#endif

    switch (ctx->pc) {
        case 0x1e1924u: goto label_1e1924;
        case 0x1e1950u: goto label_1e1950;
        default: break;
    }

    ctx->pc = 0x1e1900u;

    // 0x1e1900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1908: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e1908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e190c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e190cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1910: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x1e1910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e1914: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e1914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e1918: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1918u;
    {
        const bool branch_taken_0x1e1918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1918) {
            ctx->pc = 0x1E1940u;
            goto label_1e1940;
        }
    }
    ctx->pc = 0x1E1920u;
    // 0x1e1920: 0x603021  addu        $a2, $v1, $zero
    ctx->pc = 0x1e1920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_1e1924:
    // 0x1e1924: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1e1924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e1928: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e1928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e192c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e1930: 0x0  nop
    ctx->pc = 0x1e1930u;
    // NOP
    // 0x1e1934: 0x0  nop
    ctx->pc = 0x1e1934u;
    // NOP
    // 0x1e1938: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E1938u;
    {
        const bool branch_taken_0x1e1938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1938) {
            ctx->pc = 0x1E1924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1924;
        }
    }
    ctx->pc = 0x1E1940u;
label_1e1940:
    // 0x1e1940: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1944: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e1944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1948: 0xc078658  jal         func_1E1960
    ctx->pc = 0x1E1948u;
    SET_GPR_U32(ctx, 31, 0x1E1950u);
    ctx->pc = 0x1E1960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1960u, 0x1E1948u, 0x1E1950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1950u;
label_1e1950:
    // 0x1e1950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1954: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e1954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e1958: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1960u;
}
