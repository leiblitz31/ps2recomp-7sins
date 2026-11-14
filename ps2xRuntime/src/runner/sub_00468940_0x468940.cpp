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

// Function: sub_00468940
// Address: 0x468940 - 0x4689a0
void sub_00468940_0x468940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00468940_0x468940");
#endif

    switch (ctx->pc) {
        case 0x46898cu: goto label_46898c;
        default: break;
    }

    ctx->pc = 0x468940u;

    // 0x468940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x468940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x468944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x468944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x468948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x468948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46894c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x46894cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x468950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468954: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x468954u;
    {
        const bool branch_taken_0x468954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x468954) {
            ctx->pc = 0x46898Cu;
            goto label_46898c;
        }
    }
    ctx->pc = 0x46895Cu;
    // 0x46895c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46895cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x468960: 0x24636c80  addiu       $v1, $v1, 0x6C80
    ctx->pc = 0x468960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27776));
    // 0x468964: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x468964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468968: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x468968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46896c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x46896cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x468970: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x468970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x468974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x468974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x468978: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x468978u;
    {
        const bool branch_taken_0x468978 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x468978) {
            ctx->pc = 0x46898Cu;
            goto label_46898c;
        }
    }
    ctx->pc = 0x468980u;
    // 0x468980: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x468980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468984: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x468984u;
    SET_GPR_U32(ctx, 31, 0x46898Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x468984u, 0x46898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46898Cu;
label_46898c:
    // 0x46898c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x468990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x468990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x468994: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x468994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x468998: 0x3e00008  jr          $ra
    ctx->pc = 0x468998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x468998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4689A0u;
}
