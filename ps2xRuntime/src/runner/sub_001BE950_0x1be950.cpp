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

// Function: sub_001BE950
// Address: 0x1be950 - 0x1be9a0
void sub_001BE950_0x1be950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE950_0x1be950");
#endif

    switch (ctx->pc) {
        case 0x1be98cu: goto label_1be98c;
        default: break;
    }

    ctx->pc = 0x1be950u;

    // 0x1be950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1be958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1be95c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1be95cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1be960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be964: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BE964u;
    {
        const bool branch_taken_0x1be964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be964) {
            ctx->pc = 0x1BE98Cu;
            goto label_1be98c;
        }
    }
    ctx->pc = 0x1BE96Cu;
    // 0x1be96c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1be96cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be970: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1be970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1be974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1be974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1be978: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE978u;
    {
        const bool branch_taken_0x1be978 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1be978) {
            ctx->pc = 0x1BE98Cu;
            goto label_1be98c;
        }
    }
    ctx->pc = 0x1BE980u;
    // 0x1be980: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1be980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be984: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1BE984u;
    SET_GPR_U32(ctx, 31, 0x1BE98Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1BE984u, 0x1BE98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE98Cu;
label_1be98c:
    // 0x1be98c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be994: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1be994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1be998: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE9A0u;
}
