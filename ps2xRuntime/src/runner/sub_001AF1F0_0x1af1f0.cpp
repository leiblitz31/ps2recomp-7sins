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

// Function: sub_001AF1F0
// Address: 0x1af1f0 - 0x1af270
void sub_001AF1F0_0x1af1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF1F0_0x1af1f0");
#endif

    switch (ctx->pc) {
        case 0x1af220u: goto label_1af220;
        case 0x1af234u: goto label_1af234;
        case 0x1af254u: goto label_1af254;
        default: break;
    }

    ctx->pc = 0x1af1f0u;

    // 0x1af1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af1f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af1fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1af1fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1af200: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af204: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AF204u;
    {
        const bool branch_taken_0x1af204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af204) {
            ctx->pc = 0x1AF254u;
            goto label_1af254;
        }
    }
    ctx->pc = 0x1AF20Cu;
    // 0x1af20c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af210: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1af210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1af214: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1af214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af218: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x1AF218u;
    SET_GPR_U32(ctx, 31, 0x1AF220u);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1AF218u, 0x1AF220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF220u;
label_1af220:
    // 0x1af220: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af224: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x1af224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1af228: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1af228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af22c: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x1AF22Cu;
    SET_GPR_U32(ctx, 31, 0x1AF234u);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1AF22Cu, 0x1AF234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF234u;
label_1af234:
    // 0x1af234: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1af234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af238: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1af238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af23c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1af23cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1af240: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF240u;
    {
        const bool branch_taken_0x1af240 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1af240) {
            ctx->pc = 0x1AF254u;
            goto label_1af254;
        }
    }
    ctx->pc = 0x1AF248u;
    // 0x1af248: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af24c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1AF24Cu;
    SET_GPR_U32(ctx, 31, 0x1AF254u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1AF24Cu, 0x1AF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF254u;
label_1af254:
    // 0x1af254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af25c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af25cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af260: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF268u;
    // 0x1af268: 0x0  nop
    ctx->pc = 0x1af268u;
    // NOP
    // 0x1af26c: 0x0  nop
    ctx->pc = 0x1af26cu;
    // NOP
    ctx->pc = 0x1af270u;
}
