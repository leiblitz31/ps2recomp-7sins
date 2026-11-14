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

// Function: sub_0028A940
// Address: 0x28a940 - 0x28a9b0
void sub_0028A940_0x28a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A940_0x28a940");
#endif

    switch (ctx->pc) {
        case 0x28a974u: goto label_28a974;
        case 0x28a994u: goto label_28a994;
        default: break;
    }

    ctx->pc = 0x28a940u;

    // 0x28a940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28a944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28a948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28a94c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28a94cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x28a950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a954: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28A954u;
    {
        const bool branch_taken_0x28a954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a954) {
            ctx->pc = 0x28A994u;
            goto label_28a994;
        }
    }
    ctx->pc = 0x28A95Cu;
    // 0x28a95c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a960: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28a960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a964: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28a964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a968: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a96c: 0xc0a37a0  jal         func_28DE80
    ctx->pc = 0x28A96Cu;
    SET_GPR_U32(ctx, 31, 0x28A974u);
    ctx->pc = 0x28DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE80u, 0x28A96Cu, 0x28A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A974u;
label_28a974:
    // 0x28a974: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a978: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x28a978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28a97c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28a97cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28a980: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28A980u;
    {
        const bool branch_taken_0x28a980 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28a980) {
            ctx->pc = 0x28A994u;
            goto label_28a994;
        }
    }
    ctx->pc = 0x28A988u;
    // 0x28a988: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28a988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a98c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x28A98Cu;
    SET_GPR_U32(ctx, 31, 0x28A994u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x28A98Cu, 0x28A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A994u;
label_28a994:
    // 0x28a994: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28a998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a99c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28a99cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28a9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x28A9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A9A8u;
    // 0x28a9a8: 0x0  nop
    ctx->pc = 0x28a9a8u;
    // NOP
    // 0x28a9ac: 0x0  nop
    ctx->pc = 0x28a9acu;
    // NOP
    ctx->pc = 0x28a9b0u;
}
