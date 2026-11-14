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

// Function: sub_002BDB70
// Address: 0x2bdb70 - 0x2bdbc0
void sub_002BDB70_0x2bdb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDB70_0x2bdb70");
#endif

    switch (ctx->pc) {
        case 0x2bdba8u: goto label_2bdba8;
        default: break;
    }

    ctx->pc = 0x2bdb70u;

    // 0x2bdb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bdb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bdb74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bdb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdb78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bdb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bdb7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bdb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bdb80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdb84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bdb84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bdb88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdb8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2bdb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2bdb90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdb94: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2bdb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2bdb98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bdb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdb9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bdb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdba0: 0xc0af6f0  jal         func_2BDBC0
    ctx->pc = 0x2BDBA0u;
    SET_GPR_U32(ctx, 31, 0x2BDBA8u);
    ctx->pc = 0x2BDBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDBC0u, 0x2BDBA0u, 0x2BDBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDBA8u;
label_2bdba8:
    // 0x2bdba8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdbac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdbb0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bdbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bdbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDBBCu;
    // 0x2bdbbc: 0x0  nop
    ctx->pc = 0x2bdbbcu;
    // NOP
    ctx->pc = 0x2bdbc0u;
}
