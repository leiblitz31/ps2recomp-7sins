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

// Function: sub_0023B320
// Address: 0x23b320 - 0x23b380
void sub_0023B320_0x23b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B320_0x23b320");
#endif

    ctx->pc = 0x23b320u;

    // 0x23b320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b324: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23b324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23b328: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b32c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b330: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23B330u;
    {
        const bool branch_taken_0x23b330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b330) {
            ctx->pc = 0x23B368u;
            goto label_23b368;
        }
    }
    ctx->pc = 0x23B338u;
    // 0x23b338: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B338u;
    {
        const bool branch_taken_0x23b338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b338) {
            ctx->pc = 0x23B35Cu;
            goto label_23b35c;
        }
    }
    ctx->pc = 0x23B340u;
    // 0x23b340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b344: 0x10620001  beq         $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x23B344u;
    {
        const bool branch_taken_0x23b344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b344) {
            ctx->pc = 0x23B34Cu;
            goto label_23b34c;
        }
    }
    ctx->pc = 0x23B34Cu;
label_23b34c:
    // 0x23b34c: 0x3c02dddd  lui         $v0, 0xDDDD
    ctx->pc = 0x23b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56797 << 16));
    // 0x23b350: 0x3442eeee  ori         $v0, $v0, 0xEEEE
    ctx->pc = 0x23b350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x23b354: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23B354u;
    {
        const bool branch_taken_0x23b354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b354) {
            ctx->pc = 0x23B370u;
            goto label_23b370;
        }
    }
    ctx->pc = 0x23B35Cu;
label_23b35c:
    // 0x23b35c: 0x2402aaaa  addiu       $v0, $zero, -0x5556
    ctx->pc = 0x23b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294945450));
    // 0x23b360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23B360u;
    {
        const bool branch_taken_0x23b360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b360) {
            ctx->pc = 0x23B370u;
            goto label_23b370;
        }
    }
    ctx->pc = 0x23B368u;
label_23b368:
    // 0x23b368: 0x3c02bbbb  lui         $v0, 0xBBBB
    ctx->pc = 0x23b368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48059 << 16));
    // 0x23b36c: 0x3442cccc  ori         $v0, $v0, 0xCCCC
    ctx->pc = 0x23b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
label_23b370:
    // 0x23b370: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23b374: 0x3e00008  jr          $ra
    ctx->pc = 0x23B374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B37Cu;
    // 0x23b37c: 0x0  nop
    ctx->pc = 0x23b37cu;
    // NOP
    ctx->pc = 0x23b380u;
}
