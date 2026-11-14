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

// Function: sub_00215EF0
// Address: 0x215ef0 - 0x215f80
void sub_00215EF0_0x215ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215EF0_0x215ef0");
#endif

    switch (ctx->pc) {
        case 0x215f20u: goto label_215f20;
        case 0x215f34u: goto label_215f34;
        case 0x215f48u: goto label_215f48;
        case 0x215f68u: goto label_215f68;
        default: break;
    }

    ctx->pc = 0x215ef0u;

    // 0x215ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215ef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x215efc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x215efcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x215f00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f04: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x215F04u;
    {
        const bool branch_taken_0x215f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215f04) {
            ctx->pc = 0x215F68u;
            goto label_215f68;
        }
    }
    ctx->pc = 0x215F0Cu;
    // 0x215f0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f10: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x215f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x215f14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x215f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215f18: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x215F18u;
    SET_GPR_U32(ctx, 31, 0x215F20u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x215F18u, 0x215F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F20u;
label_215f20:
    // 0x215f20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f24: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x215f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x215f28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x215f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215f2c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x215F2Cu;
    SET_GPR_U32(ctx, 31, 0x215F34u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x215F2Cu, 0x215F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F34u;
label_215f34:
    // 0x215f34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f38: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x215f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215f3c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x215f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215f40: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x215F40u;
    SET_GPR_U32(ctx, 31, 0x215F48u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x215F40u, 0x215F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F48u;
label_215f48:
    // 0x215f48: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x215f48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215f4c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x215f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x215f50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x215f50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x215f54: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215F54u;
    {
        const bool branch_taken_0x215f54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x215f54) {
            ctx->pc = 0x215F68u;
            goto label_215f68;
        }
    }
    ctx->pc = 0x215F5Cu;
    // 0x215f5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x215f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f60: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x215F60u;
    SET_GPR_U32(ctx, 31, 0x215F68u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x215F60u, 0x215F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F68u;
label_215f68:
    // 0x215f68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215f70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x215f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x215f74: 0x3e00008  jr          $ra
    ctx->pc = 0x215F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215F7Cu;
    // 0x215f7c: 0x0  nop
    ctx->pc = 0x215f7cu;
    // NOP
    ctx->pc = 0x215f80u;
}
