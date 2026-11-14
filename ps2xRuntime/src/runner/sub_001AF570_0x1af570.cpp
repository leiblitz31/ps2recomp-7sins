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

// Function: sub_001AF570
// Address: 0x1af570 - 0x1af5f0
void sub_001AF570_0x1af570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF570_0x1af570");
#endif

    switch (ctx->pc) {
        case 0x1af5a0u: goto label_1af5a0;
        case 0x1af5b0u: goto label_1af5b0;
        case 0x1af5d0u: goto label_1af5d0;
        default: break;
    }

    ctx->pc = 0x1af570u;

    // 0x1af570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af57c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1af57cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1af580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af584: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AF584u;
    {
        const bool branch_taken_0x1af584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af584) {
            ctx->pc = 0x1AF5D0u;
            goto label_1af5d0;
        }
    }
    ctx->pc = 0x1AF58Cu;
    // 0x1af58c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af590: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1af590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1af594: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1af594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af598: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1AF598u;
    SET_GPR_U32(ctx, 31, 0x1AF5A0u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1AF598u, 0x1AF5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5A0u;
label_1af5a0:
    // 0x1af5a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af5a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1af5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af5a8: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x1AF5A8u;
    SET_GPR_U32(ctx, 31, 0x1AF5B0u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x1AF5A8u, 0x1AF5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5B0u;
label_1af5b0:
    // 0x1af5b0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1af5b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af5b4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1af5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af5b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1af5b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1af5bc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF5BCu;
    {
        const bool branch_taken_0x1af5bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1af5bc) {
            ctx->pc = 0x1AF5D0u;
            goto label_1af5d0;
        }
    }
    ctx->pc = 0x1AF5C4u;
    // 0x1af5c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af5c8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1AF5C8u;
    SET_GPR_U32(ctx, 31, 0x1AF5D0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1AF5C8u, 0x1AF5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF5D0u;
label_1af5d0:
    // 0x1af5d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af5d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF5E4u;
    // 0x1af5e4: 0x0  nop
    ctx->pc = 0x1af5e4u;
    // NOP
    // 0x1af5e8: 0x0  nop
    ctx->pc = 0x1af5e8u;
    // NOP
    // 0x1af5ec: 0x0  nop
    ctx->pc = 0x1af5ecu;
    // NOP
    ctx->pc = 0x1af5f0u;
}
