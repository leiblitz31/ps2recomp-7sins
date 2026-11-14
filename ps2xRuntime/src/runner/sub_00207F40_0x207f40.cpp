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

// Function: sub_00207F40
// Address: 0x207f40 - 0x207fa0
void sub_00207F40_0x207f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207F40_0x207f40");
#endif

    switch (ctx->pc) {
        case 0x207f6cu: goto label_207f6c;
        case 0x207f8cu: goto label_207f8c;
        default: break;
    }

    ctx->pc = 0x207f40u;

    // 0x207f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207f44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207f48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207f4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x207f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x207f50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207f54: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x207F54u;
    {
        const bool branch_taken_0x207f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207f54) {
            ctx->pc = 0x207F8Cu;
            goto label_207f8c;
        }
    }
    ctx->pc = 0x207F5Cu;
    // 0x207f5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207f60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f64: 0xc081fe8  jal         func_207FA0
    ctx->pc = 0x207F64u;
    SET_GPR_U32(ctx, 31, 0x207F6Cu);
    ctx->pc = 0x207FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FA0u, 0x207F64u, 0x207F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F6Cu;
label_207f6c:
    // 0x207f6c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x207f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207f70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x207f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207f74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x207f74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x207f78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207F78u;
    {
        const bool branch_taken_0x207f78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207f78) {
            ctx->pc = 0x207F8Cu;
            goto label_207f8c;
        }
    }
    ctx->pc = 0x207F80u;
    // 0x207f80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207f84: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x207F84u;
    SET_GPR_U32(ctx, 31, 0x207F8Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x207F84u, 0x207F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F8Cu;
label_207f8c:
    // 0x207f8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207f94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x207f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207f98: 0x3e00008  jr          $ra
    ctx->pc = 0x207F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207FA0u;
}
