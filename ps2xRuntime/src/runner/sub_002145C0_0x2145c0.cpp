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

// Function: sub_002145C0
// Address: 0x2145c0 - 0x214640
void sub_002145C0_0x2145c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002145C0_0x2145c0");
#endif

    switch (ctx->pc) {
        case 0x2145f4u: goto label_2145f4;
        case 0x214604u: goto label_214604;
        case 0x214624u: goto label_214624;
        default: break;
    }

    ctx->pc = 0x2145c0u;

    // 0x2145c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2145c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2145c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2145c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2145c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2145c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2145cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2145ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2145d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2145d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2145d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2145D4u;
    {
        const bool branch_taken_0x2145d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2145d4) {
            ctx->pc = 0x214624u;
            goto label_214624;
        }
    }
    ctx->pc = 0x2145DCu;
    // 0x2145dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2145dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2145e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2145e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2145e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2145e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2145e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2145e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2145ec: 0xc0850f8  jal         func_2143E0
    ctx->pc = 0x2145ECu;
    SET_GPR_U32(ctx, 31, 0x2145F4u);
    ctx->pc = 0x2143E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2143E0u, 0x2145ECu, 0x2145F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145F4u;
label_2145f4:
    // 0x2145f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2145f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2145f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2145f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145fc: 0xc085190  jal         func_214640
    ctx->pc = 0x2145FCu;
    SET_GPR_U32(ctx, 31, 0x214604u);
    ctx->pc = 0x214640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214640u, 0x2145FCu, 0x214604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214604u;
label_214604:
    // 0x214604: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x214604u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214608: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x214608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x21460c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21460cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x214610: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214610u;
    {
        const bool branch_taken_0x214610 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x214610) {
            ctx->pc = 0x214624u;
            goto label_214624;
        }
    }
    ctx->pc = 0x214618u;
    // 0x214618: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21461c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x21461Cu;
    SET_GPR_U32(ctx, 31, 0x214624u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x21461Cu, 0x214624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214624u;
label_214624:
    // 0x214624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21462c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x21462cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x214630: 0x3e00008  jr          $ra
    ctx->pc = 0x214630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214638u;
    // 0x214638: 0x0  nop
    ctx->pc = 0x214638u;
    // NOP
    // 0x21463c: 0x0  nop
    ctx->pc = 0x21463cu;
    // NOP
    ctx->pc = 0x214640u;
}
